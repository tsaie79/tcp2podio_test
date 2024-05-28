// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleForCyclicDependency2_H
#define DATAMODEL_MutableExampleForCyclicDependency2_H

#include "datamodel/ExampleForCyclicDependency2Obj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleForCyclicDependency2.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency1;
class MutableExampleForCyclicDependency1;




/** @class MutableExampleForCyclicDependency2
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class MutableExampleForCyclicDependency2 {

  friend class ExampleForCyclicDependency2Collection;
  friend class ExampleForCyclicDependency2MutableCollectionIterator;
  friend class ExampleForCyclicDependency2;

public:
  using object_type = ExampleForCyclicDependency2;
  using collection_type = ExampleForCyclicDependency2Collection;

  /// default constructor
  MutableExampleForCyclicDependency2();


  /// copy constructor
  MutableExampleForCyclicDependency2(const MutableExampleForCyclicDependency2& other) = default;

  /// copy-assignment operator
  MutableExampleForCyclicDependency2& operator=(MutableExampleForCyclicDependency2 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency2 clone() const;

  /// destructor
  ~MutableExampleForCyclicDependency2() = default;


public:


  /// Access the a ref
  const ExampleForCyclicDependency1 ref() const;


  /// Set the a ref
  void ref(ExampleForCyclicDependency1 value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency2Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}; }

  bool operator==(const MutableExampleForCyclicDependency2& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleForCyclicDependency2& other) const;

  bool operator!=(const MutableExampleForCyclicDependency2& other) const { return !(*this == other); }
  bool operator!=(const ExampleForCyclicDependency2& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleForCyclicDependency2& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleForCyclicDependency2& a, MutableExampleForCyclicDependency2& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency2Obj
  explicit MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleForCyclicDependency2& value);
#endif




#endif
