// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHit_H
#define DATAMODEL_ExampleHit_H

#include "datamodel/ExampleHitObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleHit;
class ExampleHitCollection;
class ExampleHitCollectionData;

/** @class ExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class ExampleHit {

  friend class MutableExampleHit;
  friend class ExampleHitCollection;
  friend class ExampleHitCollectionData;
  friend class ExampleHitCollectionIterator;

public:
  using mutable_type = MutableExampleHit;
  using collection_type = ExampleHitCollection;

  /// default constructor
  ExampleHit();

  /// Constructor initializing all members
  ExampleHit(unsigned long long cellID, double x, double y, double z, double energy, double t);

  /// copy constructor
  ExampleHit(const ExampleHit& other) = default;

  /// copy-assignment operator
  ExampleHit& operator=(ExampleHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleHit clone() const;

  /// destructor
  ~ExampleHit() = default;

  /// converting constructor from mutable object
  ExampleHit(const MutableExampleHit& other);

  static ExampleHit makeEmpty();

public:

  /// Access the cellID
  unsigned long long cellID() const;

  /// Access the x-coordinate
  double x() const;

  /// Access the y-coordinate
  double y() const;

  /// Access the z-coordinate
  double z() const;

  /// Access the energy
  double energy() const;

  /// Access the time
  double t() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}; }

  bool operator==(const ExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleHit& other) const;

  bool operator!=(const ExampleHit& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleHit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleHit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleHit& a, ExampleHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleHitObj
  explicit ExampleHit(podio::utils::MaybeSharedPtr<ExampleHitObj> obj);
  ExampleHit(ExampleHitObj* obj);

  podio::utils::MaybeSharedPtr<ExampleHitObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleHit& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleHit& value);
#endif




#endif
