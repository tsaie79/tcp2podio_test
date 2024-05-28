// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleOfDroppedType.h"
#include "datamodel/MutableExampleOfDroppedType.h"
#include "datamodel/ExampleOfDroppedTypeObj.h"
#include "datamodel/ExampleOfDroppedTypeData.h"
#include "datamodel/ExampleOfDroppedTypeCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleOfDroppedType::ExampleOfDroppedType() :
  m_obj(new ExampleOfDroppedTypeObj{}, podio::utils::MarkOwned) {}

ExampleOfDroppedType::ExampleOfDroppedType(int x) :
  m_obj(new ExampleOfDroppedTypeObj{}, podio::utils::MarkOwned) {
  m_obj->data.x = x;
}

ExampleOfDroppedType& ExampleOfDroppedType::operator=(ExampleOfDroppedType other) {
  swap(*this, other);
  return *this;
}

MutableExampleOfDroppedType ExampleOfDroppedType::clone() const {
  return MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr(new ExampleOfDroppedTypeObj(*m_obj), podio::utils::MarkOwned));
}

ExampleOfDroppedType::ExampleOfDroppedType(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> obj) : m_obj(std::move(obj)) {}

ExampleOfDroppedType::ExampleOfDroppedType(const MutableExampleOfDroppedType& other): ExampleOfDroppedType(other.m_obj) {}

ExampleOfDroppedType::ExampleOfDroppedType(ExampleOfDroppedTypeObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>(obj)) {}

ExampleOfDroppedType ExampleOfDroppedType::makeEmpty() {
  return {nullptr};
}

int ExampleOfDroppedType::x() const { return m_obj->data.x; }






bool ExampleOfDroppedType::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleOfDroppedType::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleOfDroppedType::operator==(const MutableExampleOfDroppedType& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleOfDroppedType& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " x : " << value.x() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleOfDroppedType& value) {
  j = nlohmann::json{
    {"x", value.x()}
  };


}
#endif



