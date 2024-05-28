// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithComponent.h"
#include "datamodel/MutableExampleWithComponent.h"
#include "datamodel/ExampleWithComponentObj.h"
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponentCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleWithComponent::MutableExampleWithComponent() :
  m_obj(new ExampleWithComponentObj{}, podio::utils::MarkOwned) {}

MutableExampleWithComponent::MutableExampleWithComponent(NotSoSimpleStruct component) :
  m_obj(new ExampleWithComponentObj{}, podio::utils::MarkOwned) {
  m_obj->data.component = component;
}

MutableExampleWithComponent& MutableExampleWithComponent::operator=(MutableExampleWithComponent other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithComponent MutableExampleWithComponent::clone() const {
  return MutableExampleWithComponent(podio::utils::MaybeSharedPtr(new ExampleWithComponentObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithComponent::MutableExampleWithComponent(podio::utils::MaybeSharedPtr<ExampleWithComponentObj> obj) : m_obj(std::move(obj)) {}

const NotSoSimpleStruct& MutableExampleWithComponent::component() const { return m_obj->data.component; }
const SimpleStruct& MutableExampleWithComponent::data() const { return m_obj->data.component.data; }


void MutableExampleWithComponent::component(NotSoSimpleStruct value) { m_obj->data.component = value; }
NotSoSimpleStruct& MutableExampleWithComponent::component() { return m_obj->data.component; }
void MutableExampleWithComponent::data(SimpleStruct value) { m_obj->data.component.data = value; }
SimpleStruct& MutableExampleWithComponent::data() { return m_obj->data.component.data; }







bool MutableExampleWithComponent::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithComponent::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithComponent::operator==(const ExampleWithComponent& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithComponent& value) {
  j = nlohmann::json{
    {"component", value.component()}
  };


}
#endif



