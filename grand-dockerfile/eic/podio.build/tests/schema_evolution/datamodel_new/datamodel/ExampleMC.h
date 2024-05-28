// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMC_H
#define DATAMODEL_ExampleMC_H

#include "datamodel/ExampleMCObj.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleMC;
class ExampleMCCollection;
class ExampleMCCollectionData;

/** @class ExampleMC
 *  Example MC-particle
 *  @author: F.Gaede
 */
class ExampleMC {

  friend class MutableExampleMC;
  friend class ExampleMCCollection;
  friend class ExampleMCCollectionData;
  friend class ExampleMCCollectionIterator;

public:
  using mutable_type = MutableExampleMC;
  using collection_type = ExampleMCCollection;

  /// default constructor
  ExampleMC();

  /// Constructor initializing all members
  ExampleMC(double energy, int PDG);

  /// copy constructor
  ExampleMC(const ExampleMC& other) = default;

  /// copy-assignment operator
  ExampleMC& operator=(ExampleMC other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleMC clone() const;

  /// destructor
  ~ExampleMC() = default;

  /// converting constructor from mutable object
  ExampleMC(const MutableExampleMC& other);

  static ExampleMC makeEmpty();

public:

  /// Access the energy
  double energy() const;

  /// Access the PDG code
  int PDG() const;



  std::size_t parents_size() const;
  ExampleMC parents(std::size_t) const;
  std::vector<ExampleMC>::const_iterator parents_begin() const;
  std::vector<ExampleMC>::const_iterator parents_end() const;
  podio::RelationRange<ExampleMC> parents() const;
  std::size_t daughters_size() const;
  ExampleMC daughters(std::size_t) const;
  std::vector<ExampleMC>::const_iterator daughters_begin() const;
  std::vector<ExampleMC>::const_iterator daughters_end() const;
  podio::RelationRange<ExampleMC> daughters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}; }

  bool operator==(const ExampleMC& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleMC& other) const;

  bool operator!=(const ExampleMC& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleMC& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleMC& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleMC& a, ExampleMC& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleMCObj
  explicit ExampleMC(podio::utils::MaybeSharedPtr<ExampleMCObj> obj);
  ExampleMC(ExampleMCObj* obj);

  podio::utils::MaybeSharedPtr<ExampleMCObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleMC& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleMC& value);
#endif




#endif
