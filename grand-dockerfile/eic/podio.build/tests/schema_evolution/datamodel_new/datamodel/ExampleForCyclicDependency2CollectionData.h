// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2_CollectionData_H
#define DATAMODEL_ExampleForCyclicDependency2_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency1.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleForCyclicDependency2ObjPointerContainer = std::deque<ExampleForCyclicDependency2Obj*>;
using ExampleForCyclicDependency2DataContainer = std::vector<ExampleForCyclicDependency2Data>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleForCyclicDependency2CollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleForCyclicDependency2ObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleForCyclicDependency2CollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleForCyclicDependency2CollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleForCyclicDependency2CollectionData(const ExampleForCyclicDependency2CollectionData&) = delete;
  ExampleForCyclicDependency2CollectionData& operator=(const ExampleForCyclicDependency2CollectionData&) = delete;
  ExampleForCyclicDependency2CollectionData(ExampleForCyclicDependency2CollectionData&& other) = default;
  ExampleForCyclicDependency2CollectionData& operator=(ExampleForCyclicDependency2CollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleForCyclicDependency2CollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleForCyclicDependency1> m_rel_ref{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleForCyclicDependency2DataContainer> m_data{nullptr};
};




#endif
