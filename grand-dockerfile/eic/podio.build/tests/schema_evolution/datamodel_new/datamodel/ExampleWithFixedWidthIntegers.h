// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegers_H
#define DATAMODEL_ExampleWithFixedWidthIntegers_H

#include "datamodel/ExampleWithFixedWidthIntegersObj.h"

#include "datamodel/StructWithFixedWithTypes.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithFixedWidthIntegers;
class ExampleWithFixedWidthIntegersCollection;
class ExampleWithFixedWidthIntegersCollectionData;

/** @class ExampleWithFixedWidthIntegers
 *  Datatype using fixed width integer types as members
 *  @author: Thomas Madlener
 */
class ExampleWithFixedWidthIntegers {

  friend class MutableExampleWithFixedWidthIntegers;
  friend class ExampleWithFixedWidthIntegersCollection;
  friend class ExampleWithFixedWidthIntegersCollectionData;
  friend class ExampleWithFixedWidthIntegersCollectionIterator;

public:
  using mutable_type = MutableExampleWithFixedWidthIntegers;
  using collection_type = ExampleWithFixedWidthIntegersCollection;

  /// default constructor
  ExampleWithFixedWidthIntegers();

  /// Constructor initializing all members
  ExampleWithFixedWidthIntegers(std::int16_t fixedI16, std::uint64_t fixedU64, std::uint32_t fixedU32, StructWithFixedWithTypes fixedWidthStruct, std::array<std::int16_t, 2> fixedWidthArray);

  /// copy constructor
  ExampleWithFixedWidthIntegers(const ExampleWithFixedWidthIntegers& other) = default;

  /// copy-assignment operator
  ExampleWithFixedWidthIntegers& operator=(ExampleWithFixedWidthIntegers other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithFixedWidthIntegers clone() const;

  /// destructor
  ~ExampleWithFixedWidthIntegers() = default;

  /// converting constructor from mutable object
  ExampleWithFixedWidthIntegers(const MutableExampleWithFixedWidthIntegers& other);

  static ExampleWithFixedWidthIntegers makeEmpty();

public:

  /// Access the some integer with exactly 16 bits
  std::int16_t fixedI16() const;

  /// Access the unsigned int with exactly 64 bits
  std::uint64_t fixedU64() const;

  /// Access the unsigned int with exactly 32 bits
  std::uint32_t fixedU32() const;

  /// Access the struct with more fixed width types
  const StructWithFixedWithTypes& fixedWidthStruct() const;
  /// Access the member of struct with more fixed width types
  std::uint16_t fixedUnsigned16() const;
  /// Access the member of struct with more fixed width types
  std::int64_t fixedInteger64() const;
  /// Access the member of struct with more fixed width types
  std::int32_t fixedInteger32() const;

  /// Access the 32 bits split into two times 16 bits
  const std::array<std::int16_t, 2>& fixedWidthArray() const;
  /// Access item i of the 32 bits split into two times 16 bits
  std::int16_t fixedWidthArray(size_t i) const;




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithFixedWidthIntegersObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}; }

  bool operator==(const ExampleWithFixedWidthIntegers& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithFixedWidthIntegers& other) const;

  bool operator!=(const ExampleWithFixedWidthIntegers& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithFixedWidthIntegers& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithFixedWidthIntegers& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithFixedWidthIntegers& a, ExampleWithFixedWidthIntegers& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithFixedWidthIntegersObj
  explicit ExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> obj);
  ExampleWithFixedWidthIntegers(ExampleWithFixedWidthIntegersObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithFixedWidthIntegers& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithFixedWidthIntegers& value);
#endif




#endif
