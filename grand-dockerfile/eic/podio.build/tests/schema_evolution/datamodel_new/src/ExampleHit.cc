// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleHit.h"
#include "datamodel/MutableExampleHit.h"
#include "datamodel/ExampleHitObj.h"
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHitCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleHit::ExampleHit() :
  m_obj(new ExampleHitObj{}, podio::utils::MarkOwned) {}

ExampleHit::ExampleHit(unsigned long long cellID, double x, double y, double z, double energy, double t) :
  m_obj(new ExampleHitObj{}, podio::utils::MarkOwned) {
  m_obj->data.cellID = cellID;
  m_obj->data.x = x;
  m_obj->data.y = y;
  m_obj->data.z = z;
  m_obj->data.energy = energy;
  m_obj->data.t = t;
}

ExampleHit& ExampleHit::operator=(ExampleHit other) {
  swap(*this, other);
  return *this;
}

MutableExampleHit ExampleHit::clone() const {
  return MutableExampleHit(podio::utils::MaybeSharedPtr(new ExampleHitObj(*m_obj), podio::utils::MarkOwned));
}

ExampleHit::ExampleHit(podio::utils::MaybeSharedPtr<ExampleHitObj> obj) : m_obj(std::move(obj)) {}

ExampleHit::ExampleHit(const MutableExampleHit& other): ExampleHit(other.m_obj) {}

ExampleHit::ExampleHit(ExampleHitObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleHitObj>(obj)) {}

ExampleHit ExampleHit::makeEmpty() {
  return {nullptr};
}

unsigned long long ExampleHit::cellID() const { return m_obj->data.cellID; }
double ExampleHit::x() const { return m_obj->data.x; }
double ExampleHit::y() const { return m_obj->data.y; }
double ExampleHit::z() const { return m_obj->data.z; }
double ExampleHit::energy() const { return m_obj->data.energy; }
double ExampleHit::t() const { return m_obj->data.t; }






bool ExampleHit::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleHit::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleHit::operator==(const MutableExampleHit& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleHit& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " cellID : " << value.cellID() << '\n';
  o << " x : " << value.x() << '\n';
  o << " y : " << value.y() << '\n';
  o << " z : " << value.z() << '\n';
  o << " energy : " << value.energy() << '\n';
  o << " t : " << value.t() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleHit& value) {
  j = nlohmann::json{
    {"cellID", value.cellID()}
    ,{"x", value.x()}
    ,{"y", value.y()}
    ,{"z", value.z()}
    ,{"energy", value.energy()}
    ,{"t", value.t()}
  };


}
#endif



