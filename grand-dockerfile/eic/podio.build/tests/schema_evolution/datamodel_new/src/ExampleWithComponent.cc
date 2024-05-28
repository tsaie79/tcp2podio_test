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




ExampleWithComponent::ExampleWithComponent() :
  m_obj(new ExampleWithComponentObj{}, podio::utils::MarkOwned) {}

ExampleWithComponent::ExampleWithComponent(NotSoSimpleStruct component) :
  m_obj(new ExampleWithComponentObj{}, podio::utils::MarkOwned) {
  m_obj->data.component = component;
}

ExampleWithComponent& ExampleWithComponent::operator=(ExampleWithComponent other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithComponent ExampleWithComponent::clone() const {
  return MutableExampleWithComponent(podio::utils::MaybeSharedPtr(new ExampleWithComponentObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithComponent::ExampleWithComponent(podio::utils::MaybeSharedPtr<ExampleWithComponentObj> obj) : m_obj(std::move(obj)) {}

ExampleWithComponent::ExampleWithComponent(const MutableExampleWithComponent& other): ExampleWithComponent(other.m_obj) {}

ExampleWithComponent::ExampleWithComponent(ExampleWithComponentObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>(obj)) {}

ExampleWithComponent ExampleWithComponent::makeEmpty() {
  return {nullptr};
}

const NotSoSimpleStruct& ExampleWithComponent::component() const { return m_obj->data.component; }
const SimpleStruct& ExampleWithComponent::data() const { return m_obj->data.component.data; }






bool ExampleWithComponent::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithComponent::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithComponent::operator==(const MutableExampleWithComponent& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithComponent& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " component : " << value.component() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithComponent& value) {
  j = nlohmann::json{
    {"component", value.component()}
  };


}
#endif



