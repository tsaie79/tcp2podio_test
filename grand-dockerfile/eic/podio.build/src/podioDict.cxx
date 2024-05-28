// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME podioDict
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
#include "/home/tsai/eic/podio.src/include/podio/CollectionBase.h"
#include "/home/tsai/eic/podio.src/include/podio/CollectionIDTable.h"
#include "/home/tsai/eic/podio.src/include/podio/ICollectionProvider.h"
#include "/home/tsai/eic/podio.src/include/podio/ObjectID.h"
#include "/home/tsai/eic/podio.src/include/podio/UserDataCollection.h"
#include "/home/tsai/eic/podio.src/include/podio/podioVersion.h"
#include "/home/tsai/eic/podio.src/include/podio/DatamodelRegistry.h"
#include "/home/tsai/eic/podio.src/include/podio/utilities/DatamodelRegistryIOHelpers.h"
#include "/home/tsai/eic/podio.src/include/podio/GenericParameters.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *podiocLcLObjectID_Dictionary();
   static void podiocLcLObjectID_TClassManip(TClass*);
   static void *new_podiocLcLObjectID(void *p = nullptr);
   static void *newArray_podiocLcLObjectID(Long_t size, void *p);
   static void delete_podiocLcLObjectID(void *p);
   static void deleteArray_podiocLcLObjectID(void *p);
   static void destruct_podiocLcLObjectID(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::ObjectID*)
   {
      ::podio::ObjectID *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::ObjectID));
      static ::ROOT::TGenericClassInfo 
         instance("podio::ObjectID", "podio/ObjectID.h", 10,
                  typeid(::podio::ObjectID), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLObjectID_Dictionary, isa_proxy, 4,
                  sizeof(::podio::ObjectID) );
      instance.SetNew(&new_podiocLcLObjectID);
      instance.SetNewArray(&newArray_podiocLcLObjectID);
      instance.SetDelete(&delete_podiocLcLObjectID);
      instance.SetDeleteArray(&deleteArray_podiocLcLObjectID);
      instance.SetDestructor(&destruct_podiocLcLObjectID);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::ObjectID*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::ObjectID*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::ObjectID*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLObjectID_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::ObjectID*>(nullptr))->GetClass();
      podiocLcLObjectID_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLObjectID_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLCollectionBase_Dictionary();
   static void podiocLcLCollectionBase_TClassManip(TClass*);
   static void delete_podiocLcLCollectionBase(void *p);
   static void deleteArray_podiocLcLCollectionBase(void *p);
   static void destruct_podiocLcLCollectionBase(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::CollectionBase*)
   {
      ::podio::CollectionBase *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::CollectionBase));
      static ::ROOT::TGenericClassInfo 
         instance("podio::CollectionBase", "", 21,
                  typeid(::podio::CollectionBase), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLCollectionBase_Dictionary, isa_proxy, 4,
                  sizeof(::podio::CollectionBase) );
      instance.SetDelete(&delete_podiocLcLCollectionBase);
      instance.SetDeleteArray(&deleteArray_podiocLcLCollectionBase);
      instance.SetDestructor(&destruct_podiocLcLCollectionBase);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::CollectionBase*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::CollectionBase*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::CollectionBase*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLCollectionBase_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::CollectionBase*>(nullptr))->GetClass();
      podiocLcLCollectionBase_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLCollectionBase_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLCollectionIDTable_Dictionary();
   static void podiocLcLCollectionIDTable_TClassManip(TClass*);
   static void *new_podiocLcLCollectionIDTable(void *p = nullptr);
   static void *newArray_podiocLcLCollectionIDTable(Long_t size, void *p);
   static void delete_podiocLcLCollectionIDTable(void *p);
   static void deleteArray_podiocLcLCollectionIDTable(void *p);
   static void destruct_podiocLcLCollectionIDTable(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::CollectionIDTable*)
   {
      ::podio::CollectionIDTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::CollectionIDTable));
      static ::ROOT::TGenericClassInfo 
         instance("podio::CollectionIDTable", "", 107,
                  typeid(::podio::CollectionIDTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLCollectionIDTable_Dictionary, isa_proxy, 4,
                  sizeof(::podio::CollectionIDTable) );
      instance.SetNew(&new_podiocLcLCollectionIDTable);
      instance.SetNewArray(&newArray_podiocLcLCollectionIDTable);
      instance.SetDelete(&delete_podiocLcLCollectionIDTable);
      instance.SetDeleteArray(&deleteArray_podiocLcLCollectionIDTable);
      instance.SetDestructor(&destruct_podiocLcLCollectionIDTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::CollectionIDTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::CollectionIDTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::CollectionIDTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLCollectionIDTable_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::CollectionIDTable*>(nullptr))->GetClass();
      podiocLcLCollectionIDTable_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLCollectionIDTable_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<unsigned long,void>*)
   {
      ::podio::UserDataCollection<unsigned long,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<unsigned long,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<unsigned long,void>", "", 296,
                  typeid(::podio::UserDataCollection<unsigned long,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<unsigned long,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned long,void>","podio::UserDataCollection<uint64_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned long,void>","podio::UserDataCollection<unsigned long, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<unsigned long,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<unsigned long,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned long,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned long,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<unsigned int,void>*)
   {
      ::podio::UserDataCollection<unsigned int,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<unsigned int,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<unsigned int,void>", "", 296,
                  typeid(::podio::UserDataCollection<unsigned int,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<unsigned int,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned int,void>","podio::UserDataCollection<uint32_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned int,void>","podio::UserDataCollection<unsigned int, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<unsigned int,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<unsigned int,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned int,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned int,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<unsigned short,void>*)
   {
      ::podio::UserDataCollection<unsigned short,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<unsigned short,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<unsigned short,void>", "", 296,
                  typeid(::podio::UserDataCollection<unsigned short,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<unsigned short,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned short,void>","podio::UserDataCollection<uint16_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned short,void>","podio::UserDataCollection<unsigned short, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<unsigned short,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<unsigned short,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned short,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned short,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<unsigned char,void>*)
   {
      ::podio::UserDataCollection<unsigned char,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<unsigned char,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<unsigned char,void>", "", 296,
                  typeid(::podio::UserDataCollection<unsigned char,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<unsigned char,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned char,void>","podio::UserDataCollection<uint8_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<unsigned char,void>","podio::UserDataCollection<unsigned char, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<unsigned char,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<unsigned char,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned char,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<unsigned char,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlElongcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlElongcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlElongcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlElongcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlElongcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlElongcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlElongcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<long,void>*)
   {
      ::podio::UserDataCollection<long,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<long,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<long,void>", "", 296,
                  typeid(::podio::UserDataCollection<long,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlElongcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<long,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlElongcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlElongcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlElongcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlElongcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlElongcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<long,void>","podio::UserDataCollection<int64_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<long,void>","podio::UserDataCollection<long, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<long,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<long,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<long,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlElongcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<long,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlElongcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlElongcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEintcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEintcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEintcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEintcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEintcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEintcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEintcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<int,void>*)
   {
      ::podio::UserDataCollection<int,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<int,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<int,void>", "", 296,
                  typeid(::podio::UserDataCollection<int,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEintcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<int,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEintcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEintcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEintcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEintcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEintcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<int,void>","podio::UserDataCollection<int32_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<int,void>","podio::UserDataCollection<int, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<int,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<int,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<int,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEintcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<int,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEintcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEintcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEshortcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEshortcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEshortcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<short,void>*)
   {
      ::podio::UserDataCollection<short,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<short,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<short,void>", "", 296,
                  typeid(::podio::UserDataCollection<short,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEshortcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<short,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEshortcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEshortcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEshortcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEshortcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEshortcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<short,void>","podio::UserDataCollection<int16_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<short,void>","podio::UserDataCollection<short, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<short,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<short,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<short,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEshortcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<short,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEshortcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEshortcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<signed char,void>*)
   {
      ::podio::UserDataCollection<signed char,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<signed char,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<signed char,void>", "", 296,
                  typeid(::podio::UserDataCollection<signed char,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<signed char,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<signed char,void>","podio::UserDataCollection<int8_t>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<signed char,void>","podio::UserDataCollection<signed char, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<signed char,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<signed char,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<signed char,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<signed char,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEdoublecOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEdoublecOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEdoublecOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<double,void>*)
   {
      ::podio::UserDataCollection<double,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<double,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<double,void>", "", 296,
                  typeid(::podio::UserDataCollection<double,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEdoublecOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<double,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEdoublecOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEdoublecOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEdoublecOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEdoublecOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEdoublecOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<double,void>","podio::UserDataCollection<double>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<double,void>","podio::UserDataCollection<double, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<double,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<double,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<double,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEdoublecOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<double,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEdoublecOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEdoublecOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLUserDataCollectionlEfloatcOvoidgR_Dictionary();
   static void podiocLcLUserDataCollectionlEfloatcOvoidgR_TClassManip(TClass*);
   static void *new_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p = nullptr);
   static void *newArray_podiocLcLUserDataCollectionlEfloatcOvoidgR(Long_t size, void *p);
   static void delete_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p);
   static void deleteArray_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p);
   static void destruct_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::UserDataCollection<float,void>*)
   {
      ::podio::UserDataCollection<float,void> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::UserDataCollection<float,void>));
      static ::ROOT::TGenericClassInfo 
         instance("podio::UserDataCollection<float,void>", "", 296,
                  typeid(::podio::UserDataCollection<float,void>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLUserDataCollectionlEfloatcOvoidgR_Dictionary, isa_proxy, 4,
                  sizeof(::podio::UserDataCollection<float,void>) );
      instance.SetNew(&new_podiocLcLUserDataCollectionlEfloatcOvoidgR);
      instance.SetNewArray(&newArray_podiocLcLUserDataCollectionlEfloatcOvoidgR);
      instance.SetDelete(&delete_podiocLcLUserDataCollectionlEfloatcOvoidgR);
      instance.SetDeleteArray(&deleteArray_podiocLcLUserDataCollectionlEfloatcOvoidgR);
      instance.SetDestructor(&destruct_podiocLcLUserDataCollectionlEfloatcOvoidgR);

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<float,void>","podio::UserDataCollection<float>"));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("podio::UserDataCollection<float,void>","podio::UserDataCollection<float, void>"));
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::UserDataCollection<float,void>*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::UserDataCollection<float,void>*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<float,void>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLUserDataCollectionlEfloatcOvoidgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::UserDataCollection<float,void>*>(nullptr))->GetClass();
      podiocLcLUserDataCollectionlEfloatcOvoidgR_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLUserDataCollectionlEfloatcOvoidgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLversioncLcLVersion_Dictionary();
   static void podiocLcLversioncLcLVersion_TClassManip(TClass*);
   static void *new_podiocLcLversioncLcLVersion(void *p = nullptr);
   static void *newArray_podiocLcLversioncLcLVersion(Long_t size, void *p);
   static void delete_podiocLcLversioncLcLVersion(void *p);
   static void deleteArray_podiocLcLversioncLcLVersion(void *p);
   static void destruct_podiocLcLversioncLcLVersion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::version::Version*)
   {
      ::podio::version::Version *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::version::Version));
      static ::ROOT::TGenericClassInfo 
         instance("podio::version::Version", "", 515,
                  typeid(::podio::version::Version), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLversioncLcLVersion_Dictionary, isa_proxy, 4,
                  sizeof(::podio::version::Version) );
      instance.SetNew(&new_podiocLcLversioncLcLVersion);
      instance.SetNewArray(&newArray_podiocLcLversioncLcLVersion);
      instance.SetDelete(&delete_podiocLcLversioncLcLVersion);
      instance.SetDeleteArray(&deleteArray_podiocLcLversioncLcLVersion);
      instance.SetDestructor(&destruct_podiocLcLversioncLcLVersion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::version::Version*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::version::Version*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::version::Version*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLversioncLcLVersion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::version::Version*>(nullptr))->GetClass();
      podiocLcLversioncLcLVersion_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLversioncLcLVersion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *podiocLcLGenericParameters_Dictionary();
   static void podiocLcLGenericParameters_TClassManip(TClass*);
   static void *new_podiocLcLGenericParameters(void *p = nullptr);
   static void *newArray_podiocLcLGenericParameters(Long_t size, void *p);
   static void delete_podiocLcLGenericParameters(void *p);
   static void deleteArray_podiocLcLGenericParameters(void *p);
   static void destruct_podiocLcLGenericParameters(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::podio::GenericParameters*)
   {
      ::podio::GenericParameters *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::podio::GenericParameters));
      static ::ROOT::TGenericClassInfo 
         instance("podio::GenericParameters", "", 837,
                  typeid(::podio::GenericParameters), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &podiocLcLGenericParameters_Dictionary, isa_proxy, 4,
                  sizeof(::podio::GenericParameters) );
      instance.SetNew(&new_podiocLcLGenericParameters);
      instance.SetNewArray(&newArray_podiocLcLGenericParameters);
      instance.SetDelete(&delete_podiocLcLGenericParameters);
      instance.SetDeleteArray(&deleteArray_podiocLcLGenericParameters);
      instance.SetDestructor(&destruct_podiocLcLGenericParameters);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::podio::GenericParameters*)
   {
      return GenerateInitInstanceLocal(static_cast<::podio::GenericParameters*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::podio::GenericParameters*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *podiocLcLGenericParameters_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::podio::GenericParameters*>(nullptr))->GetClass();
      podiocLcLGenericParameters_TClassManip(theClass);
   return theClass;
   }

   static void podiocLcLGenericParameters_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLObjectID(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::ObjectID : new ::podio::ObjectID;
   }
   static void *newArray_podiocLcLObjectID(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::ObjectID[nElements] : new ::podio::ObjectID[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLObjectID(void *p) {
      delete (static_cast<::podio::ObjectID*>(p));
   }
   static void deleteArray_podiocLcLObjectID(void *p) {
      delete [] (static_cast<::podio::ObjectID*>(p));
   }
   static void destruct_podiocLcLObjectID(void *p) {
      typedef ::podio::ObjectID current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::ObjectID

namespace ROOT {
   // Wrapper around operator delete
   static void delete_podiocLcLCollectionBase(void *p) {
      delete (static_cast<::podio::CollectionBase*>(p));
   }
   static void deleteArray_podiocLcLCollectionBase(void *p) {
      delete [] (static_cast<::podio::CollectionBase*>(p));
   }
   static void destruct_podiocLcLCollectionBase(void *p) {
      typedef ::podio::CollectionBase current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::CollectionBase

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLCollectionIDTable(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::CollectionIDTable : new ::podio::CollectionIDTable;
   }
   static void *newArray_podiocLcLCollectionIDTable(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::CollectionIDTable[nElements] : new ::podio::CollectionIDTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLCollectionIDTable(void *p) {
      delete (static_cast<::podio::CollectionIDTable*>(p));
   }
   static void deleteArray_podiocLcLCollectionIDTable(void *p) {
      delete [] (static_cast<::podio::CollectionIDTable*>(p));
   }
   static void destruct_podiocLcLCollectionIDTable(void *p) {
      typedef ::podio::CollectionIDTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::CollectionIDTable

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned long,void> : new ::podio::UserDataCollection<unsigned long,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned long,void>[nElements] : new ::podio::UserDataCollection<unsigned long,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<unsigned long,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<unsigned long,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPlongcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<unsigned long,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<unsigned long,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned int,void> : new ::podio::UserDataCollection<unsigned int,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned int,void>[nElements] : new ::podio::UserDataCollection<unsigned int,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<unsigned int,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<unsigned int,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPintcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<unsigned int,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<unsigned int,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned short,void> : new ::podio::UserDataCollection<unsigned short,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned short,void>[nElements] : new ::podio::UserDataCollection<unsigned short,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<unsigned short,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<unsigned short,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPshortcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<unsigned short,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<unsigned short,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned char,void> : new ::podio::UserDataCollection<unsigned char,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<unsigned char,void>[nElements] : new ::podio::UserDataCollection<unsigned char,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<unsigned char,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<unsigned char,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEunsignedsPcharcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<unsigned char,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<unsigned char,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlElongcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<long,void> : new ::podio::UserDataCollection<long,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlElongcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<long,void>[nElements] : new ::podio::UserDataCollection<long,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlElongcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<long,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlElongcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<long,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlElongcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<long,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<long,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEintcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<int,void> : new ::podio::UserDataCollection<int,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEintcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<int,void>[nElements] : new ::podio::UserDataCollection<int,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEintcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<int,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEintcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<int,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEintcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<int,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<int,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<short,void> : new ::podio::UserDataCollection<short,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEshortcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<short,void>[nElements] : new ::podio::UserDataCollection<short,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<short,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<short,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEshortcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<short,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<short,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<signed char,void> : new ::podio::UserDataCollection<signed char,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<signed char,void>[nElements] : new ::podio::UserDataCollection<signed char,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<signed char,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<signed char,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEsignedsPcharcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<signed char,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<signed char,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<double,void> : new ::podio::UserDataCollection<double,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEdoublecOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<double,void>[nElements] : new ::podio::UserDataCollection<double,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<double,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<double,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEdoublecOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<double,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<double,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<float,void> : new ::podio::UserDataCollection<float,void>;
   }
   static void *newArray_podiocLcLUserDataCollectionlEfloatcOvoidgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::UserDataCollection<float,void>[nElements] : new ::podio::UserDataCollection<float,void>[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p) {
      delete (static_cast<::podio::UserDataCollection<float,void>*>(p));
   }
   static void deleteArray_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p) {
      delete [] (static_cast<::podio::UserDataCollection<float,void>*>(p));
   }
   static void destruct_podiocLcLUserDataCollectionlEfloatcOvoidgR(void *p) {
      typedef ::podio::UserDataCollection<float,void> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::UserDataCollection<float,void>

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLversioncLcLVersion(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::version::Version : new ::podio::version::Version;
   }
   static void *newArray_podiocLcLversioncLcLVersion(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::version::Version[nElements] : new ::podio::version::Version[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLversioncLcLVersion(void *p) {
      delete (static_cast<::podio::version::Version*>(p));
   }
   static void deleteArray_podiocLcLversioncLcLVersion(void *p) {
      delete [] (static_cast<::podio::version::Version*>(p));
   }
   static void destruct_podiocLcLversioncLcLVersion(void *p) {
      typedef ::podio::version::Version current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::version::Version

namespace ROOT {
   // Wrappers around operator new
   static void *new_podiocLcLGenericParameters(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::GenericParameters : new ::podio::GenericParameters;
   }
   static void *newArray_podiocLcLGenericParameters(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::podio::GenericParameters[nElements] : new ::podio::GenericParameters[nElements];
   }
   // Wrapper around operator delete
   static void delete_podiocLcLGenericParameters(void *p) {
      delete (static_cast<::podio::GenericParameters*>(p));
   }
   static void deleteArray_podiocLcLGenericParameters(void *p) {
      delete [] (static_cast<::podio::GenericParameters*>(p));
   }
   static void destruct_podiocLcLGenericParameters(void *p) {
      typedef ::podio::GenericParameters current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::podio::GenericParameters

namespace ROOT {
   static TClass *vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR_Dictionary();
   static void vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p);
   static void destruct_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<unsigned int,string,bool> >*)
   {
      vector<tuple<unsigned int,string,bool> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<unsigned int,string,bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<unsigned int,string,bool> >", -2, "vector", 423,
                  typeid(vector<tuple<unsigned int,string,bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tuple<unsigned int,string,bool> >) );
      instance.SetNew(&new_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<unsigned int,string,bool> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<unsigned int,string,bool> >","std::vector<std::tuple<unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool>, std::allocator<std::tuple<unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<unsigned int,string,bool> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<unsigned int,string,bool> >*>(nullptr))->GetClass();
      vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<unsigned int,string,bool> > : new vector<tuple<unsigned int,string,bool> >;
   }
   static void *newArray_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<unsigned int,string,bool> >[nElements] : new vector<tuple<unsigned int,string,bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p) {
      delete (static_cast<vector<tuple<unsigned int,string,bool> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<unsigned int,string,bool> >*>(p));
   }
   static void destruct_vectorlEtuplelEunsignedsPintcOstringcOboolgRsPgR(void *p) {
      typedef vector<tuple<unsigned int,string,bool> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<unsigned int,string,bool> >

namespace ROOT {
   static TClass *vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR_Dictionary();
   static void vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<unsigned int,string,bool,unsigned int> >*)
   {
      vector<tuple<unsigned int,string,bool,unsigned int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<unsigned int,string,bool,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<unsigned int,string,bool,unsigned int> >", -2, "vector", 423,
                  typeid(vector<tuple<unsigned int,string,bool,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tuple<unsigned int,string,bool,unsigned int> >) );
      instance.SetNew(&new_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<unsigned int,string,bool,unsigned int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<unsigned int,string,bool,unsigned int> >","std::vector<std::tuple<unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, unsigned int>, std::allocator<std::tuple<unsigned int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, unsigned int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<unsigned int,string,bool,unsigned int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<unsigned int,string,bool,unsigned int> >*>(nullptr))->GetClass();
      vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<unsigned int,string,bool,unsigned int> > : new vector<tuple<unsigned int,string,bool,unsigned int> >;
   }
   static void *newArray_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<unsigned int,string,bool,unsigned int> >[nElements] : new vector<tuple<unsigned int,string,bool,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      delete (static_cast<vector<tuple<unsigned int,string,bool,unsigned int> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<unsigned int,string,bool,unsigned int> >*>(p));
   }
   static void destruct_vectorlEtuplelEunsignedsPintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      typedef vector<tuple<unsigned int,string,bool,unsigned int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<unsigned int,string,bool,unsigned int> >

namespace ROOT {
   static TClass *vectorlEtuplelEstringcOstringgRsPgR_Dictionary();
   static void vectorlEtuplelEstringcOstringgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEstringcOstringgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEstringcOstringgRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEstringcOstringgRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEstringcOstringgRsPgR(void *p);
   static void destruct_vectorlEtuplelEstringcOstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<string,string> >*)
   {
      vector<tuple<string,string> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<string,string> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<string,string> >", -2, "vector", 423,
                  typeid(vector<tuple<string,string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEstringcOstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tuple<string,string> >) );
      instance.SetNew(&new_vectorlEtuplelEstringcOstringgRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEstringcOstringgRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEstringcOstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEstringcOstringgRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEstringcOstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<string,string> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<string,string> >","std::vector<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::tuple<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<string,string> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEstringcOstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<string,string> >*>(nullptr))->GetClass();
      vectorlEtuplelEstringcOstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEstringcOstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEstringcOstringgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<string,string> > : new vector<tuple<string,string> >;
   }
   static void *newArray_vectorlEtuplelEstringcOstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<string,string> >[nElements] : new vector<tuple<string,string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEstringcOstringgRsPgR(void *p) {
      delete (static_cast<vector<tuple<string,string> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEstringcOstringgRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<string,string> >*>(p));
   }
   static void destruct_vectorlEtuplelEstringcOstringgRsPgR(void *p) {
      typedef vector<tuple<string,string> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<string,string> >

namespace ROOT {
   static TClass *vectorlEtuplelEintcOstringcOboolgRsPgR_Dictionary();
   static void vectorlEtuplelEintcOstringcOboolgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEintcOstringcOboolgRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p);
   static void destruct_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<int,string,bool> >*)
   {
      vector<tuple<int,string,bool> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<int,string,bool> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<int,string,bool> >", -2, "vector", 423,
                  typeid(vector<tuple<int,string,bool> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEintcOstringcOboolgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tuple<int,string,bool> >) );
      instance.SetNew(&new_vectorlEtuplelEintcOstringcOboolgRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEintcOstringcOboolgRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEintcOstringcOboolgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEintcOstringcOboolgRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEintcOstringcOboolgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<int,string,bool> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<int,string,bool> >","std::vector<std::tuple<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool>, std::allocator<std::tuple<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<int,string,bool> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEintcOstringcOboolgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<int,string,bool> >*>(nullptr))->GetClass();
      vectorlEtuplelEintcOstringcOboolgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEintcOstringcOboolgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<int,string,bool> > : new vector<tuple<int,string,bool> >;
   }
   static void *newArray_vectorlEtuplelEintcOstringcOboolgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<int,string,bool> >[nElements] : new vector<tuple<int,string,bool> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p) {
      delete (static_cast<vector<tuple<int,string,bool> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<int,string,bool> >*>(p));
   }
   static void destruct_vectorlEtuplelEintcOstringcOboolgRsPgR(void *p) {
      typedef vector<tuple<int,string,bool> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<int,string,bool> >

namespace ROOT {
   static TClass *vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR_Dictionary();
   static void vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p);
   static void destruct_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<int,string,bool,unsigned int> >*)
   {
      vector<tuple<int,string,bool,unsigned int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<int,string,bool,unsigned int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<int,string,bool,unsigned int> >", -2, "vector", 423,
                  typeid(vector<tuple<int,string,bool,unsigned int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<tuple<int,string,bool,unsigned int> >) );
      instance.SetNew(&new_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<int,string,bool,unsigned int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<int,string,bool,unsigned int> >","std::vector<std::tuple<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, unsigned int>, std::allocator<std::tuple<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, bool, unsigned int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<int,string,bool,unsigned int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<int,string,bool,unsigned int> >*>(nullptr))->GetClass();
      vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<int,string,bool,unsigned int> > : new vector<tuple<int,string,bool,unsigned int> >;
   }
   static void *newArray_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<int,string,bool,unsigned int> >[nElements] : new vector<tuple<int,string,bool,unsigned int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      delete (static_cast<vector<tuple<int,string,bool,unsigned int> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<int,string,bool,unsigned int> >*>(p));
   }
   static void destruct_vectorlEtuplelEintcOstringcOboolcOunsignedsPintgRsPgR(void *p) {
      typedef vector<tuple<int,string,bool,unsigned int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<int,string,bool,unsigned int> >

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
                  &vectorlEstringgR_Dictionary, isa_proxy, 4,
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

namespace ROOT {
   static TClass *vectorlEpodiocLcLObjectIDgR_Dictionary();
   static void vectorlEpodiocLcLObjectIDgR_TClassManip(TClass*);
   static void *new_vectorlEpodiocLcLObjectIDgR(void *p = nullptr);
   static void *newArray_vectorlEpodiocLcLObjectIDgR(Long_t size, void *p);
   static void delete_vectorlEpodiocLcLObjectIDgR(void *p);
   static void deleteArray_vectorlEpodiocLcLObjectIDgR(void *p);
   static void destruct_vectorlEpodiocLcLObjectIDgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<podio::ObjectID>*)
   {
      vector<podio::ObjectID> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<podio::ObjectID>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<podio::ObjectID>", -2, "vector", 423,
                  typeid(vector<podio::ObjectID>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEpodiocLcLObjectIDgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<podio::ObjectID>) );
      instance.SetNew(&new_vectorlEpodiocLcLObjectIDgR);
      instance.SetNewArray(&newArray_vectorlEpodiocLcLObjectIDgR);
      instance.SetDelete(&delete_vectorlEpodiocLcLObjectIDgR);
      instance.SetDeleteArray(&deleteArray_vectorlEpodiocLcLObjectIDgR);
      instance.SetDestructor(&destruct_vectorlEpodiocLcLObjectIDgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<podio::ObjectID> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<podio::ObjectID>","std::vector<podio::ObjectID, std::allocator<podio::ObjectID> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<podio::ObjectID>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEpodiocLcLObjectIDgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<podio::ObjectID>*>(nullptr))->GetClass();
      vectorlEpodiocLcLObjectIDgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEpodiocLcLObjectIDgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEpodiocLcLObjectIDgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<podio::ObjectID> : new vector<podio::ObjectID>;
   }
   static void *newArray_vectorlEpodiocLcLObjectIDgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<podio::ObjectID>[nElements] : new vector<podio::ObjectID>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEpodiocLcLObjectIDgR(void *p) {
      delete (static_cast<vector<podio::ObjectID>*>(p));
   }
   static void deleteArray_vectorlEpodiocLcLObjectIDgR(void *p) {
      delete [] (static_cast<vector<podio::ObjectID>*>(p));
   }
   static void destruct_vectorlEpodiocLcLObjectIDgR(void *p) {
      typedef vector<podio::ObjectID> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<podio::ObjectID>

namespace ROOT {
   static TClass *vectorlEintgR_Dictionary();
   static void vectorlEintgR_TClassManip(TClass*);
   static void *new_vectorlEintgR(void *p = nullptr);
   static void *newArray_vectorlEintgR(Long_t size, void *p);
   static void delete_vectorlEintgR(void *p);
   static void deleteArray_vectorlEintgR(void *p);
   static void destruct_vectorlEintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<int>*)
   {
      vector<int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<int>", -2, "vector", 423,
                  typeid(vector<int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEintgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<int>) );
      instance.SetNew(&new_vectorlEintgR);
      instance.SetNewArray(&newArray_vectorlEintgR);
      instance.SetDelete(&delete_vectorlEintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEintgR);
      instance.SetDestructor(&destruct_vectorlEintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<int>","std::vector<int, std::allocator<int> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<int>*>(nullptr))->GetClass();
      vectorlEintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int> : new vector<int>;
   }
   static void *newArray_vectorlEintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<int>[nElements] : new vector<int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEintgR(void *p) {
      delete (static_cast<vector<int>*>(p));
   }
   static void deleteArray_vectorlEintgR(void *p) {
      delete [] (static_cast<vector<int>*>(p));
   }
   static void destruct_vectorlEintgR(void *p) {
      typedef vector<int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<int>

namespace ROOT {
   static TClass *vectorlEfloatgR_Dictionary();
   static void vectorlEfloatgR_TClassManip(TClass*);
   static void *new_vectorlEfloatgR(void *p = nullptr);
   static void *newArray_vectorlEfloatgR(Long_t size, void *p);
   static void delete_vectorlEfloatgR(void *p);
   static void deleteArray_vectorlEfloatgR(void *p);
   static void destruct_vectorlEfloatgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<float>*)
   {
      vector<float> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<float>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<float>", -2, "vector", 423,
                  typeid(vector<float>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEfloatgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<float>) );
      instance.SetNew(&new_vectorlEfloatgR);
      instance.SetNewArray(&newArray_vectorlEfloatgR);
      instance.SetDelete(&delete_vectorlEfloatgR);
      instance.SetDeleteArray(&deleteArray_vectorlEfloatgR);
      instance.SetDestructor(&destruct_vectorlEfloatgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<float> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<float>","std::vector<float, std::allocator<float> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEfloatgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<float>*>(nullptr))->GetClass();
      vectorlEfloatgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEfloatgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEfloatgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float> : new vector<float>;
   }
   static void *newArray_vectorlEfloatgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<float>[nElements] : new vector<float>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEfloatgR(void *p) {
      delete (static_cast<vector<float>*>(p));
   }
   static void deleteArray_vectorlEfloatgR(void *p) {
      delete [] (static_cast<vector<float>*>(p));
   }
   static void destruct_vectorlEfloatgR(void *p) {
      typedef vector<float> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<float>

namespace ROOT {
   static TClass *vectorlEdoublegR_Dictionary();
   static void vectorlEdoublegR_TClassManip(TClass*);
   static void *new_vectorlEdoublegR(void *p = nullptr);
   static void *newArray_vectorlEdoublegR(Long_t size, void *p);
   static void delete_vectorlEdoublegR(void *p);
   static void deleteArray_vectorlEdoublegR(void *p);
   static void destruct_vectorlEdoublegR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<double>*)
   {
      vector<double> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<double>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<double>", -2, "vector", 423,
                  typeid(vector<double>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEdoublegR_Dictionary, isa_proxy, 4,
                  sizeof(vector<double>) );
      instance.SetNew(&new_vectorlEdoublegR);
      instance.SetNewArray(&newArray_vectorlEdoublegR);
      instance.SetDelete(&delete_vectorlEdoublegR);
      instance.SetDeleteArray(&deleteArray_vectorlEdoublegR);
      instance.SetDestructor(&destruct_vectorlEdoublegR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<double> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<double>","std::vector<double, std::allocator<double> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEdoublegR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<double>*>(nullptr))->GetClass();
      vectorlEdoublegR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEdoublegR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEdoublegR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double> : new vector<double>;
   }
   static void *newArray_vectorlEdoublegR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<double>[nElements] : new vector<double>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEdoublegR(void *p) {
      delete (static_cast<vector<double>*>(p));
   }
   static void deleteArray_vectorlEdoublegR(void *p) {
      delete [] (static_cast<vector<double>*>(p));
   }
   static void destruct_vectorlEdoublegR(void *p) {
      typedef vector<double> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<double>

namespace ROOT {
   static TClass *maplEstringcOvectorlEstringgRsPgR_Dictionary();
   static void maplEstringcOvectorlEstringgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEstringgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlEstringgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEstringgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEstringgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEstringgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<string> >*)
   {
      map<string,vector<string> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<string> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<string> >", -2, "map", 100,
                  typeid(map<string,vector<string> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEstringgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<string> >) );
      instance.SetNew(&new_maplEstringcOvectorlEstringgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEstringgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEstringgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<string> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<string> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::allocator<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > > > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<string> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEstringgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<string> >*>(nullptr))->GetClass();
      maplEstringcOvectorlEstringgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEstringgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEstringgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<string> > : new map<string,vector<string> >;
   }
   static void *newArray_maplEstringcOvectorlEstringgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<string> >[nElements] : new map<string,vector<string> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEstringgRsPgR(void *p) {
      delete (static_cast<map<string,vector<string> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlEstringgRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<string> >*>(p));
   }
   static void destruct_maplEstringcOvectorlEstringgRsPgR(void *p) {
      typedef map<string,vector<string> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<string> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary();
   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<int> >*)
   {
      map<string,vector<int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<int> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<int> >", -2, "map", 100,
                  typeid(map<string,vector<int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEintgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<int> >) );
      instance.SetNew(&new_maplEstringcOvectorlEintgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEintgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEintgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<int> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<int, std::allocator<int> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<int, std::allocator<int> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<int> >*>(nullptr))->GetClass();
      maplEstringcOvectorlEintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<int> > : new map<string,vector<int> >;
   }
   static void *newArray_maplEstringcOvectorlEintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<int> >[nElements] : new map<string,vector<int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete (static_cast<map<string,vector<int> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlEintgRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<int> >*>(p));
   }
   static void destruct_maplEstringcOvectorlEintgRsPgR(void *p) {
      typedef map<string,vector<int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<int> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEfloatgRsPgR_Dictionary();
   static void maplEstringcOvectorlEfloatgRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEfloatgRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlEfloatgRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEfloatgRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEfloatgRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEfloatgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<float> >*)
   {
      map<string,vector<float> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<float> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<float> >", -2, "map", 100,
                  typeid(map<string,vector<float> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEfloatgRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<float> >) );
      instance.SetNew(&new_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEfloatgRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEfloatgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<float> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<float> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<float, std::allocator<float> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<float, std::allocator<float> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<float> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEfloatgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<float> >*>(nullptr))->GetClass();
      maplEstringcOvectorlEfloatgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEfloatgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<float> > : new map<string,vector<float> >;
   }
   static void *newArray_maplEstringcOvectorlEfloatgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<float> >[nElements] : new map<string,vector<float> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      delete (static_cast<map<string,vector<float> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<float> >*>(p));
   }
   static void destruct_maplEstringcOvectorlEfloatgRsPgR(void *p) {
      typedef map<string,vector<float> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<float> >

namespace ROOT {
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary();
   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass*);
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p = nullptr);
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t size, void *p);
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p);
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<string,vector<double> >*)
   {
      map<string,vector<double> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<string,vector<double> >));
      static ::ROOT::TGenericClassInfo 
         instance("map<string,vector<double> >", -2, "map", 100,
                  typeid(map<string,vector<double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEstringcOvectorlEdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(map<string,vector<double> >) );
      instance.SetNew(&new_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetNewArray(&newArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDelete(&delete_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_maplEstringcOvectorlEdoublegRsPgR);
      instance.SetDestructor(&destruct_maplEstringcOvectorlEdoublegRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<string,vector<double> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<string,vector<double> >","std::map<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::vector<double, std::allocator<double> >, std::less<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > >, std::allocator<std::pair<std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> > const, std::vector<double, std::allocator<double> > > > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<string,vector<double> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEstringcOvectorlEdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<string,vector<double> >*>(nullptr))->GetClass();
      maplEstringcOvectorlEdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEstringcOvectorlEdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<double> > : new map<string,vector<double> >;
   }
   static void *newArray_maplEstringcOvectorlEdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<string,vector<double> >[nElements] : new map<string,vector<double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete (static_cast<map<string,vector<double> >*>(p));
   }
   static void deleteArray_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      delete [] (static_cast<map<string,vector<double> >*>(p));
   }
   static void destruct_maplEstringcOvectorlEdoublegRsPgR(void *p) {
      typedef map<string,vector<double> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<string,vector<double> >

namespace {
  void TriggerDictionaryInitialization_libpodioDict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"/home/tsai/eic/podio.src/src",
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
#line 1 "libpodioDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace podio{class __attribute__((annotate("$clingAutoload$podio/ObjectID.h")))  __attribute__((annotate("$clingAutoload$podio/CollectionBuffers.h")))  ObjectID;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace std{template <typename _CharT> struct __attribute__((annotate("$clingAutoload$bits/char_traits.h")))  __attribute__((annotate("$clingAutoload$string")))  char_traits;
}
namespace podio{class CollectionBase;}
namespace podio{class CollectionIDTable;}
namespace podio{namespace version{struct Version;}}
namespace podio{class GenericParameters;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libpodioDict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#ifndef PODIO_COLLECTIONBASE_H
#define PODIO_COLLECTIONBASE_H

#include "podio/CollectionBuffers.h"
#include "podio/ObjectID.h"
#include "podio/SchemaEvolution.h"

#include <iostream>
#include <string_view>
#include <utility>
#include <vector>

namespace podio {
// forward declarations
class ICollectionProvider;

struct RelationNames;

class CollectionBase {
protected:
  /// default constructor
  CollectionBase() = default;
  /// Move constructor
  CollectionBase(CollectionBase&&) = default;
  /// Move assignment
  CollectionBase& operator=(CollectionBase&&) = default;

public:
  /// No copy c'tor because collections are move-only
  CollectionBase(const CollectionBase&) = delete;
  /// No copy assignment because collections are move-only
  CollectionBase& operator=(const CollectionBase&) = delete;

  /// prepare buffers for serialization
  virtual void prepareForWrite() const = 0;

  /// re-create collection from buffers after read
  virtual void prepareAfterRead() = 0;

  /// initialize references after read
  virtual bool setReferences(const ICollectionProvider* collectionProvider) = 0;

  /// set collection ID
  virtual void setID(uint32_t id) = 0;

  /// get collection ID
  virtual uint32_t getID() const = 0;

  /// Get the collection buffers for this collection
  virtual podio::CollectionWriteBuffers getBuffers() = 0;

  /// check for validity of the container after read
  virtual bool isValid() const = 0;

  /// number of elements in the collection
  virtual size_t size() const = 0;

  /// Is the collection empty
  virtual bool empty() const = 0;

  /// fully qualified type name
  virtual const std::string_view getTypeName() const = 0;
  /// fully qualified type name of elements - with namespace
  virtual const std::string_view getValueTypeName() const = 0;
  /// fully qualified type name of stored POD elements - with namespace
  virtual const std::string_view getDataTypeName() const = 0;
  /// schema version of the collection
  virtual SchemaVersionT getSchemaVersion() const = 0;

  /// destructor
  virtual ~CollectionBase() = default;

  /// clear the collection and all internal states
  virtual void clear() = 0;

  /// check if this collection is a subset collection
  virtual bool isSubsetCollection() const = 0;

  /// declare this collection to be a subset collection
  virtual void setSubsetCollection(bool setSubset = true) = 0;

  /// print this collection to the passed stream
  virtual void print(std::ostream& os = std::cout, bool flush = true) const = 0;

  /// Get the index in the DatatypeRegistry of the EDM this collection belongs to
  virtual size_t getDatamodelRegistryIndex() const = 0;
};

} // namespace podio

#endif
#ifndef PODIO_COLLECTIONIDTABLE_H
#define PODIO_COLLECTIONIDTABLE_H

#include <cstdint>
#include <memory>
#include <mutex>
#include <optional>
#include <string>
#include <vector>

namespace podio {

class CollectionIDTable {

public:
  CollectionIDTable();
  ~CollectionIDTable() = default;

  CollectionIDTable(const CollectionIDTable&) = delete;
  CollectionIDTable& operator=(const CollectionIDTable&) = delete;
  CollectionIDTable(CollectionIDTable&&) = default;
  CollectionIDTable& operator=(CollectionIDTable&&) = default;

  /// constructor from existing ID:name mapping
  CollectionIDTable(std::vector<uint32_t>&& ids, std::vector<std::string>&& names);

  CollectionIDTable(const std::vector<uint32_t>& ids, const std::vector<std::string>& names);

  /// return collection ID for given name
  std::optional<uint32_t> collectionID(const std::string& name) const;

  /// return name for given collection ID
  std::optional<const std::string> name(uint32_t collectionID) const;

  /// Check if collection name is known
  bool present(const std::string& name) const;

  /// Check if collection ID is known
  bool present(uint32_t collectionID) const;

  /// return registered names
  const std::vector<std::string>& names() const {
    return m_names;
  };

  /// return the ids
  const std::vector<uint32_t>& ids() const {
    return m_collectionIDs;
  }

  /// register new name to the table
  /// returns assigned collection ID
  uint32_t add(const std::string& name);

  /// Prints collection information
  void print() const;

  /// Does this table hold any information?
  bool empty() const {
    return m_names.empty();
  }

private:
  std::vector<uint32_t> m_collectionIDs{};
  std::vector<std::string> m_names{};
  mutable std::unique_ptr<std::mutex> m_mutex{nullptr};
};

} // namespace podio
#endif
#ifndef PODIO_ICOLLECTIONPROVIDER_H
#define PODIO_ICOLLECTIONPROVIDER_H

#include <cstdint>

namespace podio {

class CollectionBase;

class ICollectionProvider {
public:
  /// destructor
  virtual ~ICollectionProvider() = default;
  /// access a collection by ID. returns true if successful
  virtual bool get(uint32_t collectionID, CollectionBase*& collection) const = 0;
};

} // namespace podio

#endif
#ifndef PODIO_OBJECTID_H
#define PODIO_OBJECTID_H

#include <cstdint>
#include <iomanip>
#include <ostream>

namespace podio {

class ObjectID {

public:
  /// not part of a collection
  static const int untracked = -1;
  /// invalid or non-available object
  static const int invalid = -2;

  /// index of object in collection
  int index{untracked};
  /// ID of the collection
  uint32_t collectionID{static_cast<uint32_t>(untracked)};

  /// index and collectionID uniquely defines the object.
  /// this operator is necessary for meaningful comparisons in python
  bool operator==(const ObjectID& other) const {
    return index == other.index && collectionID == other.collectionID;
  }
  bool operator!=(const ObjectID& other) const {
    return !(*this == other);
  }
};

inline std::ostream& operator<<(std::ostream& os, const podio::ObjectID& id) {
  const auto oldFlags = os.flags();
  os << std::hex << std::setw(8) << id.collectionID;
  os.flags(oldFlags);
  return os << id.index;
}

} // namespace podio

#endif
#ifndef PODIO_USERDATACOLLECTION_H
#define PODIO_USERDATACOLLECTION_H

#include "podio/CollectionBase.h"
#include "podio/CollectionBuffers.h"
#include "podio/DatamodelRegistry.h"
#include "podio/SchemaEvolution.h"
#include "podio/utilities/TypeHelpers.h"

#include <map>
#include <string>
#include <typeindex>
#include <utility>
#include <vector>

#define PODIO_ADD_USER_TYPE(type)                                                                                      \
  template <>                                                                                                          \
  constexpr const char* userDataTypeName<type>() {                                                                     \
    return #type;                                                                                                      \
  }                                                                                                                    \
  template <>                                                                                                          \
  constexpr const char* userDataCollTypeName<type>() {                                                                 \
    return "podio::UserDataCollection<" #type ">";                                                                     \
  }

namespace podio {

/// tuple of basic types supported in user vector
using SupportedUserDataTypes =
    std::tuple<float, double, int8_t, int16_t, int32_t, int64_t, uint8_t, uint16_t, uint32_t, uint64_t>;

/// Alias template to be used to enable template specializations only for the types listed in the
/// SupportedUserDataTypes list
template <typename T>
using EnableIfSupportedUserType = std::enable_if_t<detail::isInTuple<T, SupportedUserDataTypes>>;

/// helper template to provide readable type names for basic types with macro
/// PODIO_ADD_USER_TYPE(type)
template <typename BasicType, typename = EnableIfSupportedUserType<BasicType>>
constexpr const char* userDataTypeName();

/// Helper template to provide the fully qualified name of a UserDataCollection.
/// Implementations are populated by the PODIO_ADD_USER_TYPE macro.
template <typename BasicType, typename = EnableIfSupportedUserType<BasicType>>
constexpr const char* userDataCollTypeName();

PODIO_ADD_USER_TYPE(float)
PODIO_ADD_USER_TYPE(double)

PODIO_ADD_USER_TYPE(int8_t)
PODIO_ADD_USER_TYPE(int16_t)
PODIO_ADD_USER_TYPE(int32_t)
PODIO_ADD_USER_TYPE(int64_t)
PODIO_ADD_USER_TYPE(uint8_t)
PODIO_ADD_USER_TYPE(uint16_t)
PODIO_ADD_USER_TYPE(uint32_t)
PODIO_ADD_USER_TYPE(uint64_t)

/// Collection of basic types for additional user data not defined in the EDM.
/// The data is stored in an std::vector<basic_type>. Supported are all basic
/// types supported in PODIO, i.e. float, double and 8-64 bit fixed size signed
/// and unsigned integers - @see SupportedUserDataTypes.
///
/// @author F.Gaede, DESY
/// @date Sep 2021
template <typename BasicType, typename = EnableIfSupportedUserType<BasicType>>
class UserDataCollection : public CollectionBase {

private:
  std::vector<BasicType> _vec{};
  // Pointer to the actual storage, necessary for I/O. In order to have
  // simpler move-semantics this will be set and properly initialized on
  // demand during the call to getBuffers
  std::vector<BasicType>* _vecPtr{nullptr};
  uint32_t m_collectionID{0};
  CollRefCollection m_refCollections{};
  VectorMembersInfo m_vecmem_info{};

public:
  UserDataCollection() = default;
  /// Constructor from an existing vector (which will be moved from!)
  UserDataCollection(std::vector<BasicType>&& vec) : _vec(std::move(vec)) {
  }
  UserDataCollection(const UserDataCollection&) = delete;
  UserDataCollection& operator=(const UserDataCollection&) = delete;
  UserDataCollection(UserDataCollection&&) = default;
  UserDataCollection& operator=(UserDataCollection&&) = default;
  ~UserDataCollection() = default;

  /// The schema version of UserDataCollections
  static constexpr SchemaVersionT schemaVersion = 1;

  constexpr static auto typeName = userDataCollTypeName<BasicType>();
  constexpr static auto valueTypeName = userDataTypeName<BasicType>();
  constexpr static auto dataTypeName = userDataTypeName<BasicType>();

  /// prepare buffers for serialization
  void prepareForWrite() const override {
  }

  /// re-create collection from buffers after read
  void prepareAfterRead() override {
  }

  /// initialize references after read
  bool setReferences(const ICollectionProvider*) override {
    return true;
  }

  /// set collection ID
  void setID(uint32_t id) override {
    m_collectionID = id;
  }

  /// get collection ID
  uint32_t getID() const override {
    return m_collectionID;
  }

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() override {
    _vecPtr = &_vec; // Set the pointer to the correct internal vector
    return {&_vecPtr, _vecPtr, &m_refCollections, &m_vecmem_info};
  }

  /// check for validity of the container after read
  bool isValid() const override {
    return true;
  }

  /// number of elements in the collection
  size_t size() const override {
    return _vec.size();
  }

  /// Is the collection empty
  bool empty() const override {
    return _vec.empty();
  }

  /// fully qualified type name
  const std::string_view getTypeName() const override {
    return typeName;
  }

  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const override {
    return valueTypeName;
  }

  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const override {
    return dataTypeName;
  }

  /// clear the collection and all internal states
  void clear() override {
    _vec.clear();
  };

  /// check if this collection is a subset collection - no subset possible
  bool isSubsetCollection() const override {
    return false;
  }

  /// declare this collection to be a subset collection - no effect
  void setSubsetCollection(bool) override {
  }

  /// The schema version is fixed manually
  SchemaVersionT getSchemaVersion() const final {
    return schemaVersion;
  }

  /// Print this collection to the passed stream
  void print(std::ostream& os = std::cout, bool flush = true) const override {
    os << "[";
    if (!_vec.empty()) {
      os << _vec[0];
      for (size_t i = 1; i < _vec.size(); ++i) {
        os << ", " << _vec[i];
      }
    }
    os << "]";

    if (flush) {
      os.flush(); // Necessary for python
    }
  }

  size_t getDatamodelRegistryIndex() const override {
    return DatamodelRegistry::NoDefinitionNecessary;
  }

  // ----- some wrappers for std::vector and access to the complete std::vector (if really needed)

  typename std::vector<BasicType>::iterator begin() {
    return _vec.begin();
  }
  typename std::vector<BasicType>::iterator end() {
    return _vec.end();
  }
  typename std::vector<BasicType>::const_iterator begin() const {
    return _vec.begin();
  }
  typename std::vector<BasicType>::const_iterator end() const {
    return _vec.end();
  }

  typename std::vector<BasicType>::reference operator[](size_t idx) {
    return _vec[idx];
  }
  typename std::vector<BasicType>::const_reference operator[](size_t idx) const {
    return _vec[idx];
  }

  void resize(size_t count) {
    _vec.resize(count);
  }
  void push_back(const BasicType& value) {
    _vec.push_back(value);
  }

  /// access to the actual data vector
  typename std::vector<BasicType>& vec() {
    return _vec;
  }

  /// const access to the actual data vector
  const typename std::vector<BasicType>& vec() const {
    return _vec;
  }
};

// don't make this macro public as it should only be used internally here...
#undef PODIO_ADD_USER_TYPE

template <typename BasicType, typename = EnableIfSupportedUserType<BasicType>>
std::ostream& operator<<(std::ostream& o, const podio::UserDataCollection<BasicType>& coll) {
  coll.print(o);
  return o;
}

} // namespace podio

#endif
#ifndef PODIO_PODIOVERSION_H
#define PODIO_PODIOVERSION_H

#include <cstdint>
#include <sstream>
#include <ostream>
#include <tuple>
#if __cplusplus >= 202002L
  #include <compare>
#endif

// Some preprocessor constants and macros for the use cases where they might be
// necessary

/// Define a version to be used in podio.
#define PODIO_VERSION(major, minor, patch)                                                                             \
  ((UINT64_C(major) << 32) | (UINT64_C(minor) << 16) | UINT64_C(patch))
/// Get the major version from a preprocessor defined version
#define PODIO_MAJOR_VERSION(v) (((v) & (-1UL >> 16)) >> 32)
/// Get the minor version from a preprocessor defined version
#define PODIO_MINOR_VERSION(v) (((v) & (-1UL >> 32)) >> 16)
/// Get the patch version from a preprocessor defined version
#define PODIO_PATCH_VERSION(v) ((v) & (-1UL >> 48))

// Some helper constants that are populated by the cmake configure step
#define podio_VERSION_MAJOR 0
#define podio_VERSION_MINOR 99
#define podio_VERSION_PATCH 0
#define podio_VERSION PODIO_VERSION(podio_VERSION_MAJOR, podio_VERSION_MINOR, podio_VERSION_PATCH)

/// The encoded version with which podio has been built
#define PODIO_BUILD_VERSION PODIO_VERSION(podio_VERSION_MAJOR, podio_VERSION_MINOR, podio_VERSION_PATCH)

namespace podio::version {

/// Version class consisting of three 16 bit unsigned integers to hold the major,
/// minor and patch version. Provides constexpr comparison operators that allow
/// one to use this class in constexpr-if clauses.
struct Version {
  uint16_t major{0};
  uint16_t minor{0};
  uint16_t patch{0};

#if __cplusplus >= 202002L
  auto operator<=>(const Version&) const = default;
#else
  // No spaceship yet in c++17
  #define DEFINE_COMP_OPERATOR(OP)                                                                                     \
    constexpr bool operator OP(const Version& o) const noexcept {                                                      \
      return std::tie(major, minor, patch) OP std::tie(o.major, o.minor, o.patch);                                     \
    }

  DEFINE_COMP_OPERATOR(<)
  DEFINE_COMP_OPERATOR(<=)
  DEFINE_COMP_OPERATOR(>)
  DEFINE_COMP_OPERATOR(>=)
  DEFINE_COMP_OPERATOR(==)
  DEFINE_COMP_OPERATOR(!=)

  #undef DEFINE_COMP_OPERATOR
#endif

  explicit operator std::string() const {
    std::stringstream ss;
    ss << *this;
    return ss.str();
  };

  friend std::ostream& operator<<(std::ostream&, const Version& v);
};

inline std::ostream& operator<<(std::ostream& os, const Version& v) {
  return os << v.major << "." << v.minor << "." << v.patch;
}

/// The current build version
static constexpr Version build_version{podio_VERSION_MAJOR, podio_VERSION_MINOR, podio_VERSION_PATCH};

/// Decode a version from a 64 bit unsigned
static constexpr Version decode_version(unsigned long version) noexcept {
  return Version{(uint16_t)PODIO_MAJOR_VERSION(version), (uint16_t)PODIO_MINOR_VERSION(version),
                 (uint16_t)PODIO_PATCH_VERSION(version)};
}
} // namespace podio::version

#endif
#ifndef PODIO_DATAMODELREGISTRY_H
#define PODIO_DATAMODELREGISTRY_H

#include <string>
#include <string_view>
#include <tuple>
#include <unordered_map>
#include <utility>
#include <vector>

namespace podio {

/// Type alias for storing the names of all Relations and VectorMembers for all
/// datatypes of an EDM. Populated for each EDM at code generation time.
/// The structure is of each element in the outer vector is:
/// - get<0>: The name of the datatype
/// - get<1>: The names of all Relations, where OneToManyRelations comes before
///   OneToOneRelations (in the order as they appear in the YAML file)
/// - get<2>: The names of all VectorMembers (in the order of the file YAML)
using RelationNameMapping =
    std::vector<std::tuple<std::string_view, std::vector<std::string_view>, std::vector<std::string_view>>>;

/// Information on the names of the OneTo[One|Many]Relations as well as the
/// VectorMembers of a datatype
///
/// The contents are populated by the code generation, where we simply generate
/// static vectors that we make available as const& here.
struct RelationNames {
  /// The names of the relations (OneToMany before OneToOne)
  const std::vector<std::string_view>& relations;
  /// The names of the vector members
  const std::vector<std::string_view>& vectorMembers;
};

/// Global registry holding information about datamodels and datatypes defined
/// therein that are currently known by podio (i.e. which have been dynamically
/// loaded).
///
/// This is a singleton which is (statically) populated during dynamic loading
/// of generated EDMs. In this context an **EDM refers to the shared library**
/// that is compiled from the generated code from a datamodel definition in YAML
/// format. When we refer to a **datamodel** in this context we talk about the
/// entity as a whole, i.e. its definition in a YAML file, but also the concrete
/// implementation as an EDM, as well as all other information that is related
/// to it. In the API of this registry this will be used, unless we want to
/// highlight that we are referring to a specific part of a datamodel.
class DatamodelRegistry {
public:
  /// Get the registry
  static const DatamodelRegistry& instance();

  // Mutable instance only used for the initial registration!
  static DatamodelRegistry& mutInstance();

  ~DatamodelRegistry() = default;
  DatamodelRegistry(const DatamodelRegistry&) = delete;
  DatamodelRegistry& operator=(const DatamodelRegistry&) = delete;
  DatamodelRegistry(DatamodelRegistry&&) = delete;
  DatamodelRegistry& operator=(const DatamodelRegistry&&) = delete;

  /// Dedicated index value for collections that don't have a datamodel
  /// definition (e.g. UserDataCollection)
  static constexpr size_t NoDefinitionNecessary = -1;
  /// Dedicated index value for error checking, used to default init the generated RegistryIndex
  static constexpr size_t NoDefinitionAvailable = -2;

  /// Get the definition (in JSON format) of the datamodel with the given
  /// edmName.
  ///
  /// If no datamodel with the given name can be found, an empty datamodel
  /// definition, i.e. an empty JSON object ("{}"), is returned.
  ///
  /// @param name The name of the datamodel
  ///
  /// @returns The high level definition of the datamodel in JSON format
  const std::string_view getDatamodelDefinition(std::string_view name) const;

  /// Get the definition (in JSON format) of the datamodel with the given
  /// index.
  ///
  /// If no datamodel is found under the given index, an empty datamodel
  /// definition, i.e. an empty JSON object ("{}"), is returned.
  ///
  /// @param index The datamodel definition index that can be obtained from each
  ///              collection
  ///
  /// @returns The high level definition of the datamodel in JSON format
  const std::string_view getDatamodelDefinition(size_t index) const;

  /// Get the name of the datamodel that is stored under the given index.
  ///
  /// If no datamodel is found under the given index, an empty string is returned
  ///
  /// @param index The datamodel definition index that can be obtained from each
  ///              collection
  ///
  /// @returns The name of the datamodel
  const std::string& getDatamodelName(size_t index) const;

  /// Register a datamodel and return its index in the registry.
  ///
  /// This is the hook that is called during dynamic loading of an EDM to
  /// register information for this EDM. If an EDM has already been registered
  /// under this name, than the index to the existing EDM in the registry will be
  /// returned.
  ///
  /// @param name The name of the EDM that should be registered
  /// @param definition The datamodel definition from which this EDM has been
  /// generated in JSON format
  /// @param relationNames the names of the relations and vector members for all
  /// datatypes that are defined for this EDM
  ///
  /// @returns The index of this datamodel in the registry
  size_t registerDatamodel(std::string name, std::string_view definition,
                           const podio::RelationNameMapping& relationNames);

  /// Get the names of the relations and vector members of a datatype
  RelationNames getRelationNames(std::string_view typeName) const;

private:
  DatamodelRegistry() = default;
  /// The stored definitions
  std::vector<std::pair<std::string, std::string_view>> m_definitions{};

  std::unordered_map<std::string_view, RelationNames> m_relations{};
};
} // namespace podio

#endif // PODIO_DATAMODELREGISTRY_H
#ifndef PODIO_UTILITIES_DATAMODELREGISTRYIOHELPERS_H
#define PODIO_UTILITIES_DATAMODELREGISTRYIOHELPERS_H

#include "podio/CollectionBase.h"
#include "podio/DatamodelRegistry.h"

#include <set>
#include <string>
#include <tuple>
#include <vector>

namespace podio {

/// Helper class to collect the datamodel (JSON) definitions that should be
/// written.
class DatamodelDefinitionCollector {
public:
  /// Register the datamodel definition of the EDM this collection is from to be
  /// written.
  ///
  /// @param coll A collection of an EDM
  /// @param name The name under which this collection is stored on file
  void registerDatamodelDefinition(const podio::CollectionBase* coll, const std::string& name);

  /// Get all the names and JSON definitions that need to be written
  std::vector<std::tuple<std::string, std::string>> getDatamodelDefinitionsToWrite() const;

private:
  std::set<size_t> m_edmDefRegistryIdcs{}; ///< The indices in the EDM definition registry that need to be written
};

/// Helper class to hold and provide the datamodel (JSON) definitions for reader
/// classes.
class DatamodelDefinitionHolder {
public:
  /// The "map" type that is used internally
  using MapType = std::vector<std::tuple<std::string, std::string>>;
  /// Constructor from an existing collection of names and datamodel definitions
  DatamodelDefinitionHolder(MapType&& definitions) : m_availEDMDefs(std::move(definitions)) {
  }

  DatamodelDefinitionHolder() = default;
  ~DatamodelDefinitionHolder() = default;
  DatamodelDefinitionHolder(const DatamodelDefinitionHolder&) = delete;
  DatamodelDefinitionHolder& operator=(const DatamodelDefinitionHolder&) = delete;
  DatamodelDefinitionHolder(DatamodelDefinitionHolder&&) = default;
  DatamodelDefinitionHolder& operator=(DatamodelDefinitionHolder&&) = default;

  /// Get the datamodel definition for the given datamodel name.
  ///
  /// Returns an empty model definition if no model is stored under the given
  /// name.
  ///
  /// @param name The name of the datamodel
  const std::string_view getDatamodelDefinition(const std::string& name) const;

  /// Get all names of the datamodels that have been read from file
  std::vector<std::string> getAvailableDatamodels() const;

protected:
  MapType m_availEDMDefs{};
};

} // namespace podio

#endif // PODIO_UTILITIES_DATAMODELREGISTRYIOHELPERS_H
// -*- C++ -*-
#ifndef PODIO_GENERICPARAMETERS_H
#define PODIO_GENERICPARAMETERS_H 1

#include "podio/utilities/TypeHelpers.h"

#include <algorithm>
#include <iostream>
#include <map>
#include <memory>
#include <mutex>
#include <string>
#include <vector>

namespace sio {
class read_device;
class write_device;
using version_type = uint32_t; // from sio/definitions
} // namespace sio

#if PODIO_ENABLE_RNTUPLE
namespace podio {
class RNTupleReader;
class RNTupleWriter;
} // namespace podio
#endif

namespace podio {

/// The types which are supported in the GenericParameters
using SupportedGenericDataTypes = std::tuple<int, float, std::string, double>;

/// Static bool for determining if a type T is a supported GenericParameters type
template <typename T>
static constexpr bool isSupportedGenericDataType = detail::isAnyOrVectorOf<T, SupportedGenericDataTypes>;

/// Alias template to be used for enabling / disabling template overloads that
/// should only be present for actually supported data types
template <typename T>
using EnableIfValidGenericDataType = typename std::enable_if_t<isSupportedGenericDataType<T>>;

namespace detail {
  /// Helper struct to determine how to return different types from the
  /// GenericParameters to avoid unnecessary copies but also to prohibit carrying
  /// around const references to ints or floats
  template <typename T>
  struct GenericDataReturnTypeHelper {
    using type = T;
  };

  /// Specialization for std::string. Those will always be returned by const ref
  template <>
  struct GenericDataReturnTypeHelper<std::string> {
    using type = const std::string&;
  };

  /// Specialization for std::vector. Those will always be returned by const ref
  template <typename T>
  struct GenericDataReturnTypeHelper<std::vector<T>> {
    using type = const std::vector<T>&;
  };
} // namespace detail

/// Alias template for determining the appropriate return type for the passed in
/// type
template <typename T>
using GenericDataReturnType = typename detail::GenericDataReturnTypeHelper<T>::type;

/// GenericParameters objects allow one to store generic named parameters of type
///  int, float and string or vectors of these types.
///  They can be used  to store (user) meta data that is
///  run, event or collection dependent.
///  (based on lcio::LCParameters)
///
/// @author F. Gaede, DESY
/// @date Apr 2020
class GenericParameters {
public:
  template <typename T>
  using MapType = std::map<std::string, std::vector<T>>;

private:
  // need mutex pointers for having the possibility to copy/move GenericParameters
  using MutexPtr = std::unique_ptr<std::mutex>;

public:
  GenericParameters();

  /// GenericParameters are copyable
  /// @note This is currently mainly done to keep the ROOT I/O happy, because
  /// that needs a copy constructor
  GenericParameters(const GenericParameters&);
  GenericParameters& operator=(const GenericParameters&) = delete;

  /// GenericParameters are default moveable
  GenericParameters(GenericParameters&&) = default;
  GenericParameters& operator=(GenericParameters&&) = default;

  ~GenericParameters() = default;

  /// Get the value that is stored under the given key, by const reference or by
  /// value depending on the desired type
  template <typename T, typename = EnableIfValidGenericDataType<T>>
  GenericDataReturnType<T> getValue(const std::string&) const;

  /// Store (a copy of) the passed value under the given key
  template <typename T, typename = EnableIfValidGenericDataType<T>>
  void setValue(const std::string& key, T value);

  /// Overload for catching const char* setting for string values
  void setValue(const std::string& key, std::string value) {
    setValue<std::string>(key, std::move(value));
  }

  /// Overload for catching initializer list setting of string vector values
  void setValue(const std::string& key, std::vector<std::string> values) {
    setValue<std::vector<std::string>>(key, std::move(values));
  }

  /// Overload for catching initializer list setting for vector values
  template <typename T, typename = std::enable_if_t<detail::isInTuple<T, SupportedGenericDataTypes>>>
  void setValue(const std::string& key, std::initializer_list<T>&& values) {
    setValue<std::vector<T>>(key, std::move(values));
  }

  /// Get the number of elements stored under the given key for a type
  template <typename T, typename = EnableIfValidGenericDataType<T>>
  size_t getN(const std::string& key) const;

  /// Get all available keys for a given type
  template <typename T, typename = EnableIfValidGenericDataType<T>>
  std::vector<std::string> getKeys() const;

  /// erase all elements
  void clear() {
    _intMap.clear();
    _floatMap.clear();
    _stringMap.clear();
  }

  void print(std::ostream& os = std::cout, bool flush = true);

  /// Check if no parameter is stored (i.e. if all internal maps are empty)
  bool empty() const {
    return _intMap.empty() && _floatMap.empty() && _stringMap.empty();
  }

  friend void writeGenericParameters(sio::write_device& device, const GenericParameters& parameters);
  friend void readGenericParameters(sio::read_device& device, GenericParameters& parameters, sio::version_type version);

#if PODIO_ENABLE_RNTUPLE
  friend RNTupleReader;
  friend RNTupleWriter;
#endif

  /// Get a reference to the internal map for a given type
  template <typename T>
  const MapType<detail::GetVectorType<T>>& getMap() const {
    if constexpr (std::is_same_v<detail::GetVectorType<T>, int>) {
      return _intMap;
    } else if constexpr (std::is_same_v<detail::GetVectorType<T>, float>) {
      return _floatMap;
    } else if constexpr (std::is_same_v<detail::GetVectorType<T>, double>) {
      return _doubleMap;
    } else {
      return _stringMap;
    }
  }

private:
  /// Get a reference to the internal map for a given type (necessary for SIO)
  template <typename T>
  MapType<detail::GetVectorType<T>>& getMap() {
    if constexpr (std::is_same_v<detail::GetVectorType<T>, int>) {
      return _intMap;
    } else if constexpr (std::is_same_v<detail::GetVectorType<T>, float>) {
      return _floatMap;
    } else if constexpr (std::is_same_v<detail::GetVectorType<T>, double>) {
      return _doubleMap;
    } else {
      return _stringMap;
    }
  }

private:
  /// Get the mutex that guards the map for the given type
  template <typename T>
  std::mutex& getMutex() const {
    if constexpr (std::is_same_v<detail::GetVectorType<T>, int>) {
      return *(m_intMtx.get());
    } else if constexpr (std::is_same_v<detail::GetVectorType<T>, float>) {
      return *(m_floatMtx.get());
    } else if constexpr (std::is_same_v<detail::GetVectorType<T>, double>) {
      return *(m_doubleMtx.get());
    } else {
      return *(m_stringMtx.get());
    }
  }

private:
  MapType<int> _intMap{};                ///< The map storing the integer values
  mutable MutexPtr m_intMtx{nullptr};    ///< The mutex guarding the integer map
  MapType<float> _floatMap{};            ///< The map storing the float values
  mutable MutexPtr m_floatMtx{nullptr};  ///< The mutex guarding the float map
  MapType<std::string> _stringMap{};     ///< The map storing the string values
  mutable MutexPtr m_stringMtx{nullptr}; ///< The mutex guarding the string map
  MapType<double> _doubleMap{};          ///< The map storing the double values
  mutable MutexPtr m_doubleMtx{nullptr}; ///< The mutex guarding the double map
};

template <typename T, typename>
GenericDataReturnType<T> GenericParameters::getValue(const std::string& key) const {
  const auto& map = getMap<T>();
  auto& mtx = getMutex<T>();
  std::lock_guard lock{mtx};
  const auto it = map.find(key);
  // If there is no entry to the key, we just return an empty default
  // TODO: make this case detectable from the outside
  if (it == map.end()) {
    static const auto empty = T{};
    return empty;
  }

  // We have to check whether the return type is a vector or a single value
  if constexpr (detail::isVector<T>) {
    return it->second;
  } else {
    const auto& iv = it->second;
    return iv[0];
  }
}

template <typename T, typename>
void GenericParameters::setValue(const std::string& key, T value) {
  auto& map = getMap<T>();
  auto& mtx = getMutex<T>();

  if constexpr (detail::isVector<T>) {
    std::lock_guard lock{mtx};
    map.insert_or_assign(key, std::move(value));
  } else {
    // Wrap the value into a vector with exactly one entry and store that
    std::vector<T> v = {std::move(value)};
    std::lock_guard lock{mtx};
    map.insert_or_assign(key, std::move(v));
  }
}

template <typename T, typename>
size_t GenericParameters::getN(const std::string& key) const {
  const auto& map = getMap<T>();
  auto& mtx = getMutex<T>();
  std::lock_guard lock{mtx};
  if (const auto it = map.find(key); it != map.end()) {
    return it->second.size();
  }
  return 0;
}

template <typename T, typename>
std::vector<std::string> GenericParameters::getKeys() const {
  std::vector<std::string> keys;
  const auto& map = getMap<T>();
  keys.reserve(map.size());
  {
    auto& mtx = getMutex<T>();
    std::lock_guard lock{mtx};
    std::transform(map.begin(), map.end(), std::back_inserter(keys), [](const auto& pair) { return pair.first; });
  }

  return keys;
}

} // namespace podio
#endif

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"podio::CollectionBase", payloadCode, "@",
"podio::CollectionIDTable", payloadCode, "@",
"podio::GenericParameters", payloadCode, "@",
"podio::ObjectID", payloadCode, "@",
"podio::UserDataCollection<double,void>", payloadCode, "@",
"podio::UserDataCollection<double>", payloadCode, "@",
"podio::UserDataCollection<float,void>", payloadCode, "@",
"podio::UserDataCollection<float>", payloadCode, "@",
"podio::UserDataCollection<int,void>", payloadCode, "@",
"podio::UserDataCollection<int16_t>", payloadCode, "@",
"podio::UserDataCollection<int32_t>", payloadCode, "@",
"podio::UserDataCollection<int64_t>", payloadCode, "@",
"podio::UserDataCollection<int8_t>", payloadCode, "@",
"podio::UserDataCollection<long,void>", payloadCode, "@",
"podio::UserDataCollection<short,void>", payloadCode, "@",
"podio::UserDataCollection<signed char,void>", payloadCode, "@",
"podio::UserDataCollection<uint16_t>", payloadCode, "@",
"podio::UserDataCollection<uint32_t>", payloadCode, "@",
"podio::UserDataCollection<uint64_t>", payloadCode, "@",
"podio::UserDataCollection<uint8_t>", payloadCode, "@",
"podio::UserDataCollection<unsigned char,void>", payloadCode, "@",
"podio::UserDataCollection<unsigned int,void>", payloadCode, "@",
"podio::UserDataCollection<unsigned long,void>", payloadCode, "@",
"podio::UserDataCollection<unsigned short,void>", payloadCode, "@",
"podio::version::Version", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libpodioDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libpodioDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libpodioDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libpodioDict() {
  TriggerDictionaryInitialization_libpodioDict_Impl();
}
