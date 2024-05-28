// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationOBJ_H
#define DATAMODEL_ExampleWithARelationOBJ_H

// data model specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithNamespace.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>
// forward declarations
namespace ex42 {
class ExampleWithNamespace;
}


namespace ex42 {

class ExampleWithARelation;

class ExampleWithARelationObj {
public:
  /// constructor
  ExampleWithARelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithARelationObj(const ExampleWithARelationObj&);
  /// constructor from ObjectID and ExampleWithARelationData
  /// does not initialize the internal relation containers
  ExampleWithARelationObj(const podio::ObjectID id, ExampleWithARelationData data);
  /// No assignment operator
  ExampleWithARelationObj& operator=(const ExampleWithARelationObj&) = delete;
  virtual ~ExampleWithARelationObj();

public:
  podio::ObjectID id;
  ExampleWithARelationData data;
  ex42::ExampleWithNamespace* m_ref{nullptr};
  std::vector<ex42::ExampleWithNamespace>* m_refs{nullptr};
};

} // namespace ex42


#endif
