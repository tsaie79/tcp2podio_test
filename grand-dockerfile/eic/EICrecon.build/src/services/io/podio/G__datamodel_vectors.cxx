// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__datamodel_vectors
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
#include "/home/tsai/eic/EICrecon.build/include/services/io/podio/datamodel_includes.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace {
  void TriggerDictionaryInitialization_libpodio_plugin_Impl() {
    static const char* headers[] = {
"/home/tsai/eic/EICrecon.build/include/services/io/podio/datamodel_includes.h",
nullptr
    };
    static const char* includePaths[] = {
"/home/tsai/eic/EICrecon.src/src/services/io/podio",
"/home/tsai/eic/EICrecon.src/src",
"/home/tsai/eic/JANA2/include",
"/usr/local/include/root",
"/home/tsai/eic/EICrecon.build/include",
"/home/tsai/eic/EICrecon.src/src",
"/home/tsai/eic/JANA2/include",
"/usr/local/include/root",
"/home/tsai/eic/EICrecon.build/include",
"/home/tsai/eic/podio/include",
"/usr/local/include",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/EICrecon.build/src/services/io/podio/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libpodio_plugin dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libpodio_plugin dictionary payload"

#ifndef HAVE_PODIO
  #define HAVE_PODIO 1
#endif
#ifndef HAVE_PODIO
  #define HAVE_PODIO 1
#endif
#ifndef JANA2_HAVE_PODIO
  #define JANA2_HAVE_PODIO 1
#endif
#ifndef JANA2_HAVE_ROOT
  #define JANA2_HAVE_ROOT 1
#endif
#ifndef PODIO_ENABLE_RNTUPLE
  #define PODIO_ENABLE_RNTUPLE 0
#endif
#ifndef SPDLOG_SHARED_LIB
  #define SPDLOG_SHARED_LIB 1
#endif
#ifndef SPDLOG_COMPILED_LIB
  #define SPDLOG_COMPILED_LIB 1
#endif
#ifndef SPDLOG_FMT_EXTERNAL
  #define SPDLOG_FMT_EXTERNAL 1
#endif
#ifndef FMT_SHARED
  #define FMT_SHARED 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/tsai/eic/EICrecon.build/include/services/io/podio/datamodel_includes.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libpodio_plugin",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libpodio_plugin_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libpodio_plugin_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libpodio_plugin() {
  TriggerDictionaryInitialization_libpodio_plugin_Impl();
}
