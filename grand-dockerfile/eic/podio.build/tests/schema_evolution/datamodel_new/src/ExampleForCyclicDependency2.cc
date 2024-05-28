// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2.h"
#include "datamodel/MutableExampleForCyclicDependency2.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2Collection.h"

#include "datamodel/ExampleForCyclicDependency1.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleForCyclicDependency2::ExampleForCyclicDependency2() :
  m_obj(new ExampleForCyclicDependency2Obj{}, podio::utils::MarkOwned) {}


ExampleForCyclicDependency2& ExampleForCyclicDependency2::operator=(ExampleForCyclicDependency2 other) {
  swap(*this, other);
  return *this;
}

MutableExampleForCyclicDependency2 ExampleForCyclicDependency2::clone() const {
  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(new ExampleForCyclicDependency2Obj(*m_obj), podio::utils::MarkOwned));
}

ExampleForCyclicDependency2::ExampleForCyclicDependency2(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> obj) : m_obj(std::move(obj)) {}

ExampleForCyclicDependency2::ExampleForCyclicDependency2(const MutableExampleForCyclicDependency2& other): ExampleForCyclicDependency2(other.m_obj) {}

ExampleForCyclicDependency2::ExampleForCyclicDependency2(ExampleForCyclicDependency2Obj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>(obj)) {}

ExampleForCyclicDependency2 ExampleForCyclicDependency2::makeEmpty() {
  return {nullptr};
}


const ExampleForCyclicDependency1 ExampleForCyclicDependency2::ref() const {
  if (!m_obj->m_ref) {
    return ExampleForCyclicDependency1::makeEmpty();
  }
  return ExampleForCyclicDependency1(*(m_obj->m_ref));
}






bool ExampleForCyclicDependency2::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleForCyclicDependency2::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleForCyclicDependency2::operator==(const MutableExampleForCyclicDependency2& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';

  o << " ref : " << value.ref().id() << '\n';


  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2& value) {
  j = nlohmann::json{
  };

    j["ref"] = nlohmann::json{
      {"collectionID", value.ref().getObjectID().collectionID },
      {"index", value.ref().getObjectID().index }};


}
#endif



