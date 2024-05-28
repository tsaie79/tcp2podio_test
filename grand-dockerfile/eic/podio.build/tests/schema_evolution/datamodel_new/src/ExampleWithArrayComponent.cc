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




ExampleWithArrayComponent::ExampleWithArrayComponent() :
  m_obj(new ExampleWithArrayComponentObj{}, podio::utils::MarkOwned) {}

ExampleWithArrayComponent::ExampleWithArrayComponent(SimpleStruct s) :
  m_obj(new ExampleWithArrayComponentObj{}, podio::utils::MarkOwned) {
  m_obj->data.s = s;
}

ExampleWithArrayComponent& ExampleWithArrayComponent::operator=(ExampleWithArrayComponent other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithArrayComponent ExampleWithArrayComponent::clone() const {
  return MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr(new ExampleWithArrayComponentObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithArrayComponent::ExampleWithArrayComponent(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> obj) : m_obj(std::move(obj)) {}

ExampleWithArrayComponent::ExampleWithArrayComponent(const MutableExampleWithArrayComponent& other): ExampleWithArrayComponent(other.m_obj) {}

ExampleWithArrayComponent::ExampleWithArrayComponent(ExampleWithArrayComponentObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>(obj)) {}

ExampleWithArrayComponent ExampleWithArrayComponent::makeEmpty() {
  return {nullptr};
}

const SimpleStruct& ExampleWithArrayComponent::s() const { return m_obj->data.s; }
int ExampleWithArrayComponent::x() const { return m_obj->data.s.x; }
int ExampleWithArrayComponent::y() const { return m_obj->data.s.y; }
int ExampleWithArrayComponent::z() const { return m_obj->data.s.z; }
int ExampleWithArrayComponent::t() const { return m_obj->data.s.t; }
const std::array<int, 4>& ExampleWithArrayComponent::p() const { return m_obj->data.s.p; }






bool ExampleWithArrayComponent::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithArrayComponent::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithArrayComponent::operator==(const MutableExampleWithArrayComponent& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayComponent& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " s : " << value.s() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayComponent& value) {
  j = nlohmann::json{
    {"s", value.s()}
  };


}
#endif



