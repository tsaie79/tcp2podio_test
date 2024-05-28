// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentCollection_H
#define DATAMODEL_ExampleWithComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponent.h"
#include "datamodel/MutableExampleWithComponent.h"
#include "datamodel/ExampleWithComponentObj.h"
#include "datamodel/ExampleWithComponentCollectionData.h"

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




class ExampleWithComponentCollectionIterator {
public:
  ExampleWithComponentCollectionIterator(size_t index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithComponentCollectionIterator(const ExampleWithComponentCollectionIterator&) = delete;
  ExampleWithComponentCollectionIterator& operator=(const ExampleWithComponentCollectionIterator&) = delete;

  bool operator!=(const ExampleWithComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithComponentCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithComponent operator*();
  ExampleWithComponent* operator->();
  ExampleWithComponentCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};


class ExampleWithComponentMutableCollectionIterator {
public:
  ExampleWithComponentMutableCollectionIterator(size_t index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithComponentMutableCollectionIterator(const ExampleWithComponentMutableCollectionIterator&) = delete;
  ExampleWithComponentMutableCollectionIterator& operator=(const ExampleWithComponentMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithComponentMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithComponentMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithComponent operator*();
  MutableExampleWithComponent* operator->();
  ExampleWithComponentMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithComponentCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithComponent;
  using const_iterator = ExampleWithComponentCollectionIterator;
  using iterator = ExampleWithComponentMutableCollectionIterator;

  ExampleWithComponentCollection();
  ExampleWithComponentCollection(ExampleWithComponentCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithComponentCollection(const ExampleWithComponentCollection& ) = delete;
  ExampleWithComponentCollection& operator=(const ExampleWithComponentCollection& ) = delete;
  ExampleWithComponentCollection(ExampleWithComponentCollection&&) = default;
  ExampleWithComponentCollection& operator=(ExampleWithComponentCollection&&) = default;

//  ExampleWithComponentCollection(ExampleWithComponentVector* data, uint32_t collectionID);
  ~ExampleWithComponentCollection();

  constexpr static auto typeName = "ExampleWithComponentCollection";
  constexpr static auto valueTypeName = "ExampleWithComponent";
  constexpr static auto dataTypeName = "ExampleWithComponentData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithComponentCollection* operator->() { return (ExampleWithComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithComponent create(Args&&... args);

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
  ExampleWithComponent operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithComponent operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithComponent at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithComponent at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithComponent object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithComponent object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithComponentObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<NotSoSimpleStruct> component(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithComponentCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithComponentCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithComponentCollection& v);

template<typename... Args>
MutableExampleWithComponent ExampleWithComponentCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithComponentObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithComponent(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithComponentCollection& collection);
#endif



#endif
