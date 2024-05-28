// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHit_CollectionData_H
#define DATAMODEL_ExampleHit_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHitObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleHitObjPointerContainer = std::deque<ExampleHitObj*>;
using ExampleHitDataContainer = std::vector<ExampleHitData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleHitCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleHitObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleHitCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleHitCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleHitCollectionData(const ExampleHitCollectionData&) = delete;
  ExampleHitCollectionData& operator=(const ExampleHitCollectionData&) = delete;
  ExampleHitCollectionData(ExampleHitCollectionData&& other) = default;
  ExampleHitCollectionData& operator=(ExampleHitCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleHitCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleHitDataContainer> m_data{nullptr};
};




#endif
