// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMember_CollectionData_H
#define DATAMODEL_ExampleWithVectorMember_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMemberObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithVectorMemberObjPointerContainer = std::deque<ExampleWithVectorMemberObj*>;
using ExampleWithVectorMemberDataContainer = std::vector<ExampleWithVectorMemberData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithVectorMemberCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithVectorMemberObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithVectorMemberCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithVectorMemberCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithVectorMemberCollectionData(const ExampleWithVectorMemberCollectionData&) = delete;
  ExampleWithVectorMemberCollectionData& operator=(const ExampleWithVectorMemberCollectionData&) = delete;
  ExampleWithVectorMemberCollectionData(ExampleWithVectorMemberCollectionData&& other) = default;
  ExampleWithVectorMemberCollectionData& operator=(ExampleWithVectorMemberCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithVectorMemberCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleWithVectorMemberObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members
  podio::UVecPtr<int> m_vec_count{nullptr}; /// combined vector of all objects in collection
  std::vector<podio::UVecPtr<int>> m_vecs_count{}; /// pointers to individual member vectors

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithVectorMemberDataContainer> m_data{nullptr};
};




#endif
