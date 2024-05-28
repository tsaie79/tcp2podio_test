// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithDifferentNamespaceRelations_H
#define DATAMODEL_MutableExampleWithDifferentNamespaceRelations_H

#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithDifferentNamespaceRelations.h"

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




/** @class MutableExampleWithDifferentNamespaceRelations
 *  Datatype using a namespaced relation without being in the same namespace
 *  @author: Thomas Madlener
 */
class MutableExampleWithDifferentNamespaceRelations {

  friend class ExampleWithDifferentNamespaceRelationsCollection;
  friend class ExampleWithDifferentNamespaceRelationsMutableCollectionIterator;
  friend class ExampleWithDifferentNamespaceRelations;

public:
  using object_type = ExampleWithDifferentNamespaceRelations;
  using collection_type = ExampleWithDifferentNamespaceRelationsCollection;

  /// default constructor
  MutableExampleWithDifferentNamespaceRelations();


  /// copy constructor
  MutableExampleWithDifferentNamespaceRelations(const MutableExampleWithDifferentNamespaceRelations& other) = default;

  /// copy-assignment operator
  MutableExampleWithDifferentNamespaceRelations& operator=(MutableExampleWithDifferentNamespaceRelations other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithDifferentNamespaceRelations clone() const;

  /// destructor
  ~MutableExampleWithDifferentNamespaceRelations() = default;


public:


  /// Access the a relation in a different namespace
  const ex42::ExampleWithNamespace rel() const;


  /// Set the a relation in a different namespace
  void rel(ex42::ExampleWithNamespace value);

  void addrels(ex42::ExampleWithNamespace);
  std::size_t rels_size() const;
  ex42::ExampleWithNamespace rels(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> rels() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithDifferentNamespaceRelationsObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}; }

  bool operator==(const MutableExampleWithDifferentNamespaceRelations& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithDifferentNamespaceRelations& other) const;

  bool operator!=(const MutableExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithDifferentNamespaceRelations& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithDifferentNamespaceRelations& a, MutableExampleWithDifferentNamespaceRelations& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithDifferentNamespaceRelationsObj
  explicit MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithDifferentNamespaceRelations& value);
#endif




#endif
