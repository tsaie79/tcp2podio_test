// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitOBJ_H
#define DATAMODEL_ExampleHitOBJ_H

// data model specific includes
#include "datamodel/ExampleHitData.h"

#include "podio/ObjectID.h"




class ExampleHit;

class ExampleHitObj {
public:
  /// constructor
  ExampleHitObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleHitObj(const ExampleHitObj&);
  /// constructor from ObjectID and ExampleHitData
  /// does not initialize the internal relation containers
  ExampleHitObj(const podio::ObjectID id, ExampleHitData data);
  /// No assignment operator
  ExampleHitObj& operator=(const ExampleHitObj&) = delete;
  virtual ~ExampleHitObj() = default;

public:
  podio::ObjectID id;
  ExampleHitData data;
};



#endif
