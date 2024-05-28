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



ExampleWithARelation::ExampleWithARelation() :
  m_obj(new ExampleWithARelationObj{}, podio::utils::MarkOwned) {}

ExampleWithARelation::ExampleWithARelation(double number) :
  m_obj(new ExampleWithARelationObj{}, podio::utils::MarkOwned) {
  m_obj->data.number = number;
}

ExampleWithARelation& ExampleWithARelation::operator=(ExampleWithARelation other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithARelation ExampleWithARelation::clone() const {
  return MutableExampleWithARelation(podio::utils::MaybeSharedPtr(new ExampleWithARelationObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithARelation::ExampleWithARelation(podio::utils::MaybeSharedPtr<ExampleWithARelationObj> obj) : m_obj(std::move(obj)) {}

ExampleWithARelation::ExampleWithARelation(const MutableExampleWithARelation& other): ExampleWithARelation(other.m_obj) {}

ExampleWithARelation::ExampleWithARelation(ExampleWithARelationObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>(obj)) {}

ExampleWithARelation ExampleWithARelation::makeEmpty() {
  return {nullptr};
}

double ExampleWithARelation::number() const { return m_obj->data.number; }

const ex42::ExampleWithNamespace ExampleWithARelation::ref() const {
  if (!m_obj->m_ref) {
    return ex42::ExampleWithNamespace::makeEmpty();
  }
  return ex42::ExampleWithNamespace(*(m_obj->m_ref));
}



std::vector<ex42::ExampleWithNamespace>::const_iterator ExampleWithARelation::refs_begin() const {
  auto ret_value = m_obj->m_refs->begin();
  std::advance(ret_value, m_obj->data.refs_begin);
  return ret_value;
}

std::vector<ex42::ExampleWithNamespace>::const_iterator ExampleWithARelation::refs_end() const {
  auto ret_value = m_obj->m_refs->begin();
  std::advance(ret_value, m_obj->data.refs_end);
  return ret_value;
}

std::size_t ExampleWithARelation::refs_size() const {
  return m_obj->data.refs_end - m_obj->data.refs_begin;
}

ex42::ExampleWithNamespace ExampleWithARelation::refs(std::size_t index) const {
  if (refs_size() > index) {
    return m_obj->m_refs->at(m_obj->data.refs_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ex42::ExampleWithNamespace> ExampleWithARelation::refs() const {
  auto begin = m_obj->m_refs->begin();
  std::advance(begin, m_obj->data.refs_begin);
  auto end = m_obj->m_refs->begin();
  std::advance(end, m_obj->data.refs_end);
  return {begin, end};
}





bool ExampleWithARelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithARelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithARelation::operator==(const MutableExampleWithARelation& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithARelation& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " number : " << value.number() << '\n';

  o << " ref : " << value.ref().id() << '\n';

  o << " refs : ";
  for (unsigned i = 0; i < value.refs_size(); ++i) {
    o << value.refs(i) << " ";
  }
  o << '\n';

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithARelation& value) {
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

