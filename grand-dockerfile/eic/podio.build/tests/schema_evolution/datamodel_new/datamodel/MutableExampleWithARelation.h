// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithARelation_H
#define DATAMODEL_MutableExampleWithARelation_H

#include "datamodel/ExampleWithARelationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithARelation.h"

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


/** @class MutableExampleWithARelation
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class MutableExampleWithARelation {

  friend class ExampleWithARelationCollection;
  friend class ExampleWithARelationMutableCollectionIterator;
  friend class ExampleWithARelation;

public:
  using object_type = ExampleWithARelation;
  using collection_type = ExampleWithARelationCollection;

  /// default constructor
  MutableExampleWithARelation();

  /// Constructor initializing all members
  MutableExampleWithARelation(double number);

  /// copy constructor
  MutableExampleWithARelation(const MutableExampleWithARelation& other) = default;

  /// copy-assignment operator
  MutableExampleWithARelation& operator=(MutableExampleWithARelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithARelation clone() const;

  /// destructor
  ~MutableExampleWithARelation() = default;


public:

  /// Access the just a number
  double number() const;


  /// Access the a ref in a namespace
  const ex42::ExampleWithNamespace ref() const;

  /// Set the just a number
  void number(double value);
  /// Get mutable reference to just a number
  double& number();


  /// Set the a ref in a namespace
  void ref(ex42::ExampleWithNamespace value);

  void addrefs(ex42::ExampleWithNamespace);
  std::size_t refs_size() const;
  ex42::ExampleWithNamespace refs(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithARelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}; }

  bool operator==(const MutableExampleWithARelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithARelation& other) const;

  bool operator!=(const MutableExampleWithARelation& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithARelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithARelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithARelation& a, MutableExampleWithARelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithARelationObj
  explicit MutableExampleWithARelation(podio::utils::MaybeSharedPtr<ExampleWithARelationObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithARelationObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithARelation& value);
#endif


} // namespace ex42


#endif
