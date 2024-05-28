// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCOBJ_H
#define DATAMODEL_ExampleMCOBJ_H

// data model specific includes
#include "datamodel/ExampleMCData.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleMC;

class ExampleMCObj {
public:
  /// constructor
  ExampleMCObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleMCObj(const ExampleMCObj&);
  /// constructor from ObjectID and ExampleMCData
  /// does not initialize the internal relation containers
  ExampleMCObj(const podio::ObjectID id, ExampleMCData data);
  /// No assignment operator
  ExampleMCObj& operator=(const ExampleMCObj&) = delete;
  virtual ~ExampleMCObj();

public:
  podio::ObjectID id;
  ExampleMCData data;
  std::vector<ExampleMC>* m_parents{nullptr};
  std::vector<ExampleMC>* m_daughters{nullptr};
};



#endif
