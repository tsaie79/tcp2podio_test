// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponentCollection_H
#define DATAMODEL_ExampleWithArrayComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayComponentData.h"
#include "datamodel/ExampleWithArrayComponent.h"
#include "datamodel/MutableExampleWithArrayComponent.h"
#include "datamodel/ExampleWithArrayComponentObj.h"
#include "datamodel/ExampleWithArrayComponentCollectionData.h"

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




class ExampleWithArrayComponentCollectionIterator {
public:
  ExampleWithArrayComponentCollectionIterator(size_t index, const ExampleWithArrayComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayComponentCollectionIterator(const ExampleWithArrayComponentCollectionIterator&) = delete;
  ExampleWithArrayComponentCollectionIterator& operator=(const ExampleWithArrayComponentCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayComponentCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithArrayComponent operator*();
  ExampleWithArrayComponent* operator->();
  ExampleWithArrayComponentCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithArrayComponent m_object;
  const ExampleWithArrayComponentObjPointerContainer* m_collection;
};


class ExampleWithArrayComponentMutableCollectionIterator {
public:
  ExampleWithArrayComponentMutableCollectionIterator(size_t index, const ExampleWithArrayComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayComponentMutableCollectionIterator(const ExampleWithArrayComponentMutableCollectionIterator&) = delete;
  ExampleWithArrayComponentMutableCollectionIterator& operator=(const ExampleWithArrayComponentMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayComponentMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayComponentMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithArrayComponent operator*();
  MutableExampleWithArrayComponent* operator->();
  ExampleWithArrayComponentMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithArrayComponent m_object;
  const ExampleWithArrayComponentObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithArrayComponentCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithArrayComponent;
  using const_iterator = ExampleWithArrayComponentCollectionIterator;
  using iterator = ExampleWithArrayComponentMutableCollectionIterator;

  ExampleWithArrayComponentCollection();
  ExampleWithArrayComponentCollection(ExampleWithArrayComponentCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithArrayComponentCollection(const ExampleWithArrayComponentCollection& ) = delete;
  ExampleWithArrayComponentCollection& operator=(const ExampleWithArrayComponentCollection& ) = delete;
  ExampleWithArrayComponentCollection(ExampleWithArrayComponentCollection&&) = default;
  ExampleWithArrayComponentCollection& operator=(ExampleWithArrayComponentCollection&&) = default;

//  ExampleWithArrayComponentCollection(ExampleWithArrayComponentVector* data, uint32_t collectionID);
  ~ExampleWithArrayComponentCollection();

  constexpr static auto typeName = "ExampleWithArrayComponentCollection";
  constexpr static auto valueTypeName = "ExampleWithArrayComponent";
  constexpr static auto dataTypeName = "ExampleWithArrayComponentData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayComponentCollection* operator->() { return (ExampleWithArrayComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithArrayComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithArrayComponent create(Args&&... args);

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
  ExampleWithArrayComponent operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithArrayComponent operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithArrayComponent at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithArrayComponent at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithArrayComponent object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithArrayComponent object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithArrayComponentObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<SimpleStruct> s(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithArrayComponentCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithArrayComponentCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayComponentCollection& v);

template<typename... Args>
MutableExampleWithArrayComponent ExampleWithArrayComponentCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithArrayComponentObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayComponentCollection& collection);
#endif



#endif
