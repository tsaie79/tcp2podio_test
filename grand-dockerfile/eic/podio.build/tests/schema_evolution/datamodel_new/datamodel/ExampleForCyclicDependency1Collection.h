// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1Collection_H
#define DATAMODEL_ExampleForCyclicDependency1Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1.h"
#include "datamodel/MutableExampleForCyclicDependency1.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency1CollectionData.h"

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




class ExampleForCyclicDependency1CollectionIterator {
public:
  ExampleForCyclicDependency1CollectionIterator(size_t index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency1CollectionIterator(const ExampleForCyclicDependency1CollectionIterator&) = delete;
  ExampleForCyclicDependency1CollectionIterator& operator=(const ExampleForCyclicDependency1CollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleForCyclicDependency1 operator*();
  ExampleForCyclicDependency1* operator->();
  ExampleForCyclicDependency1CollectionIterator& operator++();

private:
  size_t m_index;
  ExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};


class ExampleForCyclicDependency1MutableCollectionIterator {
public:
  ExampleForCyclicDependency1MutableCollectionIterator(size_t index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency1MutableCollectionIterator(const ExampleForCyclicDependency1MutableCollectionIterator&) = delete;
  ExampleForCyclicDependency1MutableCollectionIterator& operator=(const ExampleForCyclicDependency1MutableCollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency1MutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency1MutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleForCyclicDependency1 operator*();
  MutableExampleForCyclicDependency1* operator->();
  ExampleForCyclicDependency1MutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency1Collection : public podio::CollectionBase {
public:
  using value_type = ExampleForCyclicDependency1;
  using const_iterator = ExampleForCyclicDependency1CollectionIterator;
  using iterator = ExampleForCyclicDependency1MutableCollectionIterator;

  ExampleForCyclicDependency1Collection();
  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1CollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleForCyclicDependency1Collection(const ExampleForCyclicDependency1Collection& ) = delete;
  ExampleForCyclicDependency1Collection& operator=(const ExampleForCyclicDependency1Collection& ) = delete;
  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Collection&&) = default;
  ExampleForCyclicDependency1Collection& operator=(ExampleForCyclicDependency1Collection&&) = default;

//  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Vector* data, uint32_t collectionID);
  ~ExampleForCyclicDependency1Collection();

  constexpr static auto typeName = "ExampleForCyclicDependency1Collection";
  constexpr static auto valueTypeName = "ExampleForCyclicDependency1";
  constexpr static auto dataTypeName = "ExampleForCyclicDependency1Data";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency1Collection* operator->() { return (ExampleForCyclicDependency1Collection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleForCyclicDependency1 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleForCyclicDependency1 create(Args&&... args);

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
  ExampleForCyclicDependency1 operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleForCyclicDependency1 operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleForCyclicDependency1 at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleForCyclicDependency1 at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleForCyclicDependency1 object);
  /// Append an object to the (subset) collection
  void push_back(ExampleForCyclicDependency1 object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleForCyclicDependency1Obj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  friend class ExampleForCyclicDependency1CollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleForCyclicDependency1CollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1Collection& v);

template<typename... Args>
MutableExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleForCyclicDependency1Obj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1Collection& collection);
#endif



#endif
