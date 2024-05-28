// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberCollection_H
#define DATAMODEL_ExampleWithVectorMemberCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMember.h"
#include "datamodel/MutableExampleWithVectorMember.h"
#include "datamodel/ExampleWithVectorMemberObj.h"
#include "datamodel/ExampleWithVectorMemberCollectionData.h"

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




class ExampleWithVectorMemberCollectionIterator {
public:
  ExampleWithVectorMemberCollectionIterator(size_t index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}), m_collection(collection) {}

  ExampleWithVectorMemberCollectionIterator(const ExampleWithVectorMemberCollectionIterator&) = delete;
  ExampleWithVectorMemberCollectionIterator& operator=(const ExampleWithVectorMemberCollectionIterator&) = delete;

  bool operator!=(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithVectorMember operator*();
  ExampleWithVectorMember* operator->();
  ExampleWithVectorMemberCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};


class ExampleWithVectorMemberMutableCollectionIterator {
public:
  ExampleWithVectorMemberMutableCollectionIterator(size_t index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}), m_collection(collection) {}

  ExampleWithVectorMemberMutableCollectionIterator(const ExampleWithVectorMemberMutableCollectionIterator&) = delete;
  ExampleWithVectorMemberMutableCollectionIterator& operator=(const ExampleWithVectorMemberMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithVectorMemberMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithVectorMemberMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithVectorMember operator*();
  MutableExampleWithVectorMember* operator->();
  ExampleWithVectorMemberMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithVectorMemberCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithVectorMember;
  using const_iterator = ExampleWithVectorMemberCollectionIterator;
  using iterator = ExampleWithVectorMemberMutableCollectionIterator;

  ExampleWithVectorMemberCollection();
  ExampleWithVectorMemberCollection(ExampleWithVectorMemberCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithVectorMemberCollection(const ExampleWithVectorMemberCollection& ) = delete;
  ExampleWithVectorMemberCollection& operator=(const ExampleWithVectorMemberCollection& ) = delete;
  ExampleWithVectorMemberCollection(ExampleWithVectorMemberCollection&&) = default;
  ExampleWithVectorMemberCollection& operator=(ExampleWithVectorMemberCollection&&) = default;

//  ExampleWithVectorMemberCollection(ExampleWithVectorMemberVector* data, uint32_t collectionID);
  ~ExampleWithVectorMemberCollection();

  constexpr static auto typeName = "ExampleWithVectorMemberCollection";
  constexpr static auto valueTypeName = "ExampleWithVectorMember";
  constexpr static auto dataTypeName = "ExampleWithVectorMemberData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithVectorMemberCollection* operator->() { return (ExampleWithVectorMemberCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithVectorMember create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithVectorMember create(Args&&... args);

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
  ExampleWithVectorMember operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithVectorMember operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithVectorMember at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithVectorMember at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithVectorMember object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithVectorMember object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithVectorMemberObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  friend class ExampleWithVectorMemberCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithVectorMemberCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMemberCollection& v);

template<typename... Args>
MutableExampleWithVectorMember ExampleWithVectorMemberCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithVectorMemberObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithVectorMemberData} constructor
  obj->m_count = new std::vector<int>();
  m_storage.createRelations(obj);
  return MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithVectorMemberCollection& collection);
#endif



#endif
