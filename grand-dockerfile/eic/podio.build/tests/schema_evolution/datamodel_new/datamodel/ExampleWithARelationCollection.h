// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationCollection_H
#define DATAMODEL_ExampleWithARelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithARelation.h"
#include "datamodel/MutableExampleWithARelation.h"
#include "datamodel/ExampleWithARelationObj.h"
#include "datamodel/ExampleWithARelationCollectionData.h"

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

namespace ex42 {



class ExampleWithARelationCollectionIterator {
public:
  ExampleWithARelationCollectionIterator(size_t index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithARelationCollectionIterator(const ExampleWithARelationCollectionIterator&) = delete;
  ExampleWithARelationCollectionIterator& operator=(const ExampleWithARelationCollectionIterator&) = delete;

  bool operator!=(const ExampleWithARelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithARelationCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithARelation operator*();
  ExampleWithARelation* operator->();
  ExampleWithARelationCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};


class ExampleWithARelationMutableCollectionIterator {
public:
  ExampleWithARelationMutableCollectionIterator(size_t index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithARelationMutableCollectionIterator(const ExampleWithARelationMutableCollectionIterator&) = delete;
  ExampleWithARelationMutableCollectionIterator& operator=(const ExampleWithARelationMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithARelationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithARelationMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithARelation operator*();
  MutableExampleWithARelation* operator->();
  ExampleWithARelationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithARelationCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithARelation;
  using const_iterator = ExampleWithARelationCollectionIterator;
  using iterator = ExampleWithARelationMutableCollectionIterator;

  ExampleWithARelationCollection();
  ExampleWithARelationCollection(ExampleWithARelationCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithARelationCollection(const ExampleWithARelationCollection& ) = delete;
  ExampleWithARelationCollection& operator=(const ExampleWithARelationCollection& ) = delete;
  ExampleWithARelationCollection(ExampleWithARelationCollection&&) = default;
  ExampleWithARelationCollection& operator=(ExampleWithARelationCollection&&) = default;

//  ExampleWithARelationCollection(ExampleWithARelationVector* data, uint32_t collectionID);
  ~ExampleWithARelationCollection();

  constexpr static auto typeName = "ex42::ExampleWithARelationCollection";
  constexpr static auto valueTypeName = "ex42::ExampleWithARelation";
  constexpr static auto dataTypeName = "ex42::ExampleWithARelationData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithARelationCollection* operator->() { return (ExampleWithARelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithARelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithARelation create(Args&&... args);

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
  ExampleWithARelation operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithARelation operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithARelation at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithARelation at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithARelation object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithARelation object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithARelationObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<double> number(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithARelationCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithARelationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithARelationCollection& v);

template<typename... Args>
MutableExampleWithARelation ExampleWithARelationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithARelationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithARelationData} constructor
  obj->m_refs = new std::vector<ex42::ExampleWithNamespace>();
  m_storage.createRelations(obj);
  return MutableExampleWithARelation(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithARelationCollection& collection);
#endif

} // namespace ex42


#endif
