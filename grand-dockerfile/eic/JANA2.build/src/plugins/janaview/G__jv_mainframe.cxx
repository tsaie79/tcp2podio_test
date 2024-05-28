// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__jv_mainframe
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
#include "jv_mainframe.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_jv_mainframe(void *p);
   static void deleteArray_jv_mainframe(void *p);
   static void destruct_jv_mainframe(void *p);
   static void streamer_jv_mainframe(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::jv_mainframe*)
   {
      ::jv_mainframe *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::jv_mainframe >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("jv_mainframe", ::jv_mainframe::Class_Version(), "janaview/jv_mainframe.h", 64,
                  typeid(::jv_mainframe), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::jv_mainframe::Dictionary, isa_proxy, 16,
                  sizeof(::jv_mainframe) );
      instance.SetDelete(&delete_jv_mainframe);
      instance.SetDeleteArray(&deleteArray_jv_mainframe);
      instance.SetDestructor(&destruct_jv_mainframe);
      instance.SetStreamerFunc(&streamer_jv_mainframe);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::jv_mainframe*)
   {
      return GenerateInitInstanceLocal(static_cast<::jv_mainframe*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::jv_mainframe*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr jv_mainframe::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *jv_mainframe::Class_Name()
{
   return "jv_mainframe";
}

//______________________________________________________________________________
const char *jv_mainframe::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::jv_mainframe*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int jv_mainframe::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::jv_mainframe*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *jv_mainframe::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::jv_mainframe*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *jv_mainframe::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::jv_mainframe*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void jv_mainframe::Streamer(TBuffer &R__b)
{
   // Stream an object of class jv_mainframe.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TGMainFrame::Streamer(R__b);
      R__b >> lSource;
      R__b >> lRun;
      R__b >> lEvent;
      R__b >> lObjectType;
      R__b >> lObjectValue;
      R__b >> lbObjectTypes;
      R__b >> lbObjects;
      R__b >> lbAssociatedObjects;
      R__b >> lbAssociatedToObjects;
      R__b >> lbObjectValues;
      R__b >> fTab;
      R__b >> gcanvas;
      R__b >> fCanvas;
      R__b >> canvas;
      {
         vector<string> &R__stl =  objtypes;
         R__stl.clear();
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            string R__t;
            {TString R__str;
             R__str.Streamer(R__b);
             R__t = R__str.Data();}
            R__stl.push_back(R__t);
         }
      }
      {
         vector<void*> &R__stl =  vobjs;
         R__stl.clear();
         TClass *R__tcl1 = TBuffer::GetClass(typeid(void *));
         if (R__tcl1==0) {
            Error("vobjs streamer","Missing the TClass object for void *!");
            return;
         }
         int R__i, R__n;
         R__b >> R__n;
         R__stl.reserve(R__n);
         for (R__i = 0; R__i < R__n; R__i++) {
            void* R__t;
            R__b.StreamObject(&R__t,R__tcl1);
            R__stl.push_back(R__t);
         }
      }
      R__b >> timer;
      R__b >> sleep_time;
      R__b >> delayed_object_type_id;
      { TString R__str; R__str.Streamer(R__b); last_selected_nametag = R__str.Data(); }
      R__b.CheckByteCount(R__s, R__c, jv_mainframe::IsA());
   } else {
      R__c = R__b.WriteVersion(jv_mainframe::IsA(), kTRUE);
      TGMainFrame::Streamer(R__b);
      R__b << lSource;
      R__b << lRun;
      R__b << lEvent;
      R__b << lObjectType;
      R__b << lObjectValue;
      R__b << lbObjectTypes;
      R__b << lbObjects;
      R__b << lbAssociatedObjects;
      R__b << lbAssociatedToObjects;
      R__b << lbObjectValues;
      R__b << fTab;
      R__b << gcanvas;
      R__b << fCanvas;
      R__b << canvas;
      {
         vector<string> &R__stl =  objtypes;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
            vector<string>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            {TString R__str((*R__k).c_str());
             R__str.Streamer(R__b);};
            }
         }
      }
      {
         vector<void*> &R__stl =  vobjs;
         int R__n=int(R__stl.size());
         R__b << R__n;
         if(R__n) {
         TClass *R__tcl1 = TBuffer::GetClass(typeid(void *));
         if (R__tcl1==0) {
            Error("vobjs streamer","Missing the TClass object for void *!");
            return;
         }
            vector<void*>::iterator R__k;
            for (R__k = R__stl.begin(); R__k != R__stl.end(); ++R__k) {
            R__b.StreamObject((void*)&(*R__k),R__tcl1);
            }
         }
      }
      R__b << timer;
      R__b << sleep_time;
      R__b << delayed_object_type_id;
      { TString R__str = last_selected_nametag.c_str(); R__str.Streamer(R__b);}
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_jv_mainframe(void *p) {
      delete (static_cast<::jv_mainframe*>(p));
   }
   static void deleteArray_jv_mainframe(void *p) {
      delete [] (static_cast<::jv_mainframe*>(p));
   }
   static void destruct_jv_mainframe(void *p) {
      typedef ::jv_mainframe current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_jv_mainframe(TBuffer &buf, void *obj) {
      ((::jv_mainframe*)obj)->::jv_mainframe::Streamer(buf);
   }
} // end of namespace ROOT for class ::jv_mainframe

namespace ROOT {
   static TClass *vectorlEvoidmUgR_Dictionary();
   static void vectorlEvoidmUgR_TClassManip(TClass*);
   static void *new_vectorlEvoidmUgR(void *p = nullptr);
   static void *newArray_vectorlEvoidmUgR(Long_t size, void *p);
   static void delete_vectorlEvoidmUgR(void *p);
   static void deleteArray_vectorlEvoidmUgR(void *p);
   static void destruct_vectorlEvoidmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<void*>*)
   {
      vector<void*> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<void*>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<void*>", -2, "vector", 423,
                  typeid(vector<void*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEvoidmUgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<void*>) );
      instance.SetNew(&new_vectorlEvoidmUgR);
      instance.SetNewArray(&newArray_vectorlEvoidmUgR);
      instance.SetDelete(&delete_vectorlEvoidmUgR);
      instance.SetDeleteArray(&deleteArray_vectorlEvoidmUgR);
      instance.SetDestructor(&destruct_vectorlEvoidmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<void*> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<void*>","std::vector<void*, std::allocator<void*> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<void*>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEvoidmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<void*>*>(nullptr))->GetClass();
      vectorlEvoidmUgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEvoidmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEvoidmUgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<void*> : new vector<void*>;
   }
   static void *newArray_vectorlEvoidmUgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<void*>[nElements] : new vector<void*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEvoidmUgR(void *p) {
      delete (static_cast<vector<void*>*>(p));
   }
   static void deleteArray_vectorlEvoidmUgR(void *p) {
      delete [] (static_cast<vector<void*>*>(p));
   }
   static void destruct_vectorlEvoidmUgR(void *p) {
      typedef vector<void*> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<void*>

namespace ROOT {
   static TClass *vectorlEstringgR_Dictionary();
   static void vectorlEstringgR_TClassManip(TClass*);
   static void *new_vectorlEstringgR(void *p = nullptr);
   static void *newArray_vectorlEstringgR(Long_t size, void *p);
   static void delete_vectorlEstringgR(void *p);
   static void deleteArray_vectorlEstringgR(void *p);
   static void destruct_vectorlEstringgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<string>*)
   {
      vector<string> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<string>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<string>", -2, "vector", 423,
                  typeid(vector<string>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEstringgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<string>) );
      instance.SetNew(&new_vectorlEstringgR);
      instance.SetNewArray(&newArray_vectorlEstringgR);
      instance.SetDelete(&delete_vectorlEstringgR);
      instance.SetDeleteArray(&deleteArray_vectorlEstringgR);
      instance.SetDestructor(&destruct_vectorlEstringgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<string> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<string>","std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEstringgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<string>*>(nullptr))->GetClass();
      vectorlEstringgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEstringgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEstringgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string> : new vector<string>;
   }
   static void *newArray_vectorlEstringgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<string>[nElements] : new vector<string>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEstringgR(void *p) {
      delete (static_cast<vector<string>*>(p));
   }
   static void deleteArray_vectorlEstringgR(void *p) {
      delete [] (static_cast<vector<string>*>(p));
   }
   static void destruct_vectorlEstringgR(void *p) {
      typedef vector<string> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<string>

namespace {
  void TriggerDictionaryInitialization_libjv_mainframe_Impl() {
    static const char* headers[] = {
"jv_mainframe.h",
nullptr
    };
    static const char* includePaths[] = {
"/usr/local/include/root",
"/home/tsai/eic/podio/include",
"/home/tsai/eic/JANA2.src/src/libraries",
"/home/tsai/eic/JANA2.src/src/plugins/janaview",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/JANA2.build/src/plugins/janaview/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libjv_mainframe dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$jv_mainframe.h")))  jv_mainframe;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libjv_mainframe dictionary payload"

#ifndef JANA2_HAVE_ROOT
  #define JANA2_HAVE_ROOT 1
#endif
#ifndef JANA2_HAVE_PODIO
  #define JANA2_HAVE_PODIO 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "jv_mainframe.h"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"jv_mainframe", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libjv_mainframe",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libjv_mainframe_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libjv_mainframe_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libjv_mainframe() {
  TriggerDictionaryInitialization_libjv_mainframe_Impl();
}
