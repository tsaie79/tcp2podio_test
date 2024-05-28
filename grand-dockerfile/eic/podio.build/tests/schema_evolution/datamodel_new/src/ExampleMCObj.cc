// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleMCObj.h"
#include "datamodel/ExampleMC.h"
#include "podio/ObjectID.h"


ExampleMCObj::ExampleMCObj() :
  id(),
  data(),
  m_parents(new std::vector<ExampleMC>()),
  m_daughters(new std::vector<ExampleMC>())
{  }

ExampleMCObj::ExampleMCObj(const podio::ObjectID id_, ExampleMCData data_) :
  id(id_), data(data_)
{  }

ExampleMCObj::ExampleMCObj(const ExampleMCObj& other) :
  id(),
  data(other.data),
  m_parents(new std::vector<ExampleMC>(*(other.m_parents))),
  m_daughters(new std::vector<ExampleMC>(*(other.m_daughters)))
{
}

ExampleMCObj::~ExampleMCObj() {
  if (id.index == podio::ObjectID::untracked) {
    delete m_parents;
    delete m_daughters;
  }

}

