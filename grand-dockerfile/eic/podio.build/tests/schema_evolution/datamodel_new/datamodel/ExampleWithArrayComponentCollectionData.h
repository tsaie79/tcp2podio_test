// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponent_CollectionData_H
#define DATAMODEL_ExampleWithArrayComponent_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayComponentData.h"
#include "datamodel/ExampleWithArrayComponentObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithArrayComponentObjPointerContainer = std::deque<ExampleWithArrayComponentObj*>;
using ExampleWithArrayComponentDataContainer = std::vector<ExampleWithArrayComponentData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithArrayComponentCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithArrayComponentObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithArrayComponentCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithArrayComponentCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithArrayComponentCollectionData(const ExampleWithArrayComponentCollectionData&) = delete;
  ExampleWithArrayComponentCollectionData& operator=(const ExampleWithArrayComponentCollectionData&) = delete;
  ExampleWithArrayComponentCollectionData(ExampleWithArrayComponentCollectionData&& other) = default;
  ExampleWithArrayComponentCollectionData& operator=(ExampleWithArrayComponentCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithArrayComponentCollectionData() = default;

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
  std::unique_ptr<ExampleWithArrayComponentDataContainer> m_data{nullptr};
};




#endif
