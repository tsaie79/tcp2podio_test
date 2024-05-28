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




ExampleMC::ExampleMC() :
  m_obj(new ExampleMCObj{}, podio::utils::MarkOwned) {}

ExampleMC::ExampleMC(double energy, int PDG) :
  m_obj(new ExampleMCObj{}, podio::utils::MarkOwned) {
  m_obj->data.energy = energy;
  m_obj->data.PDG = PDG;
}

ExampleMC& ExampleMC::operator=(ExampleMC other) {
  swap(*this, other);
  return *this;
}

MutableExampleMC ExampleMC::clone() const {
  return MutableExampleMC(podio::utils::MaybeSharedPtr(new ExampleMCObj(*m_obj), podio::utils::MarkOwned));
}

ExampleMC::ExampleMC(podio::utils::MaybeSharedPtr<ExampleMCObj> obj) : m_obj(std::move(obj)) {}

ExampleMC::ExampleMC(const MutableExampleMC& other): ExampleMC(other.m_obj) {}

ExampleMC::ExampleMC(ExampleMCObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleMCObj>(obj)) {}

ExampleMC ExampleMC::makeEmpty() {
  return {nullptr};
}

double ExampleMC::energy() const { return m_obj->data.energy; }
int ExampleMC::PDG() const { return m_obj->data.PDG; }



std::vector<ExampleMC>::const_iterator ExampleMC::parents_begin() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_begin);
  return ret_value;
}

std::vector<ExampleMC>::const_iterator ExampleMC::parents_end() const {
  auto ret_value = m_obj->m_parents->begin();
  std::advance(ret_value, m_obj->data.parents_end);
  return ret_value;
}

std::size_t ExampleMC::parents_size() const {
  return m_obj->data.parents_end - m_obj->data.parents_begin;
}

ExampleMC ExampleMC::parents(std::size_t index) const {
  if (parents_size() > index) {
    return m_obj->m_parents->at(m_obj->data.parents_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleMC> ExampleMC::parents() const {
  auto begin = m_obj->m_parents->begin();
  std::advance(begin, m_obj->data.parents_begin);
  auto end = m_obj->m_parents->begin();
  std::advance(end, m_obj->data.parents_end);
  return {begin, end};
}


std::vector<ExampleMC>::const_iterator ExampleMC::daughters_begin() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_begin);
  return ret_value;
}

std::vector<ExampleMC>::const_iterator ExampleMC::daughters_end() const {
  auto ret_value = m_obj->m_daughters->begin();
  std::advance(ret_value, m_obj->data.daughters_end);
  return ret_value;
}

std::size_t ExampleMC::daughters_size() const {
  return m_obj->data.daughters_end - m_obj->data.daughters_begin;
}

ExampleMC ExampleMC::daughters(std::size_t index) const {
  if (daughters_size() > index) {
    return m_obj->m_daughters->at(m_obj->data.daughters_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<ExampleMC> ExampleMC::daughters() const {
  auto begin = m_obj->m_daughters->begin();
  std::advance(begin, m_obj->data.daughters_begin);
  auto end = m_obj->m_daughters->begin();
  std::advance(end, m_obj->data.daughters_end);
  return {begin, end};
}





bool ExampleMC::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleMC::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleMC::operator==(const MutableExampleMC& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleMC& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " energy : " << value.energy() << '\n';
  o << " PDG : " << value.PDG() << '\n';


  o << " parents : ";
  for (unsigned i = 0; i < value.parents_size(); ++i) {
    o << value.parents(i).id() << " ";
  }
  o << '\n';
  o << " daughters : ";
  for (unsigned i = 0; i < value.daughters_size(); ++i) {
    o << value.daughters(i).id() << " ";
  }
  o << '\n';

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleMC& value) {
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



