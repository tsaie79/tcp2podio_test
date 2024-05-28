// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithArrayComponent.h"
#include "datamodel/MutableExampleWithArrayComponent.h"
#include "datamodel/ExampleWithArrayComponentObj.h"
#include "datamodel/ExampleWithArrayComponentData.h"
#include "datamodel/ExampleWithArrayComponentCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleWithArrayComponent::MutableExampleWithArrayComponent() :
  m_obj(new ExampleWithArrayComponentObj{}, podio::utils::MarkOwned) {}

MutableExampleWithArrayComponent::MutableExampleWithArrayComponent(SimpleStruct s) :
  m_obj(new ExampleWithArrayComponentObj{}, podio::utils::MarkOwned) {
  m_obj->data.s = s;
}

MutableExampleWithArrayComponent& MutableExampleWithArrayComponent::operator=(MutableExampleWithArrayComponent other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithArrayComponent MutableExampleWithArrayComponent::clone() const {
  return MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr(new ExampleWithArrayComponentObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithArrayComponent::MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> obj) : m_obj(std::move(obj)) {}

const SimpleStruct& MutableExampleWithArrayComponent::s() const { return m_obj->data.s; }
int MutableExampleWithArrayComponent::x() const { return m_obj->data.s.x; }
int MutableExampleWithArrayComponent::y() const { return m_obj->data.s.y; }
int MutableExampleWithArrayComponent::z() const { return m_obj->data.s.z; }
int MutableExampleWithArrayComponent::t() const { return m_obj->data.s.t; }
const std::array<int, 4>& MutableExampleWithArrayComponent::p() const { return m_obj->data.s.p; }


void MutableExampleWithArrayComponent::s(SimpleStruct value) { m_obj->data.s = value; }
SimpleStruct& MutableExampleWithArrayComponent::s() { return m_obj->data.s; }
void MutableExampleWithArrayComponent::x(int value) { m_obj->data.s.x = value; }
void MutableExampleWithArrayComponent::y(int value) { m_obj->data.s.y = value; }
void MutableExampleWithArrayComponent::z(int value) { m_obj->data.s.z = value; }
void MutableExampleWithArrayComponent::t(int value) { m_obj->data.s.t = value; }
void MutableExampleWithArrayComponent::p(std::array<int, 4> value) { m_obj->data.s.p = value; }
std::array<int, 4>& MutableExampleWithArrayComponent::p() { return m_obj->data.s.p; }







bool MutableExampleWithArrayComponent::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithArrayComponent::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithArrayComponent::operator==(const ExampleWithArrayComponent& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithArrayComponent& value) {
  j = nlohmann::json{
    {"s", value.s()}
  };


}
#endif



