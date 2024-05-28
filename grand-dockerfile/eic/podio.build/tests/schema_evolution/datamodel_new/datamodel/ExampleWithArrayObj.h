// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayOBJ_H
#define DATAMODEL_ExampleWithArrayOBJ_H

// data model specific includes
#include "datamodel/ExampleWithArrayData.h"

#include "podio/ObjectID.h"




class ExampleWithArray;

class ExampleWithArrayObj {
public:
  /// constructor
  ExampleWithArrayObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithArrayObj(const ExampleWithArrayObj&);
  /// constructor from ObjectID and ExampleWithArrayData
  /// does not initialize the internal relation containers
  ExampleWithArrayObj(const podio::ObjectID id, ExampleWithArrayData data);
  /// No assignment operator
  ExampleWithArrayObj& operator=(const ExampleWithArrayObj&) = delete;
  virtual ~ExampleWithArrayObj() = default;

public:
  podio::ObjectID id;
  ExampleWithArrayData data;
};



#endif
