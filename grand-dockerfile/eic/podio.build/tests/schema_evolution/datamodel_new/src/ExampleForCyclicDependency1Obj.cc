// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency2.h"
#include "podio/ObjectID.h"


ExampleForCyclicDependency1Obj::ExampleForCyclicDependency1Obj() :
  id(),
  data(),
  m_ref(nullptr)
{  }

ExampleForCyclicDependency1Obj::ExampleForCyclicDependency1Obj(const podio::ObjectID id_, ExampleForCyclicDependency1Data data_) :
  id(id_), data(data_)
{  }

ExampleForCyclicDependency1Obj::ExampleForCyclicDependency1Obj(const ExampleForCyclicDependency1Obj& other) :
  id(),
  data(other.data),
  m_ref(nullptr)
{
  if (other.m_ref) {
    m_ref = new ExampleForCyclicDependency2(*(other.m_ref));
  }
}

ExampleForCyclicDependency1Obj::~ExampleForCyclicDependency1Obj() {

  if (m_ref) delete m_ref;
}

