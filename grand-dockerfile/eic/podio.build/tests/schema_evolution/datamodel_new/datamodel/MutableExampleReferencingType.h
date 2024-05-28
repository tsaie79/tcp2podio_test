// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleReferencingType_H
#define DATAMODEL_MutableExampleReferencingType_H

#include "datamodel/ExampleReferencingTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleReferencingType.h"

#include "datamodel/ExampleCluster.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class MutableExampleReferencingType {

  friend class ExampleReferencingTypeCollection;
  friend class ExampleReferencingTypeMutableCollectionIterator;
  friend class ExampleReferencingType;

public:
  using object_type = ExampleReferencingType;
  using collection_type = ExampleReferencingTypeCollection;

  /// default constructor
  MutableExampleReferencingType();


  /// copy constructor
  MutableExampleReferencingType(const MutableExampleReferencingType& other) = default;

  /// copy-assignment operator
  MutableExampleReferencingType& operator=(MutableExampleReferencingType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleReferencingType clone() const;

  /// destructor
  ~MutableExampleReferencingType() = default;


public:





  void addClusters(ExampleCluster);
  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;
  void addRefs(ExampleReferencingType);
  std::size_t Refs_size() const;
  ExampleReferencingType Refs(std::size_t) const;
  std::vector<ExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ExampleReferencingType> Refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}; }

  bool operator==(const MutableExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleReferencingType& other) const;

  bool operator!=(const MutableExampleReferencingType& other) const { return !(*this == other); }
  bool operator!=(const ExampleReferencingType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleReferencingType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleReferencingType& a, MutableExampleReferencingType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleReferencingTypeObj
  explicit MutableExampleReferencingType(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> obj);

  podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleReferencingType& value);
#endif




#endif
