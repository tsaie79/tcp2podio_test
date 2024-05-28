// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithOneRelation_H
#define DATAMODEL_MutableExampleWithOneRelation_H

#include "datamodel/ExampleWithOneRelationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithOneRelation.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleCluster;
class MutableExampleCluster;




/** @class MutableExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class MutableExampleWithOneRelation {

  friend class ExampleWithOneRelationCollection;
  friend class ExampleWithOneRelationMutableCollectionIterator;
  friend class ExampleWithOneRelation;

public:
  using object_type = ExampleWithOneRelation;
  using collection_type = ExampleWithOneRelationCollection;

  /// default constructor
  MutableExampleWithOneRelation();


  /// copy constructor
  MutableExampleWithOneRelation(const MutableExampleWithOneRelation& other) = default;

  /// copy-assignment operator
  MutableExampleWithOneRelation& operator=(MutableExampleWithOneRelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithOneRelation clone() const;

  /// destructor
  ~MutableExampleWithOneRelation() = default;


public:


  /// Access the a particular cluster
  const ExampleCluster cluster() const;


  /// Set the a particular cluster
  void cluster(ExampleCluster value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}; }

  bool operator==(const MutableExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithOneRelation& other) const;

  bool operator!=(const MutableExampleWithOneRelation& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithOneRelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithOneRelation& a, MutableExampleWithOneRelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithOneRelationObj
  explicit MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithOneRelation& value);
#endif




#endif
