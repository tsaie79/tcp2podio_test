// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithNamespace.h"
#include "datamodel/MutableExampleWithNamespace.h"
#include "datamodel/ExampleWithNamespaceObj.h"
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespaceCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>

namespace ex42 {



MutableExampleWithNamespace::MutableExampleWithNamespace() :
  m_obj(new ExampleWithNamespaceObj{}, podio::utils::MarkOwned) {}

MutableExampleWithNamespace::MutableExampleWithNamespace(ex2::NamespaceStruct component) :
  m_obj(new ExampleWithNamespaceObj{}, podio::utils::MarkOwned) {
  m_obj->data.component = component;
}

MutableExampleWithNamespace& MutableExampleWithNamespace::operator=(MutableExampleWithNamespace other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithNamespace MutableExampleWithNamespace::clone() const {
  return MutableExampleWithNamespace(podio::utils::MaybeSharedPtr(new ExampleWithNamespaceObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithNamespace::MutableExampleWithNamespace(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> obj) : m_obj(std::move(obj)) {}

const ex2::NamespaceStruct& MutableExampleWithNamespace::component() const { return m_obj->data.component; }
int MutableExampleWithNamespace::x() const { return m_obj->data.component.x; }
int MutableExampleWithNamespace::y_new() const { return m_obj->data.component.y_new; }


void MutableExampleWithNamespace::component(ex2::NamespaceStruct value) { m_obj->data.component = value; }
ex2::NamespaceStruct& MutableExampleWithNamespace::component() { return m_obj->data.component; }
void MutableExampleWithNamespace::x(int value) { m_obj->data.component.x = value; }
void MutableExampleWithNamespace::y_new(int value) { m_obj->data.component.y_new = value; }







bool MutableExampleWithNamespace::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithNamespace::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithNamespace::operator==(const ExampleWithNamespace& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithNamespace& value) {
  j = nlohmann::json{
    {"component", value.component()}
  };


}
#endif


} // namespace ex42

