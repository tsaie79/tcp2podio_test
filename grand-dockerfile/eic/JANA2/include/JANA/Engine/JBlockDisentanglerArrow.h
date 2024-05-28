
// Copyright 2020, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.

#ifndef JANA2_JBLOCKDISENTANGLERARROW_H
#define JANA2_JBLOCKDISENTANGLERARROW_H

#include <JANA/Engine/JArrow.h>
#include <JANA/Engine/JMailbox.h>
#include <JANA/JBlockedEventSource.h>

template <typename T>
class JBlockDisentanglerArrow : public JArrow {
	JBlockedEventSource<T>* m_source;  // non-owning
	JMailbox<T*>* m_block_queue; // non-owning
	JMailbox<std::shared_ptr<JEvent>*>* m_event_queue; // non-owning
	JEventPool* m_pool;

	size_t m_max_events_per_block = 40;

public:
	JBlockDisentanglerArrow(std::string name,
							JBlockedEventSource<T>* source,
							JMailbox<T*>* block_queue,
							JMailbox<std::shared_ptr<JEvent>*>* event_queue,
							JEventPool* pool
							)
							: JArrow(std::move(name), true, false, false, 1)
							, m_source(source)
							, m_block_queue(block_queue)
							, m_event_queue(event_queue)
							, m_pool(pool)
							{}

	~JBlockDisentanglerArrow() {
	}

	void set_max_events_per_block(size_t max_events_per_block) {
		m_max_events_per_block = max_events_per_block;
	}

	size_t get_pending() override {
		return m_block_queue->size();
	}

	size_t get_threshold() override {
		return m_block_queue->get_threshold();
	}

	void execute(JArrowMetrics& result, size_t location_id) final {

		JArrowMetrics::Status status;
		JArrowMetrics::duration_t latency;
		JArrowMetrics::duration_t overhead; // TODO: Populate these
		// size_t message_count = 0;

		int requested_events = this->get_chunksize() * m_max_events_per_block; // chunksize is measured in blocks
		int reserved_events = m_event_queue->reserve(requested_events, location_id);
		int requested_blocks = reserved_events / m_max_events_per_block; // truncate

		std::vector<T*> block_buffer; // TODO: Get rid of allocations
		std::vector<std::shared_ptr<JEvent>*> event_buffer;

		auto input_queue_status = m_block_queue->pop(block_buffer, requested_blocks, location_id);
        int obtained_blocks = block_buffer.size();
		for (auto block : block_buffer) {
			auto events = m_source->DisentangleBlock(*block, *m_pool);
			event_buffer.insert(event_buffer.end(), events.begin(), events.end());
            delete block;
		}

		LOG_TRACE(m_logger) << "JBlockDisentanglerArrow: successfully emitting " << event_buffer.size() << " events" << LOG_END;
		auto output_queue_status = m_event_queue->push(event_buffer, reserved_events, location_id);

		if (reserved_events == 0 ||
		    input_queue_status == JMailbox<T*>::Status::Congested ||
		    output_queue_status == JMailbox<Event*>::Status::Full ||
		    input_queue_status == JMailbox<T*>::Status::Empty
		   ) {
			status = JArrowMetrics::Status::ComeBackLater;
		}
		else {
			status = JArrowMetrics::Status::KeepGoing;
		}
		result.update(status, obtained_blocks, 1, latency, overhead);
	}

};


#endif //JANA2_JBLOCKDISENTANGLERARROW_H
