// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelationsCollection_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelationsCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithDifferentNamespaceRelations.h"
#include "datamodel/MutableExampleWithDifferentNamespaceRelations.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsCollectionData.h"

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




class ExampleWithDifferentNamespaceRelationsCollectionIterator {
public:
  ExampleWithDifferentNamespaceRelationsCollectionIterator(size_t index, const ExampleWithDifferentNamespaceRelationsObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}), m_collection(collection) {}

  ExampleWithDifferentNamespaceRelationsCollectionIterator(const ExampleWithDifferentNamespaceRelationsCollectionIterator&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionIterator& operator=(const ExampleWithDifferentNamespaceRelationsCollectionIterator&) = delete;

  bool operator!=(const ExampleWithDifferentNamespaceRelationsCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithDifferentNamespaceRelationsCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithDifferentNamespaceRelations operator*();
  ExampleWithDifferentNamespaceRelations* operator->();
  ExampleWithDifferentNamespaceRelationsCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithDifferentNamespaceRelations m_object;
  const ExampleWithDifferentNamespaceRelationsObjPointerContainer* m_collection;
};


class ExampleWithDifferentNamespaceRelationsMutableCollectionIterator {
public:
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator(size_t index, const ExampleWithDifferentNamespaceRelationsObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}), m_collection(collection) {}

  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator&) = delete;
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& operator=(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithDifferentNamespaceRelations operator*();
  MutableExampleWithDifferentNamespaceRelations* operator->();
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithDifferentNamespaceRelations m_object;
  const ExampleWithDifferentNamespaceRelationsObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithDifferentNamespaceRelationsCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithDifferentNamespaceRelations;
  using const_iterator = ExampleWithDifferentNamespaceRelationsCollectionIterator;
  using iterator = ExampleWithDifferentNamespaceRelationsMutableCollectionIterator;

  ExampleWithDifferentNamespaceRelationsCollection();
  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithDifferentNamespaceRelationsCollection(const ExampleWithDifferentNamespaceRelationsCollection& ) = delete;
  ExampleWithDifferentNamespaceRelationsCollection& operator=(const ExampleWithDifferentNamespaceRelationsCollection& ) = delete;
  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsCollection&&) = default;
  ExampleWithDifferentNamespaceRelationsCollection& operator=(ExampleWithDifferentNamespaceRelationsCollection&&) = default;

//  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsVector* data, uint32_t collectionID);
  ~ExampleWithDifferentNamespaceRelationsCollection();

  constexpr static auto typeName = "ExampleWithDifferentNamespaceRelationsCollection";
  constexpr static auto valueTypeName = "ExampleWithDifferentNamespaceRelations";
  constexpr static auto dataTypeName = "ExampleWithDifferentNamespaceRelationsData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithDifferentNamespaceRelationsCollection* operator->() { return (ExampleWithDifferentNamespaceRelationsCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithDifferentNamespaceRelations create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithDifferentNamespaceRelations create(Args&&... args);

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
  ExampleWithDifferentNamespaceRelations operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithDifferentNamespaceRelations operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithDifferentNamespaceRelations at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithDifferentNamespaceRelations at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithDifferentNamespaceRelations object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithDifferentNamespaceRelations object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithDifferentNamespaceRelationsObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  friend class ExampleWithDifferentNamespaceRelationsCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithDifferentNamespaceRelationsCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithDifferentNamespaceRelationsCollection& v);

template<typename... Args>
MutableExampleWithDifferentNamespaceRelations ExampleWithDifferentNamespaceRelationsCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithDifferentNamespaceRelationsObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithDifferentNamespaceRelationsData} constructor
  obj->m_rels = new std::vector<ex42::ExampleWithNamespace>();
  m_storage.createRelations(obj);
  return MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithDifferentNamespaceRelationsCollection& collection);
#endif



#endif
