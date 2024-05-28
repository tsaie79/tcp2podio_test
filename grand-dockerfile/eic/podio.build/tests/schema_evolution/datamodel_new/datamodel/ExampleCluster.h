// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleCluster_H
#define DATAMODEL_ExampleCluster_H

#include "datamodel/ExampleClusterObj.h"

#include "datamodel/ExampleHit.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleCluster;
class ExampleClusterCollection;
class ExampleClusterCollectionData;

/** @class ExampleCluster
 *  Cluster
 *  @author: B. Hegner
 */
class ExampleCluster {

  friend class MutableExampleCluster;
  friend class ExampleClusterCollection;
  friend class ExampleClusterCollectionData;
  friend class ExampleClusterCollectionIterator;

public:
  using mutable_type = MutableExampleCluster;
  using collection_type = ExampleClusterCollection;

  /// default constructor
  ExampleCluster();

  /// Constructor initializing all members
  ExampleCluster(double energy);

  /// copy constructor
  ExampleCluster(const ExampleCluster& other) = default;

  /// copy-assignment operator
  ExampleCluster& operator=(ExampleCluster other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleCluster clone() const;

  /// destructor
  ~ExampleCluster() = default;

  /// converting constructor from mutable object
  ExampleCluster(const MutableExampleCluster& other);

  static ExampleCluster makeEmpty();

public:

  /// Access the cluster energy
  double energy() const;



  std::size_t Hits_size() const;
  ExampleHit Hits(std::size_t) const;
  std::vector<ExampleHit>::const_iterator Hits_begin() const;
  std::vector<ExampleHit>::const_iterator Hits_end() const;
  podio::RelationRange<ExampleHit> Hits() const;
  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleClusterObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}; }

  bool operator==(const ExampleCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleCluster& other) const;

  bool operator!=(const ExampleCluster& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleCluster& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleCluster& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleCluster& a, ExampleCluster& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleClusterObj
  explicit ExampleCluster(podio::utils::MaybeSharedPtr<ExampleClusterObj> obj);
  ExampleCluster(ExampleClusterObj* obj);

  podio::utils::MaybeSharedPtr<ExampleClusterObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleCluster& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleCluster& value);
#endif




#endif
