// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespace_CollectionData_H
#define DATAMODEL_ExampleWithNamespace_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespaceObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace ex42 {


using ExampleWithNamespaceObjPointerContainer = std::deque<ExampleWithNamespaceObj*>;
using ExampleWithNamespaceDataContainer = std::vector<ExampleWithNamespaceData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithNamespaceCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithNamespaceObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithNamespaceCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithNamespaceCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithNamespaceCollectionData(const ExampleWithNamespaceCollectionData&) = delete;
  ExampleWithNamespaceCollectionData& operator=(const ExampleWithNamespaceCollectionData&) = delete;
  ExampleWithNamespaceCollectionData(ExampleWithNamespaceCollectionData&& other) = default;
  ExampleWithNamespaceCollectionData& operator=(ExampleWithNamespaceCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithNamespaceCollectionData() = default;

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
  std::unique_ptr<ExampleWithNamespaceDataContainer> m_data{nullptr};
};


} // namespace ex42


#endif
