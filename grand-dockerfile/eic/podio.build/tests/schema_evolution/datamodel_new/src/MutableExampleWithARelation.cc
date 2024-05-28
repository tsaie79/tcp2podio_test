// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithARelation.h"
#include "datamodel/MutableExampleWithARelation.h"
#include "datamodel/ExampleWithARelationObj.h"
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithARelationCollection.h"

#include "datamodel/ExampleWithNamespace.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>

namespace ex42 {



MutableExampleWithARelation::MutableExampleWithARelation() :
  m_obj(new ExampleWithARelationObj{}, podio::utils::MarkOwned) {}

MutableExampleWithARelation::MutableExampleWithARelation(double number) :
  m_obj(new ExampleWithARelationObj{}, podio::utils::MarkOwned) {
  m_obj->data.number = number;
}

MutableExampleWithARelation& MutableExampleWithARelation::operator=(MutableExampleWithARelation other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithARelation MutableExampleWithARelation::clone() const {
  return MutableExampleWithARelation(podio::utils::MaybeSharedPtr(new ExampleWithARelationObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithARelation::MutableExampleWithARelation(podio::utils::MaybeSharedPtr<ExampleWithARelationObj> obj) : m_obj(std::move(obj)) {}

double MutableExampleWithARelation::number() const { return m_obj->data.number; }

const ex42::ExampleWithNamespace MutableExampleWithARelation::ref() const {
  if (!m_obj->m_ref) {
    return ex42::ExampleWithNamespace::makeEmpty();
  }
  return ex42::ExampleWithNamespace(*(m_obj->m_ref));
}


void MutableExampleWithARelation::number(double value) { m_obj->data.number = value; }
double& MutableExampleWithARelation::number() { return m_obj->data.number; }

void MutableExampleWithARelation::ref(ex42::ExampleWithNamespace value) {
  if (m_obj->m_ref) {
    delete m_obj->m_ref;
  }
  m_obj->m_ref = new ex42::ExampleWithNamespace(value);
}


void MutableExampleWithARelation::addrefs(ex42::ExampleWithNamespace component) {
  m_obj->m_refs->push_back(component);
  m_obj->data.refs_end++;
}

std::vector<ex42::ExampleWithNamespace>::const_iterator MutableExampleWithARelation::refs_begin() const {
  auto ret_value = m_obj->m_refs->begin();
  std::advance(ret_value, m_obj->data.refs_begin);
  return ret_value;
}

std::vector<ex42::ExampleWithNamespace>::const_iterator MutableExampleWithARelation::refs_end() const {
  auto ret_value = m_obj->m_refs->begin();
  std::advance(ret_value, m_obj->data.refs_end);
  return ret_value;
}

std::size_t MutableExampleWithARelation::refs_size() const {
  return m_obj->data.refs_end - m_obj->data.refs_begin;
}

ex42::ExampleWithNamespace MutableExampleWithARelation::refs(std::size_t index) const {
  if (refs_size() > index) {
    return m_obj->m_refs->at(m_obj->data.refs_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ex42::ExampleWithNamespace> MutableExampleWithARelation::refs() const {
  auto begin = m_obj->m_refs->begin();
  std::advance(begin, m_obj->data.refs_begin);
  auto end = m_obj->m_refs->begin();
  std::advance(end, m_obj->data.refs_end);
  return {begin, end};
}






bool MutableExampleWithARelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithARelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithARelation::operator==(const ExampleWithARelation& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithARelation& value) {
  j = nlohmann::json{
    {"number", value.number()}
  };

    j["ref"] = nlohmann::json{
      {"collectionID", value.ref().getObjectID().collectionID },
      {"index", value.ref().getObjectID().index }};


  j["refs"] = nlohmann::json::array();
  for (const auto& v : value.refs()) {
    j["refs"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

}
#endif


} // namespace ex42

