// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleCluster.h"
#include "podio/ObjectID.h"


ExampleWithOneRelationObj::ExampleWithOneRelationObj() :
  id(),
  data(),
  m_cluster(nullptr)
{  }

ExampleWithOneRelationObj::ExampleWithOneRelationObj(const podio::ObjectID id_, ExampleWithOneRelationData data_) :
  id(id_), data(data_)
{  }

ExampleWithOneRelationObj::ExampleWithOneRelationObj(const ExampleWithOneRelationObj& other) :
  id(),
  data(other.data),
  m_cluster(nullptr)
{
  if (other.m_cluster) {
    m_cluster = new ExampleCluster(*(other.m_cluster));
  }
}

ExampleWithOneRelationObj::~ExampleWithOneRelationObj() {

  if (m_cluster) delete m_cluster;
}

