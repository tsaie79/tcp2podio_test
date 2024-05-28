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




MutableExampleForCyclicDependency2::MutableExampleForCyclicDependency2() :
  m_obj(new ExampleForCyclicDependency2Obj{}, podio::utils::MarkOwned) {}


MutableExampleForCyclicDependency2& MutableExampleForCyclicDependency2::operator=(MutableExampleForCyclicDependency2 other) {
  swap(*this, other);
  return *this;
}

MutableExampleForCyclicDependency2 MutableExampleForCyclicDependency2::clone() const {
  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(new ExampleForCyclicDependency2Obj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleForCyclicDependency2::MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> obj) : m_obj(std::move(obj)) {}


const ExampleForCyclicDependency1 MutableExampleForCyclicDependency2::ref() const {
  if (!m_obj->m_ref) {
    return ExampleForCyclicDependency1::makeEmpty();
  }
  return ExampleForCyclicDependency1(*(m_obj->m_ref));
}



void MutableExampleForCyclicDependency2::ref(ExampleForCyclicDependency1 value) {
  if (m_obj->m_ref) {
    delete m_obj->m_ref;
  }
  m_obj->m_ref = new ExampleForCyclicDependency1(value);
}







bool MutableExampleForCyclicDependency2::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleForCyclicDependency2::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleForCyclicDependency2::operator==(const ExampleForCyclicDependency2& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleForCyclicDependency2& value) {
  j = nlohmann::json{
  };

    j["ref"] = nlohmann::json{
      {"collectionID", value.ref().getObjectID().collectionID },
      {"index", value.ref().getObjectID().index }};


}
#endif



