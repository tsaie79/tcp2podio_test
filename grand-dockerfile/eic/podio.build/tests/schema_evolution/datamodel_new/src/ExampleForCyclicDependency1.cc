// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1.h"
#include "datamodel/MutableExampleForCyclicDependency1.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1Collection.h"

#include "datamodel/ExampleForCyclicDependency2.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleForCyclicDependency1::ExampleForCyclicDependency1() :
  m_obj(new ExampleForCyclicDependency1Obj{}, podio::utils::MarkOwned) {}


ExampleForCyclicDependency1& ExampleForCyclicDependency1::operator=(ExampleForCyclicDependency1 other) {
  swap(*this, other);
  return *this;
}

MutableExampleForCyclicDependency1 ExampleForCyclicDependency1::clone() const {
  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(new ExampleForCyclicDependency1Obj(*m_obj), podio::utils::MarkOwned));
}

ExampleForCyclicDependency1::ExampleForCyclicDependency1(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> obj) : m_obj(std::move(obj)) {}

ExampleForCyclicDependency1::ExampleForCyclicDependency1(const MutableExampleForCyclicDependency1& other): ExampleForCyclicDependency1(other.m_obj) {}

ExampleForCyclicDependency1::ExampleForCyclicDependency1(ExampleForCyclicDependency1Obj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>(obj)) {}

ExampleForCyclicDependency1 ExampleForCyclicDependency1::makeEmpty() {
  return {nullptr};
}


const ExampleForCyclicDependency2 ExampleForCyclicDependency1::ref() const {
  if (!m_obj->m_ref) {
    return ExampleForCyclicDependency2::makeEmpty();
  }
  return ExampleForCyclicDependency2(*(m_obj->m_ref));
}






bool ExampleForCyclicDependency1::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleForCyclicDependency1::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleForCyclicDependency1::operator==(const MutableExampleForCyclicDependency1& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';

  o << " ref : " << value.ref().id() << '\n';


  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1& value) {
  j = nlohmann::json{
  };

    j["ref"] = nlohmann::json{
      {"collectionID", value.ref().getObjectID().collectionID },
      {"index", value.ref().getObjectID().index }};


}
#endif



