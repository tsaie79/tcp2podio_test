// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency1.h"
#include "podio/ObjectID.h"


ExampleForCyclicDependency2Obj::ExampleForCyclicDependency2Obj() :
  id(),
  data(),
  m_ref(nullptr)
{  }

ExampleForCyclicDependency2Obj::ExampleForCyclicDependency2Obj(const podio::ObjectID id_, ExampleForCyclicDependency2Data data_) :
  id(id_), data(data_)
{  }

ExampleForCyclicDependency2Obj::ExampleForCyclicDependency2Obj(const ExampleForCyclicDependency2Obj& other) :
  id(),
  data(other.data),
  m_ref(nullptr)
{
  if (other.m_ref) {
    m_ref = new ExampleForCyclicDependency1(*(other.m_ref));
  }
}

ExampleForCyclicDependency2Obj::~ExampleForCyclicDependency2Obj() {

  if (m_ref) delete m_ref;
}

