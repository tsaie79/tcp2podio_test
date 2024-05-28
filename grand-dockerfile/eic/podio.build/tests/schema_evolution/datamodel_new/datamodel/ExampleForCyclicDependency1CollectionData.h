// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1_CollectionData_H
#define DATAMODEL_ExampleForCyclicDependency1_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency2.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleForCyclicDependency1ObjPointerContainer = std::deque<ExampleForCyclicDependency1Obj*>;
using ExampleForCyclicDependency1DataContainer = std::vector<ExampleForCyclicDependency1Data>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleForCyclicDependency1CollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleForCyclicDependency1ObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleForCyclicDependency1CollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleForCyclicDependency1CollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleForCyclicDependency1CollectionData(const ExampleForCyclicDependency1CollectionData&) = delete;
  ExampleForCyclicDependency1CollectionData& operator=(const ExampleForCyclicDependency1CollectionData&) = delete;
  ExampleForCyclicDependency1CollectionData(ExampleForCyclicDependency1CollectionData&& other) = default;
  ExampleForCyclicDependency1CollectionData& operator=(ExampleForCyclicDependency1CollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleForCyclicDependency1CollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleForCyclicDependency2> m_rel_ref{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleForCyclicDependency1DataContainer> m_data{nullptr};
};




#endif
