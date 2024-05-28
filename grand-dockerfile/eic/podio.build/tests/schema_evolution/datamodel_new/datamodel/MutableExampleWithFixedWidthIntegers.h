// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithFixedWidthIntegers_H
#define DATAMODEL_MutableExampleWithFixedWidthIntegers_H

#include "datamodel/ExampleWithFixedWidthIntegersObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithFixedWidthIntegers.h"

#include "datamodel/StructWithFixedWithTypes.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithFixedWidthIntegers
 *  Datatype using fixed width integer types as members
 *  @author: Thomas Madlener
 */
class MutableExampleWithFixedWidthIntegers {

  friend class ExampleWithFixedWidthIntegersCollection;
  friend class ExampleWithFixedWidthIntegersMutableCollectionIterator;
  friend class ExampleWithFixedWidthIntegers;

public:
  using object_type = ExampleWithFixedWidthIntegers;
  using collection_type = ExampleWithFixedWidthIntegersCollection;

  /// default constructor
  MutableExampleWithFixedWidthIntegers();

  /// Constructor initializing all members
  MutableExampleWithFixedWidthIntegers(std::int16_t fixedI16, std::uint64_t fixedU64, std::uint32_t fixedU32, StructWithFixedWithTypes fixedWidthStruct, std::array<std::int16_t, 2> fixedWidthArray);

  /// copy constructor
  MutableExampleWithFixedWidthIntegers(const MutableExampleWithFixedWidthIntegers& other) = default;

  /// copy-assignment operator
  MutableExampleWithFixedWidthIntegers& operator=(MutableExampleWithFixedWidthIntegers other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithFixedWidthIntegers clone() const;

  /// destructor
  ~MutableExampleWithFixedWidthIntegers() = default;


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


  /// Set the some integer with exactly 16 bits
  void fixedI16(std::int16_t value);
  /// Get mutable reference to some integer with exactly 16 bits
  std::int16_t& fixedI16();

  /// Set the unsigned int with exactly 64 bits
  void fixedU64(std::uint64_t value);
  /// Get mutable reference to unsigned int with exactly 64 bits
  std::uint64_t& fixedU64();

  /// Set the unsigned int with exactly 32 bits
  void fixedU32(std::uint32_t value);
  /// Get mutable reference to unsigned int with exactly 32 bits
  std::uint32_t& fixedU32();

  /// Set the struct with more fixed width types
  void fixedWidthStruct(StructWithFixedWithTypes value);
  /// Get mutable reference to struct with more fixed width types
  StructWithFixedWithTypes& fixedWidthStruct();
  /// Set the member of struct with more fixed width types
  void fixedUnsigned16(std::uint16_t value);
  /// Set the member of struct with more fixed width types
  void fixedInteger64(std::int64_t value);
  /// Set the member of struct with more fixed width types
  void fixedInteger32(std::int32_t value);

  /// Set the 32 bits split into two times 16 bits
  void fixedWidthArray(std::array<std::int16_t, 2> value);
  void fixedWidthArray(size_t i, std::int16_t value);
  /// Get mutable reference to 32 bits split into two times 16 bits
  std::array<std::int16_t, 2>& fixedWidthArray();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithFixedWidthIntegersObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}; }

  bool operator==(const MutableExampleWithFixedWidthIntegers& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithFixedWidthIntegers& other) const;

  bool operator!=(const MutableExampleWithFixedWidthIntegers& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithFixedWidthIntegers& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithFixedWidthIntegers& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithFixedWidthIntegers& a, MutableExampleWithFixedWidthIntegers& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithFixedWidthIntegersObj
  explicit MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithFixedWidthIntegers& value);
#endif




#endif
