// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1_H
#define DATAMODEL_ExampleForCyclicDependency1_H

#include "datamodel/ExampleForCyclicDependency1Obj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency2;
class MutableExampleForCyclicDependency2;



class MutableExampleForCyclicDependency1;
class ExampleForCyclicDependency1Collection;
class ExampleForCyclicDependency1CollectionData;

/** @class ExampleForCyclicDependency1
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency1 {

  friend class MutableExampleForCyclicDependency1;
  friend class ExampleForCyclicDependency1Collection;
  friend class ExampleForCyclicDependency1CollectionData;
  friend class ExampleForCyclicDependency1CollectionIterator;

public:
  using mutable_type = MutableExampleForCyclicDependency1;
  using collection_type = ExampleForCyclicDependency1Collection;

  /// default constructor
  ExampleForCyclicDependency1();


  /// copy constructor
  ExampleForCyclicDependency1(const ExampleForCyclicDependency1& other) = default;

  /// copy-assignment operator
  ExampleForCyclicDependency1& operator=(ExampleForCyclicDependency1 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency1 clone() const;

  /// destructor
  ~ExampleForCyclicDependency1() = default;

  /// converting constructor from mutable object
  ExampleForCyclicDependency1(const MutableExampleForCyclicDependency1& other);

  static ExampleForCyclicDependency1 makeEmpty();

public:


  /// Access the a ref
  const ExampleForCyclicDependency2 ref() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency1Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}; }

  bool operator==(const ExampleForCyclicDependency1& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleForCyclicDependency1& other) const;

  bool operator!=(const ExampleForCyclicDependency1& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleForCyclicDependency1& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleForCyclicDependency1& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleForCyclicDependency1& a, ExampleForCyclicDependency1& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency1Obj
  explicit ExampleForCyclicDependency1(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> obj);
  ExampleForCyclicDependency1(ExampleForCyclicDependency1Obj* obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1& value);
#endif




#endif
