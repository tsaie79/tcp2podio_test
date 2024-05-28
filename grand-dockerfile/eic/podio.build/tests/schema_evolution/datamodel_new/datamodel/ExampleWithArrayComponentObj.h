// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponentOBJ_H
#define DATAMODEL_ExampleWithArrayComponentOBJ_H

// data model specific includes
#include "datamodel/ExampleWithArrayComponentData.h"

#include "podio/ObjectID.h"




class ExampleWithArrayComponent;

class ExampleWithArrayComponentObj {
public:
  /// constructor
  ExampleWithArrayComponentObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithArrayComponentObj(const ExampleWithArrayComponentObj&);
  /// constructor from ObjectID and ExampleWithArrayComponentData
  /// does not initialize the internal relation containers
  ExampleWithArrayComponentObj(const podio::ObjectID id, ExampleWithArrayComponentData data);
  /// No assignment operator
  ExampleWithArrayComponentObj& operator=(const ExampleWithArrayComponentObj&) = delete;
  virtual ~ExampleWithArrayComponentObj() = default;

public:
  podio::ObjectID id;
  ExampleWithArrayComponentData data;
};



#endif
