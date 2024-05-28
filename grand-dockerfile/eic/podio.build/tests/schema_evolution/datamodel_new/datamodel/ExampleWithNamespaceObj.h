// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceOBJ_H
#define DATAMODEL_ExampleWithNamespaceOBJ_H

// data model specific includes
#include "datamodel/ExampleWithNamespaceData.h"

#include "podio/ObjectID.h"



namespace ex42 {

class ExampleWithNamespace;

class ExampleWithNamespaceObj {
public:
  /// constructor
  ExampleWithNamespaceObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithNamespaceObj(const ExampleWithNamespaceObj&);
  /// constructor from ObjectID and ExampleWithNamespaceData
  /// does not initialize the internal relation containers
  ExampleWithNamespaceObj(const podio::ObjectID id, ExampleWithNamespaceData data);
  /// No assignment operator
  ExampleWithNamespaceObj& operator=(const ExampleWithNamespaceObj&) = delete;
  virtual ~ExampleWithNamespaceObj() = default;

public:
  podio::ObjectID id;
  ExampleWithNamespaceData data;
};

} // namespace ex42


#endif
