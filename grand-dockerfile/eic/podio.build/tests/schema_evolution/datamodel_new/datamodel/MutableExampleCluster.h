// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleCluster_H
#define DATAMODEL_MutableExampleCluster_H

#include "datamodel/ExampleClusterObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleCluster.h"

#include "datamodel/ExampleHit.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleCluster
 *  Cluster
 *  @author: B. Hegner
 */
class MutableExampleCluster {

  friend class ExampleClusterCollection;
  friend class ExampleClusterMutableCollectionIterator;
  friend class ExampleCluster;

public:
  using object_type = ExampleCluster;
  using collection_type = ExampleClusterCollection;

  /// default constructor
  MutableExampleCluster();

  /// Constructor initializing all members
  MutableExampleCluster(double energy);

  /// copy constructor
  MutableExampleCluster(const MutableExampleCluster& other) = default;

  /// copy-assignment operator
  MutableExampleCluster& operator=(MutableExampleCluster other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleCluster clone() const;

  /// destructor
  ~MutableExampleCluster() = default;


public:

  /// Access the cluster energy
  double energy() const;



  /// Set the cluster energy
  void energy(double value);
  /// Get mutable reference to cluster energy
  double& energy();



  void addHits(ExampleHit);
  std::size_t Hits_size() const;
  ExampleHit Hits(std::size_t) const;
  std::vector<ExampleHit>::const_iterator Hits_begin() const;
  std::vector<ExampleHit>::const_iterator Hits_end() const;
  podio::RelationRange<ExampleHit> Hits() const;
  void addClusters(ExampleCluster);
  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleClusterObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}; }

  bool operator==(const MutableExampleCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleCluster& other) const;

  bool operator!=(const MutableExampleCluster& other) const { return !(*this == other); }
  bool operator!=(const ExampleCluster& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleCluster& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleCluster& a, MutableExampleCluster& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleClusterObj
  explicit MutableExampleCluster(podio::utils::MaybeSharedPtr<ExampleClusterObj> obj);

  podio::utils::MaybeSharedPtr<ExampleClusterObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleCluster& value);
#endif




#endif
