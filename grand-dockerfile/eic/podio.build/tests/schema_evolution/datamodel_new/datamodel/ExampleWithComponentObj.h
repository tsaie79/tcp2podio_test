// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentOBJ_H
#define DATAMODEL_ExampleWithComponentOBJ_H

// data model specific includes
#include "datamodel/ExampleWithComponentData.h"

#include "podio/ObjectID.h"




class ExampleWithComponent;

class ExampleWithComponentObj {
public:
  /// constructor
  ExampleWithComponentObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithComponentObj(const ExampleWithComponentObj&);
  /// constructor from ObjectID and ExampleWithComponentData
  /// does not initialize the internal relation containers
  ExampleWithComponentObj(const podio::ObjectID id, ExampleWithComponentData data);
  /// No assignment operator
  ExampleWithComponentObj& operator=(const ExampleWithComponentObj&) = delete;
  virtual ~ExampleWithComponentObj() = default;

public:
  podio::ObjectID id;
  ExampleWithComponentData data;
};



#endif
