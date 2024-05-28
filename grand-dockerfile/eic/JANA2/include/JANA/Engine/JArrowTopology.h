
// Copyright 2020, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.


#ifndef JANA2_JARROWTOPOLOGY_H
#define JANA2_JARROWTOPOLOGY_H


#include <JANA/Services/JComponentManager.h>
#include <JANA/Status/JPerfMetrics.h>
#include <JANA/Utils/JEventPool.h>
#include <JANA/Utils/JProcessorMapping.h>

#include "JArrow.h"
#include "JMailbox.h"


struct JArrowTopology {

    using Event = std::shared_ptr<JEvent>;
    using EventQueue = JMailbox<Event*>;

    explicit JArrowTopology();
    virtual ~JArrowTopology();

    std::shared_ptr<JComponentManager> component_manager;
    // Ensure that ComponentManager stays alive at least as long as JArrowTopology does
    // Otherwise there is a potential use-after-free when JArrowTopology or JArrowProcessingController access components

    JEventPool* event_pool = nullptr; // TODO: Move into pools eventually
    JPerfMetrics metrics;

    std::vector<JArrow*> arrows;
    std::vector<JQueue*> queues;            // Queues shared between arrows
    std::vector<JPoolBase*> pools;          // Pools shared between arrows
    JProcessorMapping mapping;

    size_t event_pool_size = 1;                   //  Will be defaulted to nthreads by builder
    bool limit_total_events_in_flight = true;
    bool enable_call_graph_recording = false;
    size_t event_queue_threshold = 80;
    size_t event_source_chunksize = 40;
    size_t event_processor_chunksize = 1;
    size_t location_count = 1;
    bool enable_stealing = false;
    int affinity = 0; // By default, don't pin the CPU at all
    int locality = 0; // By default, assume no NUMA domains

    JLogger m_logger;

};


#endif //JANA2_JARROWTOPOLOGY_H
