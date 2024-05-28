// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleMC.h"
#include "datamodel/MutableExampleMC.h"
#include "datamodel/ExampleMCObj.h"
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMCCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleMC::MutableExampleMC() :
  m_obj(new ExampleMCObj{}, podio::utils::MarkOwned) {}

MutableExampleMC::MutableExampleMC(double energy, int PDG) :
  m_obj(new ExampleMCObj{}, podio::utils::MarkOwned) {
  m_obj->data.energy = energy;
  m_obj->data.PDG = PDG;
}

MutableExampleMC& MutableExampleMC::operator=(MutableExampleMC other) {
  swap(*this, other);
  return *this;
}

MutableExampleMC MutableExampleMC::clone() const {
  return MutableExampleMC(podio::utils::MaybeSharedPtr(new ExampleMCObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleMC::MutableExampleMC(podio::utils::MaybeSharedPtr<ExampleMCObj> obj) : m_obj(std::move(obj)) {}

double MutableExampleMC::energy() const { return m_obj->data.energy; }
int MutableExampleMC::PDG() const { return m_obj->data.PDG; }


void MutableExampleMC::energy(double value) { m_obj->data.energy = value; }
double& MutableExampleMC::energy() { return m_obj->data.energy; }
void MutableExampleMC::PDG(int value) { m_obj->data.PDG = value; }
int& MutableExampleMC::PDG() { return m_obj->data.PDG; }


void MutableExampleMC::addparents(ExampleMC component) {
  m_obj->m_parents->push_back(component);
  m_obj->data.parents_end++;
}

std::vector<ExampleMC>::const_iterator MutableExampleMC::parents_begin() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_begin);
  return ret_value;
}

std::vector<ExampleMC>::const_iterator MutableExampleMC::parents_end() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_end);
  return ret_value;
}

std::size_t MutableExampleMC::parents_size() const {
  return m_obj->data.parents_end - m_obj->data.parents_begin;
}

ExampleMC MutableExampleMC::parents(std::size_t index) const {
  if (parents_size() > index) {
    return m_obj->m_parents->at(m_obj->data.parents_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleMC> MutableExampleMC::parents() const {
  auto begin = m_obj->m_parents->begin();
  std::advance(begin, m_obj->data.parents_begin);
  auto end = m_obj->m_parents->begin();
  std::advance(end, m_obj->data.parents_end);
  return {begin, end};
}

void MutableExampleMC::adddaughters(ExampleMC component) {
  m_obj->m_daughters->push_back(component);
  m_obj->data.daughters_end++;
}

std::vector<ExampleMC>::const_iterator MutableExampleMC::daughters_begin() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_begin);
  return ret_value;
}

std::vector<ExampleMC>::const_iterator MutableExampleMC::daughters_end() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_end);
  return ret_value;
}

std::size_t MutableExampleMC::daughters_size() const {
  return m_obj->data.daughters_end - m_obj->data.daughters_begin;
}

ExampleMC MutableExampleMC::daughters(std::size_t index) const {
  if (daughters_size() > index) {
    return m_obj->m_daughters->at(m_obj->data.daughters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleMC> MutableExampleMC::daughters() const {
  auto begin = m_obj->m_daughters->begin();
  std::advance(begin, m_obj->data.daughters_begin);
  auto end = m_obj->m_daughters->begin();
  std::advance(end, m_obj->data.daughters_end);
  return {begin, end};
}






bool MutableExampleMC::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleMC::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleMC::operator==(const ExampleMC& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleMC& value) {
  j = nlohmann::json{
    {"energy", value.energy()}
    ,{"PDG", value.PDG()}
  };


  j["parents"] = nlohmann::json::array();
  for (const auto& v : value.parents()) {
    j["parents"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

  j["daughters"] = nlohmann::json::array();
  for (const auto& v : value.daughters()) {
    j["daughters"].emplace_back(nlohmann::json{
      {"collectionID", v.getObjectID().collectionID },
      {"index", v.getObjectID().index }});
  }

}
#endif



