// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithVectorMemberCollectionData.h"
#include "datamodel/ExampleWithVectorMemberCollection.h"

#include <numeric>



ExampleWithVectorMemberCollectionData::ExampleWithVectorMemberCollectionData() :
  m_vec_count(new std::vector<int>()),
  m_data(new ExampleWithVectorMemberDataContainer()) {
  m_vecmem_info.emplace_back("int", &m_vec_count);
}

ExampleWithVectorMemberCollectionData::ExampleWithVectorMemberCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl) :
  m_refCollections(std::move(*buffers.references)),
  m_vecmem_info(std::move(*buffers.vectorMembers)) {
  // For subset collections we are done, for proper collections we still have to
  // populate the data and vector members
  if (!isSubsetColl) {
    m_data.reset(buffers.dataAsVector<ExampleWithVectorMemberData>());

  m_vec_count.reset(podio::CollectionReadBuffers::asVector<int>(m_vecmem_info[0].second));
  }

  // Cleanup these to avoid leaking them
  delete buffers.references;
  delete buffers.vectorMembers;
}

void ExampleWithVectorMemberCollectionData::clear(bool isSubsetColl) {
  if (isSubsetColl) {
    // We don't own the objects so no cleanup to do here
    entries.clear();
    // Clear the ObjectID I/O buffer
    for (auto& pointer : m_refCollections) { pointer->clear(); }
    return;
  }

  // Normal collections manage a bit more and have to clean up a bit more
  if (m_data) m_data->clear();
  if (m_vec_count) m_vec_count->clear();
  m_vecs_count.clear();

  for (auto& obj : entries) { delete obj; }
  entries.clear();
}

podio::CollectionWriteBuffers ExampleWithVectorMemberCollectionData::getCollectionBuffers(bool isSubsetColl) {
  if (!isSubsetColl) {
    // Make sure these point to the right place, even if a collection has been
    // moved since it has been created
    m_vecmem_info[0].second = &m_vec_count;
  }
return {
    isSubsetColl ? nullptr : (void*)&m_data,
    isSubsetColl ? nullptr : (void*)m_data.get(),
    &m_refCollections, // only need to store the ObjectIDs of the referenced objects
    &m_vecmem_info
  };
}

void ExampleWithVectorMemberCollectionData::prepareForWrite(bool isSubsetColl) {
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

const auto count_size = std::accumulate(entries.begin(), entries.end(), 0,
  [](size_t sum, const ExampleWithVectorMemberObj* obj) { return sum + obj->m_count->size(); });
  m_vec_count->reserve(count_size);
  int count_index = 0;
  for (size_t i = 0, size = m_data->size(); i != size; ++i) {
    (*m_data)[i].count_begin = count_index;
    (*m_data)[i].count_end += count_index;
    count_index = (*m_data)[i].count_end;
    for (const auto& it : (*m_vecs_count[i])) { m_vec_count->push_back(it); }

  }
}

void ExampleWithVectorMemberCollectionData::prepareAfterRead(uint32_t collectionID) {
  int index = 0;
  for (auto& data : *m_data) {
    auto obj = new ExampleWithVectorMemberObj({index, collectionID}, data);

    obj->m_count = m_vec_count.get();
    entries.emplace_back(obj);
    ++index;
  }

  // at this point we could clear the I/O data buffer, but we keep them intact
  // because then we can save a call to prepareForWrite
}


void ExampleWithVectorMemberCollectionData::createRelations(ExampleWithVectorMemberObj* obj) {
  // We take ownership of these here
  m_vecs_count.emplace_back(obj->m_count);
}

bool ExampleWithVectorMemberCollectionData::setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl) {
  if (isSubsetColl) {
    for (const auto& id : *m_refCollections[0]) {
      podio::CollectionBase* coll = nullptr;
      ExampleWithVectorMemberObj* obj = nullptr;
      if (collectionProvider->get(id.collectionID, coll)) {
        auto* tmp_coll = static_cast<ExampleWithVectorMemberCollection*>(coll);
        obj = tmp_coll->m_storage.entries[id.index];
      }
      entries.push_back(obj);
    }
    return true; // TODO: check success, how?
  }

  // Normal collections have to resolve all relations

  return true; // TODO: check success, how?
}

void ExampleWithVectorMemberCollectionData::makeSubsetCollection() {
  // Subset collections do not need all the data buffers that normal
  // collections need, so we can free them here
  m_vecmem_info.clear();

  m_data.reset(nullptr);

  m_vec_count.reset(nullptr);

  // Subset collections need one vector of ObjectIDs for I/O purposes.
  m_refCollections.resize(1);
  m_refCollections[0] = std::make_unique<std::vector<podio::ObjectID>>();
}



