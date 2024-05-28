// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithArrayObj.h"
#include "podio/ObjectID.h"


ExampleWithArrayObj::ExampleWithArrayObj() :
  id(),
  data()
{  }

ExampleWithArrayObj::ExampleWithArrayObj(const podio::ObjectID id_, ExampleWithArrayData data_) :
  id(id_), data(data_)
{  }

ExampleWithArrayObj::ExampleWithArrayObj(const ExampleWithArrayObj& other) :
  id(),
  data(other.data)
{
}



