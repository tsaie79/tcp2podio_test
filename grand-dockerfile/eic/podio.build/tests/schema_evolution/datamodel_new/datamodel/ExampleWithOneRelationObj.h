// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationOBJ_H
#define DATAMODEL_ExampleWithOneRelationOBJ_H

// data model specific includes
#include "datamodel/ExampleWithOneRelationData.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleCluster;



class ExampleWithOneRelation;

class ExampleWithOneRelationObj {
public:
  /// constructor
  ExampleWithOneRelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithOneRelationObj(const ExampleWithOneRelationObj&);
  /// constructor from ObjectID and ExampleWithOneRelationData
  /// does not initialize the internal relation containers
  ExampleWithOneRelationObj(const podio::ObjectID id, ExampleWithOneRelationData data);
  /// No assignment operator
  ExampleWithOneRelationObj& operator=(const ExampleWithOneRelationObj&) = delete;
  virtual ~ExampleWithOneRelationObj();

public:
  podio::ObjectID id;
  ExampleWithOneRelationData data;
  ExampleCluster* m_cluster{nullptr};
};



#endif
