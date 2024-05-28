// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleReferencingType.h"
#include "datamodel/MutableExampleReferencingType.h"
#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingTypeCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleReferencingType::ExampleReferencingType() :
  m_obj(new ExampleReferencingTypeObj{}, podio::utils::MarkOwned) {}


ExampleReferencingType& ExampleReferencingType::operator=(ExampleReferencingType other) {
  swap(*this, other);
  return *this;
}

MutableExampleReferencingType ExampleReferencingType::clone() const {
  return MutableExampleReferencingType(podio::utils::MaybeSharedPtr(new ExampleReferencingTypeObj(*m_obj), podio::utils::MarkOwned));
}

ExampleReferencingType::ExampleReferencingType(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> obj) : m_obj(std::move(obj)) {}

ExampleReferencingType::ExampleReferencingType(const MutableExampleReferencingType& other): ExampleReferencingType(other.m_obj) {}

ExampleReferencingType::ExampleReferencingType(ExampleReferencingTypeObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>(obj)) {}

ExampleReferencingType ExampleReferencingType::makeEmpty() {
  return {nullptr};
}




std::vector<ExampleCluster>::const_iterator ExampleReferencingType::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ExampleCluster>::const_iterator ExampleReferencingType::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

std::size_t ExampleReferencingType::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ExampleCluster ExampleReferencingType::Clusters(std::size_t index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleCluster> ExampleReferencingType::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}


std::vector<ExampleReferencingType>::const_iterator ExampleReferencingType::Refs_begin() const {
  auto ret_value = m_obj->m_Refs->begin();
  std::advance(ret_value, m_obj->data.Refs_begin);
  return ret_value;
}

std::vector<ExampleReferencingType>::const_iterator ExampleReferencingType::Refs_end() const {
  auto ret_value = m_obj->m_Refs->begin();
  std::advance(ret_value, m_obj->data.Refs_end);
  return ret_value;
}

std::size_t ExampleReferencingType::Refs_size() const {
  return m_obj->data.Refs_end - m_obj->data.Refs_begin;
}

ExampleReferencingType ExampleReferencingType::Refs(std::size_t index) const {
  if (Refs_size() > index) {
    return m_obj->m_Refs->at(m_obj->data.Refs_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleReferencingType> ExampleReferencingType::Refs() const {
  auto begin = m_obj->m_Refs->begin();
  std::advance(begin, m_obj->data.Refs_begin);
  auto end = m_obj->m_Refs->begin();
  std::advance(end, m_obj->data.Refs_end);
  return {begin, end};
}





bool ExampleReferencingType::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleReferencingType::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleReferencingType::operator==(const MutableExampleReferencingType& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleReferencingType& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';


  o << " Clusters : ";
  for (unsigned i = 0; i < value.Clusters_size(); ++i) {
    o << value.Clusters(i) << " ";
  }
  o << '\n';
  o << " Refs : ";
  for (unsigned i = 0; i < value.Refs_size(); ++i) {
    o << value.Refs(i).id() << " ";
  }
  o << '\n';

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleReferencingType& value) {
  j = nlohmann::json{
  };


  j["Clusters"] = nlohmann::json::array();
  for (const auto& v : value.Clusters()) {
    j["Clusters"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

  j["Refs"] = nlohmann::json::array();
  for (const auto& v : value.Refs()) {
    j["Refs"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

}
#endif



