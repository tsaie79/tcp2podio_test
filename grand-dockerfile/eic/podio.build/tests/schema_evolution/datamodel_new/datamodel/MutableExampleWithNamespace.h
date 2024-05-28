// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithNamespace_H
#define DATAMODEL_MutableExampleWithNamespace_H

#include "datamodel/ExampleWithNamespaceObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithNamespace.h"

#include "datamodel/NamespaceStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace ex42 {


/** @class MutableExampleWithNamespace
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class MutableExampleWithNamespace {

  friend class ExampleWithNamespaceCollection;
  friend class ExampleWithNamespaceMutableCollectionIterator;
  friend class ExampleWithNamespace;

public:
  using object_type = ExampleWithNamespace;
  using collection_type = ExampleWithNamespaceCollection;

  /// default constructor
  MutableExampleWithNamespace();

  /// Constructor initializing all members
  MutableExampleWithNamespace(ex2::NamespaceStruct component);

  /// copy constructor
  MutableExampleWithNamespace(const MutableExampleWithNamespace& other) = default;

  /// copy-assignment operator
  MutableExampleWithNamespace& operator=(MutableExampleWithNamespace other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithNamespace clone() const;

  /// destructor
  ~MutableExampleWithNamespace() = default;


public:

  /// Access the a component
  const ex2::NamespaceStruct& component() const;
  /// Access the member of a component
  int x() const;
  /// Access the member of a component
  int y_new() const;



  /// Set the a component
  void component(ex2::NamespaceStruct value);
  /// Get mutable reference to a component
  ex2::NamespaceStruct& component();
  /// Set the member of a component
  void x(int value);
  /// Set the member of a component
  void y_new(int value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithNamespaceObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}; }

  bool operator==(const MutableExampleWithNamespace& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithNamespace& other) const;

  bool operator!=(const MutableExampleWithNamespace& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithNamespace& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithNamespace& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithNamespace& a, MutableExampleWithNamespace& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithNamespaceObj
  explicit MutableExampleWithNamespace(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithNamespace& value);
#endif


} // namespace ex42


#endif
