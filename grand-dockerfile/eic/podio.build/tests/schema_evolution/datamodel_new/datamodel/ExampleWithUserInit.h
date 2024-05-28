// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInit_H
#define DATAMODEL_ExampleWithUserInit_H

#include "datamodel/ExampleWithUserInitObj.h"

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




class MutableExampleWithUserInit;
class ExampleWithUserInitCollection;
class ExampleWithUserInitCollectionData;

/** @class ExampleWithUserInit
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleWithUserInit {

  friend class MutableExampleWithUserInit;
  friend class ExampleWithUserInitCollection;
  friend class ExampleWithUserInitCollectionData;
  friend class ExampleWithUserInitCollectionIterator;

public:
  using mutable_type = MutableExampleWithUserInit;
  using collection_type = ExampleWithUserInitCollection;

  /// default constructor
  ExampleWithUserInit();

  /// Constructor initializing all members
  ExampleWithUserInit(std::int16_t i16Val, std::array<float, 2> floats, ex2::NamespaceStruct s, double d, CompWithInit comp);

  /// copy constructor
  ExampleWithUserInit(const ExampleWithUserInit& other) = default;

  /// copy-assignment operator
  ExampleWithUserInit& operator=(ExampleWithUserInit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithUserInit clone() const;

  /// destructor
  ~ExampleWithUserInit() = default;

  /// converting constructor from mutable object
  ExampleWithUserInit(const MutableExampleWithUserInit& other);

  static ExampleWithUserInit makeEmpty();

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





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithUserInitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}; }

  bool operator==(const ExampleWithUserInit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithUserInit& other) const;

  bool operator!=(const ExampleWithUserInit& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithUserInit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithUserInit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithUserInit& a, ExampleWithUserInit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithUserInitObj
  explicit ExampleWithUserInit(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> obj);
  ExampleWithUserInit(ExampleWithUserInitObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithUserInit& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithUserInit& value);
#endif




#endif
