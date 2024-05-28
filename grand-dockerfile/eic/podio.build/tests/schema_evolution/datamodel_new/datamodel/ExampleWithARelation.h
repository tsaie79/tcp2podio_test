// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelation_H
#define DATAMODEL_ExampleWithARelation_H

#include "datamodel/ExampleWithARelationObj.h"

#include "datamodel/ExampleWithNamespace.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class MutableExampleWithNamespace;
}


namespace ex42 {

class MutableExampleWithARelation;
class ExampleWithARelationCollection;
class ExampleWithARelationCollectionData;

/** @class ExampleWithARelation
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class ExampleWithARelation {

  friend class MutableExampleWithARelation;
  friend class ExampleWithARelationCollection;
  friend class ex42::ExampleWithARelationCollectionData;
  friend class ExampleWithARelationCollectionIterator;

public:
  using mutable_type = MutableExampleWithARelation;
  using collection_type = ExampleWithARelationCollection;

  /// default constructor
  ExampleWithARelation();

  /// Constructor initializing all members
  ExampleWithARelation(double number);

  /// copy constructor
  ExampleWithARelation(const ExampleWithARelation& other) = default;

  /// copy-assignment operator
  ExampleWithARelation& operator=(ExampleWithARelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithARelation clone() const;

  /// destructor
  ~ExampleWithARelation() = default;

  /// converting constructor from mutable object
  ExampleWithARelation(const MutableExampleWithARelation& other);

  static ExampleWithARelation makeEmpty();

public:

  /// Access the just a number
  double number() const;


  /// Access the a ref in a namespace
  const ex42::ExampleWithNamespace ref() const;

  std::size_t refs_size() const;
  ex42::ExampleWithNamespace refs(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithARelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}; }

  bool operator==(const ExampleWithARelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithARelation& other) const;

  bool operator!=(const ExampleWithARelation& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithARelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithARelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithARelation& a, ExampleWithARelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithARelationObj
  explicit ExampleWithARelation(podio::utils::MaybeSharedPtr<ExampleWithARelationObj> obj);
  ExampleWithARelation(ExampleWithARelationObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithARelationObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithARelation& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithARelation& value);
#endif


} // namespace ex42


#endif
