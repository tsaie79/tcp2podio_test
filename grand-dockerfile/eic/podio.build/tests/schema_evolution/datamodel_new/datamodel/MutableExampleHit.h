// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleHit_H
#define DATAMODEL_MutableExampleHit_H

#include "datamodel/ExampleHitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleHit.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class MutableExampleHit {

  friend class ExampleHitCollection;
  friend class ExampleHitMutableCollectionIterator;
  friend class ExampleHit;

public:
  using object_type = ExampleHit;
  using collection_type = ExampleHitCollection;

  /// default constructor
  MutableExampleHit();

  /// Constructor initializing all members
  MutableExampleHit(unsigned long long cellID, double x, double y, double z, double energy, double t);

  /// copy constructor
  MutableExampleHit(const MutableExampleHit& other) = default;

  /// copy-assignment operator
  MutableExampleHit& operator=(MutableExampleHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleHit clone() const;

  /// destructor
  ~MutableExampleHit() = default;


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



  /// Set the cellID
  void cellID(unsigned long long value);
  /// Get mutable reference to cellID
  unsigned long long& cellID();

  /// Set the x-coordinate
  void x(double value);
  /// Get mutable reference to x-coordinate
  double& x();

  /// Set the y-coordinate
  void y(double value);
  /// Get mutable reference to y-coordinate
  double& y();

  /// Set the z-coordinate
  void z(double value);
  /// Get mutable reference to z-coordinate
  double& z();

  /// Set the energy
  void energy(double value);
  /// Get mutable reference to energy
  double& energy();

  /// Set the time
  void t(double value);
  /// Get mutable reference to time
  double& t();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}; }

  bool operator==(const MutableExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleHit& other) const;

  bool operator!=(const MutableExampleHit& other) const { return !(*this == other); }
  bool operator!=(const ExampleHit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleHit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleHit& a, MutableExampleHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleHitObj
  explicit MutableExampleHit(podio::utils::MaybeSharedPtr<ExampleHitObj> obj);

  podio::utils::MaybeSharedPtr<ExampleHitObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleHit& value);
#endif




#endif
