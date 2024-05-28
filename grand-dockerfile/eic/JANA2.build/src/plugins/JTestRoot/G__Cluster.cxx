// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Cluster
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
#include "Cluster.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_Cluster(void *p = nullptr);
   static void *newArray_Cluster(Long_t size, void *p);
   static void delete_Cluster(void *p);
   static void deleteArray_Cluster(void *p);
   static void destruct_Cluster(void *p);
   static void streamer_Cluster(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Cluster*)
   {
      ::Cluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Cluster >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("Cluster", ::Cluster::Class_Version(), "JTestRoot/Cluster.h", 11,
                  typeid(::Cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Cluster::Dictionary, isa_proxy, 16,
                  sizeof(::Cluster) );
      instance.SetNew(&new_Cluster);
      instance.SetNewArray(&newArray_Cluster);
      instance.SetDelete(&delete_Cluster);
      instance.SetDeleteArray(&deleteArray_Cluster);
      instance.SetDestructor(&destruct_Cluster);
      instance.SetStreamerFunc(&streamer_Cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Cluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::Cluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::Cluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr Cluster::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *Cluster::Class_Name()
{
   return "Cluster";
}

//______________________________________________________________________________
const char *Cluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int Cluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Cluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Cluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void Cluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class Cluster.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      {
         vector<const Hit*> &R__stl =  hits;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(const class Hit *));
         if (R__tcl1==0) {
            Error("hits streamer","Missing the TClass object for const class Hit *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            const Hit* R__t;
            R__t = (const Hit*)R__b.ReadObjectAny(R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> Etot;
      R__b.CheckByteCount(R__s, R__c, Cluster::IsA());
   } else {
      R__c = R__b.WriteVersion(Cluster::IsA(), kTRUE);
      TObject::Streamer(R__b);
      {
         vector<const Hit*> &R__stl =  hits;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<const Hit*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b << (*R__k);
            }
         }
      }
      R__b << Etot;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Cluster(void *p) {
      return  p ? new(p) ::Cluster : new ::Cluster;
   }
   static void *newArray_Cluster(Long_t nElements, void *p) {
      return p ? new(p) ::Cluster[nElements] : new ::Cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_Cluster(void *p) {
      delete (static_cast<::Cluster*>(p));
   }
   static void deleteArray_Cluster(void *p) {
      delete [] (static_cast<::Cluster*>(p));
   }
   static void destruct_Cluster(void *p) {
      typedef ::Cluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_Cluster(TBuffer &buf, void *obj) {
      ((::Cluster*)obj)->::Cluster::Streamer(buf);
   }
} // end of namespace ROOT for class ::Cluster

namespace ROOT {
   static TClass *vectorlEconstsPHitmUgR_Dictionary();
   static void vectorlEconstsPHitmUgR_TClassManip(TClass*);
   static void *new_vectorlEconstsPHitmUgR(void *p = nullptr);
   static void *newArray_vectorlEconstsPHitmUgR(Long_t size, void *p);
   static void delete_vectorlEconstsPHitmUgR(void *p);
   static void deleteArray_vectorlEconstsPHitmUgR(void *p);
   static void destruct_vectorlEconstsPHitmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<const Hit*>*)
   {
      vector<const Hit*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<const Hit*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<const Hit*>", -2, "vector", 423,
                  typeid(vector<const Hit*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEconstsPHitmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<const Hit*>) );
      instance.SetNew(&new_vectorlEconstsPHitmUgR);
      instance.SetNewArray(&newArray_vectorlEconstsPHitmUgR);
      instance.SetDelete(&delete_vectorlEconstsPHitmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEconstsPHitmUgR);
      instance.SetDestructor(&destruct_vectorlEconstsPHitmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<const Hit*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<const Hit*>","std::vector<Hit const*, std::allocator<Hit const*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<const Hit*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEconstsPHitmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<const Hit*>*>(nullptr))->GetClass();
      vectorlEconstsPHitmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEconstsPHitmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEconstsPHitmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const Hit*> : new vector<const Hit*>;
   }
   static void *newArray_vectorlEconstsPHitmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<const Hit*>[nElements] : new vector<const Hit*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEconstsPHitmUgR(void *p) {
      delete (static_cast<vector<const Hit*>*>(p));
   }
   static void deleteArray_vectorlEconstsPHitmUgR(void *p) {
      delete [] (static_cast<vector<const Hit*>*>(p));
   }
   static void destruct_vectorlEconstsPHitmUgR(void *p) {
      typedef vector<const Hit*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<const Hit*>

namespace {
  void TriggerDictionaryInitialization_libCluster_Impl() {
    static const char* headers[] = {
"Cluster.h",
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
#line 1 "libCluster dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$Cluster.h")))  Cluster;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libCluster dictionary payload"

#ifndef JANA2_HAVE_ROOT
  #define JANA2_HAVE_ROOT 1
#endif
#ifndef JANA2_HAVE_PODIO
  #define JANA2_HAVE_PODIO 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "Cluster.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Cluster", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libCluster",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libCluster_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libCluster_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libCluster() {
  TriggerDictionaryInitialization_libCluster_Impl();
}
