// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithNamespace.h"
#include "podio/ObjectID.h"


ExampleWithDifferentNamespaceRelationsObj::ExampleWithDifferentNamespaceRelationsObj() :
  id(),
  data(),
  m_rel(nullptr),
  m_rels(new std::vector<ex42::ExampleWithNamespace>())
{  }

ExampleWithDifferentNamespaceRelationsObj::ExampleWithDifferentNamespaceRelationsObj(const podio::ObjectID id_, ExampleWithDifferentNamespaceRelationsData data_) :
  id(id_), data(data_)
{  }

ExampleWithDifferentNamespaceRelationsObj::ExampleWithDifferentNamespaceRelationsObj(const ExampleWithDifferentNamespaceRelationsObj& other) :
  id(),
  data(other.data),
  m_rel(nullptr),
  m_rels(new std::vector<ex42::ExampleWithNamespace>(*(other.m_rels)))
{
  if (other.m_rel) {
    m_rel = new ex42::ExampleWithNamespace(*(other.m_rel));
  }
}

ExampleWithDifferentNamespaceRelationsObj::~ExampleWithDifferentNamespaceRelationsObj() {
  if (id.index == podio::ObjectID::untracked) {
    delete m_rels;
  }

  if (m_rel) delete m_rel;
}

