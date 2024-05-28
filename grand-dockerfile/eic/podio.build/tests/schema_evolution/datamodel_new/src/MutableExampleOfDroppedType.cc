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




MutableExampleOfDroppedType::MutableExampleOfDroppedType() :
  m_obj(new ExampleOfDroppedTypeObj{}, podio::utils::MarkOwned) {}

MutableExampleOfDroppedType::MutableExampleOfDroppedType(int x) :
  m_obj(new ExampleOfDroppedTypeObj{}, podio::utils::MarkOwned) {
  m_obj->data.x = x;
}

MutableExampleOfDroppedType& MutableExampleOfDroppedType::operator=(MutableExampleOfDroppedType other) {
  swap(*this, other);
  return *this;
}

MutableExampleOfDroppedType MutableExampleOfDroppedType::clone() const {
  return MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr(new ExampleOfDroppedTypeObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleOfDroppedType::MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> obj) : m_obj(std::move(obj)) {}

int MutableExampleOfDroppedType::x() const { return m_obj->data.x; }


void MutableExampleOfDroppedType::x(int value) { m_obj->data.x = value; }
int& MutableExampleOfDroppedType::x() { return m_obj->data.x; }







bool MutableExampleOfDroppedType::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleOfDroppedType::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleOfDroppedType::operator==(const ExampleOfDroppedType& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleOfDroppedType& value) {
  j = nlohmann::json{
    {"x", value.x()}
  };


}
#endif



