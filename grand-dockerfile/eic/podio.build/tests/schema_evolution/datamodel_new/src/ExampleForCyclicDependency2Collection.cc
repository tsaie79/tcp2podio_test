// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "podio/CollectionBufferFactory.h"
#include "podio/SchemaEvolution.h"

#include "datamodel/ExampleForCyclicDependency2Collection.h"
#include "datamodel/DatamodelDefinition.h"


#include "datamodel/ExampleForCyclicDependency1Collection.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

// standard includes
#include <stdexcept>
#include <iomanip>



ExampleForCyclicDependency2Collection::ExampleForCyclicDependency2Collection() :
  m_isValid(false), m_isPrepared(false), m_isSubsetColl(false), m_collectionID(podio::ObjectID::untracked), m_storageMtx(std::make_unique<std::mutex>()), m_storage() {}

ExampleForCyclicDependency2Collection::ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2CollectionData&& data, bool isSubsetColl) :
  m_isValid(false), m_isPrepared(false), m_isSubsetColl(isSubsetColl), m_collectionID(podio::ObjectID::untracked), m_storageMtx(std::make_unique<std::mutex>()), m_storage(std::move(data)) {}

ExampleForCyclicDependency2Collection::~ExampleForCyclicDependency2Collection() {
  // Need to tell the storage how to clean-up
  m_storage.clear(m_isSubsetColl);
}

ExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::operator[](std::size_t index) const {
  return ExampleForCyclicDependency2(m_storage.entries[index]);
}

ExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::at(std::size_t index) const {
  return ExampleForCyclicDependency2(m_storage.entries.at(index));
}

MutableExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::operator[](std::size_t index) {
  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(m_storage.entries[index]));
}

MutableExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::at(std::size_t index) {
  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(m_storage.entries.at(index)));
}

std::size_t ExampleForCyclicDependency2Collection::size() const {
  return m_storage.entries.size();
}

bool ExampleForCyclicDependency2Collection::empty() const {
  return m_storage.entries.empty();
}

void ExampleForCyclicDependency2Collection::setSubsetCollection(bool setSubset) {
  if (m_isSubsetColl != setSubset && !m_storage.entries.empty()) {
    throw std::logic_error("Cannot change the character of a collection that already contains elements");
  }

  if (setSubset) {
    m_storage.makeSubsetCollection();
  }
  m_isSubsetColl = setSubset;
}

MutableExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::create() {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }

  auto obj = m_storage.entries.emplace_back(new ExampleForCyclicDependency2Obj());

  obj->id = {int(m_storage.entries.size() - 1), m_collectionID};
  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(obj));
}

void ExampleForCyclicDependency2Collection::clear() {
  m_storage.clear(m_isSubsetColl);
  m_isPrepared = false;
}

void ExampleForCyclicDependency2Collection::prepareForWrite() const {
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

void ExampleForCyclicDependency2Collection::prepareAfterRead() {
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

bool ExampleForCyclicDependency2Collection::setReferences(const podio::ICollectionProvider* collectionProvider) {
  return m_storage.setReferences(collectionProvider, m_isSubsetColl);
}

void ExampleForCyclicDependency2Collection::push_back(MutableExampleForCyclicDependency2 object) {
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

    push_back(ExampleForCyclicDependency2(object));
  }
}

void ExampleForCyclicDependency2Collection::push_back(ExampleForCyclicDependency2 object) {
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

podio::CollectionWriteBuffers ExampleForCyclicDependency2Collection::getBuffers() {
  return m_storage.getCollectionBuffers(m_isSubsetColl);
}


size_t ExampleForCyclicDependency2Collection::getDatamodelRegistryIndex() const {
  return datamodel::meta::DatamodelRegistryIndex::value();
}

podio::SchemaVersionT ExampleForCyclicDependency2Collection::getSchemaVersion() const {
  return datamodel::meta::schemaVersion;
}

// anonymous namespace for registration with the CollectionBufferFactory. This
// ensures that we don't have to make up arbitrary namespace names here, since
// none of this is publicly visible
namespace {
 
podio::CollectionReadBuffers createBuffers(bool isSubset) {
  auto readBuffers = podio::CollectionReadBuffers{};
  readBuffers.type = "ExampleForCyclicDependency2Collection";
  readBuffers.schemaVersion = datamodel::meta::schemaVersion;
  readBuffers.data = isSubset ? nullptr : new ExampleForCyclicDependency2DataContainer;
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
    ExampleForCyclicDependency2CollectionData data(buffers, isSubsetColl);
    return std::make_unique<ExampleForCyclicDependency2Collection>(std::move(data), isSubsetColl);
  };

  readBuffers.recast = [](podio::CollectionReadBuffers& buffers) {
    // We only have any of these buffers if this is not a subset collection
    if (buffers.data) {
      buffers.data = podio::CollectionWriteBuffers::asVector<ExampleForCyclicDependency2Data>(buffers.data);
    }
  };

  readBuffers.deleteBuffers = [](podio::CollectionReadBuffers& buffers) {
    if (buffers.data) {
      // If we have data then we are not a subset collection and we have to
      // clean up all type erased buffers by casting them back to something that
      // we can delete
      delete static_cast<ExampleForCyclicDependency2DataContainer*>(buffers.data);

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
    factory.registerCreationFunc("ExampleForCyclicDependency2Collection", datamodel::meta::schemaVersion, createBuffers);

    // Make the SchemaEvolution aware of the current version by
    // registering a no-op function for this and all preceding versions
    // will be overridden whenever an explicit action is required
    for (unsigned int schemaVersion=1; schemaVersion< datamodel::meta::schemaVersion+1; ++schemaVersion) {
      podio::SchemaEvolution::mutInstance().registerEvolutionFunc(
        "ExampleForCyclicDependency2Collection",
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
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2Collection& collection) {
  j = nlohmann::json::array();
  for (auto&& elem : collection) {
    j.emplace_back(elem);
  }
}
#endif


ExampleForCyclicDependency2 ExampleForCyclicDependency2CollectionIterator::operator*() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>((*m_collection)[m_index]);
  return m_object;
}

ExampleForCyclicDependency2* ExampleForCyclicDependency2CollectionIterator::operator->() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>((*m_collection)[m_index]);
  return &m_object;
}

ExampleForCyclicDependency2CollectionIterator& ExampleForCyclicDependency2CollectionIterator::operator++() {
  ++m_index;
  return *this;
}



MutableExampleForCyclicDependency2 ExampleForCyclicDependency2MutableCollectionIterator::operator*() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>((*m_collection)[m_index]);
  return m_object;
}

MutableExampleForCyclicDependency2* ExampleForCyclicDependency2MutableCollectionIterator::operator->() {
  m_object.m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>((*m_collection)[m_index]);
  return &m_object;
}

ExampleForCyclicDependency2MutableCollectionIterator& ExampleForCyclicDependency2MutableCollectionIterator::operator++() {
  ++m_index;
  return *this;
}



std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2Collection& v) {
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

void ExampleForCyclicDependency2Collection::print(std::ostream& os, bool flush) const {
  os << *this;
  if (flush) {
    os.flush();
  }
}



