// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitCollection_H
#define DATAMODEL_ExampleHitCollection_H

// datamodel specific includes
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHit.h"
#include "datamodel/MutableExampleHit.h"
#include "datamodel/ExampleHitObj.h"
#include "datamodel/ExampleHitCollectionData.h"

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




class ExampleHitCollectionIterator {
public:
  ExampleHitCollectionIterator(size_t index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}), m_collection(collection) {}

  ExampleHitCollectionIterator(const ExampleHitCollectionIterator&) = delete;
  ExampleHitCollectionIterator& operator=(const ExampleHitCollectionIterator&) = delete;

  bool operator!=(const ExampleHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleHitCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleHit operator*();
  ExampleHit* operator->();
  ExampleHitCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};


class ExampleHitMutableCollectionIterator {
public:
  ExampleHitMutableCollectionIterator(size_t index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}), m_collection(collection) {}

  ExampleHitMutableCollectionIterator(const ExampleHitMutableCollectionIterator&) = delete;
  ExampleHitMutableCollectionIterator& operator=(const ExampleHitMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleHitMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleHit operator*();
  MutableExampleHit* operator->();
  ExampleHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleHitCollection : public podio::CollectionBase {
public:
  using value_type = ExampleHit;
  using const_iterator = ExampleHitCollectionIterator;
  using iterator = ExampleHitMutableCollectionIterator;

  ExampleHitCollection();
  ExampleHitCollection(ExampleHitCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleHitCollection(const ExampleHitCollection& ) = delete;
  ExampleHitCollection& operator=(const ExampleHitCollection& ) = delete;
  ExampleHitCollection(ExampleHitCollection&&) = default;
  ExampleHitCollection& operator=(ExampleHitCollection&&) = default;

//  ExampleHitCollection(ExampleHitVector* data, uint32_t collectionID);
  ~ExampleHitCollection();

  constexpr static auto typeName = "ExampleHitCollection";
  constexpr static auto valueTypeName = "ExampleHit";
  constexpr static auto dataTypeName = "ExampleHitData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleHitCollection* operator->() { return (ExampleHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleHit create(Args&&... args);

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
  ExampleHit operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleHit operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleHit at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleHit at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleHit object);
  /// Append an object to the (subset) collection
  void push_back(ExampleHit object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleHitObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<unsigned long long> cellID(const size_t nElem = 0) const;
  std::vector<double> x(const size_t nElem = 0) const;
  std::vector<double> y(const size_t nElem = 0) const;
  std::vector<double> z(const size_t nElem = 0) const;
  std::vector<double> energy(const size_t nElem = 0) const;
  std::vector<double> t(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleHitCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleHitCollection& v);

template<typename... Args>
MutableExampleHit ExampleHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleHit(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleHitCollection& collection);
#endif



#endif
