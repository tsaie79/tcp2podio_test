// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMember_H
#define DATAMODEL_ExampleWithVectorMember_H

#include "datamodel/ExampleWithVectorMemberObj.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithVectorMember;
class ExampleWithVectorMemberCollection;
class ExampleWithVectorMemberCollectionData;

/** @class ExampleWithVectorMember
 *  Type with a vector member
 *  @author: B. Hegner
 */
class ExampleWithVectorMember {

  friend class MutableExampleWithVectorMember;
  friend class ExampleWithVectorMemberCollection;
  friend class ExampleWithVectorMemberCollectionData;
  friend class ExampleWithVectorMemberCollectionIterator;

public:
  using mutable_type = MutableExampleWithVectorMember;
  using collection_type = ExampleWithVectorMemberCollection;

  /// default constructor
  ExampleWithVectorMember();


  /// copy constructor
  ExampleWithVectorMember(const ExampleWithVectorMember& other) = default;

  /// copy-assignment operator
  ExampleWithVectorMember& operator=(ExampleWithVectorMember other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithVectorMember clone() const;

  /// destructor
  ~ExampleWithVectorMember() = default;

  /// converting constructor from mutable object
  ExampleWithVectorMember(const MutableExampleWithVectorMember& other);

  static ExampleWithVectorMember makeEmpty();

public:



  std::size_t count_size() const;
  int count(std::size_t) const;
  std::vector<int>::const_iterator count_begin() const;
  std::vector<int>::const_iterator count_end() const;
  podio::RelationRange<int> count() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithVectorMemberObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}; }

  bool operator==(const ExampleWithVectorMember& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithVectorMember& other) const;

  bool operator!=(const ExampleWithVectorMember& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithVectorMember& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithVectorMember& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithVectorMember& a, ExampleWithVectorMember& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithVectorMemberObj
  explicit ExampleWithVectorMember(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> obj);
  ExampleWithVectorMember(ExampleWithVectorMemberObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMember& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithVectorMember& value);
#endif




#endif
