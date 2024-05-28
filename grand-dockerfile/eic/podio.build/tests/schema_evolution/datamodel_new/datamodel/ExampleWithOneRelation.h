// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelation_H
#define DATAMODEL_ExampleWithOneRelation_H

#include "datamodel/ExampleWithOneRelationObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleCluster;
class MutableExampleCluster;



class MutableExampleWithOneRelation;
class ExampleWithOneRelationCollection;
class ExampleWithOneRelationCollectionData;

/** @class ExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ExampleWithOneRelation {

  friend class MutableExampleWithOneRelation;
  friend class ExampleWithOneRelationCollection;
  friend class ExampleWithOneRelationCollectionData;
  friend class ExampleWithOneRelationCollectionIterator;

public:
  using mutable_type = MutableExampleWithOneRelation;
  using collection_type = ExampleWithOneRelationCollection;

  /// default constructor
  ExampleWithOneRelation();


  /// copy constructor
  ExampleWithOneRelation(const ExampleWithOneRelation& other) = default;

  /// copy-assignment operator
  ExampleWithOneRelation& operator=(ExampleWithOneRelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithOneRelation clone() const;

  /// destructor
  ~ExampleWithOneRelation() = default;

  /// converting constructor from mutable object
  ExampleWithOneRelation(const MutableExampleWithOneRelation& other);

  static ExampleWithOneRelation makeEmpty();

public:


  /// Access the a particular cluster
  const ExampleCluster cluster() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}; }

  bool operator==(const ExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithOneRelation& other) const;

  bool operator!=(const ExampleWithOneRelation& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithOneRelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithOneRelation& a, ExampleWithOneRelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithOneRelationObj
  explicit ExampleWithOneRelation(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> obj);
  ExampleWithOneRelation(ExampleWithOneRelationObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelation& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithOneRelation& value);
#endif




#endif
