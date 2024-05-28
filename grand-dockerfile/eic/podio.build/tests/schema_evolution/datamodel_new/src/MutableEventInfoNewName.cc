// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/EventInfoNewName.h"
#include "datamodel/MutableEventInfoNewName.h"
#include "datamodel/EventInfoNewNameObj.h"
#include "datamodel/EventInfoNewNameData.h"
#include "datamodel/EventInfoNewNameCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableEventInfoNewName::MutableEventInfoNewName() :
  m_obj(new EventInfoNewNameObj{}, podio::utils::MarkOwned) {}

MutableEventInfoNewName::MutableEventInfoNewName(int Number) :
  m_obj(new EventInfoNewNameObj{}, podio::utils::MarkOwned) {
  m_obj->data.Number = Number;
}

MutableEventInfoNewName& MutableEventInfoNewName::operator=(MutableEventInfoNewName other) {
  swap(*this, other);
  return *this;
}

MutableEventInfoNewName MutableEventInfoNewName::clone() const {
  return MutableEventInfoNewName(podio::utils::MaybeSharedPtr(new EventInfoNewNameObj(*m_obj), podio::utils::MarkOwned));
}

MutableEventInfoNewName::MutableEventInfoNewName(podio::utils::MaybeSharedPtr<EventInfoNewNameObj> obj) : m_obj(std::move(obj)) {}

int MutableEventInfoNewName::Number() const { return m_obj->data.Number; }


void MutableEventInfoNewName::Number(int value) { m_obj->data.Number = value; }
int& MutableEventInfoNewName::Number() { return m_obj->data.Number; }




int MutableEventInfoNewName::getNumber() const { return Number(); }



bool MutableEventInfoNewName::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableEventInfoNewName::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableEventInfoNewName::operator==(const EventInfoNewName& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableEventInfoNewName& value) {
  j = nlohmann::json{
    {"Number", value.Number()}
  };


}
#endif



