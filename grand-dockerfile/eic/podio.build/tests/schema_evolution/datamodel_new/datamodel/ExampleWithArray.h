// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArray_H
#define DATAMODEL_ExampleWithArray_H

#include "datamodel/ExampleWithArrayObj.h"

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithArray;
class ExampleWithArrayCollection;
class ExampleWithArrayCollectionData;

/** @class ExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArray {

  friend class MutableExampleWithArray;
  friend class ExampleWithArrayCollection;
  friend class ExampleWithArrayCollectionData;
  friend class ExampleWithArrayCollectionIterator;

public:
  using mutable_type = MutableExampleWithArray;
  using collection_type = ExampleWithArrayCollection;

  /// default constructor
  ExampleWithArray();

  /// Constructor initializing all members
  ExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// copy constructor
  ExampleWithArray(const ExampleWithArray& other) = default;

  /// copy-assignment operator
  ExampleWithArray& operator=(ExampleWithArray other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArray clone() const;

  /// destructor
  ~ExampleWithArray() = default;

  /// converting constructor from mutable object
  ExampleWithArray(const MutableExampleWithArray& other);

  static ExampleWithArray makeEmpty();

public:

  /// Access the component that contains an array
  const NotSoSimpleStruct& arrayStruct() const;
  /// Access the member of component that contains an array
  const SimpleStruct& data() const;

  /// Access the array-member without space to test regex
  const std::array<int, 4>& myArray() const;
  /// Access item i of the array-member without space to test regex
  int myArray(size_t i) const;
  /// Access the array-member with space to test regex
  const std::array<int, 4>& anotherArray2() const;
  /// Access item i of the array-member with space to test regex
  int anotherArray2(size_t i) const;
  /// Access the snail case to test regex
  const std::array<int, 4>& snail_case_array() const;
  /// Access item i of the snail case to test regex
  int snail_case_array(size_t i) const;
  /// Access the mixing things up for regex
  const std::array<int, 4>& snail_case_Array3() const;
  /// Access item i of the mixing things up for regex
  int snail_case_Array3(size_t i) const;
  /// Access the an array containing structs
  const std::array<ex2::NamespaceStruct, 4>& structArray() const;
  /// Access item i of the an array containing structs
  const ex2::NamespaceStruct& structArray(size_t i) const;




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}; }

  bool operator==(const ExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithArray& other) const;

  bool operator!=(const ExampleWithArray& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithArray& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithArray& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithArray& a, ExampleWithArray& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayObj
  explicit ExampleWithArray(podio::utils::MaybeSharedPtr<ExampleWithArrayObj> obj);
  ExampleWithArray(ExampleWithArrayObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArray& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArray& value);
#endif




#endif
