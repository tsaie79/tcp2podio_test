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




MutableExampleReferencingType::MutableExampleReferencingType() :
  m_obj(new ExampleReferencingTypeObj{}, podio::utils::MarkOwned) {}


MutableExampleReferencingType& MutableExampleReferencingType::operator=(MutableExampleReferencingType other) {
  swap(*this, other);
  return *this;
}

MutableExampleReferencingType MutableExampleReferencingType::clone() const {
  return MutableExampleReferencingType(podio::utils::MaybeSharedPtr(new ExampleReferencingTypeObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleReferencingType::MutableExampleReferencingType(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> obj) : m_obj(std::move(obj)) {}





void MutableExampleReferencingType::addClusters(ExampleCluster component) {
  m_obj->m_Clusters->push_back(component);
  m_obj->data.Clusters_end++;
}

std::vector<ExampleCluster>::const_iterator MutableExampleReferencingType::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ExampleCluster>::const_iterator MutableExampleReferencingType::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

std::size_t MutableExampleReferencingType::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ExampleCluster MutableExampleReferencingType::Clusters(std::size_t index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleCluster> MutableExampleReferencingType::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}

void MutableExampleReferencingType::addRefs(ExampleReferencingType component) {
  m_obj->m_Refs->push_back(component);
  m_obj->data.Refs_end++;
}

std::vector<ExampleReferencingType>::const_iterator MutableExampleReferencingType::Refs_begin() const {
  auto ret_value = m_obj->m_Refs->begin();
  std::advance(ret_value, m_obj->data.Refs_begin);
  return ret_value;
}

std::vector<ExampleReferencingType>::const_iterator MutableExampleReferencingType::Refs_end() const {
  auto ret_value = m_obj->m_Refs->begin();
  std::advance(ret_value, m_obj->data.Refs_end);
  return ret_value;
}

std::size_t MutableExampleReferencingType::Refs_size() const {
  return m_obj->data.Refs_end - m_obj->data.Refs_begin;
}

ExampleReferencingType MutableExampleReferencingType::Refs(std::size_t index) const {
  if (Refs_size() > index) {
    return m_obj->m_Refs->at(m_obj->data.Refs_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleReferencingType> MutableExampleReferencingType::Refs() const {
  auto begin = m_obj->m_Refs->begin();
  std::advance(begin, m_obj->data.Refs_begin);
  auto end = m_obj->m_Refs->begin();
  std::advance(end, m_obj->data.Refs_end);
  return {begin, end};
}






bool MutableExampleReferencingType::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleReferencingType::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleReferencingType::operator==(const ExampleReferencingType& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleReferencingType& value) {
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



