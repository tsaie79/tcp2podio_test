// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponent_H
#define DATAMODEL_ExampleWithArrayComponent_H

#include "datamodel/ExampleWithArrayComponentObj.h"

#include "datamodel/SimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithArrayComponent;
class ExampleWithArrayComponentCollection;
class ExampleWithArrayComponentCollectionData;

/** @class ExampleWithArrayComponent
 *  A type that has a component with an array
 *  @author: Thomas Madlener
 */
class ExampleWithArrayComponent {

  friend class MutableExampleWithArrayComponent;
  friend class ExampleWithArrayComponentCollection;
  friend class ExampleWithArrayComponentCollectionData;
  friend class ExampleWithArrayComponentCollectionIterator;

public:
  using mutable_type = MutableExampleWithArrayComponent;
  using collection_type = ExampleWithArrayComponentCollection;

  /// default constructor
  ExampleWithArrayComponent();

  /// Constructor initializing all members
  ExampleWithArrayComponent(SimpleStruct s);

  /// copy constructor
  ExampleWithArrayComponent(const ExampleWithArrayComponent& other) = default;

  /// copy-assignment operator
  ExampleWithArrayComponent& operator=(ExampleWithArrayComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArrayComponent clone() const;

  /// destructor
  ~ExampleWithArrayComponent() = default;

  /// converting constructor from mutable object
  ExampleWithArrayComponent(const MutableExampleWithArrayComponent& other);

  static ExampleWithArrayComponent makeEmpty();

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





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}; }

  bool operator==(const ExampleWithArrayComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithArrayComponent& other) const;

  bool operator!=(const ExampleWithArrayComponent& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithArrayComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithArrayComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithArrayComponent& a, ExampleWithArrayComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayComponentObj
  explicit ExampleWithArrayComponent(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> obj);
  ExampleWithArrayComponent(ExampleWithArrayComponentObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayComponent& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayComponent& value);
#endif




#endif
