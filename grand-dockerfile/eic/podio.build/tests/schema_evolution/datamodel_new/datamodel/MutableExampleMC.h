// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleMC_H
#define DATAMODEL_MutableExampleMC_H

#include "datamodel/ExampleMCObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleMC.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleMC
 *  Example MC-particle
 *  @author: F.Gaede
 */
class MutableExampleMC {

  friend class ExampleMCCollection;
  friend class ExampleMCMutableCollectionIterator;
  friend class ExampleMC;

public:
  using object_type = ExampleMC;
  using collection_type = ExampleMCCollection;

  /// default constructor
  MutableExampleMC();

  /// Constructor initializing all members
  MutableExampleMC(double energy, int PDG);

  /// copy constructor
  MutableExampleMC(const MutableExampleMC& other) = default;

  /// copy-assignment operator
  MutableExampleMC& operator=(MutableExampleMC other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleMC clone() const;

  /// destructor
  ~MutableExampleMC() = default;


public:

  /// Access the energy
  double energy() const;

  /// Access the PDG code
  int PDG() const;



  /// Set the energy
  void energy(double value);
  /// Get mutable reference to energy
  double& energy();

  /// Set the PDG code
  void PDG(int value);
  /// Get mutable reference to PDG code
  int& PDG();



  void addparents(ExampleMC);
  std::size_t parents_size() const;
  ExampleMC parents(std::size_t) const;
  std::vector<ExampleMC>::const_iterator parents_begin() const;
  std::vector<ExampleMC>::const_iterator parents_end() const;
  podio::RelationRange<ExampleMC> parents() const;
  void adddaughters(ExampleMC);
  std::size_t daughters_size() const;
  ExampleMC daughters(std::size_t) const;
  std::vector<ExampleMC>::const_iterator daughters_begin() const;
  std::vector<ExampleMC>::const_iterator daughters_end() const;
  podio::RelationRange<ExampleMC> daughters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}; }

  bool operator==(const MutableExampleMC& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleMC& other) const;

  bool operator!=(const MutableExampleMC& other) const { return !(*this == other); }
  bool operator!=(const ExampleMC& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleMC& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleMC& a, MutableExampleMC& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleMCObj
  explicit MutableExampleMC(podio::utils::MaybeSharedPtr<ExampleMCObj> obj);

  podio::utils::MaybeSharedPtr<ExampleMCObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleMC& value);
#endif




#endif
