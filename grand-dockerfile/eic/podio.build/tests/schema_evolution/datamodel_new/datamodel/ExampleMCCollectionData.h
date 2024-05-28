// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMC_CollectionData_H
#define DATAMODEL_ExampleMC_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMCObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleMCObjPointerContainer = std::deque<ExampleMCObj*>;
using ExampleMCDataContainer = std::vector<ExampleMCData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleMCCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleMCObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleMCCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleMCCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleMCCollectionData(const ExampleMCCollectionData&) = delete;
  ExampleMCCollectionData& operator=(const ExampleMCCollectionData&) = delete;
  ExampleMCCollectionData(ExampleMCCollectionData&& other) = default;
  ExampleMCCollectionData& operator=(ExampleMCCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleMCCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleMCObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleMC> m_rel_parents;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleMC>> m_rel_parents_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleMC> m_rel_daughters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleMC>> m_rel_daughters_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleMCDataContainer> m_data{nullptr};
};




#endif
