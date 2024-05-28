// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleCluster.h"
#include "datamodel/MutableExampleCluster.h"
#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleClusterCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleCluster::MutableExampleCluster() :
  m_obj(new ExampleClusterObj{}, podio::utils::MarkOwned) {}

MutableExampleCluster::MutableExampleCluster(double energy) :
  m_obj(new ExampleClusterObj{}, podio::utils::MarkOwned) {
  m_obj->data.energy = energy;
}

MutableExampleCluster& MutableExampleCluster::operator=(MutableExampleCluster other) {
  swap(*this, other);
  return *this;
}

MutableExampleCluster MutableExampleCluster::clone() const {
  return MutableExampleCluster(podio::utils::MaybeSharedPtr(new ExampleClusterObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleCluster::MutableExampleCluster(podio::utils::MaybeSharedPtr<ExampleClusterObj> obj) : m_obj(std::move(obj)) {}

double MutableExampleCluster::energy() const { return m_obj->data.energy; }


void MutableExampleCluster::energy(double value) { m_obj->data.energy = value; }
double& MutableExampleCluster::energy() { return m_obj->data.energy; }


void MutableExampleCluster::addHits(ExampleHit component) {
  m_obj->m_Hits->push_back(component);
  m_obj->data.Hits_end++;
}

std::vector<ExampleHit>::const_iterator MutableExampleCluster::Hits_begin() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_begin);
  return ret_value;
}

std::vector<ExampleHit>::const_iterator MutableExampleCluster::Hits_end() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_end);
  return ret_value;
}

std::size_t MutableExampleCluster::Hits_size() const {
  return m_obj->data.Hits_end - m_obj->data.Hits_begin;
}

ExampleHit MutableExampleCluster::Hits(std::size_t index) const {
  if (Hits_size() > index) {
    return m_obj->m_Hits->at(m_obj->data.Hits_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleHit> MutableExampleCluster::Hits() const {
  auto begin = m_obj->m_Hits->begin();
  std::advance(begin, m_obj->data.Hits_begin);
  auto end = m_obj->m_Hits->begin();
  std::advance(end, m_obj->data.Hits_end);
  return {begin, end};
}

void MutableExampleCluster::addClusters(ExampleCluster component) {
  m_obj->m_Clusters->push_back(component);
  m_obj->data.Clusters_end++;
}

std::vector<ExampleCluster>::const_iterator MutableExampleCluster::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ExampleCluster>::const_iterator MutableExampleCluster::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

std::size_t MutableExampleCluster::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ExampleCluster MutableExampleCluster::Clusters(std::size_t index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleCluster> MutableExampleCluster::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}






bool MutableExampleCluster::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleCluster::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleCluster::operator==(const ExampleCluster& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleCluster& value) {
  j = nlohmann::json{
    {"energy", value.energy()}
  };


  j["Hits"] = nlohmann::json::array();
  for (const auto& v : value.Hits()) {
    j["Hits"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

  j["Clusters"] = nlohmann::json::array();
  for (const auto& v : value.Clusters()) {
    j["Clusters"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

}
#endif



