// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

// datamodel specific includes
#include "datamodel/ExampleWithOneRelation.h"
#include "datamodel/MutableExampleWithOneRelation.h"
#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelationCollection.h"

#include "datamodel/ExampleCluster.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

#include <ostream>




ExampleWithOneRelation::ExampleWithOneRelation() :
  m_obj(new ExampleWithOneRelationObj{}, podio::utils::MarkOwned) {}


ExampleWithOneRelation& ExampleWithOneRelation::operator=(ExampleWithOneRelation other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithOneRelation ExampleWithOneRelation::clone() const {
  return MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr(new ExampleWithOneRelationObj(*m_obj), podio::utils::MarkOwned));
}

ExampleWithOneRelation::ExampleWithOneRelation(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> obj) : m_obj(std::move(obj)) {}

ExampleWithOneRelation::ExampleWithOneRelation(const MutableExampleWithOneRelation& other): ExampleWithOneRelation(other.m_obj) {}

ExampleWithOneRelation::ExampleWithOneRelation(ExampleWithOneRelationObj* obj) : m_obj(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>(obj)) {}

ExampleWithOneRelation ExampleWithOneRelation::makeEmpty() {
  return {nullptr};
}


const ExampleCluster ExampleWithOneRelation::cluster() const {
  if (!m_obj->m_cluster) {
    return ExampleCluster::makeEmpty();
  }
  return ExampleCluster(*(m_obj->m_cluster));
}






bool ExampleWithOneRelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID ExampleWithOneRelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool ExampleWithOneRelation::operator==(const MutableExampleWithOneRelation& other) const {
  return m_obj == other.m_obj;
}

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelation& value) {
  if (!value.isAvailable()) {
    return o << "[not available]";
  }
  o << " id: " << value.id() << '\n';

  o << " cluster : " << value.cluster().id() << '\n';


  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithOneRelation& value) {
  j = nlohmann::json{
  };

    j["cluster"] = nlohmann::json{
      {"collectionID", value.cluster().getObjectID().collectionID },
      {"index", value.cluster().getObjectID().index }};


}
#endif



