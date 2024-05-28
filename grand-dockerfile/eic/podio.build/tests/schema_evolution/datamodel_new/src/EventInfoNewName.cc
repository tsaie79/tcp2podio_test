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




EventInfoNewName::EventInfoNewName() :
  m_obj(new EventInfoNewNameObj{}, podio::utils::MarkOwned) {}

EventInfoNewName::EventInfoNewName(int Number) :
  m_obj(new EventInfoNewNameObj{}, podio::utils::MarkOwned) {
  m_obj->data.Number = Number;
}

EventInfoNewName& EventInfoNewName::operator=(EventInfoNewName other) {
  swap(*this, other);
  return *this;
}

MutableEventInfoNewName EventInfoNewName::clone() const {
  return MutableEventInfoNewName(podio::utils::MaybeSharedPtr(new EventInfoNewNameObj(*m_obj), podio::utils::MarkOwned));
}

EventInfoNewName::EventInfoNewName(podio::utils::MaybeSharedPtr<EventInfoNewNameObj> obj) : m_obj(std::move(obj)) {}

EventInfoNewName::EventInfoNewName(const MutableEventInfoNewName& other): EventInfoNewName(other.m_obj) {}

EventInfoNewName::EventInfoNewName(EventInfoNewNameObj* obj) : m_obj(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>(obj)) {}

EventInfoNewName EventInfoNewName::makeEmpty() {
  return {nullptr};
}

int EventInfoNewName::Number() const { return m_obj->data.Number; }




int EventInfoNewName::getNumber() const { return Number(); }


bool EventInfoNewName::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID EventInfoNewName::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool EventInfoNewName::operator==(const MutableEventInfoNewName& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const EventInfoNewName& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " Number : " << value.Number() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoNewName& value) {
  j = nlohmann::json{
    {"Number", value.Number()}
  };


}
#endif



