// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelations_CollectionData_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelations_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithNamespace.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithDifferentNamespaceRelationsObjPointerContainer = std::deque<ExampleWithDifferentNamespaceRelationsObj*>;
using ExampleWithDifferentNamespaceRelationsDataContainer = std::vector<ExampleWithDifferentNamespaceRelationsData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithDifferentNamespaceRelationsCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithDifferentNamespaceRelationsObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithDifferentNamespaceRelationsCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithDifferentNamespaceRelationsCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithDifferentNamespaceRelationsCollectionData(const ExampleWithDifferentNamespaceRelationsCollectionData&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionData& operator=(const ExampleWithDifferentNamespaceRelationsCollectionData&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionData(ExampleWithDifferentNamespaceRelationsCollectionData&& other) = default;
  ExampleWithDifferentNamespaceRelationsCollectionData& operator=(ExampleWithDifferentNamespaceRelationsCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithDifferentNamespaceRelationsCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleWithDifferentNamespaceRelationsObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<ex42::ExampleWithNamespace> m_rel_rels;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<ex42::ExampleWithNamespace>> m_rel_rels_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<ex42::ExampleWithNamespace> m_rel_rel{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithDifferentNamespaceRelationsDataContainer> m_data{nullptr};
};




#endif
