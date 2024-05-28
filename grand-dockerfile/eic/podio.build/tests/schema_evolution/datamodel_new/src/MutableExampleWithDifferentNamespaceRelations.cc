// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelations.h"
#include "datamodel/MutableExampleWithDifferentNamespaceRelations.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsCollection.h"

#include "datamodel/ExampleWithNamespace.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleWithDifferentNamespaceRelations::MutableExampleWithDifferentNamespaceRelations() :
  m_obj(new ExampleWithDifferentNamespaceRelationsObj{}, podio::utils::MarkOwned) {}


MutableExampleWithDifferentNamespaceRelations& MutableExampleWithDifferentNamespaceRelations::operator=(MutableExampleWithDifferentNamespaceRelations other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithDifferentNamespaceRelations MutableExampleWithDifferentNamespaceRelations::clone() const {
  return MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr(new ExampleWithDifferentNamespaceRelationsObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithDifferentNamespaceRelations::MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> obj) : m_obj(std::move(obj)) {}


const ex42::ExampleWithNamespace MutableExampleWithDifferentNamespaceRelations::rel() const {
  if (!m_obj->m_rel) {
    return ex42::ExampleWithNamespace::makeEmpty();
  }
  return ex42::ExampleWithNamespace(*(m_obj->m_rel));
}



void MutableExampleWithDifferentNamespaceRelations::rel(ex42::ExampleWithNamespace value) {
  if (m_obj->m_rel) {
    delete m_obj->m_rel;
  }
  m_obj->m_rel = new ex42::ExampleWithNamespace(value);
}


void MutableExampleWithDifferentNamespaceRelations::addrels(ex42::ExampleWithNamespace component) {
  m_obj->m_rels->push_back(component);
  m_obj->data.rels_end++;
}

std::vector<ex42::ExampleWithNamespace>::const_iterator MutableExampleWithDifferentNamespaceRelations::rels_begin() const {
  auto ret_value = m_obj->m_rels->begin();
  std::advance(ret_value, m_obj->data.rels_begin);
  return ret_value;
}

std::vector<ex42::ExampleWithNamespace>::const_iterator MutableExampleWithDifferentNamespaceRelations::rels_end() const {
  auto ret_value = m_obj->m_rels->begin();
  std::advance(ret_value, m_obj->data.rels_end);
  return ret_value;
}

std::size_t MutableExampleWithDifferentNamespaceRelations::rels_size() const {
  return m_obj->data.rels_end - m_obj->data.rels_begin;
}

ex42::ExampleWithNamespace MutableExampleWithDifferentNamespaceRelations::rels(std::size_t index) const {
  if (rels_size() > index) {
    return m_obj->m_rels->at(m_obj->data.rels_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ex42::ExampleWithNamespace> MutableExampleWithDifferentNamespaceRelations::rels() const {
  auto begin = m_obj->m_rels->begin();
  std::advance(begin, m_obj->data.rels_begin);
  auto end = m_obj->m_rels->begin();
  std::advance(end, m_obj->data.rels_end);
  return {begin, end};
}






bool MutableExampleWithDifferentNamespaceRelations::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithDifferentNamespaceRelations::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithDifferentNamespaceRelations::operator==(const ExampleWithDifferentNamespaceRelations& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithDifferentNamespaceRelations& value) {
  j = nlohmann::json{
  };

    j["rel"] = nlohmann::json{
      {"collectionID", value.rel().getObjectID().collectionID },
      {"index", value.rel().getObjectID().index }};


  j["rels"] = nlohmann::json::array();
  for (const auto& v : value.rels()) {
    j["rels"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

}
#endif



