// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2Collection_H
#define DATAMODEL_ExampleForCyclicDependency2Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2.h"
#include "datamodel/MutableExampleForCyclicDependency2.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency2CollectionData.h"

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




class ExampleForCyclicDependency2CollectionIterator {
public:
  ExampleForCyclicDependency2CollectionIterator(size_t index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency2CollectionIterator(const ExampleForCyclicDependency2CollectionIterator&) = delete;
  ExampleForCyclicDependency2CollectionIterator& operator=(const ExampleForCyclicDependency2CollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleForCyclicDependency2 operator*();
  ExampleForCyclicDependency2* operator->();
  ExampleForCyclicDependency2CollectionIterator& operator++();

private:
  size_t m_index;
  ExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};


class ExampleForCyclicDependency2MutableCollectionIterator {
public:
  ExampleForCyclicDependency2MutableCollectionIterator(size_t index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency2MutableCollectionIterator(const ExampleForCyclicDependency2MutableCollectionIterator&) = delete;
  ExampleForCyclicDependency2MutableCollectionIterator& operator=(const ExampleForCyclicDependency2MutableCollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency2MutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency2MutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleForCyclicDependency2 operator*();
  MutableExampleForCyclicDependency2* operator->();
  ExampleForCyclicDependency2MutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency2Collection : public podio::CollectionBase {
public:
  using value_type = ExampleForCyclicDependency2;
  using const_iterator = ExampleForCyclicDependency2CollectionIterator;
  using iterator = ExampleForCyclicDependency2MutableCollectionIterator;

  ExampleForCyclicDependency2Collection();
  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2CollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleForCyclicDependency2Collection(const ExampleForCyclicDependency2Collection& ) = delete;
  ExampleForCyclicDependency2Collection& operator=(const ExampleForCyclicDependency2Collection& ) = delete;
  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Collection&&) = default;
  ExampleForCyclicDependency2Collection& operator=(ExampleForCyclicDependency2Collection&&) = default;

//  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Vector* data, uint32_t collectionID);
  ~ExampleForCyclicDependency2Collection();

  constexpr static auto typeName = "ExampleForCyclicDependency2Collection";
  constexpr static auto valueTypeName = "ExampleForCyclicDependency2";
  constexpr static auto dataTypeName = "ExampleForCyclicDependency2Data";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency2Collection* operator->() { return (ExampleForCyclicDependency2Collection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleForCyclicDependency2 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleForCyclicDependency2 create(Args&&... args);

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
  ExampleForCyclicDependency2 operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleForCyclicDependency2 operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleForCyclicDependency2 at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleForCyclicDependency2 at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleForCyclicDependency2 object);
  /// Append an object to the (subset) collection
  void push_back(ExampleForCyclicDependency2 object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleForCyclicDependency2Obj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  friend class ExampleForCyclicDependency2CollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleForCyclicDependency2CollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2Collection& v);

template<typename... Args>
MutableExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleForCyclicDependency2Obj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2Collection& collection);
#endif



#endif
