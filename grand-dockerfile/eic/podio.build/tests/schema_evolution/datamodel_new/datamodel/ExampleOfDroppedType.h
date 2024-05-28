// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedType_H
#define DATAMODEL_ExampleOfDroppedType_H

#include "datamodel/ExampleOfDroppedTypeObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleOfDroppedType;
class ExampleOfDroppedTypeCollection;
class ExampleOfDroppedTypeCollectionData;

/** @class ExampleOfDroppedType
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleOfDroppedType {

  friend class MutableExampleOfDroppedType;
  friend class ExampleOfDroppedTypeCollection;
  friend class ExampleOfDroppedTypeCollectionData;
  friend class ExampleOfDroppedTypeCollectionIterator;

public:
  using mutable_type = MutableExampleOfDroppedType;
  using collection_type = ExampleOfDroppedTypeCollection;

  /// default constructor
  ExampleOfDroppedType();

  /// Constructor initializing all members
  ExampleOfDroppedType(int x);

  /// copy constructor
  ExampleOfDroppedType(const ExampleOfDroppedType& other) = default;

  /// copy-assignment operator
  ExampleOfDroppedType& operator=(ExampleOfDroppedType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleOfDroppedType clone() const;

  /// destructor
  ~ExampleOfDroppedType() = default;

  /// converting constructor from mutable object
  ExampleOfDroppedType(const MutableExampleOfDroppedType& other);

  static ExampleOfDroppedType makeEmpty();

public:

  /// Access the some member
  int x() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleOfDroppedTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}; }

  bool operator==(const ExampleOfDroppedType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleOfDroppedType& other) const;

  bool operator!=(const ExampleOfDroppedType& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleOfDroppedType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleOfDroppedType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleOfDroppedType& a, ExampleOfDroppedType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleOfDroppedTypeObj
  explicit ExampleOfDroppedType(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> obj);
  ExampleOfDroppedType(ExampleOfDroppedTypeObj* obj);

  podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleOfDroppedType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleOfDroppedType& value);
#endif




#endif
