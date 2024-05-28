// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCCollection_H
#define DATAMODEL_ExampleMCCollection_H

// datamodel specific includes
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMC.h"
#include "datamodel/MutableExampleMC.h"
#include "datamodel/ExampleMCObj.h"
#include "datamodel/ExampleMCCollectionData.h"

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




class ExampleMCCollectionIterator {
public:
  ExampleMCCollectionIterator(size_t index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}), m_collection(collection) {}

  ExampleMCCollectionIterator(const ExampleMCCollectionIterator&) = delete;
  ExampleMCCollectionIterator& operator=(const ExampleMCCollectionIterator&) = delete;

  bool operator!=(const ExampleMCCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleMCCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleMC operator*();
  ExampleMC* operator->();
  ExampleMCCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};


class ExampleMCMutableCollectionIterator {
public:
  ExampleMCMutableCollectionIterator(size_t index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}), m_collection(collection) {}

  ExampleMCMutableCollectionIterator(const ExampleMCMutableCollectionIterator&) = delete;
  ExampleMCMutableCollectionIterator& operator=(const ExampleMCMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleMCMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleMCMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleMC operator*();
  MutableExampleMC* operator->();
  ExampleMCMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleMCCollection : public podio::CollectionBase {
public:
  using value_type = ExampleMC;
  using const_iterator = ExampleMCCollectionIterator;
  using iterator = ExampleMCMutableCollectionIterator;

  ExampleMCCollection();
  ExampleMCCollection(ExampleMCCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleMCCollection(const ExampleMCCollection& ) = delete;
  ExampleMCCollection& operator=(const ExampleMCCollection& ) = delete;
  ExampleMCCollection(ExampleMCCollection&&) = default;
  ExampleMCCollection& operator=(ExampleMCCollection&&) = default;

//  ExampleMCCollection(ExampleMCVector* data, uint32_t collectionID);
  ~ExampleMCCollection();

  constexpr static auto typeName = "ExampleMCCollection";
  constexpr static auto valueTypeName = "ExampleMC";
  constexpr static auto dataTypeName = "ExampleMCData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleMCCollection* operator->() { return (ExampleMCCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleMC create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleMC create(Args&&... args);

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
  ExampleMC operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleMC operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleMC at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleMC at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleMC object);
  /// Append an object to the (subset) collection
  void push_back(ExampleMC object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleMCObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<double> energy(const size_t nElem = 0) const;
  std::vector<int> PDG(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleMCCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleMCCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleMCCollection& v);

template<typename... Args>
MutableExampleMC ExampleMCCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleMCObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleMCData} constructor
  obj->m_parents = new std::vector<ExampleMC>();
  obj->m_daughters = new std::vector<ExampleMC>();
  m_storage.createRelations(obj);
  return MutableExampleMC(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleMCCollection& collection);
#endif



#endif
