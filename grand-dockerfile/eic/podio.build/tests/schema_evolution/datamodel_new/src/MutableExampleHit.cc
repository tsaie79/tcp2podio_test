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




MutableExampleHit::MutableExampleHit() :
  m_obj(new ExampleHitObj{}, podio::utils::MarkOwned) {}

MutableExampleHit::MutableExampleHit(unsigned long long cellID, double x, double y, double z, double energy, double t) :
  m_obj(new ExampleHitObj{}, podio::utils::MarkOwned) {
  m_obj->data.cellID = cellID;
  m_obj->data.x = x;
  m_obj->data.y = y;
  m_obj->data.z = z;
  m_obj->data.energy = energy;
  m_obj->data.t = t;
}

MutableExampleHit& MutableExampleHit::operator=(MutableExampleHit other) {
  swap(*this, other);
  return *this;
}

MutableExampleHit MutableExampleHit::clone() const {
  return MutableExampleHit(podio::utils::MaybeSharedPtr(new ExampleHitObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleHit::MutableExampleHit(podio::utils::MaybeSharedPtr<ExampleHitObj> obj) : m_obj(std::move(obj)) {}

unsigned long long MutableExampleHit::cellID() const { return m_obj->data.cellID; }
double MutableExampleHit::x() const { return m_obj->data.x; }
double MutableExampleHit::y() const { return m_obj->data.y; }
double MutableExampleHit::z() const { return m_obj->data.z; }
double MutableExampleHit::energy() const { return m_obj->data.energy; }
double MutableExampleHit::t() const { return m_obj->data.t; }


void MutableExampleHit::cellID(unsigned long long value) { m_obj->data.cellID = value; }
unsigned long long& MutableExampleHit::cellID() { return m_obj->data.cellID; }
void MutableExampleHit::x(double value) { m_obj->data.x = value; }
double& MutableExampleHit::x() { return m_obj->data.x; }
void MutableExampleHit::y(double value) { m_obj->data.y = value; }
double& MutableExampleHit::y() { return m_obj->data.y; }
void MutableExampleHit::z(double value) { m_obj->data.z = value; }
double& MutableExampleHit::z() { return m_obj->data.z; }
void MutableExampleHit::energy(double value) { m_obj->data.energy = value; }
double& MutableExampleHit::energy() { return m_obj->data.energy; }
void MutableExampleHit::t(double value) { m_obj->data.t = value; }
double& MutableExampleHit::t() { return m_obj->data.t; }







bool MutableExampleHit::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleHit::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleHit::operator==(const ExampleHit& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleHit& value) {
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



