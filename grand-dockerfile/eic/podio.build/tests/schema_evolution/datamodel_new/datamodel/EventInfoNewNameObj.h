// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewNameOBJ_H
#define DATAMODEL_EventInfoNewNameOBJ_H

// data model specific includes
#include "datamodel/EventInfoNewNameData.h"

#include "podio/ObjectID.h"




class EventInfoNewName;

class EventInfoNewNameObj {
public:
  /// constructor
  EventInfoNewNameObj();
  /// copy constructor (does a deep-copy of relation containers)
  EventInfoNewNameObj(const EventInfoNewNameObj&);
  /// constructor from ObjectID and EventInfoNewNameData
  /// does not initialize the internal relation containers
  EventInfoNewNameObj(const podio::ObjectID id, EventInfoNewNameData data);
  /// No assignment operator
  EventInfoNewNameObj& operator=(const EventInfoNewNameObj&) = delete;
  virtual ~EventInfoNewNameObj() = default;

public:
  podio::ObjectID id;
  EventInfoNewNameData data;
};



#endif
