// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelations_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelations_H

#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"

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



class MutableExampleWithDifferentNamespaceRelations;
class ExampleWithDifferentNamespaceRelationsCollection;
class ExampleWithDifferentNamespaceRelationsCollectionData;

/** @class ExampleWithDifferentNamespaceRelations
 *  Datatype using a namespaced relation without being in the same namespace
 *  @author: Thomas Madlener
 */
class ExampleWithDifferentNamespaceRelations {

  friend class MutableExampleWithDifferentNamespaceRelations;
  friend class ExampleWithDifferentNamespaceRelationsCollection;
  friend class ExampleWithDifferentNamespaceRelationsCollectionData;
  friend class ExampleWithDifferentNamespaceRelationsCollectionIterator;

public:
  using mutable_type = MutableExampleWithDifferentNamespaceRelations;
  using collection_type = ExampleWithDifferentNamespaceRelationsCollection;

  /// default constructor
  ExampleWithDifferentNamespaceRelations();


  /// copy constructor
  ExampleWithDifferentNamespaceRelations(const ExampleWithDifferentNamespaceRelations& other) = default;

  /// copy-assignment operator
  ExampleWithDifferentNamespaceRelations& operator=(ExampleWithDifferentNamespaceRelations other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithDifferentNamespaceRelations clone() const;

  /// destructor
  ~ExampleWithDifferentNamespaceRelations() = default;

  /// converting constructor from mutable object
  ExampleWithDifferentNamespaceRelations(const MutableExampleWithDifferentNamespaceRelations& other);

  static ExampleWithDifferentNamespaceRelations makeEmpty();

public:


  /// Access the a relation in a different namespace
  const ex42::ExampleWithNamespace rel() const;

  std::size_t rels_size() const;
  ex42::ExampleWithNamespace rels(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> rels() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithDifferentNamespaceRelationsObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}; }

  bool operator==(const ExampleWithDifferentNamespaceRelations& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithDifferentNamespaceRelations& other) const;

  bool operator!=(const ExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithDifferentNamespaceRelations& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithDifferentNamespaceRelations& a, ExampleWithDifferentNamespaceRelations& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithDifferentNamespaceRelationsObj
  explicit ExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> obj);
  ExampleWithDifferentNamespaceRelations(ExampleWithDifferentNamespaceRelationsObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithDifferentNamespaceRelations& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithDifferentNamespaceRelations& value);
#endif




#endif
