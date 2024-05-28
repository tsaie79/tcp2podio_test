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




ExampleWithVectorMember::ExampleWithVectorMember() :
  m_obj(new ExampleWithVectorMemberObj{}, podio::utils::MarkOwned) {}


ExampleWithVectorMember& ExampleWithVectorMember::operator=(ExampleWithVectorMember other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithVectorMember ExampleWithVectorMember::clone() const {
  return MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr(new ExampleWithVectorMemberObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithVectorMember::ExampleWithVectorMember(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> obj) : m_obj(std::move(obj)) {}

ExampleWithVectorMember::ExampleWithVectorMember(const MutableExampleWithVectorMember& other): ExampleWithVectorMember(other.m_obj) {}

ExampleWithVectorMember::ExampleWithVectorMember(ExampleWithVectorMemberObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>(obj)) {}

ExampleWithVectorMember ExampleWithVectorMember::makeEmpty() {
  return {nullptr};
}




std::vector<int>::const_iterator ExampleWithVectorMember::count_begin() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_begin);
  return ret_value;
}

std::vector<int>::const_iterator ExampleWithVectorMember::count_end() const {
  auto ret_value = m_obj->m_count->begin();
  std::advance(ret_value, m_obj->data.count_end);
  return ret_value;
}

std::size_t ExampleWithVectorMember::count_size() const {
  return m_obj->data.count_end - m_obj->data.count_begin;
}

int ExampleWithVectorMember::count(std::size_t index) const {
  if (count_size() > index) {
    return m_obj->m_count->at(m_obj->data.count_begin + index);
  }
  throw std::out_of_range("index out of bounds for existing references");
}

podio::RelationRange<int> ExampleWithVectorMember::count() const {
  auto begin = m_obj->m_count->begin();
  std::advance(begin, m_obj->data.count_begin);
  auto end = m_obj->m_count->begin();
  std::advance(end, m_obj->data.count_end);
  return {begin, end};
}





bool ExampleWithVectorMember::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithVectorMember::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithVectorMember::operator==(const MutableExampleWithVectorMember& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMember& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';


  o << " count : ";
  for (unsigned i = 0; i < value.count_size(); ++i) {
    o << value.count(i) << " ";
  }
  o << '\n';

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithVectorMember& value) {
  j = nlohmann::json{
    {"count", value.count()}
  };


}
#endif



