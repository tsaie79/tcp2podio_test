// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelationsOBJ_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelationsOBJ_H

// data model specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithNamespace.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>
// forward declarations
namespace ex42 {
class ExampleWithNamespace;
}



class ExampleWithDifferentNamespaceRelations;

class ExampleWithDifferentNamespaceRelationsObj {
public:
  /// constructor
  ExampleWithDifferentNamespaceRelationsObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithDifferentNamespaceRelationsObj(const ExampleWithDifferentNamespaceRelationsObj&);
  /// constructor from ObjectID and ExampleWithDifferentNamespaceRelationsData
  /// does not initialize the internal relation containers
  ExampleWithDifferentNamespaceRelationsObj(const podio::ObjectID id, ExampleWithDifferentNamespaceRelationsData data);
  /// No assignment operator
  ExampleWithDifferentNamespaceRelationsObj& operator=(const ExampleWithDifferentNamespaceRelationsObj&) = delete;
  virtual ~ExampleWithDifferentNamespaceRelationsObj();

public:
  podio::ObjectID id;
  ExampleWithDifferentNamespaceRelationsData data;
  ex42::ExampleWithNamespace* m_rel{nullptr};
  std::vector<ex42::ExampleWithNamespace>* m_rels{nullptr};
};



#endif
