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




ExampleWithDifferentNamespaceRelations::ExampleWithDifferentNamespaceRelations() :
  m_obj(new ExampleWithDifferentNamespaceRelationsObj{}, podio::utils::MarkOwned) {}


ExampleWithDifferentNamespaceRelations& ExampleWithDifferentNamespaceRelations::operator=(ExampleWithDifferentNamespaceRelations other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithDifferentNamespaceRelations ExampleWithDifferentNamespaceRelations::clone() const {
  return MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr(new ExampleWithDifferentNamespaceRelationsObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithDifferentNamespaceRelations::ExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> obj) : m_obj(std::move(obj)) {}

ExampleWithDifferentNamespaceRelations::ExampleWithDifferentNamespaceRelations(const MutableExampleWithDifferentNamespaceRelations& other): ExampleWithDifferentNamespaceRelations(other.m_obj) {}

ExampleWithDifferentNamespaceRelations::ExampleWithDifferentNamespaceRelations(ExampleWithDifferentNamespaceRelationsObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>(obj)) {}

ExampleWithDifferentNamespaceRelations ExampleWithDifferentNamespaceRelations::makeEmpty() {
  return {nullptr};
}


const ex42::ExampleWithNamespace ExampleWithDifferentNamespaceRelations::rel() const {
  if (!m_obj->m_rel) {
    return ex42::ExampleWithNamespace::makeEmpty();
  }
  return ex42::ExampleWithNamespace(*(m_obj->m_rel));
}



std::vector<ex42::ExampleWithNamespace>::const_iterator ExampleWithDifferentNamespaceRelations::rels_begin() const {
  auto ret_value = m_obj->m_rels->begin();
  std::advance(ret_value, m_obj->data.rels_begin);
  return ret_value;
}

std::vector<ex42::ExampleWithNamespace>::const_iterator ExampleWithDifferentNamespaceRelations::rels_end() const {
  auto ret_value = m_obj->m_rels->begin();
  std::advance(ret_value, m_obj->data.rels_end);
  return ret_value;
}

std::size_t ExampleWithDifferentNamespaceRelations::rels_size() const {
  return m_obj->data.rels_end - m_obj->data.rels_begin;
}

ex42::ExampleWithNamespace ExampleWithDifferentNamespaceRelations::rels(std::size_t index) const {
  if (rels_size() > index) {
    return m_obj->m_rels->at(m_obj->data.rels_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ex42::ExampleWithNamespace> ExampleWithDifferentNamespaceRelations::rels() const {
  auto begin = m_obj->m_rels->begin();
  std::advance(begin, m_obj->data.rels_begin);
  auto end = m_obj->m_rels->begin();
  std::advance(end, m_obj->data.rels_end);
  return {begin, end};
}





bool ExampleWithDifferentNamespaceRelations::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithDifferentNamespaceRelations::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithDifferentNamespaceRelations::operator==(const MutableExampleWithDifferentNamespaceRelations& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithDifferentNamespaceRelations& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';

  o << " rel : " << value.rel().id() << '\n';

  o << " rels : ";
  for (unsigned i = 0; i < value.rels_size(); ++i) {
    o << value.rels(i) << " ";
  }
  o << '\n';

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithDifferentNamespaceRelations& value) {
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



