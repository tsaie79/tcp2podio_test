// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithUserInit.h"
#include "datamodel/MutableExampleWithUserInit.h"
#include "datamodel/ExampleWithUserInitObj.h"
#include "datamodel/ExampleWithUserInitData.h"
#include "datamodel/ExampleWithUserInitCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleWithUserInit::ExampleWithUserInit() :
  m_obj(new ExampleWithUserInitObj{}, podio::utils::MarkOwned) {}

ExampleWithUserInit::ExampleWithUserInit(std::int16_t i16Val, std::array<float, 2> floats, ex2::NamespaceStruct s, double d, CompWithInit comp) :
  m_obj(new ExampleWithUserInitObj{}, podio::utils::MarkOwned) {
  m_obj->data.i16Val = i16Val;
  m_obj->data.floats = floats;
  m_obj->data.s = s;
  m_obj->data.d = d;
  m_obj->data.comp = comp;
}

ExampleWithUserInit& ExampleWithUserInit::operator=(ExampleWithUserInit other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithUserInit ExampleWithUserInit::clone() const {
  return MutableExampleWithUserInit(podio::utils::MaybeSharedPtr(new ExampleWithUserInitObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithUserInit::ExampleWithUserInit(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> obj) : m_obj(std::move(obj)) {}

ExampleWithUserInit::ExampleWithUserInit(const MutableExampleWithUserInit& other): ExampleWithUserInit(other.m_obj) {}

ExampleWithUserInit::ExampleWithUserInit(ExampleWithUserInitObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>(obj)) {}

ExampleWithUserInit ExampleWithUserInit::makeEmpty() {
  return {nullptr};
}

std::int16_t ExampleWithUserInit::i16Val() const { return m_obj->data.i16Val; }
const std::array<float, 2>& ExampleWithUserInit::floats() const { return m_obj->data.floats; }
float ExampleWithUserInit::floats(size_t i) const { return m_obj->data.floats.at(i); }
const ex2::NamespaceStruct& ExampleWithUserInit::s() const { return m_obj->data.s; }
int ExampleWithUserInit::x() const { return m_obj->data.s.x; }
int ExampleWithUserInit::y_new() const { return m_obj->data.s.y_new; }
double ExampleWithUserInit::d() const { return m_obj->data.d; }
const CompWithInit& ExampleWithUserInit::comp() const { return m_obj->data.comp; }
int ExampleWithUserInit::i() const { return m_obj->data.comp.i; }
const std::array<double, 10>& ExampleWithUserInit::arr() const { return m_obj->data.comp.arr; }






bool ExampleWithUserInit::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithUserInit::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithUserInit::operator==(const MutableExampleWithUserInit& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithUserInit& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " i16Val : " << value.i16Val() << '\n';
  o << " floats : ";
  for (size_t i = 0; i < 2; ++i) {
    o << value.floats()[i] << "|";
  }
  o << '\n';
  o << " s : " << value.s() << '\n';
  o << " d : " << value.d() << '\n';
  o << " comp : " << value.comp() << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithUserInit& value) {
  j = nlohmann::json{
    {"i16Val", value.i16Val()}
    ,{"floats", value.floats()}
    ,{"s", value.s()}
    ,{"d", value.d()}
    ,{"comp", value.comp()}
  };


}
#endif



