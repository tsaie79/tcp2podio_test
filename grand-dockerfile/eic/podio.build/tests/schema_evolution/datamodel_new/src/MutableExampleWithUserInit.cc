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




MutableExampleWithUserInit::MutableExampleWithUserInit() :
  m_obj(new ExampleWithUserInitObj{}, podio::utils::MarkOwned) {}

MutableExampleWithUserInit::MutableExampleWithUserInit(std::int16_t i16Val, std::array<float, 2> floats, ex2::NamespaceStruct s, double d, CompWithInit comp) :
  m_obj(new ExampleWithUserInitObj{}, podio::utils::MarkOwned) {
  m_obj->data.i16Val = i16Val;
  m_obj->data.floats = floats;
  m_obj->data.s = s;
  m_obj->data.d = d;
  m_obj->data.comp = comp;
}

MutableExampleWithUserInit& MutableExampleWithUserInit::operator=(MutableExampleWithUserInit other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithUserInit MutableExampleWithUserInit::clone() const {
  return MutableExampleWithUserInit(podio::utils::MaybeSharedPtr(new ExampleWithUserInitObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithUserInit::MutableExampleWithUserInit(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> obj) : m_obj(std::move(obj)) {}

std::int16_t MutableExampleWithUserInit::i16Val() const { return m_obj->data.i16Val; }
const std::array<float, 2>& MutableExampleWithUserInit::floats() const { return m_obj->data.floats; }
float MutableExampleWithUserInit::floats(size_t i) const { return m_obj->data.floats.at(i); }
const ex2::NamespaceStruct& MutableExampleWithUserInit::s() const { return m_obj->data.s; }
int MutableExampleWithUserInit::x() const { return m_obj->data.s.x; }
int MutableExampleWithUserInit::y_new() const { return m_obj->data.s.y_new; }
double MutableExampleWithUserInit::d() const { return m_obj->data.d; }
const CompWithInit& MutableExampleWithUserInit::comp() const { return m_obj->data.comp; }
int MutableExampleWithUserInit::i() const { return m_obj->data.comp.i; }
const std::array<double, 10>& MutableExampleWithUserInit::arr() const { return m_obj->data.comp.arr; }


void MutableExampleWithUserInit::i16Val(std::int16_t value) { m_obj->data.i16Val = value; }
std::int16_t& MutableExampleWithUserInit::i16Val() { return m_obj->data.i16Val; }
void MutableExampleWithUserInit::floats(std::array<float, 2> value) { m_obj->data.floats = value; }
void MutableExampleWithUserInit::floats(size_t i, float value) { m_obj->data.floats.at(i) = value; }
std::array<float, 2>& MutableExampleWithUserInit::floats() { return m_obj->data.floats; }
void MutableExampleWithUserInit::s(ex2::NamespaceStruct value) { m_obj->data.s = value; }
ex2::NamespaceStruct& MutableExampleWithUserInit::s() { return m_obj->data.s; }
void MutableExampleWithUserInit::x(int value) { m_obj->data.s.x = value; }
void MutableExampleWithUserInit::y_new(int value) { m_obj->data.s.y_new = value; }
void MutableExampleWithUserInit::d(double value) { m_obj->data.d = value; }
double& MutableExampleWithUserInit::d() { return m_obj->data.d; }
void MutableExampleWithUserInit::comp(CompWithInit value) { m_obj->data.comp = value; }
CompWithInit& MutableExampleWithUserInit::comp() { return m_obj->data.comp; }
void MutableExampleWithUserInit::i(int value) { m_obj->data.comp.i = value; }
void MutableExampleWithUserInit::arr(std::array<double, 10> value) { m_obj->data.comp.arr = value; }
std::array<double, 10>& MutableExampleWithUserInit::arr() { return m_obj->data.comp.arr; }







bool MutableExampleWithUserInit::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithUserInit::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithUserInit::operator==(const ExampleWithUserInit& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithUserInit& value) {
  j = nlohmann::json{
    {"i16Val", value.i16Val()}
    ,{"floats", value.floats()}
    ,{"s", value.s()}
    ,{"d", value.d()}
    ,{"comp", value.comp()}
  };


}
#endif



