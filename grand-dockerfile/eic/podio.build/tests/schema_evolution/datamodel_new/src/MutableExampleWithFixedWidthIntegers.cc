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




MutableExampleWithFixedWidthIntegers::MutableExampleWithFixedWidthIntegers() :
  m_obj(new ExampleWithFixedWidthIntegersObj{}, podio::utils::MarkOwned) {}

MutableExampleWithFixedWidthIntegers::MutableExampleWithFixedWidthIntegers(std::int16_t fixedI16, std::uint64_t fixedU64, std::uint32_t fixedU32, StructWithFixedWithTypes fixedWidthStruct, std::array<std::int16_t, 2> fixedWidthArray) :
  m_obj(new ExampleWithFixedWidthIntegersObj{}, podio::utils::MarkOwned) {
  m_obj->data.fixedI16 = fixedI16;
  m_obj->data.fixedU64 = fixedU64;
  m_obj->data.fixedU32 = fixedU32;
  m_obj->data.fixedWidthStruct = fixedWidthStruct;
  m_obj->data.fixedWidthArray = fixedWidthArray;
}

MutableExampleWithFixedWidthIntegers& MutableExampleWithFixedWidthIntegers::operator=(MutableExampleWithFixedWidthIntegers other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithFixedWidthIntegers MutableExampleWithFixedWidthIntegers::clone() const {
  return MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr(new ExampleWithFixedWidthIntegersObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithFixedWidthIntegers::MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> obj) : m_obj(std::move(obj)) {}

std::int16_t MutableExampleWithFixedWidthIntegers::fixedI16() const { return m_obj->data.fixedI16; }
std::uint64_t MutableExampleWithFixedWidthIntegers::fixedU64() const { return m_obj->data.fixedU64; }
std::uint32_t MutableExampleWithFixedWidthIntegers::fixedU32() const { return m_obj->data.fixedU32; }
const StructWithFixedWithTypes& MutableExampleWithFixedWidthIntegers::fixedWidthStruct() const { return m_obj->data.fixedWidthStruct; }
std::uint16_t MutableExampleWithFixedWidthIntegers::fixedUnsigned16() const { return m_obj->data.fixedWidthStruct.fixedUnsigned16; }
std::int64_t MutableExampleWithFixedWidthIntegers::fixedInteger64() const { return m_obj->data.fixedWidthStruct.fixedInteger64; }
std::int32_t MutableExampleWithFixedWidthIntegers::fixedInteger32() const { return m_obj->data.fixedWidthStruct.fixedInteger32; }
const std::array<std::int16_t, 2>& MutableExampleWithFixedWidthIntegers::fixedWidthArray() const { return m_obj->data.fixedWidthArray; }
std::int16_t MutableExampleWithFixedWidthIntegers::fixedWidthArray(size_t i) const { return m_obj->data.fixedWidthArray.at(i); }


void MutableExampleWithFixedWidthIntegers::fixedI16(std::int16_t value) { m_obj->data.fixedI16 = value; }
std::int16_t& MutableExampleWithFixedWidthIntegers::fixedI16() { return m_obj->data.fixedI16; }
void MutableExampleWithFixedWidthIntegers::fixedU64(std::uint64_t value) { m_obj->data.fixedU64 = value; }
std::uint64_t& MutableExampleWithFixedWidthIntegers::fixedU64() { return m_obj->data.fixedU64; }
void MutableExampleWithFixedWidthIntegers::fixedU32(std::uint32_t value) { m_obj->data.fixedU32 = value; }
std::uint32_t& MutableExampleWithFixedWidthIntegers::fixedU32() { return m_obj->data.fixedU32; }
void MutableExampleWithFixedWidthIntegers::fixedWidthStruct(StructWithFixedWithTypes value) { m_obj->data.fixedWidthStruct = value; }
StructWithFixedWithTypes& MutableExampleWithFixedWidthIntegers::fixedWidthStruct() { return m_obj->data.fixedWidthStruct; }
void MutableExampleWithFixedWidthIntegers::fixedUnsigned16(std::uint16_t value) { m_obj->data.fixedWidthStruct.fixedUnsigned16 = value; }
void MutableExampleWithFixedWidthIntegers::fixedInteger64(std::int64_t value) { m_obj->data.fixedWidthStruct.fixedInteger64 = value; }
void MutableExampleWithFixedWidthIntegers::fixedInteger32(std::int32_t value) { m_obj->data.fixedWidthStruct.fixedInteger32 = value; }
void MutableExampleWithFixedWidthIntegers::fixedWidthArray(std::array<std::int16_t, 2> value) { m_obj->data.fixedWidthArray = value; }
void MutableExampleWithFixedWidthIntegers::fixedWidthArray(size_t i, std::int16_t value) { m_obj->data.fixedWidthArray.at(i) = value; }
std::array<std::int16_t, 2>& MutableExampleWithFixedWidthIntegers::fixedWidthArray() { return m_obj->data.fixedWidthArray; }







bool MutableExampleWithFixedWidthIntegers::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithFixedWidthIntegers::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithFixedWidthIntegers::operator==(const ExampleWithFixedWidthIntegers& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithFixedWidthIntegers& value) {
  j = nlohmann::json{
    {"fixedI16", value.fixedI16()}
    ,{"fixedU64", value.fixedU64()}
    ,{"fixedU32", value.fixedU32()}
    ,{"fixedWidthStruct", value.fixedWidthStruct()}
    ,{"fixedWidthArray", value.fixedWidthArray()}
  };


}
#endif



