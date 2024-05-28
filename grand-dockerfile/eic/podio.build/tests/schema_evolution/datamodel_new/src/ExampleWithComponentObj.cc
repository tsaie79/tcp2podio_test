// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithComponentObj.h"
#include "podio/ObjectID.h"


ExampleWithComponentObj::ExampleWithComponentObj() :
  id(),
  data()
{  }

ExampleWithComponentObj::ExampleWithComponentObj(const podio::ObjectID id_, ExampleWithComponentData data_) :
  id(id_), data(data_)
{  }

ExampleWithComponentObj::ExampleWithComponentObj(const ExampleWithComponentObj& other) :
  id(),
  data(other.data)
{
}



