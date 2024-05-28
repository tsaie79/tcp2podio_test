// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithVectorMember.h"
#include "datamodel/MutableExampleWithVectorMember.h"
#include "datamodel/ExampleWithVectorMemberObj.h"
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMemberCollection.h"


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




MutableExampleWithVectorMember::MutableExampleWithVectorMember() :
  m_obj(new ExampleWithVectorMemberObj{}, podio::utils::MarkOwned) {}


MutableExampleWithVectorMember& MutableExampleWithVectorMember::operator=(MutableExampleWithVectorMember other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithVectorMember MutableExampleWithVectorMember::clone() const {
  return MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr(new ExampleWithVectorMemberObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithVectorMember::MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> obj) : m_obj(std::move(obj)) {}





void MutableExampleWithVectorMember::addcount(int component) {
  m_obj->m_count->push_back(component);
  m_obj->data.count_end++;
}

std::vector<int>::const_iterator MutableExampleWithVectorMember::count_begin() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_begin);
  return ret_value;
}

std::vector<int>::const_iterator MutableExampleWithVectorMember::count_end() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_end);
  return ret_value;
}

std::size_t MutableExampleWithVectorMember::count_size() const {
  return m_obj->data.count_end - m_obj->data.count_begin;
}

int MutableExampleWithVectorMember::count(std::size_t index) const {
  if (count_size() > index) {
    return m_obj->m_count->at(m_obj->data.count_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<int> MutableExampleWithVectorMember::count() const {
  auto begin = m_obj->m_count->begin();
  std::advance(begin, m_obj->data.count_begin);
  auto end = m_obj->m_count->begin();
  std::advance(end, m_obj->data.count_end);
  return {begin, end};
}






bool MutableExampleWithVectorMember::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithVectorMember::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithVectorMember::operator==(const ExampleWithVectorMember& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithVectorMember& value) {
  j = nlohmann::json{
    {"count", value.count()}
  };


}
#endif



