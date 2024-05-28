// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberOBJ_H
#define DATAMODEL_ExampleWithVectorMemberOBJ_H

// data model specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleWithVectorMember;

class ExampleWithVectorMemberObj {
public:
  /// constructor
  ExampleWithVectorMemberObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithVectorMemberObj(const ExampleWithVectorMemberObj&);
  /// constructor from ObjectID and ExampleWithVectorMemberData
  /// does not initialize the internal relation containers
  ExampleWithVectorMemberObj(const podio::ObjectID id, ExampleWithVectorMemberData data);
  /// No assignment operator
  ExampleWithVectorMemberObj& operator=(const ExampleWithVectorMemberObj&) = delete;
  virtual ~ExampleWithVectorMemberObj();

public:
  podio::ObjectID id;
  ExampleWithVectorMemberData data;
  std::vector<int>* m_count{nullptr};
};



#endif
