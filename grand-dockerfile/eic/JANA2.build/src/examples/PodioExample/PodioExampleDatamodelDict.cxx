// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME PodioExampleDatamodelDict
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
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/EventInfoCollection.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/EventInfoData.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/EventInfo.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/MutableEventInfo.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/EventInfoObj.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/EventInfoCollection.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/EventInfoCollectionData.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleHitCollection.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleHitData.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleHit.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/MutableExampleHit.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleHitObj.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleHitCollection.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleHitCollectionData.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleClusterCollection.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleClusterData.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleCluster.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/MutableExampleCluster.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleClusterObj.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleClusterCollection.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/ExampleClusterCollectionData.h"
#include "/home/tsai/eic/JANA2.src/src/examples/PodioExample/datamodel/DatamodelDefinition.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *EventInfoData_Dictionary();
   static void EventInfoData_TClassManip(TClass*);
   static void *new_EventInfoData(void *p = nullptr);
   static void *newArray_EventInfoData(Long_t size, void *p);
   static void delete_EventInfoData(void *p);
   static void deleteArray_EventInfoData(void *p);
   static void destruct_EventInfoData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoData*)
   {
      ::EventInfoData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoData));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoData", 1, "datamodel/EventInfoData.h", 13,
                  typeid(::EventInfoData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoData_Dictionary, isa_proxy, 12,
                  sizeof(::EventInfoData) );
      instance.SetNew(&new_EventInfoData);
      instance.SetNewArray(&newArray_EventInfoData);
      instance.SetDelete(&delete_EventInfoData);
      instance.SetDeleteArray(&deleteArray_EventInfoData);
      instance.SetDestructor(&destruct_EventInfoData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfoData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfoData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventInfoData*>(nullptr))->GetClass();
      EventInfoData_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfo_Dictionary();
   static void EventInfo_TClassManip(TClass*);
   static void *new_EventInfo(void *p = nullptr);
   static void *newArray_EventInfo(Long_t size, void *p);
   static void delete_EventInfo(void *p);
   static void deleteArray_EventInfo(void *p);
   static void destruct_EventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfo*)
   {
      ::EventInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfo));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfo", 1, "datamodel/EventInfo.h", 29,
                  typeid(::EventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfo_Dictionary, isa_proxy, 12,
                  sizeof(::EventInfo) );
      instance.SetNew(&new_EventInfo);
      instance.SetNewArray(&newArray_EventInfo);
      instance.SetDelete(&delete_EventInfo);
      instance.SetDeleteArray(&deleteArray_EventInfo);
      instance.SetDestructor(&destruct_EventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventInfo*>(nullptr))->GetClass();
      EventInfo_TClassManip(theClass);
   return theClass;
   }

   static void EventInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableEventInfo_Dictionary();
   static void MutableEventInfo_TClassManip(TClass*);
   static void *new_MutableEventInfo(void *p = nullptr);
   static void *newArray_MutableEventInfo(Long_t size, void *p);
   static void delete_MutableEventInfo(void *p);
   static void deleteArray_MutableEventInfo(void *p);
   static void destruct_MutableEventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableEventInfo*)
   {
      ::MutableEventInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableEventInfo));
      static ::ROOT::TGenericClassInfo 
         instance("MutableEventInfo", 1, "datamodel/MutableEventInfo.h", 28,
                  typeid(::MutableEventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableEventInfo_Dictionary, isa_proxy, 12,
                  sizeof(::MutableEventInfo) );
      instance.SetNew(&new_MutableEventInfo);
      instance.SetNewArray(&newArray_MutableEventInfo);
      instance.SetDelete(&delete_MutableEventInfo);
      instance.SetDeleteArray(&deleteArray_MutableEventInfo);
      instance.SetDestructor(&destruct_MutableEventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableEventInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableEventInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableEventInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableEventInfo_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableEventInfo*>(nullptr))->GetClass();
      MutableEventInfo_TClassManip(theClass);
   return theClass;
   }

   static void MutableEventInfo_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfoCollection_Dictionary();
   static void EventInfoCollection_TClassManip(TClass*);
   static void *new_EventInfoCollection(void *p = nullptr);
   static void *newArray_EventInfoCollection(Long_t size, void *p);
   static void delete_EventInfoCollection(void *p);
   static void deleteArray_EventInfoCollection(void *p);
   static void destruct_EventInfoCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoCollection*)
   {
      ::EventInfoCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoCollection));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoCollection", 1, "", 108,
                  typeid(::EventInfoCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoCollection_Dictionary, isa_proxy, 12,
                  sizeof(::EventInfoCollection) );
      instance.SetNew(&new_EventInfoCollection);
      instance.SetNewArray(&newArray_EventInfoCollection);
      instance.SetDelete(&delete_EventInfoCollection);
      instance.SetDeleteArray(&deleteArray_EventInfoCollection);
      instance.SetDestructor(&destruct_EventInfoCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfoCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfoCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventInfoCollection*>(nullptr))->GetClass();
      EventInfoCollection_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitData_Dictionary();
   static void ExampleHitData_TClassManip(TClass*);
   static void *new_ExampleHitData(void *p = nullptr);
   static void *newArray_ExampleHitData(Long_t size, void *p);
   static void delete_ExampleHitData(void *p);
   static void deleteArray_ExampleHitData(void *p);
   static void destruct_ExampleHitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitData*)
   {
      ::ExampleHitData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitData", 1, "datamodel/ExampleHitData.h", 14,
                  typeid(::ExampleHitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleHitData) );
      instance.SetNew(&new_ExampleHitData);
      instance.SetNewArray(&newArray_ExampleHitData);
      instance.SetDelete(&delete_ExampleHitData);
      instance.SetDeleteArray(&deleteArray_ExampleHitData);
      instance.SetDestructor(&destruct_ExampleHitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHitData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHitData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHitData*>(nullptr))->GetClass();
      ExampleHitData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHit_Dictionary();
   static void ExampleHit_TClassManip(TClass*);
   static void *new_ExampleHit(void *p = nullptr);
   static void *newArray_ExampleHit(Long_t size, void *p);
   static void delete_ExampleHit(void *p);
   static void deleteArray_ExampleHit(void *p);
   static void destruct_ExampleHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHit*)
   {
      ::ExampleHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHit));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHit", 1, "datamodel/ExampleHit.h", 30,
                  typeid(::ExampleHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHit_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleHit) );
      instance.SetNew(&new_ExampleHit);
      instance.SetNewArray(&newArray_ExampleHit);
      instance.SetDelete(&delete_ExampleHit);
      instance.SetDeleteArray(&deleteArray_ExampleHit);
      instance.SetDestructor(&destruct_ExampleHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHit*>(nullptr))->GetClass();
      ExampleHit_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleHit_Dictionary();
   static void MutableExampleHit_TClassManip(TClass*);
   static void *new_MutableExampleHit(void *p = nullptr);
   static void *newArray_MutableExampleHit(Long_t size, void *p);
   static void delete_MutableExampleHit(void *p);
   static void deleteArray_MutableExampleHit(void *p);
   static void destruct_MutableExampleHit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleHit*)
   {
      ::MutableExampleHit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleHit));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleHit", 1, "datamodel/MutableExampleHit.h", 29,
                  typeid(::MutableExampleHit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleHit_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleHit) );
      instance.SetNew(&new_MutableExampleHit);
      instance.SetNewArray(&newArray_MutableExampleHit);
      instance.SetDelete(&delete_MutableExampleHit);
      instance.SetDeleteArray(&deleteArray_MutableExampleHit);
      instance.SetDestructor(&destruct_MutableExampleHit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleHit*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleHit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleHit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleHit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleHit*>(nullptr))->GetClass();
      MutableExampleHit_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleHit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleHitCollection_Dictionary();
   static void ExampleHitCollection_TClassManip(TClass*);
   static void *new_ExampleHitCollection(void *p = nullptr);
   static void *newArray_ExampleHitCollection(Long_t size, void *p);
   static void delete_ExampleHitCollection(void *p);
   static void deleteArray_ExampleHitCollection(void *p);
   static void destruct_ExampleHitCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleHitCollection*)
   {
      ::ExampleHitCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleHitCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleHitCollection", 1, "", 983,
                  typeid(::ExampleHitCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleHitCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleHitCollection) );
      instance.SetNew(&new_ExampleHitCollection);
      instance.SetNewArray(&newArray_ExampleHitCollection);
      instance.SetDelete(&delete_ExampleHitCollection);
      instance.SetDeleteArray(&deleteArray_ExampleHitCollection);
      instance.SetDestructor(&destruct_ExampleHitCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleHitCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleHitCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleHitCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleHitCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleHitCollection*>(nullptr))->GetClass();
      ExampleHitCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleHitCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleClusterData_Dictionary();
   static void ExampleClusterData_TClassManip(TClass*);
   static void *new_ExampleClusterData(void *p = nullptr);
   static void *newArray_ExampleClusterData(Long_t size, void *p);
   static void delete_ExampleClusterData(void *p);
   static void deleteArray_ExampleClusterData(void *p);
   static void destruct_ExampleClusterData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleClusterData*)
   {
      ::ExampleClusterData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleClusterData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleClusterData", 1, "datamodel/ExampleClusterData.h", 13,
                  typeid(::ExampleClusterData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleClusterData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleClusterData) );
      instance.SetNew(&new_ExampleClusterData);
      instance.SetNewArray(&newArray_ExampleClusterData);
      instance.SetDelete(&delete_ExampleClusterData);
      instance.SetDeleteArray(&deleteArray_ExampleClusterData);
      instance.SetDestructor(&destruct_ExampleClusterData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleClusterData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleClusterData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleClusterData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleClusterData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleClusterData*>(nullptr))->GetClass();
      ExampleClusterData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleClusterData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleCluster_Dictionary();
   static void ExampleCluster_TClassManip(TClass*);
   static void *new_ExampleCluster(void *p = nullptr);
   static void *newArray_ExampleCluster(Long_t size, void *p);
   static void delete_ExampleCluster(void *p);
   static void deleteArray_ExampleCluster(void *p);
   static void destruct_ExampleCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleCluster*)
   {
      ::ExampleCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleCluster));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleCluster", 1, "datamodel/ExampleCluster.h", 32,
                  typeid(::ExampleCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleCluster_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleCluster) );
      instance.SetNew(&new_ExampleCluster);
      instance.SetNewArray(&newArray_ExampleCluster);
      instance.SetDelete(&delete_ExampleCluster);
      instance.SetDeleteArray(&deleteArray_ExampleCluster);
      instance.SetDestructor(&destruct_ExampleCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleCluster*>(nullptr))->GetClass();
      ExampleCluster_TClassManip(theClass);
   return theClass;
   }

   static void ExampleCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleCluster_Dictionary();
   static void MutableExampleCluster_TClassManip(TClass*);
   static void *new_MutableExampleCluster(void *p = nullptr);
   static void *newArray_MutableExampleCluster(Long_t size, void *p);
   static void delete_MutableExampleCluster(void *p);
   static void deleteArray_MutableExampleCluster(void *p);
   static void destruct_MutableExampleCluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleCluster*)
   {
      ::MutableExampleCluster *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleCluster));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleCluster", 1, "datamodel/MutableExampleCluster.h", 31,
                  typeid(::MutableExampleCluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleCluster_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleCluster) );
      instance.SetNew(&new_MutableExampleCluster);
      instance.SetNewArray(&newArray_MutableExampleCluster);
      instance.SetDelete(&delete_MutableExampleCluster);
      instance.SetDeleteArray(&deleteArray_MutableExampleCluster);
      instance.SetDestructor(&destruct_MutableExampleCluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleCluster*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleCluster*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleCluster*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleCluster_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleCluster*>(nullptr))->GetClass();
      MutableExampleCluster_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleCluster_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleClusterCollection_Dictionary();
   static void ExampleClusterCollection_TClassManip(TClass*);
   static void *new_ExampleClusterCollection(void *p = nullptr);
   static void *newArray_ExampleClusterCollection(Long_t size, void *p);
   static void delete_ExampleClusterCollection(void *p);
   static void deleteArray_ExampleClusterCollection(void *p);
   static void destruct_ExampleClusterCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleClusterCollection*)
   {
      ::ExampleClusterCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleClusterCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleClusterCollection", 1, "", 1917,
                  typeid(::ExampleClusterCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleClusterCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleClusterCollection) );
      instance.SetNew(&new_ExampleClusterCollection);
      instance.SetNewArray(&newArray_ExampleClusterCollection);
      instance.SetDelete(&delete_ExampleClusterCollection);
      instance.SetDeleteArray(&deleteArray_ExampleClusterCollection);
      instance.SetDestructor(&destruct_ExampleClusterCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleClusterCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleClusterCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleClusterCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleClusterCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleClusterCollection*>(nullptr))->GetClass();
      ExampleClusterCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleClusterCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoData(void *p) {
      return  p ? new(p) ::EventInfoData : new ::EventInfoData;
   }
   static void *newArray_EventInfoData(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoData[nElements] : new ::EventInfoData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoData(void *p) {
      delete (static_cast<::EventInfoData*>(p));
   }
   static void deleteArray_EventInfoData(void *p) {
      delete [] (static_cast<::EventInfoData*>(p));
   }
   static void destruct_EventInfoData(void *p) {
      typedef ::EventInfoData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfo(void *p) {
      return  p ? new(p) ::EventInfo : new ::EventInfo;
   }
   static void *newArray_EventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfo[nElements] : new ::EventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfo(void *p) {
      delete (static_cast<::EventInfo*>(p));
   }
   static void deleteArray_EventInfo(void *p) {
      delete [] (static_cast<::EventInfo*>(p));
   }
   static void destruct_EventInfo(void *p) {
      typedef ::EventInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableEventInfo(void *p) {
      return  p ? new(p) ::MutableEventInfo : new ::MutableEventInfo;
   }
   static void *newArray_MutableEventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::MutableEventInfo[nElements] : new ::MutableEventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableEventInfo(void *p) {
      delete (static_cast<::MutableEventInfo*>(p));
   }
   static void deleteArray_MutableEventInfo(void *p) {
      delete [] (static_cast<::MutableEventInfo*>(p));
   }
   static void destruct_MutableEventInfo(void *p) {
      typedef ::MutableEventInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableEventInfo

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoCollection(void *p) {
      return  p ? new(p) ::EventInfoCollection : new ::EventInfoCollection;
   }
   static void *newArray_EventInfoCollection(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoCollection[nElements] : new ::EventInfoCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoCollection(void *p) {
      delete (static_cast<::EventInfoCollection*>(p));
   }
   static void deleteArray_EventInfoCollection(void *p) {
      delete [] (static_cast<::EventInfoCollection*>(p));
   }
   static void destruct_EventInfoCollection(void *p) {
      typedef ::EventInfoCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitData(void *p) {
      return  p ? new(p) ::ExampleHitData : new ::ExampleHitData;
   }
   static void *newArray_ExampleHitData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitData[nElements] : new ::ExampleHitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitData(void *p) {
      delete (static_cast<::ExampleHitData*>(p));
   }
   static void deleteArray_ExampleHitData(void *p) {
      delete [] (static_cast<::ExampleHitData*>(p));
   }
   static void destruct_ExampleHitData(void *p) {
      typedef ::ExampleHitData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHit(void *p) {
      return  p ? new(p) ::ExampleHit : new ::ExampleHit;
   }
   static void *newArray_ExampleHit(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHit[nElements] : new ::ExampleHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHit(void *p) {
      delete (static_cast<::ExampleHit*>(p));
   }
   static void deleteArray_ExampleHit(void *p) {
      delete [] (static_cast<::ExampleHit*>(p));
   }
   static void destruct_ExampleHit(void *p) {
      typedef ::ExampleHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleHit(void *p) {
      return  p ? new(p) ::MutableExampleHit : new ::MutableExampleHit;
   }
   static void *newArray_MutableExampleHit(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleHit[nElements] : new ::MutableExampleHit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleHit(void *p) {
      delete (static_cast<::MutableExampleHit*>(p));
   }
   static void deleteArray_MutableExampleHit(void *p) {
      delete [] (static_cast<::MutableExampleHit*>(p));
   }
   static void destruct_MutableExampleHit(void *p) {
      typedef ::MutableExampleHit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleHit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleHitCollection(void *p) {
      return  p ? new(p) ::ExampleHitCollection : new ::ExampleHitCollection;
   }
   static void *newArray_ExampleHitCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleHitCollection[nElements] : new ::ExampleHitCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleHitCollection(void *p) {
      delete (static_cast<::ExampleHitCollection*>(p));
   }
   static void deleteArray_ExampleHitCollection(void *p) {
      delete [] (static_cast<::ExampleHitCollection*>(p));
   }
   static void destruct_ExampleHitCollection(void *p) {
      typedef ::ExampleHitCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleHitCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleClusterData(void *p) {
      return  p ? new(p) ::ExampleClusterData : new ::ExampleClusterData;
   }
   static void *newArray_ExampleClusterData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleClusterData[nElements] : new ::ExampleClusterData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleClusterData(void *p) {
      delete (static_cast<::ExampleClusterData*>(p));
   }
   static void deleteArray_ExampleClusterData(void *p) {
      delete [] (static_cast<::ExampleClusterData*>(p));
   }
   static void destruct_ExampleClusterData(void *p) {
      typedef ::ExampleClusterData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleClusterData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleCluster(void *p) {
      return  p ? new(p) ::ExampleCluster : new ::ExampleCluster;
   }
   static void *newArray_ExampleCluster(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleCluster[nElements] : new ::ExampleCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleCluster(void *p) {
      delete (static_cast<::ExampleCluster*>(p));
   }
   static void deleteArray_ExampleCluster(void *p) {
      delete [] (static_cast<::ExampleCluster*>(p));
   }
   static void destruct_ExampleCluster(void *p) {
      typedef ::ExampleCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleCluster(void *p) {
      return  p ? new(p) ::MutableExampleCluster : new ::MutableExampleCluster;
   }
   static void *newArray_MutableExampleCluster(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleCluster[nElements] : new ::MutableExampleCluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleCluster(void *p) {
      delete (static_cast<::MutableExampleCluster*>(p));
   }
   static void deleteArray_MutableExampleCluster(void *p) {
      delete [] (static_cast<::MutableExampleCluster*>(p));
   }
   static void destruct_MutableExampleCluster(void *p) {
      typedef ::MutableExampleCluster current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleCluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleClusterCollection(void *p) {
      return  p ? new(p) ::ExampleClusterCollection : new ::ExampleClusterCollection;
   }
   static void *newArray_ExampleClusterCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleClusterCollection[nElements] : new ::ExampleClusterCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleClusterCollection(void *p) {
      delete (static_cast<::ExampleClusterCollection*>(p));
   }
   static void deleteArray_ExampleClusterCollection(void *p) {
      delete [] (static_cast<::ExampleClusterCollection*>(p));
   }
   static void destruct_ExampleClusterCollection(void *p) {
      typedef ::ExampleClusterCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleClusterCollection

namespace ROOT {
   static TClass *vectorlEExampleHitDatagR_Dictionary();
   static void vectorlEExampleHitDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleHitDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleHitDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleHitDatagR(void *p);
   static void deleteArray_vectorlEExampleHitDatagR(void *p);
   static void destruct_vectorlEExampleHitDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleHitData>*)
   {
      vector<ExampleHitData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleHitData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleHitData>", -2, "vector", 423,
                  typeid(vector<ExampleHitData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleHitDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleHitData>) );
      instance.SetNew(&new_vectorlEExampleHitDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleHitDatagR);
      instance.SetDelete(&delete_vectorlEExampleHitDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleHitDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleHitDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleHitData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleHitData>","std::vector<ExampleHitData, std::allocator<ExampleHitData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleHitData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleHitDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleHitData>*>(nullptr))->GetClass();
      vectorlEExampleHitDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleHitDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleHitDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleHitData> : new vector<ExampleHitData>;
   }
   static void *newArray_vectorlEExampleHitDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleHitData>[nElements] : new vector<ExampleHitData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleHitDatagR(void *p) {
      delete (static_cast<vector<ExampleHitData>*>(p));
   }
   static void deleteArray_vectorlEExampleHitDatagR(void *p) {
      delete [] (static_cast<vector<ExampleHitData>*>(p));
   }
   static void destruct_vectorlEExampleHitDatagR(void *p) {
      typedef vector<ExampleHitData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleHitData>

namespace ROOT {
   static TClass *vectorlEExampleClusterDatagR_Dictionary();
   static void vectorlEExampleClusterDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleClusterDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleClusterDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleClusterDatagR(void *p);
   static void deleteArray_vectorlEExampleClusterDatagR(void *p);
   static void destruct_vectorlEExampleClusterDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleClusterData>*)
   {
      vector<ExampleClusterData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleClusterData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleClusterData>", -2, "vector", 423,
                  typeid(vector<ExampleClusterData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleClusterDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleClusterData>) );
      instance.SetNew(&new_vectorlEExampleClusterDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleClusterDatagR);
      instance.SetDelete(&delete_vectorlEExampleClusterDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleClusterDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleClusterDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleClusterData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleClusterData>","std::vector<ExampleClusterData, std::allocator<ExampleClusterData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleClusterData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleClusterDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleClusterData>*>(nullptr))->GetClass();
      vectorlEExampleClusterDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleClusterDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleClusterDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleClusterData> : new vector<ExampleClusterData>;
   }
   static void *newArray_vectorlEExampleClusterDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleClusterData>[nElements] : new vector<ExampleClusterData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleClusterDatagR(void *p) {
      delete (static_cast<vector<ExampleClusterData>*>(p));
   }
   static void deleteArray_vectorlEExampleClusterDatagR(void *p) {
      delete [] (static_cast<vector<ExampleClusterData>*>(p));
   }
   static void destruct_vectorlEExampleClusterDatagR(void *p) {
      typedef vector<ExampleClusterData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleClusterData>

namespace ROOT {
   static TClass *vectorlEEventInfoDatagR_Dictionary();
   static void vectorlEEventInfoDatagR_TClassManip(TClass*);
   static void *new_vectorlEEventInfoDatagR(void *p = nullptr);
   static void *newArray_vectorlEEventInfoDatagR(Long_t size, void *p);
   static void delete_vectorlEEventInfoDatagR(void *p);
   static void deleteArray_vectorlEEventInfoDatagR(void *p);
   static void destruct_vectorlEEventInfoDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventInfoData>*)
   {
      vector<EventInfoData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventInfoData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventInfoData>", -2, "vector", 423,
                  typeid(vector<EventInfoData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventInfoDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EventInfoData>) );
      instance.SetNew(&new_vectorlEEventInfoDatagR);
      instance.SetNewArray(&newArray_vectorlEEventInfoDatagR);
      instance.SetDelete(&delete_vectorlEEventInfoDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventInfoDatagR);
      instance.SetDestructor(&destruct_vectorlEEventInfoDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventInfoData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EventInfoData>","std::vector<EventInfoData, std::allocator<EventInfoData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EventInfoData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventInfoDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EventInfoData>*>(nullptr))->GetClass();
      vectorlEEventInfoDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventInfoDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventInfoDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EventInfoData> : new vector<EventInfoData>;
   }
   static void *newArray_vectorlEEventInfoDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EventInfoData>[nElements] : new vector<EventInfoData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventInfoDatagR(void *p) {
      delete (static_cast<vector<EventInfoData>*>(p));
   }
   static void deleteArray_vectorlEEventInfoDatagR(void *p) {
      delete [] (static_cast<vector<EventInfoData>*>(p));
   }
   static void destruct_vectorlEEventInfoDatagR(void *p) {
      typedef vector<EventInfoData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EventInfoData>

namespace {
  void TriggerDictionaryInitialization_libPodioExampleDatamodelDict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"/home/tsai/eic/JANA2.src/src/examples/PodioExample",
"/usr/local/include/root",
"/usr/local/include/root",
"/home/tsai/eic/podio/include",
"/home/tsai/eic/JANA2.src/src/libraries",
"/usr/local/include/root",
"/usr/local/include/root",
"/home/tsai/eic/podio/include",
"/home/tsai/eic/JANA2.src/src/libraries",
"/home/tsai/eic/JANA2.src/src/examples/PodioExample",
"/home/tsai/eic/JANA2.src/src/examples/PodioExample",
"/home/tsai/eic/podio/include",
"/usr/local/include/root",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/JANA2.build/src/examples/PodioExample/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libPodioExampleDatamodelDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfoData.h")))  EventInfoData;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfo.h")))  EventInfo;
class __attribute__((annotate("$clingAutoload$datamodel/MutableEventInfo.h")))  MutableEventInfo;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHitData.h")))  ExampleHitData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterData.h")))  ExampleClusterData;
class EventInfoCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHit.h")))  ExampleHit;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleHit.h")))  MutableExampleHit;
class ExampleHitCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleCluster.h")))  ExampleCluster;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleCluster.h")))  MutableExampleCluster;
class ExampleClusterCollection;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libPodioExampleDatamodelDict dictionary payload"

#ifndef JANA2_HAVE_ROOT
  #define JANA2_HAVE_ROOT 1
#endif
#ifndef JANA2_HAVE_PODIO
  #define JANA2_HAVE_PODIO 1
#endif
#ifndef JANA2_HAVE_ROOT
  #define JANA2_HAVE_ROOT 1
#endif
#ifndef JANA2_HAVE_PODIO
  #define JANA2_HAVE_PODIO 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoCollection_H
#define DATAMODEL_EventInfoCollection_H

// datamodel specific includes
#include "datamodel/EventInfoData.h"
#include "datamodel/EventInfo.h"
#include "datamodel/MutableEventInfo.h"
#include "datamodel/EventInfoObj.h"
#include "datamodel/EventInfoCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class EventInfoCollectionIterator {
public:
  EventInfoCollectionIterator(size_t index, const EventInfoObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoObj>{nullptr}), m_collection(collection) {}

  EventInfoCollectionIterator(const EventInfoCollectionIterator&) = delete;
  EventInfoCollectionIterator& operator=(const EventInfoCollectionIterator&) = delete;

  bool operator!=(const EventInfoCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  EventInfo operator*();
  EventInfo* operator->();
  EventInfoCollectionIterator& operator++();

private:
  size_t m_index;
  EventInfo m_object;
  const EventInfoObjPointerContainer* m_collection;
};


class EventInfoMutableCollectionIterator {
public:
  EventInfoMutableCollectionIterator(size_t index, const EventInfoObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoObj>{nullptr}), m_collection(collection) {}

  EventInfoMutableCollectionIterator(const EventInfoMutableCollectionIterator&) = delete;
  EventInfoMutableCollectionIterator& operator=(const EventInfoMutableCollectionIterator&) = delete;

  bool operator!=(const EventInfoMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableEventInfo operator*();
  MutableEventInfo* operator->();
  EventInfoMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableEventInfo m_object;
  const EventInfoObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class EventInfoCollection : public podio::CollectionBase {
public:
  using value_type = EventInfo;
  using const_iterator = EventInfoCollectionIterator;
  using iterator = EventInfoMutableCollectionIterator;

  EventInfoCollection();
  EventInfoCollection(EventInfoCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  EventInfoCollection(const EventInfoCollection& ) = delete;
  EventInfoCollection& operator=(const EventInfoCollection& ) = delete;
  EventInfoCollection(EventInfoCollection&&) = default;
  EventInfoCollection& operator=(EventInfoCollection&&) = default;

//  EventInfoCollection(EventInfoVector* data, uint32_t collectionID);
  ~EventInfoCollection();

  constexpr static auto typeName = "EventInfoCollection";
  constexpr static auto valueTypeName = "EventInfo";
  constexpr static auto dataTypeName = "EventInfoData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  EventInfoCollection* operator->() { return (EventInfoCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableEventInfo create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableEventInfo create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  EventInfo operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableEventInfo operator[](std::size_t index);
  /// Returns the const object of given index
  EventInfo at(std::size_t index) const;
  /// Returns the object of given index
  MutableEventInfo at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableEventInfo object);
  /// Append an object to the (subset) collection
  void push_back(EventInfo object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (EventInfoObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<int> EventNumber(const size_t nElem = 0) const;
  std::vector<int> RunNumber(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class EventInfoCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable EventInfoCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const EventInfoCollection& v);

template<typename... Args>
MutableEventInfo EventInfoCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new EventInfoObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableEventInfo(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoDATA_H
#define DATAMODEL_EventInfoDATA_H




/** @class EventInfoData
 *  Event info
 *  @author: N. Brei
 */
class EventInfoData {
public:
  int EventNumber{}; ///< event number
  int RunNumber{}; ///< run number

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfo_H
#define DATAMODEL_EventInfo_H

#include "datamodel/EventInfoObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableEventInfo;
class EventInfoCollection;
class EventInfoCollectionData;

/** @class EventInfo
 *  Event info
 *  @author: N. Brei
 */
class EventInfo {

  friend class MutableEventInfo;
  friend class EventInfoCollection;
  friend class EventInfoCollectionData;
  friend class EventInfoCollectionIterator;

public:
  using mutable_type = MutableEventInfo;
  using collection_type = EventInfoCollection;

  /// default constructor
  EventInfo();

  /// Constructor initializing all members
  EventInfo(int EventNumber, int RunNumber);

  /// copy constructor
  EventInfo(const EventInfo& other) = default;

  /// copy-assignment operator
  EventInfo& operator=(EventInfo other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventInfo clone() const;

  /// destructor
  ~EventInfo() = default;

  /// converting constructor from mutable object
  EventInfo(const MutableEventInfo& other);

  static EventInfo makeEmpty();

public:

  /// Access the event number
  int EventNumber() const;

  /// Access the run number
  int RunNumber() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<EventInfoObj>{nullptr}; }

  bool operator==(const EventInfo& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableEventInfo& other) const;

  bool operator!=(const EventInfo& other) const { return !(*this == other); }
  bool operator!=(const MutableEventInfo& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const EventInfo& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(EventInfo& a, EventInfo& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing EventInfoObj
  explicit EventInfo(podio::utils::MaybeSharedPtr<EventInfoObj> obj);
  EventInfo(EventInfoObj* obj);

  podio::utils::MaybeSharedPtr<EventInfoObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const EventInfo& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfo& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableEventInfo_H
#define DATAMODEL_MutableEventInfo_H

#include "datamodel/EventInfoObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/EventInfo.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableEventInfo
 *  Event info
 *  @author: N. Brei
 */
class MutableEventInfo {

  friend class EventInfoCollection;
  friend class EventInfoMutableCollectionIterator;
  friend class EventInfo;

public:
  using object_type = EventInfo;
  using collection_type = EventInfoCollection;

  /// default constructor
  MutableEventInfo();

  /// Constructor initializing all members
  MutableEventInfo(int EventNumber, int RunNumber);

  /// copy constructor
  MutableEventInfo(const MutableEventInfo& other) = default;

  /// copy-assignment operator
  MutableEventInfo& operator=(MutableEventInfo other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventInfo clone() const;

  /// destructor
  ~MutableEventInfo() = default;


public:

  /// Access the event number
  int EventNumber() const;

  /// Access the run number
  int RunNumber() const;



  /// Set the event number
  void EventNumber(int value);
  /// Get mutable reference to event number
  int& EventNumber();

  /// Set the run number
  void RunNumber(int value);
  /// Get mutable reference to run number
  int& RunNumber();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<EventInfoObj>{nullptr}; }

  bool operator==(const MutableEventInfo& other) const { return m_obj == other.m_obj; }
  bool operator==(const EventInfo& other) const;

  bool operator!=(const MutableEventInfo& other) const { return !(*this == other); }
  bool operator!=(const EventInfo& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableEventInfo& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableEventInfo& a, MutableEventInfo& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing EventInfoObj
  explicit MutableEventInfo(podio::utils::MaybeSharedPtr<EventInfoObj> obj);

  podio::utils::MaybeSharedPtr<EventInfoObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableEventInfo& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoOBJ_H
#define DATAMODEL_EventInfoOBJ_H

// data model specific includes
#include "datamodel/EventInfoData.h"

#include "podio/ObjectID.h"




class EventInfo;

class EventInfoObj {
public:
  /// constructor
  EventInfoObj();
  /// copy constructor (does a deep-copy of relation containers)
  EventInfoObj(const EventInfoObj&);
  /// constructor from ObjectID and EventInfoData
  /// does not initialize the internal relation containers
  EventInfoObj(const podio::ObjectID id, EventInfoData data);
  /// No assignment operator
  EventInfoObj& operator=(const EventInfoObj&) = delete;
  virtual ~EventInfoObj() = default;

public:
  podio::ObjectID id;
  EventInfoData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoCollection_H
#define DATAMODEL_EventInfoCollection_H

// datamodel specific includes
#include "datamodel/EventInfoData.h"
#include "datamodel/EventInfo.h"
#include "datamodel/MutableEventInfo.h"
#include "datamodel/EventInfoObj.h"
#include "datamodel/EventInfoCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class EventInfoCollectionIterator {
public:
  EventInfoCollectionIterator(size_t index, const EventInfoObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoObj>{nullptr}), m_collection(collection) {}

  EventInfoCollectionIterator(const EventInfoCollectionIterator&) = delete;
  EventInfoCollectionIterator& operator=(const EventInfoCollectionIterator&) = delete;

  bool operator!=(const EventInfoCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  EventInfo operator*();
  EventInfo* operator->();
  EventInfoCollectionIterator& operator++();

private:
  size_t m_index;
  EventInfo m_object;
  const EventInfoObjPointerContainer* m_collection;
};


class EventInfoMutableCollectionIterator {
public:
  EventInfoMutableCollectionIterator(size_t index, const EventInfoObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoObj>{nullptr}), m_collection(collection) {}

  EventInfoMutableCollectionIterator(const EventInfoMutableCollectionIterator&) = delete;
  EventInfoMutableCollectionIterator& operator=(const EventInfoMutableCollectionIterator&) = delete;

  bool operator!=(const EventInfoMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableEventInfo operator*();
  MutableEventInfo* operator->();
  EventInfoMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableEventInfo m_object;
  const EventInfoObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class EventInfoCollection : public podio::CollectionBase {
public:
  using value_type = EventInfo;
  using const_iterator = EventInfoCollectionIterator;
  using iterator = EventInfoMutableCollectionIterator;

  EventInfoCollection();
  EventInfoCollection(EventInfoCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  EventInfoCollection(const EventInfoCollection& ) = delete;
  EventInfoCollection& operator=(const EventInfoCollection& ) = delete;
  EventInfoCollection(EventInfoCollection&&) = default;
  EventInfoCollection& operator=(EventInfoCollection&&) = default;

//  EventInfoCollection(EventInfoVector* data, uint32_t collectionID);
  ~EventInfoCollection();

  constexpr static auto typeName = "EventInfoCollection";
  constexpr static auto valueTypeName = "EventInfo";
  constexpr static auto dataTypeName = "EventInfoData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  EventInfoCollection* operator->() { return (EventInfoCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableEventInfo create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableEventInfo create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  EventInfo operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableEventInfo operator[](std::size_t index);
  /// Returns the const object of given index
  EventInfo at(std::size_t index) const;
  /// Returns the object of given index
  MutableEventInfo at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableEventInfo object);
  /// Append an object to the (subset) collection
  void push_back(EventInfo object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (EventInfoObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<int> EventNumber(const size_t nElem = 0) const;
  std::vector<int> RunNumber(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class EventInfoCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable EventInfoCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const EventInfoCollection& v);

template<typename... Args>
MutableEventInfo EventInfoCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new EventInfoObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableEventInfo(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfo_CollectionData_H
#define DATAMODEL_EventInfo_CollectionData_H

// datamodel specific includes
#include "datamodel/EventInfoData.h"
#include "datamodel/EventInfoObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using EventInfoObjPointerContainer = std::deque<EventInfoObj*>;
using EventInfoDataContainer = std::vector<EventInfoData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class EventInfoCollectionData {
public:
  /**
   * The Objs of this collection
   */
  EventInfoObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  EventInfoCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  EventInfoCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  EventInfoCollectionData(const EventInfoCollectionData&) = delete;
  EventInfoCollectionData& operator=(const EventInfoCollectionData&) = delete;
  EventInfoCollectionData(EventInfoCollectionData&& other) = default;
  EventInfoCollectionData& operator=(EventInfoCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~EventInfoCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<EventInfoDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitCollection_H
#define DATAMODEL_ExampleHitCollection_H

// datamodel specific includes
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHit.h"
#include "datamodel/MutableExampleHit.h"
#include "datamodel/ExampleHitObj.h"
#include "datamodel/ExampleHitCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class ExampleHitCollectionIterator {
public:
  ExampleHitCollectionIterator(size_t index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}), m_collection(collection) {}

  ExampleHitCollectionIterator(const ExampleHitCollectionIterator&) = delete;
  ExampleHitCollectionIterator& operator=(const ExampleHitCollectionIterator&) = delete;

  bool operator!=(const ExampleHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleHitCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleHit operator*();
  ExampleHit* operator->();
  ExampleHitCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};


class ExampleHitMutableCollectionIterator {
public:
  ExampleHitMutableCollectionIterator(size_t index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}), m_collection(collection) {}

  ExampleHitMutableCollectionIterator(const ExampleHitMutableCollectionIterator&) = delete;
  ExampleHitMutableCollectionIterator& operator=(const ExampleHitMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleHitMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleHit operator*();
  MutableExampleHit* operator->();
  ExampleHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleHitCollection : public podio::CollectionBase {
public:
  using value_type = ExampleHit;
  using const_iterator = ExampleHitCollectionIterator;
  using iterator = ExampleHitMutableCollectionIterator;

  ExampleHitCollection();
  ExampleHitCollection(ExampleHitCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleHitCollection(const ExampleHitCollection& ) = delete;
  ExampleHitCollection& operator=(const ExampleHitCollection& ) = delete;
  ExampleHitCollection(ExampleHitCollection&&) = default;
  ExampleHitCollection& operator=(ExampleHitCollection&&) = default;

//  ExampleHitCollection(ExampleHitVector* data, uint32_t collectionID);
  ~ExampleHitCollection();

  constexpr static auto typeName = "ExampleHitCollection";
  constexpr static auto valueTypeName = "ExampleHit";
  constexpr static auto dataTypeName = "ExampleHitData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleHitCollection* operator->() { return (ExampleHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleHit create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ExampleHit operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleHit operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleHit at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleHit at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleHit object);
  /// Append an object to the (subset) collection
  void push_back(ExampleHit object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleHitObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<unsigned long long> cellID(const size_t nElem = 0) const;
  std::vector<double> x(const size_t nElem = 0) const;
  std::vector<double> y(const size_t nElem = 0) const;
  std::vector<double> z(const size_t nElem = 0) const;
  std::vector<double> energy(const size_t nElem = 0) const;
  std::vector<std::uint64_t> time(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleHitCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleHitCollection& v);

template<typename... Args>
MutableExampleHit ExampleHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleHit(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleHitCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitDATA_H
#define DATAMODEL_ExampleHitDATA_H

#include <cstdint>



/** @class ExampleHitData
 *  Example Hit
 *  @author: B. Hegner
 */
class ExampleHitData {
public:
  unsigned long long cellID{}; ///< cellID
  double x{}; ///< x-coordinate
  double y{}; ///< y-coordinate
  double z{}; ///< z-coordinate
  double energy{}; ///< measured energy deposit
  std::uint64_t time{}; ///< ticks since start of timeframe

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHit_H
#define DATAMODEL_ExampleHit_H

#include "datamodel/ExampleHitObj.h"

#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleHit;
class ExampleHitCollection;
class ExampleHitCollectionData;

/** @class ExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class ExampleHit {

  friend class MutableExampleHit;
  friend class ExampleHitCollection;
  friend class ExampleHitCollectionData;
  friend class ExampleHitCollectionIterator;

public:
  using mutable_type = MutableExampleHit;
  using collection_type = ExampleHitCollection;

  /// default constructor
  ExampleHit();

  /// Constructor initializing all members
  ExampleHit(unsigned long long cellID, double x, double y, double z, double energy, std::uint64_t time);

  /// copy constructor
  ExampleHit(const ExampleHit& other) = default;

  /// copy-assignment operator
  ExampleHit& operator=(ExampleHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleHit clone() const;

  /// destructor
  ~ExampleHit() = default;

  /// converting constructor from mutable object
  ExampleHit(const MutableExampleHit& other);

  static ExampleHit makeEmpty();

public:

  /// Access the cellID
  unsigned long long cellID() const;

  /// Access the x-coordinate
  double x() const;

  /// Access the y-coordinate
  double y() const;

  /// Access the z-coordinate
  double z() const;

  /// Access the measured energy deposit
  double energy() const;

  /// Access the ticks since start of timeframe
  std::uint64_t time() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}; }

  bool operator==(const ExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleHit& other) const;

  bool operator!=(const ExampleHit& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleHit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleHit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleHit& a, ExampleHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleHitObj
  explicit ExampleHit(podio::utils::MaybeSharedPtr<ExampleHitObj> obj);
  ExampleHit(ExampleHitObj* obj);

  podio::utils::MaybeSharedPtr<ExampleHitObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleHit& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleHit& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleHit_H
#define DATAMODEL_MutableExampleHit_H

#include "datamodel/ExampleHitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleHit.h"

#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleHit
 *  Example Hit
 *  @author: B. Hegner
 */
class MutableExampleHit {

  friend class ExampleHitCollection;
  friend class ExampleHitMutableCollectionIterator;
  friend class ExampleHit;

public:
  using object_type = ExampleHit;
  using collection_type = ExampleHitCollection;

  /// default constructor
  MutableExampleHit();

  /// Constructor initializing all members
  MutableExampleHit(unsigned long long cellID, double x, double y, double z, double energy, std::uint64_t time);

  /// copy constructor
  MutableExampleHit(const MutableExampleHit& other) = default;

  /// copy-assignment operator
  MutableExampleHit& operator=(MutableExampleHit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleHit clone() const;

  /// destructor
  ~MutableExampleHit() = default;


public:

  /// Access the cellID
  unsigned long long cellID() const;

  /// Access the x-coordinate
  double x() const;

  /// Access the y-coordinate
  double y() const;

  /// Access the z-coordinate
  double z() const;

  /// Access the measured energy deposit
  double energy() const;

  /// Access the ticks since start of timeframe
  std::uint64_t time() const;



  /// Set the cellID
  void cellID(unsigned long long value);
  /// Get mutable reference to cellID
  unsigned long long& cellID();

  /// Set the x-coordinate
  void x(double value);
  /// Get mutable reference to x-coordinate
  double& x();

  /// Set the y-coordinate
  void y(double value);
  /// Get mutable reference to y-coordinate
  double& y();

  /// Set the z-coordinate
  void z(double value);
  /// Get mutable reference to z-coordinate
  double& z();

  /// Set the measured energy deposit
  void energy(double value);
  /// Get mutable reference to measured energy deposit
  double& energy();

  /// Set the ticks since start of timeframe
  void time(std::uint64_t value);
  /// Get mutable reference to ticks since start of timeframe
  std::uint64_t& time();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleHitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}; }

  bool operator==(const MutableExampleHit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleHit& other) const;

  bool operator!=(const MutableExampleHit& other) const { return !(*this == other); }
  bool operator!=(const ExampleHit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleHit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleHit& a, MutableExampleHit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleHitObj
  explicit MutableExampleHit(podio::utils::MaybeSharedPtr<ExampleHitObj> obj);

  podio::utils::MaybeSharedPtr<ExampleHitObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleHit& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitOBJ_H
#define DATAMODEL_ExampleHitOBJ_H

// data model specific includes
#include "datamodel/ExampleHitData.h"

#include "podio/ObjectID.h"




class ExampleHit;

class ExampleHitObj {
public:
  /// constructor
  ExampleHitObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleHitObj(const ExampleHitObj&);
  /// constructor from ObjectID and ExampleHitData
  /// does not initialize the internal relation containers
  ExampleHitObj(const podio::ObjectID id, ExampleHitData data);
  /// No assignment operator
  ExampleHitObj& operator=(const ExampleHitObj&) = delete;
  virtual ~ExampleHitObj() = default;

public:
  podio::ObjectID id;
  ExampleHitData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHitCollection_H
#define DATAMODEL_ExampleHitCollection_H

// datamodel specific includes
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHit.h"
#include "datamodel/MutableExampleHit.h"
#include "datamodel/ExampleHitObj.h"
#include "datamodel/ExampleHitCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class ExampleHitCollectionIterator {
public:
  ExampleHitCollectionIterator(size_t index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}), m_collection(collection) {}

  ExampleHitCollectionIterator(const ExampleHitCollectionIterator&) = delete;
  ExampleHitCollectionIterator& operator=(const ExampleHitCollectionIterator&) = delete;

  bool operator!=(const ExampleHitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleHitCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleHit operator*();
  ExampleHit* operator->();
  ExampleHitCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};


class ExampleHitMutableCollectionIterator {
public:
  ExampleHitMutableCollectionIterator(size_t index, const ExampleHitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleHitObj>{nullptr}), m_collection(collection) {}

  ExampleHitMutableCollectionIterator(const ExampleHitMutableCollectionIterator&) = delete;
  ExampleHitMutableCollectionIterator& operator=(const ExampleHitMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleHitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleHitMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleHit operator*();
  MutableExampleHit* operator->();
  ExampleHitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleHit m_object;
  const ExampleHitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleHitCollection : public podio::CollectionBase {
public:
  using value_type = ExampleHit;
  using const_iterator = ExampleHitCollectionIterator;
  using iterator = ExampleHitMutableCollectionIterator;

  ExampleHitCollection();
  ExampleHitCollection(ExampleHitCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleHitCollection(const ExampleHitCollection& ) = delete;
  ExampleHitCollection& operator=(const ExampleHitCollection& ) = delete;
  ExampleHitCollection(ExampleHitCollection&&) = default;
  ExampleHitCollection& operator=(ExampleHitCollection&&) = default;

//  ExampleHitCollection(ExampleHitVector* data, uint32_t collectionID);
  ~ExampleHitCollection();

  constexpr static auto typeName = "ExampleHitCollection";
  constexpr static auto valueTypeName = "ExampleHit";
  constexpr static auto dataTypeName = "ExampleHitData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleHitCollection* operator->() { return (ExampleHitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleHit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleHit create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ExampleHit operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleHit operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleHit at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleHit at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleHit object);
  /// Append an object to the (subset) collection
  void push_back(ExampleHit object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleHitObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<unsigned long long> cellID(const size_t nElem = 0) const;
  std::vector<double> x(const size_t nElem = 0) const;
  std::vector<double> y(const size_t nElem = 0) const;
  std::vector<double> z(const size_t nElem = 0) const;
  std::vector<double> energy(const size_t nElem = 0) const;
  std::vector<std::uint64_t> time(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleHitCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleHitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleHitCollection& v);

template<typename... Args>
MutableExampleHit ExampleHitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleHitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleHit(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleHitCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHit_CollectionData_H
#define DATAMODEL_ExampleHit_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleHitData.h"
#include "datamodel/ExampleHitObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleHitObjPointerContainer = std::deque<ExampleHitObj*>;
using ExampleHitDataContainer = std::vector<ExampleHitData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleHitCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleHitObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleHitCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleHitCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleHitCollectionData(const ExampleHitCollectionData&) = delete;
  ExampleHitCollectionData& operator=(const ExampleHitCollectionData&) = delete;
  ExampleHitCollectionData(ExampleHitCollectionData&& other) = default;
  ExampleHitCollectionData& operator=(ExampleHitCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleHitCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleHitDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterCollection_H
#define DATAMODEL_ExampleClusterCollection_H

// datamodel specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleCluster.h"
#include "datamodel/MutableExampleCluster.h"
#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleClusterCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class ExampleClusterCollectionIterator {
public:
  ExampleClusterCollectionIterator(size_t index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}), m_collection(collection) {}

  ExampleClusterCollectionIterator(const ExampleClusterCollectionIterator&) = delete;
  ExampleClusterCollectionIterator& operator=(const ExampleClusterCollectionIterator&) = delete;

  bool operator!=(const ExampleClusterCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleClusterCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleCluster operator*();
  ExampleCluster* operator->();
  ExampleClusterCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};


class ExampleClusterMutableCollectionIterator {
public:
  ExampleClusterMutableCollectionIterator(size_t index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}), m_collection(collection) {}

  ExampleClusterMutableCollectionIterator(const ExampleClusterMutableCollectionIterator&) = delete;
  ExampleClusterMutableCollectionIterator& operator=(const ExampleClusterMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleClusterMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleClusterMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleCluster operator*();
  MutableExampleCluster* operator->();
  ExampleClusterMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleClusterCollection : public podio::CollectionBase {
public:
  using value_type = ExampleCluster;
  using const_iterator = ExampleClusterCollectionIterator;
  using iterator = ExampleClusterMutableCollectionIterator;

  ExampleClusterCollection();
  ExampleClusterCollection(ExampleClusterCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleClusterCollection(const ExampleClusterCollection& ) = delete;
  ExampleClusterCollection& operator=(const ExampleClusterCollection& ) = delete;
  ExampleClusterCollection(ExampleClusterCollection&&) = default;
  ExampleClusterCollection& operator=(ExampleClusterCollection&&) = default;

//  ExampleClusterCollection(ExampleClusterVector* data, uint32_t collectionID);
  ~ExampleClusterCollection();

  constexpr static auto typeName = "ExampleClusterCollection";
  constexpr static auto valueTypeName = "ExampleCluster";
  constexpr static auto dataTypeName = "ExampleClusterData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleClusterCollection* operator->() { return (ExampleClusterCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleCluster create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleCluster create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ExampleCluster operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleCluster operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleCluster at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleCluster at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleCluster object);
  /// Append an object to the (subset) collection
  void push_back(ExampleCluster object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleClusterObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<double> energy(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleClusterCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleClusterCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleClusterCollection& v);

template<typename... Args>
MutableExampleCluster ExampleClusterCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleClusterObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleClusterData} constructor
  obj->m_Hits = new std::vector<ExampleHit>();
  obj->m_Clusters = new std::vector<ExampleCluster>();
  m_storage.createRelations(obj);
  return MutableExampleCluster(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleClusterCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterDATA_H
#define DATAMODEL_ExampleClusterDATA_H




/** @class ExampleClusterData
 *  Cluster
 *  @author: B. Hegner
 */
class ExampleClusterData {
public:
  double energy{}; ///< cluster energy

  unsigned int Hits_begin{};
  unsigned int Hits_end{};
  unsigned int Clusters_begin{};
  unsigned int Clusters_end{};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleCluster_H
#define DATAMODEL_ExampleCluster_H

#include "datamodel/ExampleClusterObj.h"

#include "datamodel/ExampleHit.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleCluster;
class ExampleClusterCollection;
class ExampleClusterCollectionData;

/** @class ExampleCluster
 *  Cluster
 *  @author: B. Hegner
 */
class ExampleCluster {

  friend class MutableExampleCluster;
  friend class ExampleClusterCollection;
  friend class ExampleClusterCollectionData;
  friend class ExampleClusterCollectionIterator;

public:
  using mutable_type = MutableExampleCluster;
  using collection_type = ExampleClusterCollection;

  /// default constructor
  ExampleCluster();

  /// Constructor initializing all members
  ExampleCluster(double energy);

  /// copy constructor
  ExampleCluster(const ExampleCluster& other) = default;

  /// copy-assignment operator
  ExampleCluster& operator=(ExampleCluster other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleCluster clone() const;

  /// destructor
  ~ExampleCluster() = default;

  /// converting constructor from mutable object
  ExampleCluster(const MutableExampleCluster& other);

  static ExampleCluster makeEmpty();

public:

  /// Access the cluster energy
  double energy() const;



  std::size_t Hits_size() const;
  ExampleHit Hits(std::size_t) const;
  std::vector<ExampleHit>::const_iterator Hits_begin() const;
  std::vector<ExampleHit>::const_iterator Hits_end() const;
  podio::RelationRange<ExampleHit> Hits() const;
  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleClusterObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}; }

  bool operator==(const ExampleCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleCluster& other) const;

  bool operator!=(const ExampleCluster& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleCluster& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleCluster& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleCluster& a, ExampleCluster& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleClusterObj
  explicit ExampleCluster(podio::utils::MaybeSharedPtr<ExampleClusterObj> obj);
  ExampleCluster(ExampleClusterObj* obj);

  podio::utils::MaybeSharedPtr<ExampleClusterObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleCluster& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleCluster& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleCluster_H
#define DATAMODEL_MutableExampleCluster_H

#include "datamodel/ExampleClusterObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleCluster.h"

#include "datamodel/ExampleHit.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleCluster
 *  Cluster
 *  @author: B. Hegner
 */
class MutableExampleCluster {

  friend class ExampleClusterCollection;
  friend class ExampleClusterMutableCollectionIterator;
  friend class ExampleCluster;

public:
  using object_type = ExampleCluster;
  using collection_type = ExampleClusterCollection;

  /// default constructor
  MutableExampleCluster();

  /// Constructor initializing all members
  MutableExampleCluster(double energy);

  /// copy constructor
  MutableExampleCluster(const MutableExampleCluster& other) = default;

  /// copy-assignment operator
  MutableExampleCluster& operator=(MutableExampleCluster other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleCluster clone() const;

  /// destructor
  ~MutableExampleCluster() = default;


public:

  /// Access the cluster energy
  double energy() const;



  /// Set the cluster energy
  void energy(double value);
  /// Get mutable reference to cluster energy
  double& energy();



  void addHits(ExampleHit);
  std::size_t Hits_size() const;
  ExampleHit Hits(std::size_t) const;
  std::vector<ExampleHit>::const_iterator Hits_begin() const;
  std::vector<ExampleHit>::const_iterator Hits_end() const;
  podio::RelationRange<ExampleHit> Hits() const;
  void addClusters(ExampleCluster);
  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleClusterObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}; }

  bool operator==(const MutableExampleCluster& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleCluster& other) const;

  bool operator!=(const MutableExampleCluster& other) const { return !(*this == other); }
  bool operator!=(const ExampleCluster& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleCluster& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleCluster& a, MutableExampleCluster& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleClusterObj
  explicit MutableExampleCluster(podio::utils::MaybeSharedPtr<ExampleClusterObj> obj);

  podio::utils::MaybeSharedPtr<ExampleClusterObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleCluster& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterOBJ_H
#define DATAMODEL_ExampleClusterOBJ_H

// data model specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleHit.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleCluster;

class ExampleClusterObj {
public:
  /// constructor
  ExampleClusterObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleClusterObj(const ExampleClusterObj&);
  /// constructor from ObjectID and ExampleClusterData
  /// does not initialize the internal relation containers
  ExampleClusterObj(const podio::ObjectID id, ExampleClusterData data);
  /// No assignment operator
  ExampleClusterObj& operator=(const ExampleClusterObj&) = delete;
  virtual ~ExampleClusterObj();

public:
  podio::ObjectID id;
  ExampleClusterData data;
  std::vector<ExampleHit>* m_Hits{nullptr};
  std::vector<ExampleCluster>* m_Clusters{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleClusterCollection_H
#define DATAMODEL_ExampleClusterCollection_H

// datamodel specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleCluster.h"
#include "datamodel/MutableExampleCluster.h"
#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleClusterCollectionData.h"

// podio specific includes
#include "podio/ICollectionProvider.h"
#include "podio/CollectionBase.h"
#include "podio/CollectionIDTable.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

#include <string>
#include <vector>
#include <deque>
#include <array>
#include <algorithm>
#include <ostream>
#include <mutex>
#include <memory>
#include <cstddef>

namespace podio {
  struct RelationNames;
}




class ExampleClusterCollectionIterator {
public:
  ExampleClusterCollectionIterator(size_t index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}), m_collection(collection) {}

  ExampleClusterCollectionIterator(const ExampleClusterCollectionIterator&) = delete;
  ExampleClusterCollectionIterator& operator=(const ExampleClusterCollectionIterator&) = delete;

  bool operator!=(const ExampleClusterCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleClusterCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleCluster operator*();
  ExampleCluster* operator->();
  ExampleClusterCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};


class ExampleClusterMutableCollectionIterator {
public:
  ExampleClusterMutableCollectionIterator(size_t index, const ExampleClusterObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleClusterObj>{nullptr}), m_collection(collection) {}

  ExampleClusterMutableCollectionIterator(const ExampleClusterMutableCollectionIterator&) = delete;
  ExampleClusterMutableCollectionIterator& operator=(const ExampleClusterMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleClusterMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleClusterMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleCluster operator*();
  MutableExampleCluster* operator->();
  ExampleClusterMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleCluster m_object;
  const ExampleClusterObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleClusterCollection : public podio::CollectionBase {
public:
  using value_type = ExampleCluster;
  using const_iterator = ExampleClusterCollectionIterator;
  using iterator = ExampleClusterMutableCollectionIterator;

  ExampleClusterCollection();
  ExampleClusterCollection(ExampleClusterCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleClusterCollection(const ExampleClusterCollection& ) = delete;
  ExampleClusterCollection& operator=(const ExampleClusterCollection& ) = delete;
  ExampleClusterCollection(ExampleClusterCollection&&) = default;
  ExampleClusterCollection& operator=(ExampleClusterCollection&&) = default;

//  ExampleClusterCollection(ExampleClusterVector* data, uint32_t collectionID);
  ~ExampleClusterCollection();

  constexpr static auto typeName = "ExampleClusterCollection";
  constexpr static auto valueTypeName = "ExampleCluster";
  constexpr static auto dataTypeName = "ExampleClusterData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleClusterCollection* operator->() { return (ExampleClusterCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleCluster create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleCluster create(Args&&... args);

  /// number of elements in the collection
  std::size_t size() const final;

  /// Is the collection empty
  bool empty() const final;

  /// fully qualified type name
  const std::string_view getTypeName() const final { return typeName; }
  /// fully qualified type name of elements - with namespace
  const std::string_view getValueTypeName() const final { return valueTypeName; }
  /// fully qualified type name of stored POD elements - with namespace
  const std::string_view getDataTypeName() const final { return dataTypeName; }
  /// schema version
  podio::SchemaVersionT getSchemaVersion() const final;

  bool isSubsetCollection() const final {
    return m_isSubsetColl;
  }

  void setSubsetCollection(bool setSubset=true) final;

  /// Returns the const object of given index
  ExampleCluster operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleCluster operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleCluster at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleCluster at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleCluster object);
  /// Append an object to the (subset) collection
  void push_back(ExampleCluster object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleClusterObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
      );
    }
    m_isValid = true;
  };

  uint32_t getID() const final {
    return m_collectionID;
  }

  bool isValid() const final {
    return m_isValid;
  }

  size_t getDatamodelRegistryIndex() const final;

  // support for the iterator protocol
  iterator begin() {
    return iterator(0, &m_storage.entries);
  }
  const_iterator begin() const {
    return const_iterator(0, &m_storage.entries);
  }
  iterator end() {
    return iterator(m_storage.entries.size(), &m_storage.entries);
  }
  const_iterator end() const {
    return const_iterator(m_storage.entries.size(), &m_storage.entries);
  }

  std::vector<double> energy(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleClusterCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleClusterCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleClusterCollection& v);

template<typename... Args>
MutableExampleCluster ExampleClusterCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleClusterObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleClusterData} constructor
  obj->m_Hits = new std::vector<ExampleHit>();
  obj->m_Clusters = new std::vector<ExampleCluster>();
  m_storage.createRelations(obj);
  return MutableExampleCluster(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleClusterCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleCluster_CollectionData_H
#define DATAMODEL_ExampleCluster_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleClusterData.h"
#include "datamodel/ExampleClusterObj.h"
#include "datamodel/ExampleHit.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleClusterObjPointerContainer = std::deque<ExampleClusterObj*>;
using ExampleClusterDataContainer = std::vector<ExampleClusterData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleClusterCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleClusterObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleClusterCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleClusterCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleClusterCollectionData(const ExampleClusterCollectionData&) = delete;
  ExampleClusterCollectionData& operator=(const ExampleClusterCollectionData&) = delete;
  ExampleClusterCollectionData(ExampleClusterCollectionData&& other) = default;
  ExampleClusterCollectionData& operator=(ExampleClusterCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleClusterCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleClusterObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleHit> m_rel_Hits;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleHit>> m_rel_Hits_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleCluster> m_rel_Clusters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleCluster>> m_rel_Clusters_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleClusterDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "podio/DatamodelRegistry.h"
#include "podio/SchemaEvolution.h"

namespace datamodel::meta {
/**
 * The complete definition of the datamodel at generation time in JSON format.
 */
static constexpr auto datamodel__JSONDefinition = R"DATAMODELDEF({"options": {"getSyntax": false, "exposePODMembers": true, "includeSubfolder": "datamodel/"}, "schema_version": 1, "components": {}, "datatypes": {"EventInfo": {"Description": "Event info", "Author": "N. Brei", "Members": ["int EventNumber // event number", "int RunNumber // run number"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleHit": {"Description": "Example Hit", "Author": "B. Hegner", "Members": ["unsigned long long cellID // cellID", "double x // x-coordinate", "double y // y-coordinate", "double z // z-coordinate", "double energy // measured energy deposit", "std::uint64_t time // ticks since start of timeframe"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleCluster": {"Description": "Cluster", "Author": "B. Hegner", "Members": ["double energy // cluster energy"], "OneToManyRelations": ["ExampleHit Hits // hits contained in the cluster", "ExampleCluster Clusters // sub clusters used to create this cluster"], "VectorMembers": [], "OneToOneRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}}, "interfaces": {}})DATAMODELDEF";


/**
 * The names of all relations and vector members for all datatypes
 */
inline podio::RelationNameMapping datamodel__getRelationNames() {
  using namespace std::string_view_literals;
  return {
    {"EventInfo"sv,
      {  },
      {  },
    },
    {"ExampleHit"sv,
      {  },
      {  },
    },
    {"ExampleCluster"sv,
      { "Hits"sv, "Clusters"sv },
      {  },
    },
  };
}

/**
 * The schema version at generation time
 */
static constexpr podio::SchemaVersionT schemaVersion = 1;

/**
 * The helper class that takes care of registering the datamodel definition to
 * the DatamodelRegistry and to provide the index in that registry.
 *
 * Implemented as a singleton mainly to ensure only a single registration of
 * each datamodel, during the constructor
 */
class DatamodelRegistryIndex {
public:
  static size_t value() {
    static const auto relationNames = datamodel__getRelationNames();
    static auto index = DatamodelRegistryIndex(podio::DatamodelRegistry::mutInstance().registerDatamodel("datamodel", datamodel__JSONDefinition, relationNames));
    return index.m_value;
  }
private:
  DatamodelRegistryIndex(size_t v) : m_value(v) {}
  size_t m_value{podio::DatamodelRegistry::NoDefinitionAvailable};
};


namespace static_registration {
  // The usual trick via an IIFE and a const variable that we assign to, to
  // ensure that we populate this before everything starts
  inline  bool ensureRegistration() {
    const static auto reg = []() {
      return datamodel::meta::DatamodelRegistryIndex::value() != podio::DatamodelRegistry::NoDefinitionAvailable;
    }();
    return reg;
  }

  const auto registrationEnsured = ensureRegistration();
}

} // namespace datamodel::meta

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"EventInfo", payloadCode, "@",
"EventInfoCollection", payloadCode, "@",
"EventInfoData", payloadCode, "@",
"ExampleCluster", payloadCode, "@",
"ExampleClusterCollection", payloadCode, "@",
"ExampleClusterData", payloadCode, "@",
"ExampleHit", payloadCode, "@",
"ExampleHitCollection", payloadCode, "@",
"ExampleHitData", payloadCode, "@",
"MutableEventInfo", payloadCode, "@",
"MutableExampleCluster", payloadCode, "@",
"MutableExampleHit", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libPodioExampleDatamodelDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libPodioExampleDatamodelDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libPodioExampleDatamodelDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libPodioExampleDatamodelDict() {
  TriggerDictionaryInitialization_libPodioExampleDatamodelDict_Impl();
}
