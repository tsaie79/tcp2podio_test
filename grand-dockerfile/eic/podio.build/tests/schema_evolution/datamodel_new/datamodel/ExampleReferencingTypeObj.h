// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeOBJ_H
#define DATAMODEL_ExampleReferencingTypeOBJ_H

// data model specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleCluster.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleReferencingType;

class ExampleReferencingTypeObj {
public:
  /// constructor
  ExampleReferencingTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleReferencingTypeObj(const ExampleReferencingTypeObj&);
  /// constructor from ObjectID and ExampleReferencingTypeData
  /// does not initialize the internal relation containers
  ExampleReferencingTypeObj(const podio::ObjectID id, ExampleReferencingTypeData data);
  /// No assignment operator
  ExampleReferencingTypeObj& operator=(const ExampleReferencingTypeObj&) = delete;
  virtual ~ExampleReferencingTypeObj();

public:
  podio::ObjectID id;
  ExampleReferencingTypeData data;
  std::vector<ExampleCluster>* m_Clusters{nullptr};
  std::vector<ExampleReferencingType>* m_Refs{nullptr};
};



#endif
