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




MutableExampleForCyclicDependency1::MutableExampleForCyclicDependency1() :
  m_obj(new ExampleForCyclicDependency1Obj{}, podio::utils::MarkOwned) {}


MutableExampleForCyclicDependency1& MutableExampleForCyclicDependency1::operator=(MutableExampleForCyclicDependency1 other) {
  swap(*this, other);
  return *this;
}

MutableExampleForCyclicDependency1 MutableExampleForCyclicDependency1::clone() const {
  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(new ExampleForCyclicDependency1Obj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleForCyclicDependency1::MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> obj) : m_obj(std::move(obj)) {}


const ExampleForCyclicDependency2 MutableExampleForCyclicDependency1::ref() const {
  if (!m_obj->m_ref) {
    return ExampleForCyclicDependency2::makeEmpty();
  }
  return ExampleForCyclicDependency2(*(m_obj->m_ref));
}



void MutableExampleForCyclicDependency1::ref(ExampleForCyclicDependency2 value) {
  if (m_obj->m_ref) {
    delete m_obj->m_ref;
  }
  m_obj->m_ref = new ExampleForCyclicDependency2(value);
}







bool MutableExampleForCyclicDependency1::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleForCyclicDependency1::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleForCyclicDependency1::operator==(const ExampleForCyclicDependency1& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleForCyclicDependency1& value) {
  j = nlohmann::json{
  };

    j["ref"] = nlohmann::json{
      {"collectionID", value.ref().getObjectID().collectionID },
      {"index", value.ref().getObjectID().index }};


}
#endif



