// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleForCyclicDependency2CollectionData.h"
#include "datamodel/ExampleForCyclicDependency2Collection.h"

#include "datamodel/ExampleForCyclicDependency1Collection.h"



ExampleForCyclicDependency2CollectionData::ExampleForCyclicDependency2CollectionData() :
  m_rel_ref(new std::vector<::ExampleForCyclicDependency1>()),
  m_data(new ExampleForCyclicDependency2DataContainer()) {
  m_refCollections.emplace_back(std::make_unique<std::vector<podio::ObjectID>>());
}

ExampleForCyclicDependency2CollectionData::ExampleForCyclicDependency2CollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl) :
  m_rel_ref(new std::vector<::ExampleForCyclicDependency1>()),
  m_refCollections(std::move(*buffers.references)),
  m_vecmem_info(std::move(*buffers.vectorMembers)) {
  // For subset collections we are done, for proper collections we still have to
  // populate the data and vector members
  if (!isSubsetColl) {
    m_data.reset(buffers.dataAsVector<ExampleForCyclicDependency2Data>());

  }

  // Cleanup these to avoid leaking them
  delete buffers.references;
  delete buffers.vectorMembers;
}

void ExampleForCyclicDependency2CollectionData::clear(bool isSubsetColl) {
  if (isSubsetColl) {
    // We don't own the objects so no cleanup to do here
    entries.clear();
    // Clear the ObjectID I/O buffer
    for (auto& pointer : m_refCollections) { pointer->clear(); }
    return;
  }

  // Normal collections manage a bit more and have to clean up a bit more
  if (m_data) m_data->clear();
  for (auto& pointer : m_refCollections) { pointer->clear(); }
  if (m_rel_ref) {
    for (auto& item : (*m_rel_ref)) { item.unlink(); }
    m_rel_ref->clear();
  }

  for (auto& obj : entries) { delete obj; }
  entries.clear();
}

podio::CollectionWriteBuffers ExampleForCyclicDependency2CollectionData::getCollectionBuffers(bool isSubsetColl) {
return {
    isSubsetColl ? nullptr : (void*)&m_data,
    isSubsetColl ? nullptr : (void*)m_data.get(),
    &m_refCollections, // only need to store the ObjectIDs of the referenced objects
    &m_vecmem_info
  };
}

void ExampleForCyclicDependency2CollectionData::prepareForWrite(bool isSubsetColl) {
  for (auto& pointer : m_refCollections) { pointer->clear(); }

  // If this is a subset collection use the relation storing mechanism to
  // store the ObjectIDs of all referenced objects and nothing else
  if (isSubsetColl) {
    for (const auto* obj : entries) {
      m_refCollections[0]->emplace_back(obj->id);
    }
    return;
  }

  // Normal collections have to store the data and all the relations
  m_data->reserve(entries.size());
  for (auto& obj : entries) { m_data->push_back(obj->data); }


  for (auto& obj : entries) {
    if (obj->m_ref) {
      m_refCollections[0]->emplace_back(obj->m_ref->getObjectID());
    } else {
       m_refCollections[0]->push_back({podio::ObjectID::invalid, 0});
    }
  }

}

void ExampleForCyclicDependency2CollectionData::prepareAfterRead(uint32_t collectionID) {
  int index = 0;
  for (auto& data : *m_data) {
    auto obj = new ExampleForCyclicDependency2Obj({index, collectionID}, data);

    entries.emplace_back(obj);
    ++index;
  }

  // at this point we could clear the I/O data buffer, but we keep them intact
  // because then we can save a call to prepareForWrite
}



bool ExampleForCyclicDependency2CollectionData::setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl) {
  if (isSubsetColl) {
    for (const auto& id : *m_refCollections[0]) {
      podio::CollectionBase* coll = nullptr;
      ExampleForCyclicDependency2Obj* obj = nullptr;
      if (collectionProvider->get(id.collectionID, coll)) {
        auto* tmp_coll = static_cast<ExampleForCyclicDependency2Collection*>(coll);
        obj = tmp_coll->m_storage.entries[id.index];
      }
      entries.push_back(obj);
    }
    return true; // TODO: check success, how?
  }

  // Normal collections have to resolve all relations
  for (unsigned int i = 0, size = entries.size(); i != size; ++i) {
    const auto id = (*m_refCollections[0])[i];
    if (id.index != podio::ObjectID::invalid) {
      podio::CollectionBase* coll = nullptr;
      if (!collectionProvider->get(id.collectionID, coll)) {
        entries[i]->m_ref = nullptr;
        continue;
      }
      ExampleForCyclicDependency1Collection* tmp_coll = static_cast<ExampleForCyclicDependency1Collection*>(coll);
      entries[i]->m_ref = new ExampleForCyclicDependency1((*tmp_coll)[id.index]);
    } else {
      entries[i]->m_ref = nullptr;
    }
  }


  return true; // TODO: check success, how?
}

void ExampleForCyclicDependency2CollectionData::makeSubsetCollection() {
  // Subset collections do not need all the data buffers that normal
  // collections need, so we can free them here
  m_vecmem_info.clear();

  m_data.reset(nullptr);

  m_rel_ref.reset(nullptr);

  // Subset collections need one vector of ObjectIDs for I/O purposes.
  m_refCollections.resize(1);
  m_refCollections[0] = std::make_unique<std::vector<podio::ObjectID>>();
}



