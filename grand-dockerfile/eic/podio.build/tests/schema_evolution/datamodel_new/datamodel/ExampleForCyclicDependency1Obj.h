// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1OBJ_H
#define DATAMODEL_ExampleForCyclicDependency1OBJ_H

// data model specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleForCyclicDependency2;



class ExampleForCyclicDependency1;

class ExampleForCyclicDependency1Obj {
public:
  /// constructor
  ExampleForCyclicDependency1Obj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleForCyclicDependency1Obj(const ExampleForCyclicDependency1Obj&);
  /// constructor from ObjectID and ExampleForCyclicDependency1Data
  /// does not initialize the internal relation containers
  ExampleForCyclicDependency1Obj(const podio::ObjectID id, ExampleForCyclicDependency1Data data);
  /// No assignment operator
  ExampleForCyclicDependency1Obj& operator=(const ExampleForCyclicDependency1Obj&) = delete;
  virtual ~ExampleForCyclicDependency1Obj();

public:
  podio::ObjectID id;
  ExampleForCyclicDependency1Data data;
  ExampleForCyclicDependency2* m_ref{nullptr};
};



#endif
