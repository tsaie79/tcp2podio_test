// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleCluster.h"
#include "podio/ObjectID.h"


ExampleClusterObj::ExampleClusterObj() :
  id(),
  data(),
  m_Hits(new std::vector<ExampleHit>()),
  m_Clusters(new std::vector<ExampleCluster>())
{  }

ExampleClusterObj::ExampleClusterObj(const podio::ObjectID id_, ExampleClusterData data_) :
  id(id_), data(data_)
{  }

ExampleClusterObj::ExampleClusterObj(const ExampleClusterObj& other) :
  id(),
  data(other.data),
  m_Hits(new std::vector<ExampleHit>(*(other.m_Hits))),
  m_Clusters(new std::vector<ExampleCluster>(*(other.m_Clusters)))
{
}

ExampleClusterObj::~ExampleClusterObj() {
  if (id.index == podio::ObjectID::untracked) {
    delete m_Hits;
    delete m_Clusters;
  }

}

