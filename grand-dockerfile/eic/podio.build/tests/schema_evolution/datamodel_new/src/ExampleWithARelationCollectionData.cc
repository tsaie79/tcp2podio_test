// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithARelationCollectionData.h"
#include "datamodel/ExampleWithARelationCollection.h"

#include "datamodel/ExampleWithNamespaceCollection.h"

namespace ex42 {


ExampleWithARelationCollectionData::ExampleWithARelationCollectionData() :
  m_rel_refs(new std::vector<ex42::ExampleWithNamespace>()),
  m_rel_ref(new std::vector<ex42::ExampleWithNamespace>()),
  m_data(new ExampleWithARelationDataContainer()) {
  m_refCollections.emplace_back(std::make_unique<std::vector<podio::ObjectID>>());
  m_refCollections.emplace_back(std::make_unique<std::vector<podio::ObjectID>>());
}

ExampleWithARelationCollectionData::ExampleWithARelationCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl) :
  m_rel_refs(new std::vector<ex42::ExampleWithNamespace>()),
  m_rel_ref(new std::vector<ex42::ExampleWithNamespace>()),
  m_refCollections(std::move(*buffers.references)),
  m_vecmem_info(std::move(*buffers.vectorMembers)) {
  // For subset collections we are done, for proper collections we still have to
  // populate the data and vector members
  if (!isSubsetColl) {
    m_data.reset(buffers.dataAsVector<ex42::ExampleWithARelationData>());

  }

  // Cleanup these to avoid leaking them
  delete buffers.references;
  delete buffers.vectorMembers;
}

void ExampleWithARelationCollectionData::clear(bool isSubsetColl) {
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
  // clear relations to refs. Make sure to unlink() the reference data as they may be gone already.
  for (auto& pointer : m_rel_refs_tmp) {
    for (auto& item : *pointer) {
      item.unlink();
    }
  }
  m_rel_refs_tmp.clear();
  if (m_rel_refs) {
    for (auto& item : (*m_rel_refs)) { item.unlink(); }
    m_rel_refs->clear();
  }

  if (m_rel_ref) {
    for (auto& item : (*m_rel_ref)) { item.unlink(); }
    m_rel_ref->clear();
  }

  for (auto& obj : entries) { delete obj; }
  entries.clear();
}

podio::CollectionWriteBuffers ExampleWithARelationCollectionData::getCollectionBuffers(bool isSubsetColl) {
return {
    isSubsetColl ? nullptr : (void*)&m_data,
    isSubsetColl ? nullptr : (void*)m_data.get(),
    &m_refCollections, // only need to store the ObjectIDs of the referenced objects
    &m_vecmem_info
  };
}

void ExampleWithARelationCollectionData::prepareForWrite(bool isSubsetColl) {
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

  int refs_index = 0;
  for (size_t i = 0, size = m_data->size(); i != size; ++i) {
    (*m_data)[i].refs_begin = refs_index;
    (*m_data)[i].refs_end += refs_index;
    refs_index = (*m_data)[i].refs_end;
    for (const auto& it : (*m_rel_refs_tmp[i])) {
      if (it.getObjectID().index == podio::ObjectID::untracked) {
        throw std::runtime_error("Trying to persistify untracked object");
      }
      m_refCollections[0]->emplace_back(it.getObjectID());
    }

  }
  for (auto& obj : entries) {
    if (obj->m_ref) {
      m_refCollections[1]->emplace_back(obj->m_ref->getObjectID());
    } else {
       m_refCollections[1]->push_back({podio::ObjectID::invalid, 0});
    }
  }

}

void ExampleWithARelationCollectionData::prepareAfterRead(uint32_t collectionID) {
  int index = 0;
  for (auto& data : *m_data) {
    auto obj = new ExampleWithARelationObj({index, collectionID}, data);

    obj->m_refs = m_rel_refs.get();
    entries.emplace_back(obj);
    ++index;
  }

  // at this point we could clear the I/O data buffer, but we keep them intact
  // because then we can save a call to prepareForWrite
}


void ExampleWithARelationCollectionData::createRelations(ExampleWithARelationObj* obj) {
  // We take ownership of these here
  m_rel_refs_tmp.emplace_back(obj->m_refs);
}

bool ExampleWithARelationCollectionData::setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl) {
  if (isSubsetColl) {
    for (const auto& id : *m_refCollections[0]) {
      podio::CollectionBase* coll = nullptr;
      ex42::ExampleWithARelationObj* obj = nullptr;
      if (collectionProvider->get(id.collectionID, coll)) {
        auto* tmp_coll = static_cast<ex42::ExampleWithARelationCollection*>(coll);
        obj = tmp_coll->m_storage.entries[id.index];
      }
      entries.push_back(obj);
    }
    return true; // TODO: check success, how?
  }

  // Normal collections have to resolve all relations
  for (unsigned int i = 0, size = m_refCollections[0]->size(); i != size; ++i) {
    const auto id = (*m_refCollections[0])[i];
    if (id.index != podio::ObjectID::invalid) {
      podio::CollectionBase* coll = nullptr;
      if (!collectionProvider->get(id.collectionID, coll)) {
        m_rel_refs->emplace_back(ex42::ExampleWithNamespace::makeEmpty());
        continue;
      }
      ex42::ExampleWithNamespaceCollection* tmp_coll = static_cast<ex42::ExampleWithNamespaceCollection*>(coll);
      const auto tmp = (*tmp_coll)[id.index];
      m_rel_refs->emplace_back(tmp);
    } else {
      m_rel_refs->emplace_back(ex42::ExampleWithNamespace::makeEmpty());
    }
  }

  for (unsigned int i = 0, size = entries.size(); i != size; ++i) {
    const auto id = (*m_refCollections[1])[i];
    if (id.index != podio::ObjectID::invalid) {
      podio::CollectionBase* coll = nullptr;
      if (!collectionProvider->get(id.collectionID, coll)) {
        entries[i]->m_ref = nullptr;
        continue;
      }
      ex42::ExampleWithNamespaceCollection* tmp_coll = static_cast<ex42::ExampleWithNamespaceCollection*>(coll);
      entries[i]->m_ref = new ex42::ExampleWithNamespace((*tmp_coll)[id.index]);
    } else {
      entries[i]->m_ref = nullptr;
    }
  }


  return true; // TODO: check success, how?
}

void ExampleWithARelationCollectionData::makeSubsetCollection() {
  // Subset collections do not need all the data buffers that normal
  // collections need, so we can free them here
  m_vecmem_info.clear();

  m_data.reset(nullptr);

  m_rel_refs.reset(nullptr);
  m_rel_ref.reset(nullptr);

  // Subset collections need one vector of ObjectIDs for I/O purposes.
  m_refCollections.resize(1);
  m_refCollections[0] = std::make_unique<std::vector<podio::ObjectID>>();
}


} // namespace ex42

