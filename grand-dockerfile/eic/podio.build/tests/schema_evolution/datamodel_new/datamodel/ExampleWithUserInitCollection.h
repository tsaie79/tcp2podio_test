// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitCollection_H
#define DATAMODEL_ExampleWithUserInitCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithUserInitData.h"
#include "datamodel/ExampleWithUserInit.h"
#include "datamodel/MutableExampleWithUserInit.h"
#include "datamodel/ExampleWithUserInitObj.h"
#include "datamodel/ExampleWithUserInitCollectionData.h"

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




class ExampleWithUserInitCollectionIterator {
public:
  ExampleWithUserInitCollectionIterator(size_t index, const ExampleWithUserInitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}), m_collection(collection) {}

  ExampleWithUserInitCollectionIterator(const ExampleWithUserInitCollectionIterator&) = delete;
  ExampleWithUserInitCollectionIterator& operator=(const ExampleWithUserInitCollectionIterator&) = delete;

  bool operator!=(const ExampleWithUserInitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithUserInitCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithUserInit operator*();
  ExampleWithUserInit* operator->();
  ExampleWithUserInitCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithUserInit m_object;
  const ExampleWithUserInitObjPointerContainer* m_collection;
};


class ExampleWithUserInitMutableCollectionIterator {
public:
  ExampleWithUserInitMutableCollectionIterator(size_t index, const ExampleWithUserInitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}), m_collection(collection) {}

  ExampleWithUserInitMutableCollectionIterator(const ExampleWithUserInitMutableCollectionIterator&) = delete;
  ExampleWithUserInitMutableCollectionIterator& operator=(const ExampleWithUserInitMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithUserInitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithUserInitMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithUserInit operator*();
  MutableExampleWithUserInit* operator->();
  ExampleWithUserInitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithUserInit m_object;
  const ExampleWithUserInitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithUserInitCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithUserInit;
  using const_iterator = ExampleWithUserInitCollectionIterator;
  using iterator = ExampleWithUserInitMutableCollectionIterator;

  ExampleWithUserInitCollection();
  ExampleWithUserInitCollection(ExampleWithUserInitCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithUserInitCollection(const ExampleWithUserInitCollection& ) = delete;
  ExampleWithUserInitCollection& operator=(const ExampleWithUserInitCollection& ) = delete;
  ExampleWithUserInitCollection(ExampleWithUserInitCollection&&) = default;
  ExampleWithUserInitCollection& operator=(ExampleWithUserInitCollection&&) = default;

//  ExampleWithUserInitCollection(ExampleWithUserInitVector* data, uint32_t collectionID);
  ~ExampleWithUserInitCollection();

  constexpr static auto typeName = "ExampleWithUserInitCollection";
  constexpr static auto valueTypeName = "ExampleWithUserInit";
  constexpr static auto dataTypeName = "ExampleWithUserInitData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithUserInitCollection* operator->() { return (ExampleWithUserInitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithUserInit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithUserInit create(Args&&... args);

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
  ExampleWithUserInit operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithUserInit operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithUserInit at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithUserInit at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithUserInit object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithUserInit object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithUserInitObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<std::int16_t> i16Val(const size_t nElem = 0) const;
  std::vector<std::array<float, 2>> floats(const size_t nElem = 0) const;
  std::vector<ex2::NamespaceStruct> s(const size_t nElem = 0) const;
  std::vector<double> d(const size_t nElem = 0) const;
  std::vector<CompWithInit> comp(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithUserInitCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithUserInitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithUserInitCollection& v);

template<typename... Args>
MutableExampleWithUserInit ExampleWithUserInitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithUserInitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithUserInit(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithUserInitCollection& collection);
#endif



#endif
