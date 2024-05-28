// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegers_CollectionData_H
#define DATAMODEL_ExampleWithFixedWidthIntegers_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"
#include "datamodel/ExampleWithFixedWidthIntegersObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithFixedWidthIntegersObjPointerContainer = std::deque<ExampleWithFixedWidthIntegersObj*>;
using ExampleWithFixedWidthIntegersDataContainer = std::vector<ExampleWithFixedWidthIntegersData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithFixedWidthIntegersCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithFixedWidthIntegersObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithFixedWidthIntegersCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithFixedWidthIntegersCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithFixedWidthIntegersCollectionData(const ExampleWithFixedWidthIntegersCollectionData&) = delete;
  ExampleWithFixedWidthIntegersCollectionData& operator=(const ExampleWithFixedWidthIntegersCollectionData&) = delete;
  ExampleWithFixedWidthIntegersCollectionData(ExampleWithFixedWidthIntegersCollectionData&& other) = default;
  ExampleWithFixedWidthIntegersCollectionData& operator=(ExampleWithFixedWidthIntegersCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithFixedWidthIntegersCollectionData() = default;

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
  std::unique_ptr<ExampleWithFixedWidthIntegersDataContainer> m_data{nullptr};
};




#endif
