// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleCluster_CollectionData_H
#define DATAMODEL_ExampleCluster_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleHit.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleClusterObjPointerContainer = std::deque<ExampleClusterObj*>;
using ExampleClusterDataContainer = std::vector<ExampleClusterData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleClusterCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleClusterObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleClusterCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleClusterCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleClusterCollectionData(const ExampleClusterCollectionData&) = delete;
  ExampleClusterCollectionData& operator=(const ExampleClusterCollectionData&) = delete;
  ExampleClusterCollectionData(ExampleClusterCollectionData&& other) = default;
  ExampleClusterCollectionData& operator=(ExampleClusterCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleClusterCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleClusterObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleHit> m_rel_Hits;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleHit>> m_rel_Hits_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleCluster> m_rel_Clusters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleCluster>> m_rel_Clusters_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleClusterDataContainer> m_data{nullptr};
};




#endif
