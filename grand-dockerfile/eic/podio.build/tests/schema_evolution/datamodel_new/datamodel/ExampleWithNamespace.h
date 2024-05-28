// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespace_H
#define DATAMODEL_ExampleWithNamespace_H

#include "datamodel/ExampleWithNamespaceObj.h"

#include "datamodel/NamespaceStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace ex42 {

class MutableExampleWithNamespace;
class ExampleWithNamespaceCollection;
class ExampleWithNamespaceCollectionData;

/** @class ExampleWithNamespace
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ExampleWithNamespace {

  friend class MutableExampleWithNamespace;
  friend class ExampleWithNamespaceCollection;
  friend class ex42::ExampleWithNamespaceCollectionData;
  friend class ExampleWithNamespaceCollectionIterator;

public:
  using mutable_type = MutableExampleWithNamespace;
  using collection_type = ExampleWithNamespaceCollection;

  /// default constructor
  ExampleWithNamespace();

  /// Constructor initializing all members
  ExampleWithNamespace(ex2::NamespaceStruct component);

  /// copy constructor
  ExampleWithNamespace(const ExampleWithNamespace& other) = default;

  /// copy-assignment operator
  ExampleWithNamespace& operator=(ExampleWithNamespace other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithNamespace clone() const;

  /// destructor
  ~ExampleWithNamespace() = default;

  /// converting constructor from mutable object
  ExampleWithNamespace(const MutableExampleWithNamespace& other);

  static ExampleWithNamespace makeEmpty();

public:

  /// Access the a component
  const ex2::NamespaceStruct& component() const;
  /// Access the member of a component
  int x() const;
  /// Access the member of a component
  int y_new() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithNamespaceObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}; }

  bool operator==(const ExampleWithNamespace& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithNamespace& other) const;

  bool operator!=(const ExampleWithNamespace& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithNamespace& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithNamespace& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithNamespace& a, ExampleWithNamespace& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithNamespaceObj
  explicit ExampleWithNamespace(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> obj);
  ExampleWithNamespace(ExampleWithNamespaceObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespace& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithNamespace& value);
#endif


} // namespace ex42


#endif
