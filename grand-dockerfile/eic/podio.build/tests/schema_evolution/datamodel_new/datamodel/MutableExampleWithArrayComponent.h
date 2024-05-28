// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithArrayComponent_H
#define DATAMODEL_MutableExampleWithArrayComponent_H

#include "datamodel/ExampleWithArrayComponentObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithArrayComponent.h"

#include "datamodel/SimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithArrayComponent
 *  A type that has a component with an array
 *  @author: Thomas Madlener
 */
class MutableExampleWithArrayComponent {

  friend class ExampleWithArrayComponentCollection;
  friend class ExampleWithArrayComponentMutableCollectionIterator;
  friend class ExampleWithArrayComponent;

public:
  using object_type = ExampleWithArrayComponent;
  using collection_type = ExampleWithArrayComponentCollection;

  /// default constructor
  MutableExampleWithArrayComponent();

  /// Constructor initializing all members
  MutableExampleWithArrayComponent(SimpleStruct s);

  /// copy constructor
  MutableExampleWithArrayComponent(const MutableExampleWithArrayComponent& other) = default;

  /// copy-assignment operator
  MutableExampleWithArrayComponent& operator=(MutableExampleWithArrayComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArrayComponent clone() const;

  /// destructor
  ~MutableExampleWithArrayComponent() = default;


public:

  /// Access the a component that has an array
  const SimpleStruct& s() const;
  /// Access the member of a component that has an array
  int x() const;
  /// Access the member of a component that has an array
  int y() const;
  /// Access the member of a component that has an array
  int z() const;
  /// Access the member of a component that has an array
  int t() const;
  /// Access the member of a component that has an array
  const std::array<int, 4>& p() const;



  /// Set the a component that has an array
  void s(SimpleStruct value);
  /// Get mutable reference to a component that has an array
  SimpleStruct& s();
  /// Set the member of a component that has an array
  void x(int value);
  /// Set the member of a component that has an array
  void y(int value);
  /// Set the member of a component that has an array
  void z(int value);
  /// Set the member of a component that has an array
  void t(int value);
  /// Get reference to the member of a component that has an array
  std::array<int, 4>& p();
  /// Set the member of  a component that has an array
  void p(std::array<int, 4> value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}; }

  bool operator==(const MutableExampleWithArrayComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithArrayComponent& other) const;

  bool operator!=(const MutableExampleWithArrayComponent& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithArrayComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithArrayComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithArrayComponent& a, MutableExampleWithArrayComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayComponentObj
  explicit MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithArrayComponent& value);
#endif




#endif
