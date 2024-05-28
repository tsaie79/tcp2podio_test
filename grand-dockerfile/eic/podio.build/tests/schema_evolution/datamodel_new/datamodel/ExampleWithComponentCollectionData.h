// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponent_CollectionData_H
#define DATAMODEL_ExampleWithComponent_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponentObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithComponentObjPointerContainer = std::deque<ExampleWithComponentObj*>;
using ExampleWithComponentDataContainer = std::vector<ExampleWithComponentData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithComponentCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithComponentObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithComponentCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithComponentCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithComponentCollectionData(const ExampleWithComponentCollectionData&) = delete;
  ExampleWithComponentCollectionData& operator=(const ExampleWithComponentCollectionData&) = delete;
  ExampleWithComponentCollectionData(ExampleWithComponentCollectionData&& other) = default;
  ExampleWithComponentCollectionData& operator=(ExampleWithComponentCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithComponentCollectionData() = default;

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
  std::unique_ptr<ExampleWithComponentDataContainer> m_data{nullptr};
};




#endif
