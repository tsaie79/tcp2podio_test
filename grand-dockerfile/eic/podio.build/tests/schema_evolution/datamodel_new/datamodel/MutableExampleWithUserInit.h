// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithUserInit_H
#define DATAMODEL_MutableExampleWithUserInit_H

#include "datamodel/ExampleWithUserInitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithUserInit.h"

#include "datamodel/CompWithInit.h"
#include "datamodel/NamespaceStruct.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithUserInit
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class MutableExampleWithUserInit {

  friend class ExampleWithUserInitCollection;
  friend class ExampleWithUserInitMutableCollectionIterator;
  friend class ExampleWithUserInit;

public:
  using object_type = ExampleWithUserInit;
  using collection_type = ExampleWithUserInitCollection;

  /// default constructor
  MutableExampleWithUserInit();

  /// Constructor initializing all members
  MutableExampleWithUserInit(std::int16_t i16Val, std::array<float, 2> floats, ex2::NamespaceStruct s, double d, CompWithInit comp);

  /// copy constructor
  MutableExampleWithUserInit(const MutableExampleWithUserInit& other) = default;

  /// copy-assignment operator
  MutableExampleWithUserInit& operator=(MutableExampleWithUserInit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithUserInit clone() const;

  /// destructor
  ~MutableExampleWithUserInit() = default;


public:

  /// Access the some int16 value
  std::int16_t i16Val() const;

  /// Access the some float values
  const std::array<float, 2>& floats() const;
  /// Access item i of the some float values
  float floats(size_t i) const;
  /// Access the one that we happen to know works
  const ex2::NamespaceStruct& s() const;
  /// Access the member of one that we happen to know works
  int x() const;
  /// Access the member of one that we happen to know works
  int y_new() const;

  /// Access the double val
  double d() const;

  /// Access the To make sure that the default initializer of the component does what it should
  const CompWithInit& comp() const;
  /// Access the member of To make sure that the default initializer of the component does what it should
  int i() const;
  /// Access the member of To make sure that the default initializer of the component does what it should
  const std::array<double, 10>& arr() const;



  /// Set the some int16 value
  void i16Val(std::int16_t value);
  /// Get mutable reference to some int16 value
  std::int16_t& i16Val();

  /// Set the some float values
  void floats(std::array<float, 2> value);
  void floats(size_t i, float value);
  /// Get mutable reference to some float values
  std::array<float, 2>& floats();

  /// Set the one that we happen to know works
  void s(ex2::NamespaceStruct value);
  /// Get mutable reference to one that we happen to know works
  ex2::NamespaceStruct& s();
  /// Set the member of one that we happen to know works
  void x(int value);
  /// Set the member of one that we happen to know works
  void y_new(int value);

  /// Set the double val
  void d(double value);
  /// Get mutable reference to double val
  double& d();

  /// Set the To make sure that the default initializer of the component does what it should
  void comp(CompWithInit value);
  /// Get mutable reference to To make sure that the default initializer of the component does what it should
  CompWithInit& comp();
  /// Set the member of To make sure that the default initializer of the component does what it should
  void i(int value);
  /// Get reference to the member of To make sure that the default initializer of the component does what it should
  std::array<double, 10>& arr();
  /// Set the member of  To make sure that the default initializer of the component does what it should
  void arr(std::array<double, 10> value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithUserInitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}; }

  bool operator==(const MutableExampleWithUserInit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithUserInit& other) const;

  bool operator!=(const MutableExampleWithUserInit& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithUserInit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithUserInit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithUserInit& a, MutableExampleWithUserInit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithUserInitObj
  explicit MutableExampleWithUserInit(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithUserInit& value);
#endif




#endif
