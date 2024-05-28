// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArray_CollectionData_H
#define DATAMODEL_ExampleWithArray_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArrayObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithArrayObjPointerContainer = std::deque<ExampleWithArrayObj*>;
using ExampleWithArrayDataContainer = std::vector<ExampleWithArrayData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithArrayCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithArrayObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithArrayCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithArrayCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithArrayCollectionData(const ExampleWithArrayCollectionData&) = delete;
  ExampleWithArrayCollectionData& operator=(const ExampleWithArrayCollectionData&) = delete;
  ExampleWithArrayCollectionData(ExampleWithArrayCollectionData&& other) = default;
  ExampleWithArrayCollectionData& operator=(ExampleWithArrayCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithArrayCollectionData() = default;

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
  std::unique_ptr<ExampleWithArrayDataContainer> m_data{nullptr};
};




#endif
