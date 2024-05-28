// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleOfDroppedType_H
#define DATAMODEL_MutableExampleOfDroppedType_H

#include "datamodel/ExampleOfDroppedTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleOfDroppedType.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleOfDroppedType
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class MutableExampleOfDroppedType {

  friend class ExampleOfDroppedTypeCollection;
  friend class ExampleOfDroppedTypeMutableCollectionIterator;
  friend class ExampleOfDroppedType;

public:
  using object_type = ExampleOfDroppedType;
  using collection_type = ExampleOfDroppedTypeCollection;

  /// default constructor
  MutableExampleOfDroppedType();

  /// Constructor initializing all members
  MutableExampleOfDroppedType(int x);

  /// copy constructor
  MutableExampleOfDroppedType(const MutableExampleOfDroppedType& other) = default;

  /// copy-assignment operator
  MutableExampleOfDroppedType& operator=(MutableExampleOfDroppedType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleOfDroppedType clone() const;

  /// destructor
  ~MutableExampleOfDroppedType() = default;


public:

  /// Access the some member
  int x() const;



  /// Set the some member
  void x(int value);
  /// Get mutable reference to some member
  int& x();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleOfDroppedTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}; }

  bool operator==(const MutableExampleOfDroppedType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleOfDroppedType& other) const;

  bool operator!=(const MutableExampleOfDroppedType& other) const { return !(*this == other); }
  bool operator!=(const ExampleOfDroppedType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleOfDroppedType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleOfDroppedType& a, MutableExampleOfDroppedType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleOfDroppedTypeObj
  explicit MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> obj);

  podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleOfDroppedType& value);
#endif




#endif
