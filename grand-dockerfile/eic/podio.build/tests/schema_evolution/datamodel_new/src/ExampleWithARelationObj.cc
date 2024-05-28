// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithARelationObj.h"
#include "datamodel/ExampleWithNamespace.h"
#include "podio/ObjectID.h"

namespace ex42 {

ExampleWithARelationObj::ExampleWithARelationObj() :
  id(),
  data(),
  m_ref(nullptr),
  m_refs(new std::vector<ex42::ExampleWithNamespace>())
{  }

ExampleWithARelationObj::ExampleWithARelationObj(const podio::ObjectID id_, ExampleWithARelationData data_) :
  id(id_), data(data_)
{  }

ExampleWithARelationObj::ExampleWithARelationObj(const ExampleWithARelationObj& other) :
  id(),
  data(other.data),
  m_ref(nullptr),
  m_refs(new std::vector<ex42::ExampleWithNamespace>(*(other.m_refs)))
{
  if (other.m_ref) {
    m_ref = new ex42::ExampleWithNamespace(*(other.m_ref));
  }
}

ExampleWithARelationObj::~ExampleWithARelationObj() {
  if (id.index == podio::ObjectID::untracked) {
    delete m_refs;
  }

  if (m_ref) delete m_ref;
}
} // namespace ex42

