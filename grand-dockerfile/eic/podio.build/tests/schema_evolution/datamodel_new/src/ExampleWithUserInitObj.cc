// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithUserInitObj.h"
#include "podio/ObjectID.h"


ExampleWithUserInitObj::ExampleWithUserInitObj() :
  id(),
  data()
{  }

ExampleWithUserInitObj::ExampleWithUserInitObj(const podio::ObjectID id_, ExampleWithUserInitData data_) :
  id(id_), data(data_)
{  }

ExampleWithUserInitObj::ExampleWithUserInitObj(const ExampleWithUserInitObj& other) :
  id(),
  data(other.data)
{
}



