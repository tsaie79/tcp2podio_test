// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedTypeCollection_H
#define DATAMODEL_ExampleOfDroppedTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"
#include "datamodel/ExampleOfDroppedType.h"
#include "datamodel/MutableExampleOfDroppedType.h"
#include "datamodel/ExampleOfDroppedTypeObj.h"
#include "datamodel/ExampleOfDroppedTypeCollectionData.h"

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




class ExampleOfDroppedTypeCollectionIterator {
public:
  ExampleOfDroppedTypeCollectionIterator(size_t index, const ExampleOfDroppedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}), m_collection(collection) {}

  ExampleOfDroppedTypeCollectionIterator(const ExampleOfDroppedTypeCollectionIterator&) = delete;
  ExampleOfDroppedTypeCollectionIterator& operator=(const ExampleOfDroppedTypeCollectionIterator&) = delete;

  bool operator!=(const ExampleOfDroppedTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleOfDroppedTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleOfDroppedType operator*();
  ExampleOfDroppedType* operator->();
  ExampleOfDroppedTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleOfDroppedType m_object;
  const ExampleOfDroppedTypeObjPointerContainer* m_collection;
};


class ExampleOfDroppedTypeMutableCollectionIterator {
public:
  ExampleOfDroppedTypeMutableCollectionIterator(size_t index, const ExampleOfDroppedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}), m_collection(collection) {}

  ExampleOfDroppedTypeMutableCollectionIterator(const ExampleOfDroppedTypeMutableCollectionIterator&) = delete;
  ExampleOfDroppedTypeMutableCollectionIterator& operator=(const ExampleOfDroppedTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleOfDroppedTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleOfDroppedTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleOfDroppedType operator*();
  MutableExampleOfDroppedType* operator->();
  ExampleOfDroppedTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleOfDroppedType m_object;
  const ExampleOfDroppedTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleOfDroppedTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExampleOfDroppedType;
  using const_iterator = ExampleOfDroppedTypeCollectionIterator;
  using iterator = ExampleOfDroppedTypeMutableCollectionIterator;

  ExampleOfDroppedTypeCollection();
  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleOfDroppedTypeCollection(const ExampleOfDroppedTypeCollection& ) = delete;
  ExampleOfDroppedTypeCollection& operator=(const ExampleOfDroppedTypeCollection& ) = delete;
  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeCollection&&) = default;
  ExampleOfDroppedTypeCollection& operator=(ExampleOfDroppedTypeCollection&&) = default;

//  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeVector* data, uint32_t collectionID);
  ~ExampleOfDroppedTypeCollection();

  constexpr static auto typeName = "ExampleOfDroppedTypeCollection";
  constexpr static auto valueTypeName = "ExampleOfDroppedType";
  constexpr static auto dataTypeName = "ExampleOfDroppedTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleOfDroppedTypeCollection* operator->() { return (ExampleOfDroppedTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleOfDroppedType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleOfDroppedType create(Args&&... args);

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
  ExampleOfDroppedType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleOfDroppedType operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleOfDroppedType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleOfDroppedType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleOfDroppedType object);
  /// Append an object to the (subset) collection
  void push_back(ExampleOfDroppedType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleOfDroppedTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<int> x(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleOfDroppedTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleOfDroppedTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleOfDroppedTypeCollection& v);

template<typename... Args>
MutableExampleOfDroppedType ExampleOfDroppedTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleOfDroppedTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleOfDroppedTypeCollection& collection);
#endif



#endif
