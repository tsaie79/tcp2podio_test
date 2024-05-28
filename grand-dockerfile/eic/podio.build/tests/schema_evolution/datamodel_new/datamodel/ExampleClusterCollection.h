// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterCollection_H
#define DATAMODEL_ExampleClusterCollection_H

// datamodel specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleCluster.h"
#include "datamodel/MutableExampleCluster.h"
#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleClusterCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class ExampleClusterCollectionIterator {
public:
  ExampleClusterCollectionIterator(size_t index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}), m_collection(collection) {}

  ExampleClusterCollectionIterator(const ExampleClusterCollectionIterator&) = delete;
  ExampleClusterCollectionIterator& operator=(const ExampleClusterCollectionIterator&) = delete;

  bool operator!=(const ExampleClusterCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleClusterCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleCluster operator*();
  ExampleCluster* operator->();
  ExampleClusterCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};


class ExampleClusterMutableCollectionIterator {
public:
  ExampleClusterMutableCollectionIterator(size_t index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}), m_collection(collection) {}

  ExampleClusterMutableCollectionIterator(const ExampleClusterMutableCollectionIterator&) = delete;
  ExampleClusterMutableCollectionIterator& operator=(const ExampleClusterMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleClusterMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleClusterMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleCluster operator*();
  MutableExampleCluster* operator->();
  ExampleClusterMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleClusterCollection : public podio::CollectionBase {
public:
  using value_type = ExampleCluster;
  using const_iterator = ExampleClusterCollectionIterator;
  using iterator = ExampleClusterMutableCollectionIterator;

  ExampleClusterCollection();
  ExampleClusterCollection(ExampleClusterCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleClusterCollection(const ExampleClusterCollection& ) = delete;
  ExampleClusterCollection& operator=(const ExampleClusterCollection& ) = delete;
  ExampleClusterCollection(ExampleClusterCollection&&) = default;
  ExampleClusterCollection& operator=(ExampleClusterCollection&&) = default;

//  ExampleClusterCollection(ExampleClusterVector* data, uint32_t collectionID);
  ~ExampleClusterCollection();

  constexpr static auto typeName = "ExampleClusterCollection";
  constexpr static auto valueTypeName = "ExampleCluster";
  constexpr static auto dataTypeName = "ExampleClusterData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleClusterCollection* operator->() { return (ExampleClusterCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleCluster create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleCluster create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ExampleCluster operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleCluster operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleCluster at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleCluster at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleCluster object);
  /// Append an object to the (subset) collection
  void push_back(ExampleCluster object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleClusterObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<double> energy(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleClusterCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleClusterCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleClusterCollection& v);

template<typename... Args>
MutableExampleCluster ExampleClusterCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleClusterObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleClusterData} constructor
  obj->m_Hits = new std::vector<ExampleHit>();
  obj->m_Clusters = new std::vector<ExampleCluster>();
  m_storage.createRelations(obj);
  return MutableExampleCluster(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleClusterCollection& collection);
#endif



#endif
