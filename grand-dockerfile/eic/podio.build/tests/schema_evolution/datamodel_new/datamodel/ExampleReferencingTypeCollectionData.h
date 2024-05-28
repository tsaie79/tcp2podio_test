// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingType_CollectionData_H
#define DATAMODEL_ExampleReferencingType_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleCluster.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleReferencingTypeObjPointerContainer = std::deque<ExampleReferencingTypeObj*>;
using ExampleReferencingTypeDataContainer = std::vector<ExampleReferencingTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleReferencingTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleReferencingTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleReferencingTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleReferencingTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleReferencingTypeCollectionData(const ExampleReferencingTypeCollectionData&) = delete;
  ExampleReferencingTypeCollectionData& operator=(const ExampleReferencingTypeCollectionData&) = delete;
  ExampleReferencingTypeCollectionData(ExampleReferencingTypeCollectionData&& other) = default;
  ExampleReferencingTypeCollectionData& operator=(ExampleReferencingTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleReferencingTypeCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleReferencingTypeObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleCluster> m_rel_Clusters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleCluster>> m_rel_Clusters_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleReferencingType> m_rel_Refs;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleReferencingType>> m_rel_Refs_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleReferencingTypeDataContainer> m_data{nullptr};
};




#endif
