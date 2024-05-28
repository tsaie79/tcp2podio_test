// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithFixedWidthIntegers.h"
#include "datamodel/MutableExampleWithFixedWidthIntegers.h"
#include "datamodel/ExampleWithFixedWidthIntegersObj.h"
#include "datamodel/ExampleWithFixedWidthIntegersData.h"
#include "datamodel/ExampleWithFixedWidthIntegersCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleWithFixedWidthIntegers::ExampleWithFixedWidthIntegers() :
  m_obj(new ExampleWithFixedWidthIntegersObj{}, podio::utils::MarkOwned) {}

ExampleWithFixedWidthIntegers::ExampleWithFixedWidthIntegers(std::int16_t fixedI16, std::uint64_t fixedU64, std::uint32_t fixedU32, StructWithFixedWithTypes fixedWidthStruct, std::array<std::int16_t, 2> fixedWidthArray) :
  m_obj(new ExampleWithFixedWidthIntegersObj{}, podio::utils::MarkOwned) {
  m_obj->data.fixedI16 = fixedI16;
  m_obj->data.fixedU64 = fixedU64;
  m_obj->data.fixedU32 = fixedU32;
  m_obj->data.fixedWidthStruct = fixedWidthStruct;
  m_obj->data.fixedWidthArray = fixedWidthArray;
}

ExampleWithFixedWidthIntegers& ExampleWithFixedWidthIntegers::operator=(ExampleWithFixedWidthIntegers other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithFixedWidthIntegers ExampleWithFixedWidthIntegers::clone() const {
  return MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr(new ExampleWithFixedWidthIntegersObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithFixedWidthIntegers::ExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> obj) : m_obj(std::move(obj)) {}

ExampleWithFixedWidthIntegers::ExampleWithFixedWidthIntegers(const MutableExampleWithFixedWidthIntegers& other): ExampleWithFixedWidthIntegers(other.m_obj) {}

ExampleWithFixedWidthIntegers::ExampleWithFixedWidthIntegers(ExampleWithFixedWidthIntegersObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>(obj)) {}

ExampleWithFixedWidthIntegers ExampleWithFixedWidthIntegers::makeEmpty() {
  return {nullptr};
}

std::int16_t ExampleWithFixedWidthIntegers::fixedI16() const { return m_obj->data.fixedI16; }
std::uint64_t ExampleWithFixedWidthIntegers::fixedU64() const { return m_obj->data.fixedU64; }
std::uint32_t ExampleWithFixedWidthIntegers::fixedU32() const { return m_obj->data.fixedU32; }
const StructWithFixedWithTypes& ExampleWithFixedWidthIntegers::fixedWidthStruct() const { return m_obj->data.fixedWidthStruct; }
std::uint16_t ExampleWithFixedWidthIntegers::fixedUnsigned16() const { return m_obj->data.fixedWidthStruct.fixedUnsigned16; }
std::int64_t ExampleWithFixedWidthIntegers::fixedInteger64() const { return m_obj->data.fixedWidthStruct.fixedInteger64; }
std::int32_t ExampleWithFixedWidthIntegers::fixedInteger32() const { return m_obj->data.fixedWidthStruct.fixedInteger32; }
const std::array<std::int16_t, 2>& ExampleWithFixedWidthIntegers::fixedWidthArray() const { return m_obj->data.fixedWidthArray; }
std::int16_t ExampleWithFixedWidthIntegers::fixedWidthArray(size_t i) const { return m_obj->data.fixedWidthArray.at(i); }






bool ExampleWithFixedWidthIntegers::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithFixedWidthIntegers::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithFixedWidthIntegers::operator==(const MutableExampleWithFixedWidthIntegers& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithFixedWidthIntegers& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " fixedI16 : " << value.fixedI16() << '\n';
  o << " fixedU64 : " << value.fixedU64() << '\n';
  o << " fixedU32 : " << value.fixedU32() << '\n';
  o << " fixedWidthStruct : " << value.fixedWidthStruct() << '\n';
  o << " fixedWidthArray : ";
  for (size_t i = 0; i < 2; ++i) {
    o << value.fixedWidthArray()[i] << "|";
  }
  o << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithFixedWidthIntegers& value) {
  j = nlohmann::json{
    {"fixedI16", value.fixedI16()}
    ,{"fixedU64", value.fixedU64()}
    ,{"fixedU32", value.fixedU32()}
    ,{"fixedWidthStruct", value.fixedWidthStruct()}
    ,{"fixedWidthArray", value.fixedWidthArray()}
  };


}
#endif



