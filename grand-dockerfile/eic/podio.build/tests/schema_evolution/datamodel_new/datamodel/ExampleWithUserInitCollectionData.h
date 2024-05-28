// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInit_CollectionData_H
#define DATAMODEL_ExampleWithUserInit_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithUserInitData.h"
#include "datamodel/ExampleWithUserInitObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithUserInitObjPointerContainer = std::deque<ExampleWithUserInitObj*>;
using ExampleWithUserInitDataContainer = std::vector<ExampleWithUserInitData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithUserInitCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithUserInitObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithUserInitCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithUserInitCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithUserInitCollectionData(const ExampleWithUserInitCollectionData&) = delete;
  ExampleWithUserInitCollectionData& operator=(const ExampleWithUserInitCollectionData&) = delete;
  ExampleWithUserInitCollectionData(ExampleWithUserInitCollectionData&& other) = default;
  ExampleWithUserInitCollectionData& operator=(ExampleWithUserInitCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithUserInitCollectionData() = default;

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
  std::unique_ptr<ExampleWithUserInitDataContainer> m_data{nullptr};
};




#endif
