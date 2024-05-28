// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterOBJ_H
#define DATAMODEL_ExampleClusterOBJ_H

// data model specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleHit.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleCluster;

class ExampleClusterObj {
public:
  /// constructor
  ExampleClusterObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleClusterObj(const ExampleClusterObj&);
  /// constructor from ObjectID and ExampleClusterData
  /// does not initialize the internal relation containers
  ExampleClusterObj(const podio::ObjectID id, ExampleClusterData data);
  /// No assignment operator
  ExampleClusterObj& operator=(const ExampleClusterObj&) = delete;
  virtual ~ExampleClusterObj();

public:
  podio::ObjectID id;
  ExampleClusterData data;
  std::vector<ExampleHit>* m_Hits{nullptr};
  std::vector<ExampleCluster>* m_Clusters{nullptr};
};



#endif
