// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "podio/CollectionBufferFactory.h"
#include "podio/SchemaEvolution.h"

#include "datamodel/ExampleForCyclicDependency1Collection.h"
#include "datamodel/DatamodelDefinition.h"


#include "datamodel/ExampleForCyclicDependency2Collection.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

// standard includes
#include <stdexcept>
#include <iomanip>



ExampleForCyclicDependency1Collection::ExampleForCyclicDependency1Collection() :
  m_isValid(false), m_isPrepared(false), m_isSubsetColl(false), m_collectionID(podio::ObjectID::untracked), m_storageMtx(std::make_unique<std::mutex>()), m_storage() {}

ExampleForCyclicDependency1Collection::ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1CollectionData&& data, bool isSubsetColl) :
  m_isValid(false), m_isPrepared(false), m_isSubsetColl(isSubsetColl), m_collectionID(podio::ObjectID::untracked), m_storageMtx(std::make_unique<std::mutex>()), m_storage(std::move(data)) {}

ExampleForCyclicDependency1Collection::~ExampleForCyclicDependency1Collection() {
  // Need to tell the storage how to clean-up
  m_storage.clear(m_isSubsetColl);
}

ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::operator[](std::size_t index) const {
  return ExampleForCyclicDependency1(m_storage.entries[index]);
}

ExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::at(std::size_t index) const {
  return ExampleForCyclicDependency1(m_storage.entries.at(index));
}

MutableExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::operator[](std::size_t index) {
  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(m_storage.entries[index]));
}

MutableExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::at(std::size_t index) {
  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(m_storage.entries.at(index)));
}

std::size_t ExampleForCyclicDependency1Collection::size() const {
  return m_storage.entries.size();
}

bool ExampleForCyclicDependency1Collection::empty() const {
  return m_storage.entries.empty();
}

void ExampleForCyclicDependency1Collection::setSubsetCollection(bool setSubset) {
  if (m_isSubsetColl != setSubset && !m_storage.entries.empty()) {
    throw std::logic_error("Cannot change the character of a collection that already contains elements");
  }

  if (setSubset) {
    m_storage.makeSubsetCollection();
  }
  m_isSubsetColl = setSubset;
}

MutableExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::create() {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }

  auto obj = m_storage.entries.emplace_back(new ExampleForCyclicDependency1Obj());

  obj->id = {int(m_storage.entries.size() - 1), m_collectionID};
  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(obj));
}

void ExampleForCyclicDependency1Collection::clear() {
  m_storage.clear(m_isSubsetColl);
  m_isPrepared = false;
}

void ExampleForCyclicDependency1Collection::prepareForWrite() const {
  // TODO: Replace this double locking pattern here with an atomic and only one
  // lock. Problem: std::atomic is not default movable.
  {
    std::lock_guard lock{*m_storageMtx};
    // If the collection has been prepared already there is nothing to do
    if (m_isPrepared) {
      return;
    }
  }

  std::lock_guard lock{*m_storageMtx};
  // by the time we acquire the lock another thread might have already
  // succeeded, so we need to check again now
  if (m_isPrepared) {
    return;
  }
  m_storage.prepareForWrite(m_isSubsetColl);
  m_isPrepared = true;
}

void ExampleForCyclicDependency1Collection::prepareAfterRead() {
  // No need to go through this again if we have already done it
  if (m_isPrepared) {
    return;
  }

  if (!m_isSubsetColl) {
    // Subset collections do not store any data that would require post-processing
    m_storage.prepareAfterRead(m_collectionID);
  }
  // Preparing a collection doesn't affect the underlying I/O buffers, so this
  // collection is still prepared
  m_isPrepared = true;
}

bool ExampleForCyclicDependency1Collection::setReferences(const podio::ICollectionProvider* collectionProvider) {
  return m_storage.setReferences(collectionProvider, m_isSubsetColl);
}

void ExampleForCyclicDependency1Collection::push_back(MutableExampleForCyclicDependency1 object) {
  // We have to do different things here depending on whether this is a
  // subset collection or not. A normal collection cannot collect objects
  // that are already part of another collection, while a subset collection
  // can only collect such objects
  if (!m_isSubsetColl) {
    auto obj = object.m_obj;
    if (obj->id.index == podio::ObjectID::untracked) {
      const auto size = m_storage.entries.size();
      obj->id = {(int)size, m_collectionID};
      m_storage.entries.push_back(obj.release());
    } else {
      throw std::invalid_argument("Object already in a collection. Cannot add it to a second collection");
    }
  } else {

    push_back(ExampleForCyclicDependency1(object));
  }
}

void ExampleForCyclicDependency1Collection::push_back(ExampleForCyclicDependency1 object) {
  if (!m_isSubsetColl) {
    throw std::invalid_argument("Can only add immutable objects to subset collections");
  }
  auto obj = object.m_obj;
  if (obj->id.index < 0) {
    // This path is only possible if we arrive here from an untracked Mutable object
    throw std::invalid_argument("Object needs to be tracked by another collection in order for it to be storable in a subset collection");
  }
  m_storage.entries.push_back(obj.release());
}

podio::CollectionWriteBuffers ExampleForCyclicDependency1Collection::getBuffers() {
  return m_storage.getCollectionBuffers(m_isSubsetColl);
}


size_t ExampleForCyclicDependency1Collection::getDatamodelRegistryIndex() const {
  return datamodel::meta::DatamodelRegistryIndex::value();
}

podio::SchemaVersionT ExampleForCyclicDependency1Collection::getSchemaVersion() const {
  return datamodel::meta::schemaVersion;
}

// anonymous namespace for registration with the CollectionBufferFactory. This
// ensures that we don't have to make up arbitrary namespace names here, since
// none of this is publicly visible
namespace {
 
podio::CollectionReadBuffers createBuffers(bool isSubset) {
  auto readBuffers = podio::CollectionReadBuffers{};
  readBuffers.type = "ExampleForCyclicDependency1Collection";
  readBuffers.schemaVersion = datamodel::meta::schemaVersion;
  readBuffers.data = isSubset ? nullptr : new ExampleForCyclicDependency1DataContainer;
  // The number of ObjectID vectors is either 1 or the sum of OneToMany and
  // OneToOne relations
  const auto nRefs = isSubset ? 1 : 0 + 1;
  readBuffers.references = new podio::CollRefCollection(nRefs);
  for (auto& ref : *readBuffers.references) {
    // Make sure to place usable buffer pointers here
    ref = std::make_unique<std::vector<podio::ObjectID>>();
  }

  readBuffers.vectorMembers = new podio::VectorMembersInfo();
  if (!isSubset) {
    readBuffers.vectorMembers->reserve(0);
  }

  readBuffers.createCollection = [](podio::CollectionReadBuffers buffers, bool isSubsetColl) {
    ExampleForCyclicDependency1CollectionData data(buffers, isSubsetColl);
    return std::make_unique<ExampleForCyclicDependency1Collection>(std::move(data), isSubsetColl);
  };

  readBuffers.recast = [](podio::CollectionReadBuffers& buffers) {
    // We only have any of these buffers if this is not a subset collection
    if (buffers.data) {
      buffers.data = podio::CollectionWriteBuffers::asVector<ExampleForCyclicDependency1Data>(buffers.data);
    }
  };

  readBuffers.deleteBuffers = [](podio::CollectionReadBuffers& buffers) {
    if (buffers.data) {
      // If we have data then we are not a subset collection and we have to
      // clean up all type erased buffers by casting them back to something that
      // we can delete
      delete static_cast<ExampleForCyclicDependency1DataContainer*>(buffers.data);

    }
    delete buffers.references;
    delete buffers.vectorMembers;
  };

  return readBuffers;
}




// The usual trick with an IIFE and a static variable inside a function and then
// making sure to call that function during shared library loading
bool registerCollection() {
  const static auto reg = []() {
    auto& factory = podio::CollectionBufferFactory::mutInstance();
    factory.registerCreationFunc("ExampleForCyclicDependency1Collection", datamodel::meta::schemaVersion, createBuffers);

    // Make the SchemaEvolution aware of the current version by
    // registering a no-op function for this and all preceding versions
    // will be overridden whenever an explicit action is required
    for (unsigned int schemaVersion=1; schemaVersion< datamodel::meta::schemaVersion+1; ++schemaVersion) {
      podio::SchemaEvolution::mutInstance().registerEvolutionFunc(
        "ExampleForCyclicDependency1Collection",
        schemaVersion,
        datamodel::meta::schemaVersion,
        podio::SchemaEvolution::noOpSchemaEvolution,
        podio::SchemaEvolution::Priority::AutoGenerated
      );
    }


    return true;
  }();
  return reg;
}

const auto registeredCollection = registerCollection();
} // namespace


#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1Collection& collection) {
  j = nlohmann::json::array();
  for (auto&& elem : collection) {
    j.emplace_back(elem);
  }
}
#endif


ExampleForCyclicDependency1 ExampleForCyclicDependency1CollectionIterator::operator*() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>((*m_collection)[m_index]);
  return m_object;
}

ExampleForCyclicDependency1* ExampleForCyclicDependency1CollectionIterator::operator->() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>((*m_collection)[m_index]);
  return &m_object;
}

ExampleForCyclicDependency1CollectionIterator& ExampleForCyclicDependency1CollectionIterator::operator++() {
  ++m_index;
  return *this;
}



MutableExampleForCyclicDependency1 ExampleForCyclicDependency1MutableCollectionIterator::operator*() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>((*m_collection)[m_index]);
  return m_object;
}

MutableExampleForCyclicDependency1* ExampleForCyclicDependency1MutableCollectionIterator::operator->() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>((*m_collection)[m_index]);
  return &m_object;
}

ExampleForCyclicDependency1MutableCollectionIterator& ExampleForCyclicDependency1MutableCollectionIterator::operator++() {
  ++m_index;
  return *this;
}



std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1Collection& v) {
  const auto old_flags = o.flags();
  o << "          id:" << '\n';

  for (const auto&& el : v) {
    o << std::scientific << std::showpos << std::setw(12) << el.id() << " "
      << std::endl;


    o << "      ref : ";
    o << el.ref().id() << std::endl;


  }

  o.flags(old_flags);
  return o;
}

void ExampleForCyclicDependency1Collection::print(std::ostream& os, bool flush) const {
  os << *this;
  if (flush) {
    os.flush();
  }
}



