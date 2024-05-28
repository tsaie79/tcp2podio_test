// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithArray.h"
#include "datamodel/MutableExampleWithArray.h"
#include "datamodel/ExampleWithArrayObj.h"
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArrayCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleWithArray::MutableExampleWithArray() :
  m_obj(new ExampleWithArrayObj{}, podio::utils::MarkOwned) {}

MutableExampleWithArray::MutableExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray) :
  m_obj(new ExampleWithArrayObj{}, podio::utils::MarkOwned) {
  m_obj->data.arrayStruct = arrayStruct;
  m_obj->data.myArray = myArray;
  m_obj->data.anotherArray2 = anotherArray2;
  m_obj->data.snail_case_array = snail_case_array;
  m_obj->data.snail_case_Array3 = snail_case_Array3;
  m_obj->data.structArray = structArray;
}

MutableExampleWithArray& MutableExampleWithArray::operator=(MutableExampleWithArray other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithArray MutableExampleWithArray::clone() const {
  return MutableExampleWithArray(podio::utils::MaybeSharedPtr(new ExampleWithArrayObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithArray::MutableExampleWithArray(podio::utils::MaybeSharedPtr<ExampleWithArrayObj> obj) : m_obj(std::move(obj)) {}

const NotSoSimpleStruct& MutableExampleWithArray::arrayStruct() const { return m_obj->data.arrayStruct; }
const SimpleStruct& MutableExampleWithArray::data() const { return m_obj->data.arrayStruct.data; }
const std::array<int, 4>& MutableExampleWithArray::myArray() const { return m_obj->data.myArray; }
int MutableExampleWithArray::myArray(size_t i) const { return m_obj->data.myArray.at(i); }
const std::array<int, 4>& MutableExampleWithArray::anotherArray2() const { return m_obj->data.anotherArray2; }
int MutableExampleWithArray::anotherArray2(size_t i) const { return m_obj->data.anotherArray2.at(i); }
const std::array<int, 4>& MutableExampleWithArray::snail_case_array() const { return m_obj->data.snail_case_array; }
int MutableExampleWithArray::snail_case_array(size_t i) const { return m_obj->data.snail_case_array.at(i); }
const std::array<int, 4>& MutableExampleWithArray::snail_case_Array3() const { return m_obj->data.snail_case_Array3; }
int MutableExampleWithArray::snail_case_Array3(size_t i) const { return m_obj->data.snail_case_Array3.at(i); }
const std::array<ex2::NamespaceStruct, 4>& MutableExampleWithArray::structArray() const { return m_obj->data.structArray; }
const ex2::NamespaceStruct& MutableExampleWithArray::structArray(size_t i) const { return m_obj->data.structArray.at(i); }


void MutableExampleWithArray::arrayStruct(NotSoSimpleStruct value) { m_obj->data.arrayStruct = value; }
NotSoSimpleStruct& MutableExampleWithArray::arrayStruct() { return m_obj->data.arrayStruct; }
void MutableExampleWithArray::data(SimpleStruct value) { m_obj->data.arrayStruct.data = value; }
SimpleStruct& MutableExampleWithArray::data() { return m_obj->data.arrayStruct.data; }
void MutableExampleWithArray::myArray(std::array<int, 4> value) { m_obj->data.myArray = value; }
void MutableExampleWithArray::myArray(size_t i, int value) { m_obj->data.myArray.at(i) = value; }
std::array<int, 4>& MutableExampleWithArray::myArray() { return m_obj->data.myArray; }
void MutableExampleWithArray::anotherArray2(std::array<int, 4> value) { m_obj->data.anotherArray2 = value; }
void MutableExampleWithArray::anotherArray2(size_t i, int value) { m_obj->data.anotherArray2.at(i) = value; }
std::array<int, 4>& MutableExampleWithArray::anotherArray2() { return m_obj->data.anotherArray2; }
void MutableExampleWithArray::snail_case_array(std::array<int, 4> value) { m_obj->data.snail_case_array = value; }
void MutableExampleWithArray::snail_case_array(size_t i, int value) { m_obj->data.snail_case_array.at(i) = value; }
std::array<int, 4>& MutableExampleWithArray::snail_case_array() { return m_obj->data.snail_case_array; }
void MutableExampleWithArray::snail_case_Array3(std::array<int, 4> value) { m_obj->data.snail_case_Array3 = value; }
void MutableExampleWithArray::snail_case_Array3(size_t i, int value) { m_obj->data.snail_case_Array3.at(i) = value; }
std::array<int, 4>& MutableExampleWithArray::snail_case_Array3() { return m_obj->data.snail_case_Array3; }
void MutableExampleWithArray::structArray(std::array<ex2::NamespaceStruct, 4> value) { m_obj->data.structArray = value; }
void MutableExampleWithArray::structArray(size_t i, ex2::NamespaceStruct value) { m_obj->data.structArray.at(i) = value; }
std::array<ex2::NamespaceStruct, 4>& MutableExampleWithArray::structArray() { return m_obj->data.structArray; }







bool MutableExampleWithArray::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithArray::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithArray::operator==(const ExampleWithArray& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithArray& value) {
  j = nlohmann::json{
    {"arrayStruct", value.arrayStruct()}
    ,{"myArray", value.myArray()}
    ,{"anotherArray2", value.anotherArray2()}
    ,{"snail_case_array", value.snail_case_array()}
    ,{"snail_case_Array3", value.snail_case_Array3()}
    ,{"structArray", value.structArray()}
  };


}
#endif



