// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegersOBJ_H
#define DATAMODEL_ExampleWithFixedWidthIntegersOBJ_H

// data model specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"

#include "podio/ObjectID.h"




class ExampleWithFixedWidthIntegers;

class ExampleWithFixedWidthIntegersObj {
public:
  /// constructor
  ExampleWithFixedWidthIntegersObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithFixedWidthIntegersObj(const ExampleWithFixedWidthIntegersObj&);
  /// constructor from ObjectID and ExampleWithFixedWidthIntegersData
  /// does not initialize the internal relation containers
  ExampleWithFixedWidthIntegersObj(const podio::ObjectID id, ExampleWithFixedWidthIntegersData data);
  /// No assignment operator
  ExampleWithFixedWidthIntegersObj& operator=(const ExampleWithFixedWidthIntegersObj&) = delete;
  virtual ~ExampleWithFixedWidthIntegersObj() = default;

public:
  podio::ObjectID id;
  ExampleWithFixedWidthIntegersData data;
};



#endif
