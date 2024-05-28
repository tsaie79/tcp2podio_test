// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewNameCollection_H
#define DATAMODEL_EventInfoNewNameCollection_H

// datamodel specific includes
#include "datamodel/EventInfoNewNameData.h"
#include "datamodel/EventInfoNewName.h"
#include "datamodel/MutableEventInfoNewName.h"
#include "datamodel/EventInfoNewNameObj.h"
#include "datamodel/EventInfoNewNameCollectionData.h"

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




class EventInfoNewNameCollectionIterator {
public:
  EventInfoNewNameCollectionIterator(size_t index, const EventInfoNewNameObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}), m_collection(collection) {}

  EventInfoNewNameCollectionIterator(const EventInfoNewNameCollectionIterator&) = delete;
  EventInfoNewNameCollectionIterator& operator=(const EventInfoNewNameCollectionIterator&) = delete;

  bool operator!=(const EventInfoNewNameCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoNewNameCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  EventInfoNewName operator*();
  EventInfoNewName* operator->();
  EventInfoNewNameCollectionIterator& operator++();

private:
  size_t m_index;
  EventInfoNewName m_object;
  const EventInfoNewNameObjPointerContainer* m_collection;
};


class EventInfoNewNameMutableCollectionIterator {
public:
  EventInfoNewNameMutableCollectionIterator(size_t index, const EventInfoNewNameObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}), m_collection(collection) {}

  EventInfoNewNameMutableCollectionIterator(const EventInfoNewNameMutableCollectionIterator&) = delete;
  EventInfoNewNameMutableCollectionIterator& operator=(const EventInfoNewNameMutableCollectionIterator&) = delete;

  bool operator!=(const EventInfoNewNameMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoNewNameMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableEventInfoNewName operator*();
  MutableEventInfoNewName* operator->();
  EventInfoNewNameMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableEventInfoNewName m_object;
  const EventInfoNewNameObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class EventInfoNewNameCollection : public podio::CollectionBase {
public:
  using value_type = EventInfoNewName;
  using const_iterator = EventInfoNewNameCollectionIterator;
  using iterator = EventInfoNewNameMutableCollectionIterator;

  EventInfoNewNameCollection();
  EventInfoNewNameCollection(EventInfoNewNameCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  EventInfoNewNameCollection(const EventInfoNewNameCollection& ) = delete;
  EventInfoNewNameCollection& operator=(const EventInfoNewNameCollection& ) = delete;
  EventInfoNewNameCollection(EventInfoNewNameCollection&&) = default;
  EventInfoNewNameCollection& operator=(EventInfoNewNameCollection&&) = default;

//  EventInfoNewNameCollection(EventInfoNewNameVector* data, uint32_t collectionID);
  ~EventInfoNewNameCollection();

  constexpr static auto typeName = "EventInfoNewNameCollection";
  constexpr static auto valueTypeName = "EventInfoNewName";
  constexpr static auto dataTypeName = "EventInfoNewNameData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  EventInfoNewNameCollection* operator->() { return (EventInfoNewNameCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableEventInfoNewName create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableEventInfoNewName create(Args&&... args);

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
  EventInfoNewName operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableEventInfoNewName operator[](std::size_t index);
  /// Returns the const object of given index
  EventInfoNewName at(std::size_t index) const;
  /// Returns the object of given index
  MutableEventInfoNewName at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableEventInfoNewName object);
  /// Append an object to the (subset) collection
  void push_back(EventInfoNewName object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (EventInfoNewNameObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<int> Number(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class EventInfoNewNameCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable EventInfoNewNameCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const EventInfoNewNameCollection& v);

template<typename... Args>
MutableEventInfoNewName EventInfoNewNameCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new EventInfoNewNameObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableEventInfoNewName(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoNewNameCollection& collection);
#endif



#endif
