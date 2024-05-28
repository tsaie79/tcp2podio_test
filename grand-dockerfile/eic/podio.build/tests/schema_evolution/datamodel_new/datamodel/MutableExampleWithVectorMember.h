// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithVectorMember_H
#define DATAMODEL_MutableExampleWithVectorMember_H

#include "datamodel/ExampleWithVectorMemberObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithVectorMember.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithVectorMember
 *  Type with a vector member
 *  @author: B. Hegner
 */
class MutableExampleWithVectorMember {

  friend class ExampleWithVectorMemberCollection;
  friend class ExampleWithVectorMemberMutableCollectionIterator;
  friend class ExampleWithVectorMember;

public:
  using object_type = ExampleWithVectorMember;
  using collection_type = ExampleWithVectorMemberCollection;

  /// default constructor
  MutableExampleWithVectorMember();


  /// copy constructor
  MutableExampleWithVectorMember(const MutableExampleWithVectorMember& other) = default;

  /// copy-assignment operator
  MutableExampleWithVectorMember& operator=(MutableExampleWithVectorMember other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithVectorMember clone() const;

  /// destructor
  ~MutableExampleWithVectorMember() = default;


public:





  void addcount(int);
  std::size_t count_size() const;
  int count(std::size_t) const;
  std::vector<int>::const_iterator count_begin() const;
  std::vector<int>::const_iterator count_end() const;
  podio::RelationRange<int> count() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithVectorMemberObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}; }

  bool operator==(const MutableExampleWithVectorMember& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithVectorMember& other) const;

  bool operator!=(const MutableExampleWithVectorMember& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithVectorMember& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithVectorMember& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithVectorMember& a, MutableExampleWithVectorMember& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithVectorMemberObj
  explicit MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithVectorMember& value);
#endif




#endif
