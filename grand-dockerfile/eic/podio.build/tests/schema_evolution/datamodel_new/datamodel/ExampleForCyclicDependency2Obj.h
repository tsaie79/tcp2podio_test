// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2OBJ_H
#define DATAMODEL_ExampleForCyclicDependency2OBJ_H

// data model specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleForCyclicDependency1;



class ExampleForCyclicDependency2;

class ExampleForCyclicDependency2Obj {
public:
  /// constructor
  ExampleForCyclicDependency2Obj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleForCyclicDependency2Obj(const ExampleForCyclicDependency2Obj&);
  /// constructor from ObjectID and ExampleForCyclicDependency2Data
  /// does not initialize the internal relation containers
  ExampleForCyclicDependency2Obj(const podio::ObjectID id, ExampleForCyclicDependency2Data data);
  /// No assignment operator
  ExampleForCyclicDependency2Obj& operator=(const ExampleForCyclicDependency2Obj&) = delete;
  virtual ~ExampleForCyclicDependency2Obj();

public:
  podio::ObjectID id;
  ExampleForCyclicDependency2Data data;
  ExampleForCyclicDependency1* m_ref{nullptr};
};



#endif
