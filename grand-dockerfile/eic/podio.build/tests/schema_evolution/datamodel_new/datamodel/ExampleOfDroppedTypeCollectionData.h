// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedType_CollectionData_H
#define DATAMODEL_ExampleOfDroppedType_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"
#include "datamodel/ExampleOfDroppedTypeObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleOfDroppedTypeObjPointerContainer = std::deque<ExampleOfDroppedTypeObj*>;
using ExampleOfDroppedTypeDataContainer = std::vector<ExampleOfDroppedTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleOfDroppedTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleOfDroppedTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleOfDroppedTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleOfDroppedTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleOfDroppedTypeCollectionData(const ExampleOfDroppedTypeCollectionData&) = delete;
  ExampleOfDroppedTypeCollectionData& operator=(const ExampleOfDroppedTypeCollectionData&) = delete;
  ExampleOfDroppedTypeCollectionData(ExampleOfDroppedTypeCollectionData&& other) = default;
  ExampleOfDroppedTypeCollectionData& operator=(ExampleOfDroppedTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleOfDroppedTypeCollectionData() = default;

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
  std::unique_ptr<ExampleOfDroppedTypeDataContainer> m_data{nullptr};
};




#endif
