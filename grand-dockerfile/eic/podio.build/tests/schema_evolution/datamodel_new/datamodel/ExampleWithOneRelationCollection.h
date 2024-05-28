// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationCollection_H
#define DATAMODEL_ExampleWithOneRelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelation.h"
#include "datamodel/MutableExampleWithOneRelation.h"
#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleWithOneRelationCollectionData.h"

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




class ExampleWithOneRelationCollectionIterator {
public:
  ExampleWithOneRelationCollectionIterator(size_t index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithOneRelationCollectionIterator(const ExampleWithOneRelationCollectionIterator&) = delete;
  ExampleWithOneRelationCollectionIterator& operator=(const ExampleWithOneRelationCollectionIterator&) = delete;

  bool operator!=(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithOneRelation operator*();
  ExampleWithOneRelation* operator->();
  ExampleWithOneRelationCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};


class ExampleWithOneRelationMutableCollectionIterator {
public:
  ExampleWithOneRelationMutableCollectionIterator(size_t index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithOneRelationMutableCollectionIterator(const ExampleWithOneRelationMutableCollectionIterator&) = delete;
  ExampleWithOneRelationMutableCollectionIterator& operator=(const ExampleWithOneRelationMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithOneRelationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithOneRelationMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithOneRelation operator*();
  MutableExampleWithOneRelation* operator->();
  ExampleWithOneRelationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithOneRelationCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithOneRelation;
  using const_iterator = ExampleWithOneRelationCollectionIterator;
  using iterator = ExampleWithOneRelationMutableCollectionIterator;

  ExampleWithOneRelationCollection();
  ExampleWithOneRelationCollection(ExampleWithOneRelationCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithOneRelationCollection(const ExampleWithOneRelationCollection& ) = delete;
  ExampleWithOneRelationCollection& operator=(const ExampleWithOneRelationCollection& ) = delete;
  ExampleWithOneRelationCollection(ExampleWithOneRelationCollection&&) = default;
  ExampleWithOneRelationCollection& operator=(ExampleWithOneRelationCollection&&) = default;

//  ExampleWithOneRelationCollection(ExampleWithOneRelationVector* data, uint32_t collectionID);
  ~ExampleWithOneRelationCollection();

  constexpr static auto typeName = "ExampleWithOneRelationCollection";
  constexpr static auto valueTypeName = "ExampleWithOneRelation";
  constexpr static auto dataTypeName = "ExampleWithOneRelationData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithOneRelationCollection* operator->() { return (ExampleWithOneRelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithOneRelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithOneRelation create(Args&&... args);

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
  ExampleWithOneRelation operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithOneRelation operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithOneRelation at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithOneRelation at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithOneRelation object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithOneRelation object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithOneRelationObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithOneRelationCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithOneRelationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelationCollection& v);

template<typename... Args>
MutableExampleWithOneRelation ExampleWithOneRelationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithOneRelationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithOneRelationCollection& collection);
#endif



#endif
