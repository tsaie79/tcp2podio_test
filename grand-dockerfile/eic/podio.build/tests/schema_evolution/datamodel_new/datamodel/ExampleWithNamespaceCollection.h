// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceCollection_H
#define DATAMODEL_ExampleWithNamespaceCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespace.h"
#include "datamodel/MutableExampleWithNamespace.h"
#include "datamodel/ExampleWithNamespaceObj.h"
#include "datamodel/ExampleWithNamespaceCollectionData.h"

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



class ExampleWithNamespaceCollectionIterator {
public:
  ExampleWithNamespaceCollectionIterator(size_t index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}), m_collection(collection) {}

  ExampleWithNamespaceCollectionIterator(const ExampleWithNamespaceCollectionIterator&) = delete;
  ExampleWithNamespaceCollectionIterator& operator=(const ExampleWithNamespaceCollectionIterator&) = delete;

  bool operator!=(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithNamespace operator*();
  ExampleWithNamespace* operator->();
  ExampleWithNamespaceCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};


class ExampleWithNamespaceMutableCollectionIterator {
public:
  ExampleWithNamespaceMutableCollectionIterator(size_t index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}), m_collection(collection) {}

  ExampleWithNamespaceMutableCollectionIterator(const ExampleWithNamespaceMutableCollectionIterator&) = delete;
  ExampleWithNamespaceMutableCollectionIterator& operator=(const ExampleWithNamespaceMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithNamespaceMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithNamespaceMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithNamespace operator*();
  MutableExampleWithNamespace* operator->();
  ExampleWithNamespaceMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithNamespaceCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithNamespace;
  using const_iterator = ExampleWithNamespaceCollectionIterator;
  using iterator = ExampleWithNamespaceMutableCollectionIterator;

  ExampleWithNamespaceCollection();
  ExampleWithNamespaceCollection(ExampleWithNamespaceCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithNamespaceCollection(const ExampleWithNamespaceCollection& ) = delete;
  ExampleWithNamespaceCollection& operator=(const ExampleWithNamespaceCollection& ) = delete;
  ExampleWithNamespaceCollection(ExampleWithNamespaceCollection&&) = default;
  ExampleWithNamespaceCollection& operator=(ExampleWithNamespaceCollection&&) = default;

//  ExampleWithNamespaceCollection(ExampleWithNamespaceVector* data, uint32_t collectionID);
  ~ExampleWithNamespaceCollection();

  constexpr static auto typeName = "ex42::ExampleWithNamespaceCollection";
  constexpr static auto valueTypeName = "ex42::ExampleWithNamespace";
  constexpr static auto dataTypeName = "ex42::ExampleWithNamespaceData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithNamespaceCollection* operator->() { return (ExampleWithNamespaceCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithNamespace create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithNamespace create(Args&&... args);

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
  ExampleWithNamespace operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithNamespace operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithNamespace at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithNamespace at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithNamespace object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithNamespace object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithNamespaceObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<ex2::NamespaceStruct> component(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithNamespaceCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithNamespaceCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespaceCollection& v);

template<typename... Args>
MutableExampleWithNamespace ExampleWithNamespaceCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithNamespaceObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithNamespace(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithNamespaceCollection& collection);
#endif

} // namespace ex42


#endif
