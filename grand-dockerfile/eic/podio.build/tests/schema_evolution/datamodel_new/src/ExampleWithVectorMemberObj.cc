// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/ExampleWithVectorMemberObj.h"
#include "podio/ObjectID.h"


ExampleWithVectorMemberObj::ExampleWithVectorMemberObj() :
  id(),
  data(),
  m_count(new std::vector<int>())
{  }

ExampleWithVectorMemberObj::ExampleWithVectorMemberObj(const podio::ObjectID id_, ExampleWithVectorMemberData data_) :
  id(id_), data(data_)
{  }

ExampleWithVectorMemberObj::ExampleWithVectorMemberObj(const ExampleWithVectorMemberObj& other) :
  id(),
  data(other.data),
  m_count(new std::vector<int>(*(other.m_count)))
{
}

ExampleWithVectorMemberObj::~ExampleWithVectorMemberObj() {
  if (id.index == podio::ObjectID::untracked) {
    delete m_count;
  }

}

