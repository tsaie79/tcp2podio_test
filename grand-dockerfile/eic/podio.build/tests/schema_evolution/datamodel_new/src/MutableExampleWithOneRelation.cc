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




MutableExampleWithOneRelation::MutableExampleWithOneRelation() :
  m_obj(new ExampleWithOneRelationObj{}, podio::utils::MarkOwned) {}


MutableExampleWithOneRelation& MutableExampleWithOneRelation::operator=(MutableExampleWithOneRelation other) {
  swap(*this, other);
  return *this;
}

MutableExampleWithOneRelation MutableExampleWithOneRelation::clone() const {
  return MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr(new ExampleWithOneRelationObj(*m_obj), podio::utils::MarkOwned));
}

MutableExampleWithOneRelation::MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> obj) : m_obj(std::move(obj)) {}


const ExampleCluster MutableExampleWithOneRelation::cluster() const {
  if (!m_obj->m_cluster) {
    return ExampleCluster::makeEmpty();
  }
  return ExampleCluster(*(m_obj->m_cluster));
}



void MutableExampleWithOneRelation::cluster(ExampleCluster value) {
  if (m_obj->m_cluster) {
    delete m_obj->m_cluster;
  }
  m_obj->m_cluster = new ExampleCluster(value);
}







bool MutableExampleWithOneRelation::isAvailable() const {
  if (m_obj) {
    return true;
  }
  return false;
}

const podio::ObjectID MutableExampleWithOneRelation::getObjectID() const {
  if (m_obj) {
    return m_obj->id;
  }
  return podio::ObjectID{};
}

bool MutableExampleWithOneRelation::operator==(const ExampleWithOneRelation& other) const {
  return m_obj == other.m_obj;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithOneRelation& value) {
  j = nlohmann::json{
  };

    j["cluster"] = nlohmann::json{
      {"collectionID", value.cluster().getObjectID().collectionID },
      {"index", value.cluster().getObjectID().index }};


}
#endif



