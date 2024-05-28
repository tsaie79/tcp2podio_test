
// Copyright 2020, Jefferson Science Associates, LLC.
// Subject to the terms in the LICENSE file found in the top-level directory.


#ifndef JANA2_JGETOBJECTSFACTORY_H
#define JANA2_JGETOBJECTSFACTORY_H


#include <JANA/JEvent.h>
#include <JANA/JEventSource.h>

template <typename T>
class JGetObjectsFactory : public JFactoryT<T> {

    /// JGetObjectsFactory allows us to use `JEventSource::GetObjects` with JANA2.
    /// Use of GetObjects is deprecated and strongly discouraged in favor of using
    /// JEvent::Insert instead. However, rewriting the halld event sources is a
    /// monumental task, so we keep GetObjects for now and use this as the mechanism
    /// to call into it.

public:
    JGetObjectsFactory(std::string tag="") {
        JFactory::SetTag(tag);
    }

    void Process(const std::shared_ptr<const JEvent>& event) {
        JEventSource* source = event->GetJEventSource();
        source->GetObjects(event, this);
        // if (!result) throw JException("JGetObjectsFactory registered with a source that doesn't provide said objects");
        // JANA can't/shouldn't distinguish between "Source can't provide said objects" and "Source provided zero"
        // Examples: DMCThrown, DDIRCTruthBarHit
        JFactory::mCreationStatus = JFactory::CreationStatus::InsertedViaGetObjects;
    }

};
#endif //JANA2_JGETOBJECTSFACTORY_H
