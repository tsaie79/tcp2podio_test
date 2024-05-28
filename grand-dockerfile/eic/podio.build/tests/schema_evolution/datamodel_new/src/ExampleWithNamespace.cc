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



ExampleWithNamespace::ExampleWithNamespace() :
  m_obj(new ExampleWithNamespaceObj{}, podio::utils::MarkOwned) {}

ExampleWithNamespace::ExampleWithNamespace(ex2::NamespaceStruct component) :
  m_obj(new ExampleWithNamespaceObj{}, podio::utils::MarkOwned) {
  m_obj->data.component = component;
}

ExampleWithNamespace& ExampleWithNamespace::operator=(ExampleWithNamespace other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithNamespace ExampleWithNamespace::clone() const {
  return MutableExampleWithNamespace(podio::utils::MaybeSharedPtr(new ExampleWithNamespaceObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithNamespace::ExampleWithNamespace(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> obj) : m_obj(std::move(obj)) {}

ExampleWithNamespace::ExampleWithNamespace(const MutableExampleWithNamespace& other): ExampleWithNamespace(other.m_obj) {}

ExampleWithNamespace::ExampleWithNamespace(ExampleWithNamespaceObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>(obj)) {}

ExampleWithNamespace ExampleWithNamespace::makeEmpty() {
  return {nullptr};
}

const ex2::NamespaceStruct& ExampleWithNamespace::component() const { return m_obj->data.component; }
int ExampleWithNamespace::x() const { return m_obj->data.component.x; }
int ExampleWithNamespace::y_new() const { return m_obj->data.component.y_new; }






bool ExampleWithNamespace::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithNamespace::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithNamespace::operator==(const MutableExampleWithNamespace& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespace& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " component : " << value.component() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithNamespace& value) {
  j = nlohmann::json{
    {"component", value.component()}
  };


}
#endif


} // namespace ex42

