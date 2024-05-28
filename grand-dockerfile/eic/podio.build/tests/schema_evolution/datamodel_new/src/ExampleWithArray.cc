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




ExampleWithArray::ExampleWithArray() :
  m_obj(new ExampleWithArrayObj{}, podio::utils::MarkOwned) {}

ExampleWithArray::ExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray) :
  m_obj(new ExampleWithArrayObj{}, podio::utils::MarkOwned) {
  m_obj->data.arrayStruct = arrayStruct;
  m_obj->data.myArray = myArray;
  m_obj->data.anotherArray2 = anotherArray2;
  m_obj->data.snail_case_array = snail_case_array;
  m_obj->data.snail_case_Array3 = snail_case_Array3;
  m_obj->data.structArray = structArray;
}

ExampleWithArray& ExampleWithArray::operator=(ExampleWithArray other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithArray ExampleWithArray::clone() const {
  return MutableExampleWithArray(podio::utils::MaybeSharedPtr(new ExampleWithArrayObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithArray::ExampleWithArray(podio::utils::MaybeSharedPtr<ExampleWithArrayObj> obj) : m_obj(std::move(obj)) {}

ExampleWithArray::ExampleWithArray(const MutableExampleWithArray& other): ExampleWithArray(other.m_obj) {}

ExampleWithArray::ExampleWithArray(ExampleWithArrayObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>(obj)) {}

ExampleWithArray ExampleWithArray::makeEmpty() {
  return {nullptr};
}

const NotSoSimpleStruct& ExampleWithArray::arrayStruct() const { return m_obj->data.arrayStruct; }
const SimpleStruct& ExampleWithArray::data() const { return m_obj->data.arrayStruct.data; }
const std::array<int, 4>& ExampleWithArray::myArray() const { return m_obj->data.myArray; }
int ExampleWithArray::myArray(size_t i) const { return m_obj->data.myArray.at(i); }
const std::array<int, 4>& ExampleWithArray::anotherArray2() const { return m_obj->data.anotherArray2; }
int ExampleWithArray::anotherArray2(size_t i) const { return m_obj->data.anotherArray2.at(i); }
const std::array<int, 4>& ExampleWithArray::snail_case_array() const { return m_obj->data.snail_case_array; }
int ExampleWithArray::snail_case_array(size_t i) const { return m_obj->data.snail_case_array.at(i); }
const std::array<int, 4>& ExampleWithArray::snail_case_Array3() const { return m_obj->data.snail_case_Array3; }
int ExampleWithArray::snail_case_Array3(size_t i) const { return m_obj->data.snail_case_Array3.at(i); }
const std::array<ex2::NamespaceStruct, 4>& ExampleWithArray::structArray() const { return m_obj->data.structArray; }
const ex2::NamespaceStruct& ExampleWithArray::structArray(size_t i) const { return m_obj->data.structArray.at(i); }






bool ExampleWithArray::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithArray::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithArray::operator==(const MutableExampleWithArray& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithArray& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';
  o << " arrayStruct : " << value.arrayStruct() << '\n';
  o << " myArray : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.myArray()[i] << "|";
  }
  o << '\n';
  o << " anotherArray2 : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.anotherArray2()[i] << "|";
  }
  o << '\n';
  o << " snail_case_array : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.snail_case_array()[i] << "|";
  }
  o << '\n';
  o << " snail_case_Array3 : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.snail_case_Array3()[i] << "|";
  }
  o << '\n';
  o << " structArray : ";
  for (size_t i = 0; i < 4; ++i) {
    o << value.structArray()[i] << "|";
  }
  o << '\n';



  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArray& value) {
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



