// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingType_H
#define DATAMODEL_ExampleReferencingType_H

#include "datamodel/ExampleReferencingTypeObj.h"

#include "datamodel/ExampleCluster.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleReferencingType;
class ExampleReferencingTypeCollection;
class ExampleReferencingTypeCollectionData;

/** @class ExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class ExampleReferencingType {

  friend class MutableExampleReferencingType;
  friend class ExampleReferencingTypeCollection;
  friend class ExampleReferencingTypeCollectionData;
  friend class ExampleReferencingTypeCollectionIterator;

public:
  using mutable_type = MutableExampleReferencingType;
  using collection_type = ExampleReferencingTypeCollection;

  /// default constructor
  ExampleReferencingType();


  /// copy constructor
  ExampleReferencingType(const ExampleReferencingType& other) = default;

  /// copy-assignment operator
  ExampleReferencingType& operator=(ExampleReferencingType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleReferencingType clone() const;

  /// destructor
  ~ExampleReferencingType() = default;

  /// converting constructor from mutable object
  ExampleReferencingType(const MutableExampleReferencingType& other);

  static ExampleReferencingType makeEmpty();

public:



  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;
  std::size_t Refs_size() const;
  ExampleReferencingType Refs(std::size_t) const;
  std::vector<ExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ExampleReferencingType> Refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}; }

  bool operator==(const ExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleReferencingType& other) const;

  bool operator!=(const ExampleReferencingType& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleReferencingType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleReferencingType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleReferencingType& a, ExampleReferencingType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleReferencingTypeObj
  explicit ExampleReferencingType(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> obj);
  ExampleReferencingType(ExampleReferencingTypeObj* obj);

  podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleReferencingType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleReferencingType& value);
#endif




#endif
