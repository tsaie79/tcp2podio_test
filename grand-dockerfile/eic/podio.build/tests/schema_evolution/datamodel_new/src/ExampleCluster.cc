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




ExampleCluster::ExampleCluster() :
  m_obj(new ExampleClusterObj{}, podio::utils::MarkOwned) {}

ExampleCluster::ExampleCluster(double energy) :
  m_obj(new ExampleClusterObj{}, podio::utils::MarkOwned) {
  m_obj->data.energy = energy;
}

ExampleCluster& ExampleCluster::operator=(ExampleCluster other) {
  swap(*this, other);
  return *this;
}

MutableExampleCluster ExampleCluster::clone() const {
  return MutableExampleCluster(podio::utils::MaybeSharedPtr(new ExampleClusterObj(*m_obj), podio::utils::MarkOwned));
}

ExampleCluster::ExampleCluster(podio::utils::MaybeSharedPtr<ExampleClusterObj> obj) : m_obj(std::move(obj)) {}

ExampleCluster::ExampleCluster(const MutableExampleCluster& other): ExampleCluster(other.m_obj) {}

ExampleCluster::ExampleCluster(ExampleClusterObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleClusterObj>(obj)) {}

ExampleCluster ExampleCluster::makeEmpty() {
  return {nullptr};
}

double ExampleCluster::energy() const { return m_obj->data.energy; }



std::vector<ExampleHit>::const_iterator ExampleCluster::Hits_begin() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_begin);
  return ret_value;
}

std::vector<ExampleHit>::const_iterator ExampleCluster::Hits_end() const {
  auto ret_value = m_obj->m_Hits->begin();
  std::advance(ret_value, m_obj->data.Hits_end);
  return ret_value;
}

std::size_t ExampleCluster::Hits_size() const {
  return m_obj->data.Hits_end - m_obj->data.Hits_begin;
}

ExampleHit ExampleCluster::Hits(std::size_t index) const {
  if (Hits_size() > index) {
    return m_obj->m_Hits->at(m_obj->data.Hits_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleHit> ExampleCluster::Hits() const {
  auto begin = m_obj->m_Hits->begin();
  std::advance(begin, m_obj->data.Hits_begin);
  auto end = m_obj->m_Hits->begin();
  std::advance(end, m_obj->data.Hits_end);
  return {begin, end};
}


std::vector<ExampleCluster>::const_iterator ExampleCluster::Clusters_begin() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_begin);
  return ret_value;
}

std::vector<ExampleCluster>::const_iterator ExampleCluster::Clusters_end() const {
  auto ret_value = m_obj->m_Clusters->begin();
  std::advance(ret_value, m_obj->data.Clusters_end);
  return ret_value;
}

std::size_t ExampleCluster::Clusters_size() const {
  return m_obj->data.Clusters_end - m_obj->data.Clusters_begin;
}

ExampleCluster ExampleCluster::Clusters(std::size_t index) const {
  if (Clusters_size() > index) {
    return m_obj->m_Clusters->at(m_obj->data.Clusters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleCluster> ExampleCluster::Clusters() const {
  auto begin = m_obj->m_Clusters->begin();
  std::advance(begin, m_obj->data.Clusters_begin);
  auto end = m_obj->m_Clusters->begin();
  std::advance(end, m_obj->data.Clusters_end);
  return {begin, end};
}





bool ExampleCluster::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleCluster::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleCluster::operator==(const MutableExampleCluster& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleCluster& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " energy : " << value.energy() << '\n';


  o << " Hits : ";
  for (unsigned i = 0; i < value.Hits_size(); ++i) {
    o << value.Hits(i) << " ";
  }
  o << '\n';
  o << " Clusters : ";
  for (unsigned i = 0; i < value.Clusters_size(); ++i) {
    o << value.Clusters(i).id() << " ";
  }
  o << '\n';

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleCluster& value) {
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



