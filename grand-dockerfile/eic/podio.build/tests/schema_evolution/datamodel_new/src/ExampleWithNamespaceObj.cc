// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithNamespaceObj.h"
#include "podio/ObjectID.h"

namespace ex42 {

ExampleWithNamespaceObj::ExampleWithNamespaceObj() :
  id(),
  data()
{  }

ExampleWithNamespaceObj::ExampleWithNamespaceObj(const podio::ObjectID id_, ExampleWithNamespaceData data_) :
  id(id_), data(data_)
{  }

ExampleWithNamespaceObj::ExampleWithNamespaceObj(const ExampleWithNamespaceObj& other) :
  id(),
  data(other.data)
{
}


} // namespace ex42

