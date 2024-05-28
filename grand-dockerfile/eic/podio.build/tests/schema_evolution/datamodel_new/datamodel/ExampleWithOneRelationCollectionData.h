// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelation_CollectionData_H
#define DATAMODEL_ExampleWithOneRelation_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleCluster.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithOneRelationObjPointerContainer = std::deque<ExampleWithOneRelationObj*>;
using ExampleWithOneRelationDataContainer = std::vector<ExampleWithOneRelationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithOneRelationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithOneRelationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithOneRelationCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithOneRelationCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithOneRelationCollectionData(const ExampleWithOneRelationCollectionData&) = delete;
  ExampleWithOneRelationCollectionData& operator=(const ExampleWithOneRelationCollectionData&) = delete;
  ExampleWithOneRelationCollectionData(ExampleWithOneRelationCollectionData&& other) = default;
  ExampleWithOneRelationCollectionData& operator=(ExampleWithOneRelationCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithOneRelationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleCluster> m_rel_cluster{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithOneRelationDataContainer> m_data{nullptr};
};




#endif
