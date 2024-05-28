// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponent_H
#define DATAMODEL_ExampleWithComponent_H

#include "datamodel/ExampleWithComponentObj.h"

#include "datamodel/NotSoSimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithComponent;
class ExampleWithComponentCollection;
class ExampleWithComponentCollectionData;

/** @class ExampleWithComponent
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class ExampleWithComponent {

  friend class MutableExampleWithComponent;
  friend class ExampleWithComponentCollection;
  friend class ExampleWithComponentCollectionData;
  friend class ExampleWithComponentCollectionIterator;

public:
  using mutable_type = MutableExampleWithComponent;
  using collection_type = ExampleWithComponentCollection;

  /// default constructor
  ExampleWithComponent();

  /// Constructor initializing all members
  ExampleWithComponent(NotSoSimpleStruct component);

  /// copy constructor
  ExampleWithComponent(const ExampleWithComponent& other) = default;

  /// copy-assignment operator
  ExampleWithComponent& operator=(ExampleWithComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithComponent clone() const;

  /// destructor
  ~ExampleWithComponent() = default;

  /// converting constructor from mutable object
  ExampleWithComponent(const MutableExampleWithComponent& other);

  static ExampleWithComponent makeEmpty();

public:

  /// Access the a component
  const NotSoSimpleStruct& component() const;
  /// Access the member of a component
  const SimpleStruct& data() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}; }

  bool operator==(const ExampleWithComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithComponent& other) const;

  bool operator!=(const ExampleWithComponent& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithComponent& a, ExampleWithComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithComponentObj
  explicit ExampleWithComponent(podio::utils::MaybeSharedPtr<ExampleWithComponentObj> obj);
  ExampleWithComponent(ExampleWithComponentObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithComponentObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithComponent& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithComponent& value);
#endif




#endif
