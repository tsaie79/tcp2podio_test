// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleForCyclicDependency1_H
#define DATAMODEL_MutableExampleForCyclicDependency1_H

#include "datamodel/ExampleForCyclicDependency1Obj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleForCyclicDependency1.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency2;
class MutableExampleForCyclicDependency2;




/** @class MutableExampleForCyclicDependency1
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class MutableExampleForCyclicDependency1 {

  friend class ExampleForCyclicDependency1Collection;
  friend class ExampleForCyclicDependency1MutableCollectionIterator;
  friend class ExampleForCyclicDependency1;

public:
  using object_type = ExampleForCyclicDependency1;
  using collection_type = ExampleForCyclicDependency1Collection;

  /// default constructor
  MutableExampleForCyclicDependency1();


  /// copy constructor
  MutableExampleForCyclicDependency1(const MutableExampleForCyclicDependency1& other) = default;

  /// copy-assignment operator
  MutableExampleForCyclicDependency1& operator=(MutableExampleForCyclicDependency1 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency1 clone() const;

  /// destructor
  ~MutableExampleForCyclicDependency1() = default;


public:


  /// Access the a ref
  const ExampleForCyclicDependency2 ref() const;


  /// Set the a ref
  void ref(ExampleForCyclicDependency2 value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency1Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}; }

  bool operator==(const MutableExampleForCyclicDependency1& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleForCyclicDependency1& other) const;

  bool operator!=(const MutableExampleForCyclicDependency1& other) const { return !(*this == other); }
  bool operator!=(const ExampleForCyclicDependency1& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleForCyclicDependency1& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleForCyclicDependency1& a, MutableExampleForCyclicDependency1& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency1Obj
  explicit MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleForCyclicDependency1& value);
#endif




#endif
