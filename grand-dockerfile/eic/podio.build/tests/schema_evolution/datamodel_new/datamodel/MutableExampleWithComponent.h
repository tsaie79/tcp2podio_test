// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithComponent_H
#define DATAMODEL_MutableExampleWithComponent_H

#include "datamodel/ExampleWithComponentObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithComponent.h"

#include "datamodel/NotSoSimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithComponent
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class MutableExampleWithComponent {

  friend class ExampleWithComponentCollection;
  friend class ExampleWithComponentMutableCollectionIterator;
  friend class ExampleWithComponent;

public:
  using object_type = ExampleWithComponent;
  using collection_type = ExampleWithComponentCollection;

  /// default constructor
  MutableExampleWithComponent();

  /// Constructor initializing all members
  MutableExampleWithComponent(NotSoSimpleStruct component);

  /// copy constructor
  MutableExampleWithComponent(const MutableExampleWithComponent& other) = default;

  /// copy-assignment operator
  MutableExampleWithComponent& operator=(MutableExampleWithComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithComponent clone() const;

  /// destructor
  ~MutableExampleWithComponent() = default;


public:

  /// Access the a component
  const NotSoSimpleStruct& component() const;
  /// Access the member of a component
  const SimpleStruct& data() const;



  /// Set the a component
  void component(NotSoSimpleStruct value);
  /// Get mutable reference to a component
  NotSoSimpleStruct& component();
  /// Get reference to the member of a component
  SimpleStruct& data();
  /// Set the member of  a component
  void data(SimpleStruct value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}; }

  bool operator==(const MutableExampleWithComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithComponent& other) const;

  bool operator!=(const MutableExampleWithComponent& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithComponent& a, MutableExampleWithComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithComponentObj
  explicit MutableExampleWithComponent(podio::utils::MaybeSharedPtr<ExampleWithComponentObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithComponentObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithComponent& value);
#endif




#endif
