// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2_H
#define DATAMODEL_ExampleForCyclicDependency2_H

#include "datamodel/ExampleForCyclicDependency2Obj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency1;
class MutableExampleForCyclicDependency1;



class MutableExampleForCyclicDependency2;
class ExampleForCyclicDependency2Collection;
class ExampleForCyclicDependency2CollectionData;

/** @class ExampleForCyclicDependency2
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency2 {

  friend class MutableExampleForCyclicDependency2;
  friend class ExampleForCyclicDependency2Collection;
  friend class ExampleForCyclicDependency2CollectionData;
  friend class ExampleForCyclicDependency2CollectionIterator;

public:
  using mutable_type = MutableExampleForCyclicDependency2;
  using collection_type = ExampleForCyclicDependency2Collection;

  /// default constructor
  ExampleForCyclicDependency2();


  /// copy constructor
  ExampleForCyclicDependency2(const ExampleForCyclicDependency2& other) = default;

  /// copy-assignment operator
  ExampleForCyclicDependency2& operator=(ExampleForCyclicDependency2 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency2 clone() const;

  /// destructor
  ~ExampleForCyclicDependency2() = default;

  /// converting constructor from mutable object
  ExampleForCyclicDependency2(const MutableExampleForCyclicDependency2& other);

  static ExampleForCyclicDependency2 makeEmpty();

public:


  /// Access the a ref
  const ExampleForCyclicDependency1 ref() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency2Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}; }

  bool operator==(const ExampleForCyclicDependency2& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleForCyclicDependency2& other) const;

  bool operator!=(const ExampleForCyclicDependency2& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleForCyclicDependency2& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleForCyclicDependency2& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleForCyclicDependency2& a, ExampleForCyclicDependency2& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency2Obj
  explicit ExampleForCyclicDependency2(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> obj);
  ExampleForCyclicDependency2(ExampleForCyclicDependency2Obj* obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2& value);
#endif




#endif
