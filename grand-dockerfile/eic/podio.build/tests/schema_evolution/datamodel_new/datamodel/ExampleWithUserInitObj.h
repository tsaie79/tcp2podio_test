// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitOBJ_H
#define DATAMODEL_ExampleWithUserInitOBJ_H

// data model specific includes
#include "datamodel/ExampleWithUserInitData.h"

#include "podio/ObjectID.h"




class ExampleWithUserInit;

class ExampleWithUserInitObj {
public:
  /// constructor
  ExampleWithUserInitObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithUserInitObj(const ExampleWithUserInitObj&);
  /// constructor from ObjectID and ExampleWithUserInitData
  /// does not initialize the internal relation containers
  ExampleWithUserInitObj(const podio::ObjectID id, ExampleWithUserInitData data);
  /// No assignment operator
  ExampleWithUserInitObj& operator=(const ExampleWithUserInitObj&) = delete;
  virtual ~ExampleWithUserInitObj() = default;

public:
  podio::ObjectID id;
  ExampleWithUserInitData data;
};



#endif
