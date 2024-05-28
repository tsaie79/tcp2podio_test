// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedTypeOBJ_H
#define DATAMODEL_ExampleOfDroppedTypeOBJ_H

// data model specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"

#include "podio/ObjectID.h"




class ExampleOfDroppedType;

class ExampleOfDroppedTypeObj {
public:
  /// constructor
  ExampleOfDroppedTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleOfDroppedTypeObj(const ExampleOfDroppedTypeObj&);
  /// constructor from ObjectID and ExampleOfDroppedTypeData
  /// does not initialize the internal relation containers
  ExampleOfDroppedTypeObj(const podio::ObjectID id, ExampleOfDroppedTypeData data);
  /// No assignment operator
  ExampleOfDroppedTypeObj& operator=(const ExampleOfDroppedTypeObj&) = delete;
  virtual ~ExampleOfDroppedTypeObj() = default;

public:
  podio::ObjectID id;
  ExampleOfDroppedTypeData data;
};



#endif
