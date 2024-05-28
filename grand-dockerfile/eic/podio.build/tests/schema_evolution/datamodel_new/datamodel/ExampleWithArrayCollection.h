// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayCollection_H
#define DATAMODEL_ExampleWithArrayCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArray.h"
#include "datamodel/MutableExampleWithArray.h"
#include "datamodel/ExampleWithArrayObj.h"
#include "datamodel/ExampleWithArrayCollectionData.h"

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




class ExampleWithArrayCollectionIterator {
public:
  ExampleWithArrayCollectionIterator(size_t index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayCollectionIterator(const ExampleWithArrayCollectionIterator&) = delete;
  ExampleWithArrayCollectionIterator& operator=(const ExampleWithArrayCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithArray operator*();
  ExampleWithArray* operator->();
  ExampleWithArrayCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};


class ExampleWithArrayMutableCollectionIterator {
public:
  ExampleWithArrayMutableCollectionIterator(size_t index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayMutableCollectionIterator(const ExampleWithArrayMutableCollectionIterator&) = delete;
  ExampleWithArrayMutableCollectionIterator& operator=(const ExampleWithArrayMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithArray operator*();
  MutableExampleWithArray* operator->();
  ExampleWithArrayMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithArrayCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithArray;
  using const_iterator = ExampleWithArrayCollectionIterator;
  using iterator = ExampleWithArrayMutableCollectionIterator;

  ExampleWithArrayCollection();
  ExampleWithArrayCollection(ExampleWithArrayCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithArrayCollection(const ExampleWithArrayCollection& ) = delete;
  ExampleWithArrayCollection& operator=(const ExampleWithArrayCollection& ) = delete;
  ExampleWithArrayCollection(ExampleWithArrayCollection&&) = default;
  ExampleWithArrayCollection& operator=(ExampleWithArrayCollection&&) = default;

//  ExampleWithArrayCollection(ExampleWithArrayVector* data, uint32_t collectionID);
  ~ExampleWithArrayCollection();

  constexpr static auto typeName = "ExampleWithArrayCollection";
  constexpr static auto valueTypeName = "ExampleWithArray";
  constexpr static auto dataTypeName = "ExampleWithArrayData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayCollection* operator->() { return (ExampleWithArrayCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithArray create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithArray create(Args&&... args);

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
  ExampleWithArray operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithArray operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithArray at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithArray at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithArray object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithArray object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithArrayObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<NotSoSimpleStruct> arrayStruct(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> myArray(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> anotherArray2(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> snail_case_array(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> snail_case_Array3(const size_t nElem = 0) const;
  std::vector<std::array<ex2::NamespaceStruct, 4>> structArray(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithArrayCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithArrayCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayCollection& v);

template<typename... Args>
MutableExampleWithArray ExampleWithArrayCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithArrayObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithArray(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayCollection& collection);
#endif



#endif
