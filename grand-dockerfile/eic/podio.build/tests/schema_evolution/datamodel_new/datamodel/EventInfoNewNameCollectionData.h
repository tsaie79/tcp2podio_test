// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewName_CollectionData_H
#define DATAMODEL_EventInfoNewName_CollectionData_H

// datamodel specific includes
#include "datamodel/EventInfoNewNameData.h"
#include "datamodel/EventInfoNewNameObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using EventInfoNewNameObjPointerContainer = std::deque<EventInfoNewNameObj*>;
using EventInfoNewNameDataContainer = std::vector<EventInfoNewNameData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class EventInfoNewNameCollectionData {
public:
  /**
   * The Objs of this collection
   */
  EventInfoNewNameObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  EventInfoNewNameCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  EventInfoNewNameCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  EventInfoNewNameCollectionData(const EventInfoNewNameCollectionData&) = delete;
  EventInfoNewNameCollectionData& operator=(const EventInfoNewNameCollectionData&) = delete;
  EventInfoNewNameCollectionData(EventInfoNewNameCollectionData&& other) = default;
  EventInfoNewNameCollectionData& operator=(EventInfoNewNameCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~EventInfoNewNameCollectionData() = default;

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
  std::unique_ptr<EventInfoNewNameDataContainer> m_data{nullptr};
};




#endif
