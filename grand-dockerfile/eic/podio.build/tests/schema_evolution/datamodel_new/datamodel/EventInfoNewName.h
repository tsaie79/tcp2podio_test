// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewName_H
#define DATAMODEL_EventInfoNewName_H

#include "datamodel/EventInfoNewNameObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableEventInfoNewName;
class EventInfoNewNameCollection;
class EventInfoNewNameCollectionData;

/** @class EventInfoNewName
 *  Event info
 *  @author: B. Hegner
 */
class EventInfoNewName {

  friend class MutableEventInfoNewName;
  friend class EventInfoNewNameCollection;
  friend class EventInfoNewNameCollectionData;
  friend class EventInfoNewNameCollectionIterator;

public:
  using mutable_type = MutableEventInfoNewName;
  using collection_type = EventInfoNewNameCollection;

  /// default constructor
  EventInfoNewName();

  /// Constructor initializing all members
  EventInfoNewName(int Number);

  /// copy constructor
  EventInfoNewName(const EventInfoNewName& other) = default;

  /// copy-assignment operator
  EventInfoNewName& operator=(EventInfoNewName other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventInfoNewName clone() const;

  /// destructor
  ~EventInfoNewName() = default;

  /// converting constructor from mutable object
  EventInfoNewName(const MutableEventInfoNewName& other);

  static EventInfoNewName makeEmpty();

public:

  /// Access the event number
  int Number() const;




int getNumber() const;

  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoNewNameObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}; }

  bool operator==(const EventInfoNewName& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableEventInfoNewName& other) const;

  bool operator!=(const EventInfoNewName& other) const { return !(*this == other); }
  bool operator!=(const MutableEventInfoNewName& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const EventInfoNewName& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(EventInfoNewName& a, EventInfoNewName& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing EventInfoNewNameObj
  explicit EventInfoNewName(podio::utils::MaybeSharedPtr<EventInfoNewNameObj> obj);
  EventInfoNewName(EventInfoNewNameObj* obj);

  podio::utils::MaybeSharedPtr<EventInfoNewNameObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const EventInfoNewName& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoNewName& value);
#endif




#endif
