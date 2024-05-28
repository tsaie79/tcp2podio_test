// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Hit
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
#include "Hit.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_Hit(void *p);
   static void deleteArray_Hit(void *p);
   static void destruct_Hit(void *p);
   static void streamer_Hit(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Hit*)
   {
      ::Hit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Hit >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Hit", ::Hit::Class_Version(), "JTestRoot/Hit.h", 9,
                  typeid(::Hit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Hit::Dictionary, isa_proxy, 16,
                  sizeof(::Hit) );
      instance.SetDelete(&delete_Hit);
      instance.SetDeleteArray(&deleteArray_Hit);
      instance.SetDestructor(&destruct_Hit);
      instance.SetStreamerFunc(&streamer_Hit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Hit*)
   {
      return GenerateInitInstanceLocal(static_cast<::Hit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Hit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Hit::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Hit::Class_Name()
{
   return "Hit";
}

//______________________________________________________________________________
const char *Hit::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hit*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Hit::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Hit*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Hit::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hit*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Hit::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Hit*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Hit::Streamer(TBuffer &R__b)
{
   // Stream an object of class Hit.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> iw;
      R__b >> iv;
      R__b >> E;
      R__b >> t;
      R__b >> my_char_t;
      R__b >> my_unsigned_char_t;
      R__b >> my_unsigned_long_t;
      R__b >> my_long_t;
      R__b >> my_uint32_t;
      R__b >> my_uint64_t;
      { TString R__str; R__str.Streamer(R__b); my_string_t = R__str.Data(); }
      R__b >> my_int32_t;
      R__b >> my_int64_t;
      R__b.CheckByteCount(R__s, R__c, Hit::IsA());
   } else {
      R__c = R__b.WriteVersion(Hit::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << iw;
      R__b << iv;
      R__b << E;
      R__b << t;
      R__b << my_char_t;
      R__b << my_unsigned_char_t;
      R__b << my_unsigned_long_t;
      R__b << my_long_t;
      R__b << my_uint32_t;
      R__b << my_uint64_t;
      { TString R__str = my_string_t.c_str(); R__str.Streamer(R__b);}
      R__b << my_int32_t;
      R__b << my_int64_t;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_Hit(void *p) {
      delete (static_cast<::Hit*>(p));
   }
   static void deleteArray_Hit(void *p) {
      delete [] (static_cast<::Hit*>(p));
   }
   static void destruct_Hit(void *p) {
      typedef ::Hit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_Hit(TBuffer &buf, void *obj) {
      ((::Hit*)obj)->::Hit::Streamer(buf);
   }
} // end of namespace ROOT for class ::Hit

namespace {
  void TriggerDictionaryInitialization_libHit_Impl() {
    static const char* headers[] = {
"Hit.h",
nullptr
    };
    static const char* includePaths[] = {
"/usr/local/include/root",
"/home/tsai/eic/podio/include",
"/home/tsai/eic/JANA2.src/src/libraries",
"/home/tsai/eic/JANA2.src/src/plugins/JTestRoot",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/JANA2.build/src/plugins/JTestRoot/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libHit dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Hit.h")))  Hit;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libHit dictionary payload"

#ifndef JANA2_HAVE_ROOT
  #define JANA2_HAVE_ROOT 1
#endif
#ifndef JANA2_HAVE_PODIO
  #define JANA2_HAVE_PODIO 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Hit.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Hit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libHit",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libHit_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libHit_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libHit() {
  TriggerDictionaryInitialization_libHit_Impl();
}
