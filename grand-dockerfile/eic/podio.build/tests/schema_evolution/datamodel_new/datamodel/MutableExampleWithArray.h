// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithArray_H
#define DATAMODEL_MutableExampleWithArray_H

#include "datamodel/ExampleWithArrayObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithArray.h"

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class MutableExampleWithArray {

  friend class ExampleWithArrayCollection;
  friend class ExampleWithArrayMutableCollectionIterator;
  friend class ExampleWithArray;

public:
  using object_type = ExampleWithArray;
  using collection_type = ExampleWithArrayCollection;

  /// default constructor
  MutableExampleWithArray();

  /// Constructor initializing all members
  MutableExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// copy constructor
  MutableExampleWithArray(const MutableExampleWithArray& other) = default;

  /// copy-assignment operator
  MutableExampleWithArray& operator=(MutableExampleWithArray other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArray clone() const;

  /// destructor
  ~MutableExampleWithArray() = default;


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


  /// Set the component that contains an array
  void arrayStruct(NotSoSimpleStruct value);
  /// Get mutable reference to component that contains an array
  NotSoSimpleStruct& arrayStruct();
  /// Get reference to the member of component that contains an array
  SimpleStruct& data();
  /// Set the member of  component that contains an array
  void data(SimpleStruct value);

  /// Set the array-member without space to test regex
  void myArray(std::array<int, 4> value);
  void myArray(size_t i, int value);
  /// Get mutable reference to array-member without space to test regex
  std::array<int, 4>& myArray();

  /// Set the array-member with space to test regex
  void anotherArray2(std::array<int, 4> value);
  void anotherArray2(size_t i, int value);
  /// Get mutable reference to array-member with space to test regex
  std::array<int, 4>& anotherArray2();

  /// Set the snail case to test regex
  void snail_case_array(std::array<int, 4> value);
  void snail_case_array(size_t i, int value);
  /// Get mutable reference to snail case to test regex
  std::array<int, 4>& snail_case_array();

  /// Set the mixing things up for regex
  void snail_case_Array3(std::array<int, 4> value);
  void snail_case_Array3(size_t i, int value);
  /// Get mutable reference to mixing things up for regex
  std::array<int, 4>& snail_case_Array3();

  /// Set the an array containing structs
  void structArray(std::array<ex2::NamespaceStruct, 4> value);
  void structArray(size_t i, ex2::NamespaceStruct value);
  /// Get mutable reference to an array containing structs
  std::array<ex2::NamespaceStruct, 4>& structArray();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}; }

  bool operator==(const MutableExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithArray& other) const;

  bool operator!=(const MutableExampleWithArray& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithArray& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithArray& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithArray& a, MutableExampleWithArray& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayObj
  explicit MutableExampleWithArray(podio::utils::MaybeSharedPtr<ExampleWithArrayObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithArray& value);
#endif




#endif
