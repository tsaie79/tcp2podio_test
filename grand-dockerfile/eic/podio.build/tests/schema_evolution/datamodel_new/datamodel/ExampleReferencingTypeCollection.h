// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeCollection_H
#define DATAMODEL_ExampleReferencingTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingType.h"
#include "datamodel/MutableExampleReferencingType.h"
#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleReferencingTypeCollectionData.h"

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




class ExampleReferencingTypeCollectionIterator {
public:
  ExampleReferencingTypeCollectionIterator(size_t index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}), m_collection(collection) {}

  ExampleReferencingTypeCollectionIterator(const ExampleReferencingTypeCollectionIterator&) = delete;
  ExampleReferencingTypeCollectionIterator& operator=(const ExampleReferencingTypeCollectionIterator&) = delete;

  bool operator!=(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleReferencingType operator*();
  ExampleReferencingType* operator->();
  ExampleReferencingTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};


class ExampleReferencingTypeMutableCollectionIterator {
public:
  ExampleReferencingTypeMutableCollectionIterator(size_t index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}), m_collection(collection) {}

  ExampleReferencingTypeMutableCollectionIterator(const ExampleReferencingTypeMutableCollectionIterator&) = delete;
  ExampleReferencingTypeMutableCollectionIterator& operator=(const ExampleReferencingTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleReferencingTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleReferencingTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleReferencingType operator*();
  MutableExampleReferencingType* operator->();
  ExampleReferencingTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleReferencingTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExampleReferencingType;
  using const_iterator = ExampleReferencingTypeCollectionIterator;
  using iterator = ExampleReferencingTypeMutableCollectionIterator;

  ExampleReferencingTypeCollection();
  ExampleReferencingTypeCollection(ExampleReferencingTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleReferencingTypeCollection(const ExampleReferencingTypeCollection& ) = delete;
  ExampleReferencingTypeCollection& operator=(const ExampleReferencingTypeCollection& ) = delete;
  ExampleReferencingTypeCollection(ExampleReferencingTypeCollection&&) = default;
  ExampleReferencingTypeCollection& operator=(ExampleReferencingTypeCollection&&) = default;

//  ExampleReferencingTypeCollection(ExampleReferencingTypeVector* data, uint32_t collectionID);
  ~ExampleReferencingTypeCollection();

  constexpr static auto typeName = "ExampleReferencingTypeCollection";
  constexpr static auto valueTypeName = "ExampleReferencingType";
  constexpr static auto dataTypeName = "ExampleReferencingTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleReferencingTypeCollection* operator->() { return (ExampleReferencingTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleReferencingType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleReferencingType create(Args&&... args);

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
  ExampleReferencingType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleReferencingType operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleReferencingType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleReferencingType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleReferencingType object);
  /// Append an object to the (subset) collection
  void push_back(ExampleReferencingType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleReferencingTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  friend class ExampleReferencingTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleReferencingTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleReferencingTypeCollection& v);

template<typename... Args>
MutableExampleReferencingType ExampleReferencingTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleReferencingTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleReferencingTypeData} constructor
  obj->m_Clusters = new std::vector<ExampleCluster>();
  obj->m_Refs = new std::vector<ExampleReferencingType>();
  m_storage.createRelations(obj);
  return MutableExampleReferencingType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleReferencingTypeCollection& collection);
#endif



#endif
