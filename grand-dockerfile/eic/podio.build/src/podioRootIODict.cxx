// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME podioRootIODict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/tsai/eic/podio.src/include/podio/ROOTReader.h"
#include "/home/tsai/eic/podio.src/include/podio/ROOTLegacyReader.h"
#include "/home/tsai/eic/podio.src/include/podio/ROOTWriter.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *podiocLcLROOTReader_Dictionary();
   static void podiocLcLROOTReader_TClassManip(TClass*);
   static void *new_podiocLcLROOTReader(void *p = nullptr);
   static void *newArray_podiocLcLROOTReader(Long_t size, void *p);
   static void delete_podiocLcLROOTReader(void *p);
   static void deleteArray_podiocLcLROOTReader(void *p);
   static void destruct_podiocLcLROOTReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::ROOTReader*)
   {
      ::podio::ROOTReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::ROOTReader));
      static ::ROOT::TGenericClassInfo 
         instance("podio::ROOTReader", "", 49,
                  typeid(::podio::ROOTReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLROOTReader_Dictionary, isa_proxy, 4,
                  sizeof(::podio::ROOTReader) );
      instance.SetNew(&new_podiocLcLROOTReader);
      instance.SetNewArray(&newArray_podiocLcLROOTReader);
      instance.SetDelete(&delete_podiocLcLROOTReader);
      instance.SetDeleteArray(&deleteArray_podiocLcLROOTReader);
      instance.SetDestructor(&destruct_podiocLcLROOTReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::ROOTReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::ROOTReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::ROOTReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLROOTReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::ROOTReader*>(nullptr))->GetClass();
      podiocLcLROOTReader_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLROOTReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLROOTLegacyReader_Dictionary();
   static void podiocLcLROOTLegacyReader_TClassManip(TClass*);
   static void *new_podiocLcLROOTLegacyReader(void *p = nullptr);
   static void *newArray_podiocLcLROOTLegacyReader(Long_t size, void *p);
   static void delete_podiocLcLROOTLegacyReader(void *p);
   static void deleteArray_podiocLcLROOTLegacyReader(void *p);
   static void destruct_podiocLcLROOTLegacyReader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::ROOTLegacyReader*)
   {
      ::podio::ROOTLegacyReader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::ROOTLegacyReader));
      static ::ROOT::TGenericClassInfo 
         instance("podio::ROOTLegacyReader", "", 251,
                  typeid(::podio::ROOTLegacyReader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLROOTLegacyReader_Dictionary, isa_proxy, 4,
                  sizeof(::podio::ROOTLegacyReader) );
      instance.SetNew(&new_podiocLcLROOTLegacyReader);
      instance.SetNewArray(&newArray_podiocLcLROOTLegacyReader);
      instance.SetDelete(&delete_podiocLcLROOTLegacyReader);
      instance.SetDeleteArray(&deleteArray_podiocLcLROOTLegacyReader);
      instance.SetDestructor(&destruct_podiocLcLROOTLegacyReader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::ROOTLegacyReader*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::ROOTLegacyReader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::ROOTLegacyReader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLROOTLegacyReader_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::ROOTLegacyReader*>(nullptr))->GetClass();
      podiocLcLROOTLegacyReader_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLROOTLegacyReader_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLROOTWriter_Dictionary();
   static void podiocLcLROOTWriter_TClassManip(TClass*);
   static void delete_podiocLcLROOTWriter(void *p);
   static void deleteArray_podiocLcLROOTWriter(void *p);
   static void destruct_podiocLcLROOTWriter(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::ROOTWriter*)
   {
      ::podio::ROOTWriter *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::ROOTWriter));
      static ::ROOT::TGenericClassInfo 
         instance("podio::ROOTWriter", "", 386,
                  typeid(::podio::ROOTWriter), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLROOTWriter_Dictionary, isa_proxy, 4,
                  sizeof(::podio::ROOTWriter) );
      instance.SetDelete(&delete_podiocLcLROOTWriter);
      instance.SetDeleteArray(&deleteArray_podiocLcLROOTWriter);
      instance.SetDestructor(&destruct_podiocLcLROOTWriter);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::ROOTWriter*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::ROOTWriter*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::ROOTWriter*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLROOTWriter_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::ROOTWriter*>(nullptr))->GetClass();
      podiocLcLROOTWriter_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLROOTWriter_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLROOTReader(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::ROOTReader : new ::podio::ROOTReader;
   }
   static void *newArray_podiocLcLROOTReader(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::ROOTReader[nElements] : new ::podio::ROOTReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLROOTReader(void *p) {
      delete (static_cast<::podio::ROOTReader*>(p));
   }
   static void deleteArray_podiocLcLROOTReader(void *p) {
      delete [] (static_cast<::podio::ROOTReader*>(p));
   }
   static void destruct_podiocLcLROOTReader(void *p) {
      typedef ::podio::ROOTReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::ROOTReader

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLROOTLegacyReader(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::ROOTLegacyReader : new ::podio::ROOTLegacyReader;
   }
   static void *newArray_podiocLcLROOTLegacyReader(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::ROOTLegacyReader[nElements] : new ::podio::ROOTLegacyReader[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLROOTLegacyReader(void *p) {
      delete (static_cast<::podio::ROOTLegacyReader*>(p));
   }
   static void deleteArray_podiocLcLROOTLegacyReader(void *p) {
      delete [] (static_cast<::podio::ROOTLegacyReader*>(p));
   }
   static void destruct_podiocLcLROOTLegacyReader(void *p) {
      typedef ::podio::ROOTLegacyReader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::ROOTLegacyReader

namespace ROOT {
   // Wrapper around operator delete
   static void delete_podiocLcLROOTWriter(void *p) {
      delete (static_cast<::podio::ROOTWriter*>(p));
   }
   static void deleteArray_podiocLcLROOTWriter(void *p) {
      delete [] (static_cast<::podio::ROOTWriter*>(p));
   }
   static void destruct_podiocLcLROOTWriter(void *p) {
      typedef ::podio::ROOTWriter current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::ROOTWriter

namespace {
  void TriggerDictionaryInitialization_libpodioRootIODict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"/home/tsai/eic/podio.src/src",
"/home/tsai/eic/podio.src/include",
"/home/tsai/eic/podio.src/include",
"/home/tsai/eic/podio.src/include",
"/usr/local/include/root",
"/usr/local/include/root",
"/usr/local/include/root",
"/usr/local/include/root",
"/usr/local/include/root",
"/usr/local/include/root",
"/usr/local/include/root",
"/usr/local/include/root",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/podio.build/src/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libpodioRootIODict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace podio{class ROOTReader;}
namespace podio{class ROOTLegacyReader;}
namespace podio{class ROOTWriter;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libpodioRootIODict dictionary payload"

#ifndef PODIO_ENABLE_RNTUPLE
  #define PODIO_ENABLE_RNTUPLE 0
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef PODIO_ROOTREADER_H
#define PODIO_ROOTREADER_H

#include "podio/CollectionBranches.h"
#include "podio/ROOTFrameData.h"
#include "podio/podioVersion.h"
#include "podio/utilities/DatamodelRegistryIOHelpers.h"

#include "TChain.h"

#include <iostream>
#include <memory>
#include <string>
#include <string_view>
#include <tuple>
#include <utility>
#include <vector>

// forward declarations
class TClass;
class TFile;
class TTree;

namespace podio {

namespace detail {
  // Information about the collection class type, whether it is a subset, the
  // schema version on file and the index in the collection branches cache
  // vector
  using CollectionInfo = std::tuple<std::string, bool, SchemaVersionT, size_t>;

} // namespace detail

class CollectionBase;
class CollectionIDTable;
class GenericParameters;
struct CollectionReadBuffers;

/// This class has the function to read available data from disk in ROOTs TTree
/// format.
///
/// The ROOTReader provides the data as ROOTFrameData from which a podio::Frame
/// can be constructed. It can be used to read files written by the ROOTWriter.
class ROOTReader {

public:
  /// Create a ROOTReader
  ROOTReader() = default;
  /// Destructor
  ~ROOTReader() = default;

  /// The ROOTReader is not copy-able
  ROOTReader(const ROOTReader&) = delete;
  /// The ROOTReader is not copy-able
  ROOTReader& operator=(const ROOTReader&) = delete;

  /// Open a single file for reading.
  ///
  /// @param filename The name of the input file
  void openFile(const std::string& filename);

  /// Open multiple files for reading and then treat them as if they are one file
  ///
  /// @note All of the files are assumed to have the same structure. Specifically
  /// this means:
  /// - The same categories are available from all files
  /// - The collections that are contained in the individual categories are the
  ///   same across all files
  /// - This usually boils down to "the files have been written with the same
  ///   "settings", e.g. they are outputs of a batched process.
  ///
  /// @param filenames The filenames of all input files that should be read
  void openFiles(const std::vector<std::string>& filenames);
  
  /**
   * Open trees for reading from the specified TDirectory. 
   * 
   * This can be used with a TMemFile for in-memory operation via streaming.
   * The specified directory should contain all trees including metadata
   * and category trees.
   *
   *  @param dir The TDirectory to look for the podio trees in.
   */
   void openTDirectory(TDirectory *dir);

  /// Read the next data entry for a given category.
  ///
  /// @param name The category name for which to read the next entry
  ///
  /// @returns FrameData from which a podio::Frame can be constructed if the
  ///          category exists and if there are still entries left to read.
  ///          Otherwise a nullptr
  std::unique_ptr<podio::ROOTFrameData> readNextEntry(const std::string& name);

  /// Read the desired data entry for a given category.
  ///
  /// @param name  The category name for which to read the next entry
  /// @param entry The entry number to read
  ///
  /// @returns FrameData from which a podio::Frame can be constructed if the
  ///          category and the desired entry exist. Otherwise a nullptr
  std::unique_ptr<podio::ROOTFrameData> readEntry(const std::string& name, const unsigned entry);

  /// Get the number of entries for the given name
  ///
  /// @param name The name of the category
  ///
  /// @returns The number of entries that are available for the category
  unsigned getEntries(const std::string& name) const;

  /// Get the build version of podio that has been used to write the current
  /// file
  ///
  /// @returns The podio build version
  podio::version::Version currentFileVersion() const {
    return m_fileVersion;
  }

  /// Get the names of all the available Frame categories in the current file(s).
  ///
  /// @returns The names of the available categories from the file
  std::vector<std::string_view> getAvailableCategories() const;

  /// Get the datamodel definition for the given name
  ///
  /// @param name The name of the datamodel
  ///
  /// @returns The high level definition of the datamodel in JSON format
  const std::string_view getDatamodelDefinition(const std::string& name) const {
    return m_datamodelHolder.getDatamodelDefinition(name);
  }

  /// Get all names of the datamodels that are available from this reader
  ///
  /// @returns The names of the datamodels
  std::vector<std::string> getAvailableDatamodels() const {
    return m_datamodelHolder.getAvailableDatamodels();
  }

private:

  void readMetaData();

  /// Helper struct to group together all the necessary state to read / process
  /// a given category. A "category" in this case describes all frames with the
  /// same name which are constrained by the ROOT file structure that we use to
  /// have the same contents. It encapsulates all state that is necessary for
  /// reading from a TTree / TChain (i.e. collection infos, branches, ...)
  struct CategoryInfo {
    /// constructor from chain for more convenient map insertion
    CategoryInfo() : chain("unused"){}

    // The copy constructor and assignment operators are explicitly deleted 
    // here since TChain has these declared private and therefore inaccessible.
    CategoryInfo(const podio::ROOTReader::CategoryInfo&) = delete;
    CategoryInfo& operator=(const podio::ROOTReader::CategoryInfo&) = delete;

    TChain chain;                                                                ///< The TChain with the data (if reading from files)
    TTree *tree = {nullptr};                                                     ///< The TTree with the data (use this, not chain!)
    unsigned entry{0};                                                           ///< The next entry to read
    std::vector<std::pair<std::string, detail::CollectionInfo>> storedClasses{}; ///< The stored collections in this
                                                                                 ///< category
    std::vector<root_utils::CollectionBranches> branches{};                      ///< The branches for this category
    std::shared_ptr<CollectionIDTable> table{nullptr}; ///< The collection ID table for this category
  };

  /// Initialize the passed CategoryInfo by setting up the necessary branches,
  /// collection infos and all necessary meta data to be able to read entries
  /// with this name
  void initCategory(CategoryInfo& catInfo, const std::string& name);

  /// Get the category information for the given name. In case there is no TTree
  /// with contents for the given name this will return a CategoryInfo with an
  /// uninitialized chain (nullptr) member
  CategoryInfo& getCategoryInfo(const std::string& name);

  /// Read the parameters for the entry specified in the passed CategoryInfo
  GenericParameters readEntryParameters(CategoryInfo& catInfo, bool reloadBranches, unsigned int localEntry);

  /// Read the data entry specified in the passed CategoryInfo, and increase the
  /// counter afterwards. In case the requested entry is larger than the
  /// available number of entries, return a nullptr.
  std::unique_ptr<podio::ROOTFrameData> readEntry(ROOTReader::CategoryInfo& catInfo);

  /// Get / read the buffers at index iColl in the passed category information
  podio::CollectionReadBuffers getCollectionBuffers(CategoryInfo& catInfo, size_t iColl, bool reloadBranches,
                                                    unsigned int localEntry);

  TTree* m_metaTree{nullptr};                                   ///< The metadata tree (use this to access)
  TChain m_metaChain{"unused"};                                           ///< A TChain (only used if reading from files. m_metaTree will point to this if needed)
  std::unordered_map<std::string, CategoryInfo> m_categories{}; ///< All categories
  std::vector<std::string> m_availCategories{};                 ///< All available categories from this file

  podio::version::Version m_fileVersion{0, 0, 0};
  DatamodelDefinitionHolder m_datamodelHolder{};
};

} // namespace podio

#endif // PODIO_ROOTREADER_H
#ifndef PODIO_ROOTLEGACYREADER_H
#define PODIO_ROOTLEGACYREADER_H

#include "podio/CollectionBranches.h"
#include "podio/ROOTFrameData.h"
#include "podio/podioVersion.h"

#include "TChain.h"

#include <iostream>
#include <memory>
#include <string>
#include <tuple>
#include <utility>
#include <vector>

// forward declarations
class TClass;
// class TChain;
class TFile;
class TTree;

namespace podio {

namespace detail {
  // Information about the collection class type, whether it is a subset, the
  // schema version on file and the index in the collection branches cache
  // vector
  using CollectionInfo = std::tuple<std::string, bool, SchemaVersionT, size_t>;
} // namespace detail

class CollectionBase;
class CollectionIDTable;
class GenericParameters;
struct CollectionReadBuffers;

/// A root reader for reading legacy podio root files that have been written
/// using the legacy, non Frame based I/O model. This reader grants Frame based
/// access to those files, by mimicking the Frame I/O functionality and the
/// interfaces of those readers.
///
/// @note Since there was only one category ("events") for those legacy podio
/// files this reader will really only work if you try to read that category, and
/// will simply return no data if you try to read anything else.
class ROOTLegacyReader {

public:
  /// Create a SIOLegacyReader
  ROOTLegacyReader() = default;
  /// Destructor
  ~ROOTLegacyReader() = default;

  /// The SIOLegacyReader is not copy-able
  ROOTLegacyReader(const ROOTLegacyReader&) = delete;
  /// The SIOLegacyReader is not copy-able
  ROOTLegacyReader& operator=(const ROOTLegacyReader&) = delete;

  /// Open a single file for reading.
  ///
  /// @param filename The name of the input file
  void openFile(const std::string& filename);

  /// Open multiple files for reading and then treat them as if they are one file
  ///
  /// @note All of the files are assumed to have the same structure. Specifically
  /// this means:
  /// - The collections that are contained in the individual event are always the
  ///   same
  ///
  /// This usually boils down to "the files have been written with the same
  /// "settings", e.g. they are outputs of a batched process.
  ///
  /// @param filenames The filenames of all input files that should be read
  void openFiles(const std::vector<std::string>& filenames);

  /// Read the next data entry from which a Frame can be constructed.
  ///
  /// @note the category name has to be "events" in this case, as only that
  /// category is available for legacy files.
  ///
  /// @returns FrameData from which a podio::Frame can be constructed if there
  ///          are still entries left to read. Otherwise a nullptr
  std::unique_ptr<podio::ROOTFrameData> readNextEntry(const std::string&);

  /// Read the desired data entry from which a Frame can be constructed.
  ///
  /// @note the category name has to be "events" in this case, as only that
  /// category is available for legacy files.
  ///
  /// @returns FrameData from which a podio::Frame can be constructed if the
  ///          desired entry exists. Otherwise a nullptr
  std::unique_ptr<podio::ROOTFrameData> readEntry(const std::string&, const unsigned entry);

  /// Get the number of entries for the given name
  ///
  /// @param name The name of the category
  ///
  /// @returns The number of entries that are available for the category
  unsigned getEntries(const std::string& name) const;

  /// Get the build version of podio that has been used to write the current
  /// file
  ///
  /// @returns The podio build version
  podio::version::Version currentFileVersion() const {
    return m_fileVersion;
  }

  /// Get the names of all the available Frame categories in the current file(s).
  ///
  /// @returns The names of the available categories from the file
  std::vector<std::string_view> getAvailableCategories() const;

private:
  std::pair<TTree*, unsigned> getLocalTreeAndEntry(const std::string& treename);

  void createCollectionBranches(const std::vector<std::tuple<uint32_t, std::string, bool, unsigned int>>& collInfo);

  podio::GenericParameters readEventMetaData();

  podio::CollectionReadBuffers getCollectionBuffers(const std::pair<std::string, detail::CollectionInfo>& collInfo);

  std::unique_ptr<podio::ROOTFrameData> readEntry();

  // cache the necessary information to more quickly construct and read each
  // collection after it has been read the very first time
  std::vector<std::pair<std::string, detail::CollectionInfo>> m_storedClasses{};

  std::shared_ptr<CollectionIDTable> m_table{nullptr};
  std::unique_ptr<TChain> m_chain{nullptr};
  unsigned m_eventNumber{0};

  // Similar to writing we cache the branches that belong to each collection
  // in order to not having to look them up every event. However, for the
  // reader we cannot guarantee a fixed order of collections as they are read
  // on demand. Hence, we give each collection an index the first time it is
  // read and we start caching the branches.
  std::vector<root_utils::CollectionBranches> m_collectionBranches{};

  podio::version::Version m_fileVersion{0, 0, 0};

  /// The **only** category name that is available from legacy files
  constexpr static auto m_categoryName = "events";
};

} // namespace podio

#endif // PODIO_ROOTLEGACYREADER_H
#ifndef PODIO_ROOTWRITER_H
#define PODIO_ROOTWRITER_H

#include "podio/CollectionBranches.h"
#include "podio/CollectionIDTable.h"
#include "podio/utilities/DatamodelRegistryIOHelpers.h"

#include "TFile.h"

#include <memory>
#include <string>
#include <tuple>
#include <unordered_map>
#include <vector>

// forward declarations
class TTree;

namespace podio {
class Frame;
class CollectionBase;
class GenericParameters;

/// The ROOTWriter writes podio files into ROOT files using TTrees.
///
/// Each category gets its own TTree. Additionally, there is a podio_metadata
/// TTree that contains metadata that is necessary for interpreting the files
/// for reading.
///
/// Files written with the ROOTWriter can be read with the ROOTReader.
class ROOTWriter {
public:
  /// Create a ROOTWriter to write to a file.
  ///
  /// @note Existing files will be overwritten without warning.
  ///
  /// @param filename The path to the file that will be created.
  ROOTWriter(const std::string& filename);

  /// ROOTWriter destructor
  ///
  /// This also takes care of writing all the necessary metadata to read files back again.
  ~ROOTWriter();

  /// The ROOTWriter is not copy-able
  ROOTWriter(const ROOTWriter&) = delete;
  /// The ROOTWriter is not copy-able
  ROOTWriter& operator=(const ROOTWriter&) = delete;

  /// Store the given frame with the given category.
  ///
  /// This stores all available collections from the Frame.
  ///
  /// @note The contents of the first Frame that is written in this way
  /// determines the contents that will be written for all subsequent Frames.
  ///
  /// @param frame    The Frame to store
  /// @param category The category name under which this Frame should be stored
  void writeFrame(const podio::Frame& frame, const std::string& category);

  /// Store the given Frame with the given category.
  ///
  /// This stores only the desired collections and not the complete frame.
  ///
  /// @note The contents of the first Frame that is written in this way
  /// determines the contents that will be written for all subsequent Frames.
  ///
  /// @param frame        The Frame to store
  /// @param category     The category name under which this Frame should be
  ///                     stored
  /// @param collsToWrite The collection names that should be written
  void writeFrame(const podio::Frame& frame, const std::string& category, const std::vector<std::string>& collsToWrite);

  /// Write the current file, including all the necessary metadata to read it
  /// again.
  ///
  /// @note The destructor will also call this, so letting a ROOTWriter go out
  /// of scope is also a viable way to write a readable file
  void finish();

  /// Check whether the collsToWrite are consistent with the state of the passed
  /// category.
  ///
  /// @note This will only be a meaningful check if the first Frame of the passed
  /// category has already been written. Also, this check is rather expensive as
  /// it has to effectively do two set differences.
  ///
  ///
  /// @param collsToWrite The collection names that should be checked for
  ///                     consistency
  /// @param category     The category name for which consistency should be
  ///                     checked
  ///
  /// @returns two vectors of collection names. The first one contains all the
  /// names that were missing from the collsToWrite but were present in the
  /// category. The second one contains the names that are present in the
  /// collsToWrite only. If both vectors are empty the category and the passed
  /// collsToWrite are consistent.
  std::tuple<std::vector<std::string>, std::vector<std::string>>
  checkConsistency(const std::vector<std::string>& collsToWrite, const std::string& category) const;

private:
  using StoreCollection = std::pair<const std::string&, podio::CollectionBase*>;

  // collectionID, collectionType, subsetCollection
  // @note same as in rootUtils.h private header!
  using CollectionInfoT = std::tuple<uint32_t, std::string, bool, unsigned int>;

  /// Helper struct to group together all necessary state to write / process a
  /// given category. Created during the first writing of a category
  struct CategoryInfo {
    TTree* tree{nullptr};                                   ///< The TTree to which this category is written
    std::vector<root_utils::CollectionBranches> branches{}; ///< The branches for this category
    std::vector<CollectionInfoT> collInfo{};                ///< Collection info for this category
    podio::CollectionIDTable idTable{};                     ///< The collection id table for this category
    std::vector<std::string> collsToWrite{};                ///< The collections to write for this category
  };

  /// Initialize the branches for this category
  void initBranches(CategoryInfo& catInfo, const std::vector<StoreCollection>& collections,
                    /*const*/ podio::GenericParameters& parameters);

  /// Get the (potentially uninitialized category information for this category)
  CategoryInfo& getCategoryInfo(const std::string& category);

  static void resetBranches(std::vector<root_utils::CollectionBranches>& branches,
                            const std::vector<ROOTWriter::StoreCollection>& collections,
                            /*const*/ podio::GenericParameters* parameters);

  std::unique_ptr<TFile> m_file{nullptr};                       ///< The storage file
  std::unordered_map<std::string, CategoryInfo> m_categories{}; ///< All categories

  DatamodelDefinitionCollector m_datamodelCollector{};

  bool m_finished{false}; ///< Whether writing has been actually done
};

} // namespace podio

#endif // PODIO_ROOTWRITER_H

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"podio::ROOTLegacyReader", payloadCode, "@",
"podio::ROOTReader", payloadCode, "@",
"podio::ROOTWriter", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libpodioRootIODict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libpodioRootIODict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libpodioRootIODict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libpodioRootIODict() {
  TriggerDictionaryInitialization_libpodioRootIODict_Impl();
}
