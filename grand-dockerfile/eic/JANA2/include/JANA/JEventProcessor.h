
// Copyright 2020, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.

#ifndef _JEventProcessor_h_
#define _JEventProcessor_h_

#include <JANA/Omni/JComponent.h>
#include <JANA/Omni/JHasInputs.h>
#include <JANA/Omni/JHasRunCallbacks.h>
#include <JANA/JEvent.h>

class JApplication;


class JEventProcessor : public jana::omni::JComponent, 
                        public jana::omni::JHasRunCallbacks, 
                        public jana::omni::JHasInputs {
public:

    JEventProcessor() = default;
    virtual ~JEventProcessor() = default;

    // TODO: Deprecate
    explicit JEventProcessor(JApplication* app) {
        m_app = app;
    }


    std::string GetResourceName() const { return m_resource_name; }

    uint64_t GetEventCount() const { return m_event_count; };

    bool AreEventsOrdered() const { return m_receive_events_in_order; }


    virtual void DoInitialize() {
        try {
            for (auto* parameter : m_parameters) {
                parameter->Configure(*(m_app->GetJParameterManager()), m_prefix);
            }
            for (auto* service : m_services) {
                service->Init(m_app);
            }
            Init();
            m_status = Status::Initialized;
        }
        catch (JException& ex) {
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
        catch (...) {
            auto ex = JException("Unknown exception in JEventProcessor::Open()");
            ex.nested_exception = std::current_exception();
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
    }


    virtual void DoMap(const std::shared_ptr<const JEvent>& e) {

        for (auto* input : m_inputs) {
            input->PrefetchCollection(*e);
        }
        // JExceptions with factory info will be furnished by the callee,
        // so we don't need to try/catch here. 
        
        // Also we don't have 
        // a Preprocess(), so we don't technically need Init() here even
        
        if (m_callback_style != CallbackStyle::Declarative) {
            DoReduce(e); // This does all the locking!
        }
    }


    virtual void DoReduce(const std::shared_ptr<const JEvent>& e) {
        try {
            auto run_number = e->GetRunNumber();
            std::lock_guard<std::mutex> lock(m_mutex);

            if (m_status == Status::Uninitialized) {
                DoInitialize();
            }
            else if (m_status == Status::Finalized) {
                throw JException("JEventProcessor: Attempted to call DoMap() after Finalize()");
            }
            if (m_last_run_number != run_number) {
                if (m_last_run_number != -1) {
                    EndRun();
                }
                for (auto* resource : m_resources) {
                    resource->ChangeRun(e->GetRunNumber(), m_app);
                }
                m_last_run_number = run_number;
                BeginRun(e);
            }
            for (auto* input : m_inputs) {
                input->GetCollection(*e);
            }
            if (m_callback_style == CallbackStyle::Declarative) {
                Process(e->GetRunNumber(), e->GetEventNumber(), e->GetEventIndex());
            }
            else {
                Process(e);
            }
            m_event_count += 1;
        }
        catch (JException& ex) {
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
        catch (std::exception& e) {
            auto ex = JException(e.what());
            ex.nested_exception = std::current_exception();
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
        catch (...) {
            auto ex = JException("Unknown exception in JEventProcessor::DoReduce()");
            ex.nested_exception = std::current_exception();
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
    }


    virtual void DoFinalize() {
        try {
            std::lock_guard<std::mutex> lock(m_mutex);
            if (m_status != Status::Finalized) {
                if (m_last_run_number != -1) {
                    EndRun();
                }
                Finish();
                m_status = Status::Finalized;
            }
        }
        catch (JException& ex) {
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
        catch (...) {
            auto ex = JException("Unknown exception in JEventProcessor::Finish()");
            ex.nested_exception = std::current_exception();
            ex.plugin_name = m_plugin_name;
            ex.component_name = m_type_name;
            throw ex;
        }
    }


    virtual void Init() {}


    virtual void Process(const std::shared_ptr<const JEvent>& /*event*/) {
        throw JException("Not implemented yet!");
    }

    virtual void Process(int64_t /*run_nr*/, uint64_t /*event_nr*/, uint64_t /*event_idx*/) {
        throw JException("Not implemented yet!");
    }


    virtual void Finish() {}


    // TODO: Deprecate
    virtual std::string GetType() const {
        return m_type_name;
    }

protected:

    // The following are meant to be called by the user from the constructor in order to
    // configure their JEventProcessor instance.

    /// Resource name lets the user tell the parallelization engine to synchronize different EventProcessors
    /// which write to the same shared resource; e.g. if you have two EventProcessors
    /// which both write to a ROOT tree, they should both set the resource name 'ROOT'. On the flip side,
    /// if you have two EventProcessors which write to different resources, e.g. ROOT and a CSV file, and
    /// you set different resource names, the parallelization engine will know that it is safe to pipeline
    /// these two processors. If you don't set a resource name at all, the parallelization engine will
    /// assume that you are manually synchronizing access via your own mutex, which will be safe if and only
    /// if you use your locks correctly, and also may result in a performance penalty.

    // void SetResourceName(std::string resource_name) { m_resource_name = std::move(resource_name); }

    /// SetEventsOrdered allows the user to tell the parallelization engine that it needs to see
    /// the event stream ordered by increasing event IDs. (Note that this requires all EventSources
    /// emit event IDs which are consecutive.) Ordering by event ID makes for cleaner output, but comes
    /// with a performance penalty, so it is best if this is enabled during debugging, and disabled otherwise.

    // void SetEventsOrdered(bool receive_events_in_order) { m_receive_events_in_order = receive_events_in_order; }


private:
    std::string m_resource_name;
    std::atomic_ullong m_event_count {0};
    bool m_receive_events_in_order = false;

};

#endif // _JEventProcessor_h_

