// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegersCollection_H
#define DATAMODEL_ExampleWithFixedWidthIntegersCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"
#include "datamodel/ExampleWithFixedWidthIntegers.h"
#include "datamodel/MutableExampleWithFixedWidthIntegers.h"
#include "datamodel/ExampleWithFixedWidthIntegersObj.h"
#include "datamodel/ExampleWithFixedWidthIntegersCollectionData.h"

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




class ExampleWithFixedWidthIntegersCollectionIterator {
public:
  ExampleWithFixedWidthIntegersCollectionIterator(size_t index, const ExampleWithFixedWidthIntegersObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}), m_collection(collection) {}

  ExampleWithFixedWidthIntegersCollectionIterator(const ExampleWithFixedWidthIntegersCollectionIterator&) = delete;
  ExampleWithFixedWidthIntegersCollectionIterator& operator=(const ExampleWithFixedWidthIntegersCollectionIterator&) = delete;

  bool operator!=(const ExampleWithFixedWidthIntegersCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithFixedWidthIntegersCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithFixedWidthIntegers operator*();
  ExampleWithFixedWidthIntegers* operator->();
  ExampleWithFixedWidthIntegersCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithFixedWidthIntegers m_object;
  const ExampleWithFixedWidthIntegersObjPointerContainer* m_collection;
};


class ExampleWithFixedWidthIntegersMutableCollectionIterator {
public:
  ExampleWithFixedWidthIntegersMutableCollectionIterator(size_t index, const ExampleWithFixedWidthIntegersObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}), m_collection(collection) {}

  ExampleWithFixedWidthIntegersMutableCollectionIterator(const ExampleWithFixedWidthIntegersMutableCollectionIterator&) = delete;
  ExampleWithFixedWidthIntegersMutableCollectionIterator& operator=(const ExampleWithFixedWidthIntegersMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithFixedWidthIntegersMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithFixedWidthIntegersMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithFixedWidthIntegers operator*();
  MutableExampleWithFixedWidthIntegers* operator->();
  ExampleWithFixedWidthIntegersMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithFixedWidthIntegers m_object;
  const ExampleWithFixedWidthIntegersObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithFixedWidthIntegersCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithFixedWidthIntegers;
  using const_iterator = ExampleWithFixedWidthIntegersCollectionIterator;
  using iterator = ExampleWithFixedWidthIntegersMutableCollectionIterator;

  ExampleWithFixedWidthIntegersCollection();
  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithFixedWidthIntegersCollection(const ExampleWithFixedWidthIntegersCollection& ) = delete;
  ExampleWithFixedWidthIntegersCollection& operator=(const ExampleWithFixedWidthIntegersCollection& ) = delete;
  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersCollection&&) = default;
  ExampleWithFixedWidthIntegersCollection& operator=(ExampleWithFixedWidthIntegersCollection&&) = default;

//  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersVector* data, uint32_t collectionID);
  ~ExampleWithFixedWidthIntegersCollection();

  constexpr static auto typeName = "ExampleWithFixedWidthIntegersCollection";
  constexpr static auto valueTypeName = "ExampleWithFixedWidthIntegers";
  constexpr static auto dataTypeName = "ExampleWithFixedWidthIntegersData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithFixedWidthIntegersCollection* operator->() { return (ExampleWithFixedWidthIntegersCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithFixedWidthIntegers create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithFixedWidthIntegers create(Args&&... args);

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
  ExampleWithFixedWidthIntegers operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithFixedWidthIntegers operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithFixedWidthIntegers at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithFixedWidthIntegers at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithFixedWidthIntegers object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithFixedWidthIntegers object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithFixedWidthIntegersObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<std::int16_t> fixedI16(const size_t nElem = 0) const;
  std::vector<std::uint64_t> fixedU64(const size_t nElem = 0) const;
  std::vector<std::uint32_t> fixedU32(const size_t nElem = 0) const;
  std::vector<StructWithFixedWithTypes> fixedWidthStruct(const size_t nElem = 0) const;
  std::vector<std::array<std::int16_t, 2>> fixedWidthArray(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithFixedWidthIntegersCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithFixedWidthIntegersCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithFixedWidthIntegersCollection& v);

template<typename... Args>
MutableExampleWithFixedWidthIntegers ExampleWithFixedWidthIntegersCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithFixedWidthIntegersObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithFixedWidthIntegersCollection& collection);
#endif



#endif
