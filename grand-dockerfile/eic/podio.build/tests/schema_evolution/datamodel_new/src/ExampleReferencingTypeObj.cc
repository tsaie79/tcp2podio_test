// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleReferencingType.h"
#include "podio/ObjectID.h"


ExampleReferencingTypeObj::ExampleReferencingTypeObj() :
  id(),
  data(),
  m_Clusters(new std::vector<ExampleCluster>()),
  m_Refs(new std::vector<ExampleReferencingType>())
{  }

ExampleReferencingTypeObj::ExampleReferencingTypeObj(const podio::ObjectID id_, ExampleReferencingTypeData data_) :
  id(id_), data(data_)
{  }

ExampleReferencingTypeObj::ExampleReferencingTypeObj(const ExampleReferencingTypeObj& other) :
  id(),
  data(other.data),
  m_Clusters(new std::vector<ExampleCluster>(*(other.m_Clusters))),
  m_Refs(new std::vector<ExampleReferencingType>(*(other.m_Refs)))
{
}

ExampleReferencingTypeObj::~ExampleReferencingTypeObj() {
  if (id.index == podio::ObjectID::untracked) {
    delete m_Clusters;
    delete m_Refs;
  }

}

