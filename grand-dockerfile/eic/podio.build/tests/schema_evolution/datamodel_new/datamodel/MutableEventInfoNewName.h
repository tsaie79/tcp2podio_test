// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableEventInfoNewName_H
#define DATAMODEL_MutableEventInfoNewName_H

#include "datamodel/EventInfoNewNameObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/EventInfoNewName.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableEventInfoNewName
 *  Event info
 *  @author: B. Hegner
 */
class MutableEventInfoNewName {

  friend class EventInfoNewNameCollection;
  friend class EventInfoNewNameMutableCollectionIterator;
  friend class EventInfoNewName;

public:
  using object_type = EventInfoNewName;
  using collection_type = EventInfoNewNameCollection;

  /// default constructor
  MutableEventInfoNewName();

  /// Constructor initializing all members
  MutableEventInfoNewName(int Number);

  /// copy constructor
  MutableEventInfoNewName(const MutableEventInfoNewName& other) = default;

  /// copy-assignment operator
  MutableEventInfoNewName& operator=(MutableEventInfoNewName other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventInfoNewName clone() const;

  /// destructor
  ~MutableEventInfoNewName() = default;


public:

  /// Access the event number
  int Number() const;



  /// Set the event number
  void Number(int value);
  /// Get mutable reference to event number
  int& Number();




int getNumber() const;

void setNumber(int n) { Number( n ) ; } 

  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoNewNameObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}; }

  bool operator==(const MutableEventInfoNewName& other) const { return m_obj == other.m_obj; }
  bool operator==(const EventInfoNewName& other) const;

  bool operator!=(const MutableEventInfoNewName& other) const { return !(*this == other); }
  bool operator!=(const EventInfoNewName& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableEventInfoNewName& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableEventInfoNewName& a, MutableEventInfoNewName& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing EventInfoNewNameObj
  explicit MutableEventInfoNewName(podio::utils::MaybeSharedPtr<EventInfoNewNameObj> obj);

  podio::utils::MaybeSharedPtr<EventInfoNewNameObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableEventInfoNewName& value);
#endif




#endif
