// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME ExtensionDataModelDict
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
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/PolarVector.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExtComponent.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ContainedTypeCollection.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ContainedTypeData.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ContainedType.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/MutableContainedType.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ContainedTypeObj.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ContainedTypeCollection.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ContainedTypeCollectionData.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalComponentTypeCollection.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalComponentTypeData.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalComponentType.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/MutableExternalComponentType.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalComponentTypeObj.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalComponentTypeCollection.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalComponentTypeCollectionData.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalRelationTypeCollection.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalRelationTypeData.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalRelationType.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/MutableExternalRelationType.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalRelationTypeObj.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalRelationTypeCollection.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/ExternalRelationTypeCollectionData.h"
#include "/home/tsai/eic/podio.src/tests/extension_model/extension_model/DatamodelDefinition.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *extensioncLcLPolarVector_Dictionary();
   static void extensioncLcLPolarVector_TClassManip(TClass*);
   static void *new_extensioncLcLPolarVector(void *p = nullptr);
   static void *newArray_extensioncLcLPolarVector(Long_t size, void *p);
   static void delete_extensioncLcLPolarVector(void *p);
   static void deleteArray_extensioncLcLPolarVector(void *p);
   static void destruct_extensioncLcLPolarVector(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::PolarVector*)
   {
      ::extension::PolarVector *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::PolarVector));
      static ::ROOT::TGenericClassInfo 
         instance("extension::PolarVector", 1, "", 23,
                  typeid(::extension::PolarVector), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLPolarVector_Dictionary, isa_proxy, 12,
                  sizeof(::extension::PolarVector) );
      instance.SetNew(&new_extensioncLcLPolarVector);
      instance.SetNewArray(&newArray_extensioncLcLPolarVector);
      instance.SetDelete(&delete_extensioncLcLPolarVector);
      instance.SetDeleteArray(&deleteArray_extensioncLcLPolarVector);
      instance.SetDestructor(&destruct_extensioncLcLPolarVector);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::PolarVector*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::PolarVector*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::PolarVector*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLPolarVector_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::PolarVector*>(nullptr))->GetClass();
      extensioncLcLPolarVector_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLPolarVector_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExtComponent_Dictionary();
   static void extensioncLcLExtComponent_TClassManip(TClass*);
   static void *new_extensioncLcLExtComponent(void *p = nullptr);
   static void *newArray_extensioncLcLExtComponent(Long_t size, void *p);
   static void delete_extensioncLcLExtComponent(void *p);
   static void deleteArray_extensioncLcLExtComponent(void *p);
   static void destruct_extensioncLcLExtComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExtComponent*)
   {
      ::extension::ExtComponent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExtComponent));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExtComponent", 1, "", 62,
                  typeid(::extension::ExtComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExtComponent_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExtComponent) );
      instance.SetNew(&new_extensioncLcLExtComponent);
      instance.SetNewArray(&newArray_extensioncLcLExtComponent);
      instance.SetDelete(&delete_extensioncLcLExtComponent);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExtComponent);
      instance.SetDestructor(&destruct_extensioncLcLExtComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExtComponent*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExtComponent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExtComponent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExtComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExtComponent*>(nullptr))->GetClass();
      extensioncLcLExtComponent_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExtComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLContainedTypeData_Dictionary();
   static void extensioncLcLContainedTypeData_TClassManip(TClass*);
   static void *new_extensioncLcLContainedTypeData(void *p = nullptr);
   static void *newArray_extensioncLcLContainedTypeData(Long_t size, void *p);
   static void delete_extensioncLcLContainedTypeData(void *p);
   static void deleteArray_extensioncLcLContainedTypeData(void *p);
   static void destruct_extensioncLcLContainedTypeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ContainedTypeData*)
   {
      ::extension::ContainedTypeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ContainedTypeData));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ContainedTypeData", 1, "extension_model/ContainedTypeData.h", 15,
                  typeid(::extension::ContainedTypeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLContainedTypeData_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ContainedTypeData) );
      instance.SetNew(&new_extensioncLcLContainedTypeData);
      instance.SetNewArray(&newArray_extensioncLcLContainedTypeData);
      instance.SetDelete(&delete_extensioncLcLContainedTypeData);
      instance.SetDeleteArray(&deleteArray_extensioncLcLContainedTypeData);
      instance.SetDestructor(&destruct_extensioncLcLContainedTypeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ContainedTypeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ContainedTypeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ContainedTypeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLContainedTypeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ContainedTypeData*>(nullptr))->GetClass();
      extensioncLcLContainedTypeData_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLContainedTypeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLContainedType_Dictionary();
   static void extensioncLcLContainedType_TClassManip(TClass*);
   static void *new_extensioncLcLContainedType(void *p = nullptr);
   static void *newArray_extensioncLcLContainedType(Long_t size, void *p);
   static void delete_extensioncLcLContainedType(void *p);
   static void deleteArray_extensioncLcLContainedType(void *p);
   static void destruct_extensioncLcLContainedType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ContainedType*)
   {
      ::extension::ContainedType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ContainedType));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ContainedType", 1, "extension_model/ContainedType.h", 31,
                  typeid(::extension::ContainedType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLContainedType_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ContainedType) );
      instance.SetNew(&new_extensioncLcLContainedType);
      instance.SetNewArray(&newArray_extensioncLcLContainedType);
      instance.SetDelete(&delete_extensioncLcLContainedType);
      instance.SetDeleteArray(&deleteArray_extensioncLcLContainedType);
      instance.SetDestructor(&destruct_extensioncLcLContainedType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ContainedType*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ContainedType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ContainedType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLContainedType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ContainedType*>(nullptr))->GetClass();
      extensioncLcLContainedType_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLContainedType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLMutableContainedType_Dictionary();
   static void extensioncLcLMutableContainedType_TClassManip(TClass*);
   static void *new_extensioncLcLMutableContainedType(void *p = nullptr);
   static void *newArray_extensioncLcLMutableContainedType(Long_t size, void *p);
   static void delete_extensioncLcLMutableContainedType(void *p);
   static void deleteArray_extensioncLcLMutableContainedType(void *p);
   static void destruct_extensioncLcLMutableContainedType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::MutableContainedType*)
   {
      ::extension::MutableContainedType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::MutableContainedType));
      static ::ROOT::TGenericClassInfo 
         instance("extension::MutableContainedType", 1, "extension_model/MutableContainedType.h", 30,
                  typeid(::extension::MutableContainedType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLMutableContainedType_Dictionary, isa_proxy, 12,
                  sizeof(::extension::MutableContainedType) );
      instance.SetNew(&new_extensioncLcLMutableContainedType);
      instance.SetNewArray(&newArray_extensioncLcLMutableContainedType);
      instance.SetDelete(&delete_extensioncLcLMutableContainedType);
      instance.SetDeleteArray(&deleteArray_extensioncLcLMutableContainedType);
      instance.SetDestructor(&destruct_extensioncLcLMutableContainedType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::MutableContainedType*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::MutableContainedType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::MutableContainedType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLMutableContainedType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::MutableContainedType*>(nullptr))->GetClass();
      extensioncLcLMutableContainedType_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLMutableContainedType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLContainedTypeCollection_Dictionary();
   static void extensioncLcLContainedTypeCollection_TClassManip(TClass*);
   static void *new_extensioncLcLContainedTypeCollection(void *p = nullptr);
   static void *newArray_extensioncLcLContainedTypeCollection(Long_t size, void *p);
   static void delete_extensioncLcLContainedTypeCollection(void *p);
   static void deleteArray_extensioncLcLContainedTypeCollection(void *p);
   static void destruct_extensioncLcLContainedTypeCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ContainedTypeCollection*)
   {
      ::extension::ContainedTypeCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ContainedTypeCollection));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ContainedTypeCollection", 1, "", 175,
                  typeid(::extension::ContainedTypeCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLContainedTypeCollection_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ContainedTypeCollection) );
      instance.SetNew(&new_extensioncLcLContainedTypeCollection);
      instance.SetNewArray(&newArray_extensioncLcLContainedTypeCollection);
      instance.SetDelete(&delete_extensioncLcLContainedTypeCollection);
      instance.SetDeleteArray(&deleteArray_extensioncLcLContainedTypeCollection);
      instance.SetDestructor(&destruct_extensioncLcLContainedTypeCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ContainedTypeCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ContainedTypeCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ContainedTypeCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLContainedTypeCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ContainedTypeCollection*>(nullptr))->GetClass();
      extensioncLcLContainedTypeCollection_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLContainedTypeCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExternalComponentTypeData_Dictionary();
   static void extensioncLcLExternalComponentTypeData_TClassManip(TClass*);
   static void *new_extensioncLcLExternalComponentTypeData(void *p = nullptr);
   static void *newArray_extensioncLcLExternalComponentTypeData(Long_t size, void *p);
   static void delete_extensioncLcLExternalComponentTypeData(void *p);
   static void deleteArray_extensioncLcLExternalComponentTypeData(void *p);
   static void destruct_extensioncLcLExternalComponentTypeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExternalComponentTypeData*)
   {
      ::extension::ExternalComponentTypeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExternalComponentTypeData));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExternalComponentTypeData", 1, "extension_model/ExternalComponentTypeData.h", 17,
                  typeid(::extension::ExternalComponentTypeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExternalComponentTypeData_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExternalComponentTypeData) );
      instance.SetNew(&new_extensioncLcLExternalComponentTypeData);
      instance.SetNewArray(&newArray_extensioncLcLExternalComponentTypeData);
      instance.SetDelete(&delete_extensioncLcLExternalComponentTypeData);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExternalComponentTypeData);
      instance.SetDestructor(&destruct_extensioncLcLExternalComponentTypeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExternalComponentTypeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExternalComponentTypeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExternalComponentTypeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExternalComponentTypeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExternalComponentTypeData*>(nullptr))->GetClass();
      extensioncLcLExternalComponentTypeData_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExternalComponentTypeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExternalComponentType_Dictionary();
   static void extensioncLcLExternalComponentType_TClassManip(TClass*);
   static void *new_extensioncLcLExternalComponentType(void *p = nullptr);
   static void *newArray_extensioncLcLExternalComponentType(Long_t size, void *p);
   static void delete_extensioncLcLExternalComponentType(void *p);
   static void deleteArray_extensioncLcLExternalComponentType(void *p);
   static void destruct_extensioncLcLExternalComponentType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExternalComponentType*)
   {
      ::extension::ExternalComponentType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExternalComponentType));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExternalComponentType", 1, "extension_model/ExternalComponentType.h", 33,
                  typeid(::extension::ExternalComponentType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExternalComponentType_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExternalComponentType) );
      instance.SetNew(&new_extensioncLcLExternalComponentType);
      instance.SetNewArray(&newArray_extensioncLcLExternalComponentType);
      instance.SetDelete(&delete_extensioncLcLExternalComponentType);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExternalComponentType);
      instance.SetDestructor(&destruct_extensioncLcLExternalComponentType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExternalComponentType*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExternalComponentType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExternalComponentType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExternalComponentType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExternalComponentType*>(nullptr))->GetClass();
      extensioncLcLExternalComponentType_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExternalComponentType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLMutableExternalComponentType_Dictionary();
   static void extensioncLcLMutableExternalComponentType_TClassManip(TClass*);
   static void *new_extensioncLcLMutableExternalComponentType(void *p = nullptr);
   static void *newArray_extensioncLcLMutableExternalComponentType(Long_t size, void *p);
   static void delete_extensioncLcLMutableExternalComponentType(void *p);
   static void deleteArray_extensioncLcLMutableExternalComponentType(void *p);
   static void destruct_extensioncLcLMutableExternalComponentType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::MutableExternalComponentType*)
   {
      ::extension::MutableExternalComponentType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::MutableExternalComponentType));
      static ::ROOT::TGenericClassInfo 
         instance("extension::MutableExternalComponentType", 1, "extension_model/MutableExternalComponentType.h", 32,
                  typeid(::extension::MutableExternalComponentType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLMutableExternalComponentType_Dictionary, isa_proxy, 12,
                  sizeof(::extension::MutableExternalComponentType) );
      instance.SetNew(&new_extensioncLcLMutableExternalComponentType);
      instance.SetNewArray(&newArray_extensioncLcLMutableExternalComponentType);
      instance.SetDelete(&delete_extensioncLcLMutableExternalComponentType);
      instance.SetDeleteArray(&deleteArray_extensioncLcLMutableExternalComponentType);
      instance.SetDestructor(&destruct_extensioncLcLMutableExternalComponentType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::MutableExternalComponentType*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::MutableExternalComponentType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::MutableExternalComponentType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLMutableExternalComponentType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::MutableExternalComponentType*>(nullptr))->GetClass();
      extensioncLcLMutableExternalComponentType_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLMutableExternalComponentType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExternalComponentTypeCollection_Dictionary();
   static void extensioncLcLExternalComponentTypeCollection_TClassManip(TClass*);
   static void *new_extensioncLcLExternalComponentTypeCollection(void *p = nullptr);
   static void *newArray_extensioncLcLExternalComponentTypeCollection(Long_t size, void *p);
   static void delete_extensioncLcLExternalComponentTypeCollection(void *p);
   static void deleteArray_extensioncLcLExternalComponentTypeCollection(void *p);
   static void destruct_extensioncLcLExternalComponentTypeCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExternalComponentTypeCollection*)
   {
      ::extension::ExternalComponentTypeCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExternalComponentTypeCollection));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExternalComponentTypeCollection", 1, "", 1056,
                  typeid(::extension::ExternalComponentTypeCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExternalComponentTypeCollection_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExternalComponentTypeCollection) );
      instance.SetNew(&new_extensioncLcLExternalComponentTypeCollection);
      instance.SetNewArray(&newArray_extensioncLcLExternalComponentTypeCollection);
      instance.SetDelete(&delete_extensioncLcLExternalComponentTypeCollection);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExternalComponentTypeCollection);
      instance.SetDestructor(&destruct_extensioncLcLExternalComponentTypeCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExternalComponentTypeCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExternalComponentTypeCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExternalComponentTypeCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExternalComponentTypeCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExternalComponentTypeCollection*>(nullptr))->GetClass();
      extensioncLcLExternalComponentTypeCollection_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExternalComponentTypeCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExternalRelationTypeData_Dictionary();
   static void extensioncLcLExternalRelationTypeData_TClassManip(TClass*);
   static void *new_extensioncLcLExternalRelationTypeData(void *p = nullptr);
   static void *newArray_extensioncLcLExternalRelationTypeData(Long_t size, void *p);
   static void delete_extensioncLcLExternalRelationTypeData(void *p);
   static void deleteArray_extensioncLcLExternalRelationTypeData(void *p);
   static void destruct_extensioncLcLExternalRelationTypeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExternalRelationTypeData*)
   {
      ::extension::ExternalRelationTypeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExternalRelationTypeData));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExternalRelationTypeData", 1, "extension_model/ExternalRelationTypeData.h", 14,
                  typeid(::extension::ExternalRelationTypeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExternalRelationTypeData_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExternalRelationTypeData) );
      instance.SetNew(&new_extensioncLcLExternalRelationTypeData);
      instance.SetNewArray(&newArray_extensioncLcLExternalRelationTypeData);
      instance.SetDelete(&delete_extensioncLcLExternalRelationTypeData);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExternalRelationTypeData);
      instance.SetDestructor(&destruct_extensioncLcLExternalRelationTypeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExternalRelationTypeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExternalRelationTypeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExternalRelationTypeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExternalRelationTypeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExternalRelationTypeData*>(nullptr))->GetClass();
      extensioncLcLExternalRelationTypeData_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExternalRelationTypeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExternalRelationType_Dictionary();
   static void extensioncLcLExternalRelationType_TClassManip(TClass*);
   static void *new_extensioncLcLExternalRelationType(void *p = nullptr);
   static void *newArray_extensioncLcLExternalRelationType(Long_t size, void *p);
   static void delete_extensioncLcLExternalRelationType(void *p);
   static void deleteArray_extensioncLcLExternalRelationType(void *p);
   static void destruct_extensioncLcLExternalRelationType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExternalRelationType*)
   {
      ::extension::ExternalRelationType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExternalRelationType));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExternalRelationType", 1, "extension_model/ExternalRelationType.h", 37,
                  typeid(::extension::ExternalRelationType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExternalRelationType_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExternalRelationType) );
      instance.SetNew(&new_extensioncLcLExternalRelationType);
      instance.SetNewArray(&newArray_extensioncLcLExternalRelationType);
      instance.SetDelete(&delete_extensioncLcLExternalRelationType);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExternalRelationType);
      instance.SetDestructor(&destruct_extensioncLcLExternalRelationType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExternalRelationType*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExternalRelationType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExternalRelationType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExternalRelationType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExternalRelationType*>(nullptr))->GetClass();
      extensioncLcLExternalRelationType_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExternalRelationType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLMutableExternalRelationType_Dictionary();
   static void extensioncLcLMutableExternalRelationType_TClassManip(TClass*);
   static void *new_extensioncLcLMutableExternalRelationType(void *p = nullptr);
   static void *newArray_extensioncLcLMutableExternalRelationType(Long_t size, void *p);
   static void delete_extensioncLcLMutableExternalRelationType(void *p);
   static void deleteArray_extensioncLcLMutableExternalRelationType(void *p);
   static void destruct_extensioncLcLMutableExternalRelationType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::MutableExternalRelationType*)
   {
      ::extension::MutableExternalRelationType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::MutableExternalRelationType));
      static ::ROOT::TGenericClassInfo 
         instance("extension::MutableExternalRelationType", 1, "extension_model/MutableExternalRelationType.h", 36,
                  typeid(::extension::MutableExternalRelationType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLMutableExternalRelationType_Dictionary, isa_proxy, 12,
                  sizeof(::extension::MutableExternalRelationType) );
      instance.SetNew(&new_extensioncLcLMutableExternalRelationType);
      instance.SetNewArray(&newArray_extensioncLcLMutableExternalRelationType);
      instance.SetDelete(&delete_extensioncLcLMutableExternalRelationType);
      instance.SetDeleteArray(&deleteArray_extensioncLcLMutableExternalRelationType);
      instance.SetDestructor(&destruct_extensioncLcLMutableExternalRelationType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::MutableExternalRelationType*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::MutableExternalRelationType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::MutableExternalRelationType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLMutableExternalRelationType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::MutableExternalRelationType*>(nullptr))->GetClass();
      extensioncLcLMutableExternalRelationType_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLMutableExternalRelationType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *extensioncLcLExternalRelationTypeCollection_Dictionary();
   static void extensioncLcLExternalRelationTypeCollection_TClassManip(TClass*);
   static void *new_extensioncLcLExternalRelationTypeCollection(void *p = nullptr);
   static void *newArray_extensioncLcLExternalRelationTypeCollection(Long_t size, void *p);
   static void delete_extensioncLcLExternalRelationTypeCollection(void *p);
   static void deleteArray_extensioncLcLExternalRelationTypeCollection(void *p);
   static void destruct_extensioncLcLExternalRelationTypeCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::extension::ExternalRelationTypeCollection*)
   {
      ::extension::ExternalRelationTypeCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::extension::ExternalRelationTypeCollection));
      static ::ROOT::TGenericClassInfo 
         instance("extension::ExternalRelationTypeCollection", 1, "", 1977,
                  typeid(::extension::ExternalRelationTypeCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &extensioncLcLExternalRelationTypeCollection_Dictionary, isa_proxy, 12,
                  sizeof(::extension::ExternalRelationTypeCollection) );
      instance.SetNew(&new_extensioncLcLExternalRelationTypeCollection);
      instance.SetNewArray(&newArray_extensioncLcLExternalRelationTypeCollection);
      instance.SetDelete(&delete_extensioncLcLExternalRelationTypeCollection);
      instance.SetDeleteArray(&deleteArray_extensioncLcLExternalRelationTypeCollection);
      instance.SetDestructor(&destruct_extensioncLcLExternalRelationTypeCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::extension::ExternalRelationTypeCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::extension::ExternalRelationTypeCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::extension::ExternalRelationTypeCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *extensioncLcLExternalRelationTypeCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::extension::ExternalRelationTypeCollection*>(nullptr))->GetClass();
      extensioncLcLExternalRelationTypeCollection_TClassManip(theClass);
   return theClass;
   }

   static void extensioncLcLExternalRelationTypeCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLPolarVector(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::PolarVector : new ::extension::PolarVector;
   }
   static void *newArray_extensioncLcLPolarVector(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::PolarVector[nElements] : new ::extension::PolarVector[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLPolarVector(void *p) {
      delete (static_cast<::extension::PolarVector*>(p));
   }
   static void deleteArray_extensioncLcLPolarVector(void *p) {
      delete [] (static_cast<::extension::PolarVector*>(p));
   }
   static void destruct_extensioncLcLPolarVector(void *p) {
      typedef ::extension::PolarVector current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::PolarVector

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExtComponent(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExtComponent : new ::extension::ExtComponent;
   }
   static void *newArray_extensioncLcLExtComponent(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExtComponent[nElements] : new ::extension::ExtComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExtComponent(void *p) {
      delete (static_cast<::extension::ExtComponent*>(p));
   }
   static void deleteArray_extensioncLcLExtComponent(void *p) {
      delete [] (static_cast<::extension::ExtComponent*>(p));
   }
   static void destruct_extensioncLcLExtComponent(void *p) {
      typedef ::extension::ExtComponent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExtComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLContainedTypeData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ContainedTypeData : new ::extension::ContainedTypeData;
   }
   static void *newArray_extensioncLcLContainedTypeData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ContainedTypeData[nElements] : new ::extension::ContainedTypeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLContainedTypeData(void *p) {
      delete (static_cast<::extension::ContainedTypeData*>(p));
   }
   static void deleteArray_extensioncLcLContainedTypeData(void *p) {
      delete [] (static_cast<::extension::ContainedTypeData*>(p));
   }
   static void destruct_extensioncLcLContainedTypeData(void *p) {
      typedef ::extension::ContainedTypeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ContainedTypeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLContainedType(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ContainedType : new ::extension::ContainedType;
   }
   static void *newArray_extensioncLcLContainedType(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ContainedType[nElements] : new ::extension::ContainedType[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLContainedType(void *p) {
      delete (static_cast<::extension::ContainedType*>(p));
   }
   static void deleteArray_extensioncLcLContainedType(void *p) {
      delete [] (static_cast<::extension::ContainedType*>(p));
   }
   static void destruct_extensioncLcLContainedType(void *p) {
      typedef ::extension::ContainedType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ContainedType

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLMutableContainedType(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::MutableContainedType : new ::extension::MutableContainedType;
   }
   static void *newArray_extensioncLcLMutableContainedType(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::MutableContainedType[nElements] : new ::extension::MutableContainedType[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLMutableContainedType(void *p) {
      delete (static_cast<::extension::MutableContainedType*>(p));
   }
   static void deleteArray_extensioncLcLMutableContainedType(void *p) {
      delete [] (static_cast<::extension::MutableContainedType*>(p));
   }
   static void destruct_extensioncLcLMutableContainedType(void *p) {
      typedef ::extension::MutableContainedType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::MutableContainedType

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLContainedTypeCollection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ContainedTypeCollection : new ::extension::ContainedTypeCollection;
   }
   static void *newArray_extensioncLcLContainedTypeCollection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ContainedTypeCollection[nElements] : new ::extension::ContainedTypeCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLContainedTypeCollection(void *p) {
      delete (static_cast<::extension::ContainedTypeCollection*>(p));
   }
   static void deleteArray_extensioncLcLContainedTypeCollection(void *p) {
      delete [] (static_cast<::extension::ContainedTypeCollection*>(p));
   }
   static void destruct_extensioncLcLContainedTypeCollection(void *p) {
      typedef ::extension::ContainedTypeCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ContainedTypeCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExternalComponentTypeData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalComponentTypeData : new ::extension::ExternalComponentTypeData;
   }
   static void *newArray_extensioncLcLExternalComponentTypeData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalComponentTypeData[nElements] : new ::extension::ExternalComponentTypeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExternalComponentTypeData(void *p) {
      delete (static_cast<::extension::ExternalComponentTypeData*>(p));
   }
   static void deleteArray_extensioncLcLExternalComponentTypeData(void *p) {
      delete [] (static_cast<::extension::ExternalComponentTypeData*>(p));
   }
   static void destruct_extensioncLcLExternalComponentTypeData(void *p) {
      typedef ::extension::ExternalComponentTypeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExternalComponentTypeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExternalComponentType(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalComponentType : new ::extension::ExternalComponentType;
   }
   static void *newArray_extensioncLcLExternalComponentType(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalComponentType[nElements] : new ::extension::ExternalComponentType[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExternalComponentType(void *p) {
      delete (static_cast<::extension::ExternalComponentType*>(p));
   }
   static void deleteArray_extensioncLcLExternalComponentType(void *p) {
      delete [] (static_cast<::extension::ExternalComponentType*>(p));
   }
   static void destruct_extensioncLcLExternalComponentType(void *p) {
      typedef ::extension::ExternalComponentType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExternalComponentType

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLMutableExternalComponentType(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::MutableExternalComponentType : new ::extension::MutableExternalComponentType;
   }
   static void *newArray_extensioncLcLMutableExternalComponentType(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::MutableExternalComponentType[nElements] : new ::extension::MutableExternalComponentType[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLMutableExternalComponentType(void *p) {
      delete (static_cast<::extension::MutableExternalComponentType*>(p));
   }
   static void deleteArray_extensioncLcLMutableExternalComponentType(void *p) {
      delete [] (static_cast<::extension::MutableExternalComponentType*>(p));
   }
   static void destruct_extensioncLcLMutableExternalComponentType(void *p) {
      typedef ::extension::MutableExternalComponentType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::MutableExternalComponentType

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExternalComponentTypeCollection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalComponentTypeCollection : new ::extension::ExternalComponentTypeCollection;
   }
   static void *newArray_extensioncLcLExternalComponentTypeCollection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalComponentTypeCollection[nElements] : new ::extension::ExternalComponentTypeCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExternalComponentTypeCollection(void *p) {
      delete (static_cast<::extension::ExternalComponentTypeCollection*>(p));
   }
   static void deleteArray_extensioncLcLExternalComponentTypeCollection(void *p) {
      delete [] (static_cast<::extension::ExternalComponentTypeCollection*>(p));
   }
   static void destruct_extensioncLcLExternalComponentTypeCollection(void *p) {
      typedef ::extension::ExternalComponentTypeCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExternalComponentTypeCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExternalRelationTypeData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalRelationTypeData : new ::extension::ExternalRelationTypeData;
   }
   static void *newArray_extensioncLcLExternalRelationTypeData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalRelationTypeData[nElements] : new ::extension::ExternalRelationTypeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExternalRelationTypeData(void *p) {
      delete (static_cast<::extension::ExternalRelationTypeData*>(p));
   }
   static void deleteArray_extensioncLcLExternalRelationTypeData(void *p) {
      delete [] (static_cast<::extension::ExternalRelationTypeData*>(p));
   }
   static void destruct_extensioncLcLExternalRelationTypeData(void *p) {
      typedef ::extension::ExternalRelationTypeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExternalRelationTypeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExternalRelationType(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalRelationType : new ::extension::ExternalRelationType;
   }
   static void *newArray_extensioncLcLExternalRelationType(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalRelationType[nElements] : new ::extension::ExternalRelationType[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExternalRelationType(void *p) {
      delete (static_cast<::extension::ExternalRelationType*>(p));
   }
   static void deleteArray_extensioncLcLExternalRelationType(void *p) {
      delete [] (static_cast<::extension::ExternalRelationType*>(p));
   }
   static void destruct_extensioncLcLExternalRelationType(void *p) {
      typedef ::extension::ExternalRelationType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExternalRelationType

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLMutableExternalRelationType(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::MutableExternalRelationType : new ::extension::MutableExternalRelationType;
   }
   static void *newArray_extensioncLcLMutableExternalRelationType(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::MutableExternalRelationType[nElements] : new ::extension::MutableExternalRelationType[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLMutableExternalRelationType(void *p) {
      delete (static_cast<::extension::MutableExternalRelationType*>(p));
   }
   static void deleteArray_extensioncLcLMutableExternalRelationType(void *p) {
      delete [] (static_cast<::extension::MutableExternalRelationType*>(p));
   }
   static void destruct_extensioncLcLMutableExternalRelationType(void *p) {
      typedef ::extension::MutableExternalRelationType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::MutableExternalRelationType

namespace ROOT {
   // Wrappers around operator new
   static void *new_extensioncLcLExternalRelationTypeCollection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalRelationTypeCollection : new ::extension::ExternalRelationTypeCollection;
   }
   static void *newArray_extensioncLcLExternalRelationTypeCollection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::extension::ExternalRelationTypeCollection[nElements] : new ::extension::ExternalRelationTypeCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_extensioncLcLExternalRelationTypeCollection(void *p) {
      delete (static_cast<::extension::ExternalRelationTypeCollection*>(p));
   }
   static void deleteArray_extensioncLcLExternalRelationTypeCollection(void *p) {
      delete [] (static_cast<::extension::ExternalRelationTypeCollection*>(p));
   }
   static void destruct_extensioncLcLExternalRelationTypeCollection(void *p) {
      typedef ::extension::ExternalRelationTypeCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::extension::ExternalRelationTypeCollection

namespace ROOT {
   static TClass *vectorlEextensioncLcLPolarVectorgR_Dictionary();
   static void vectorlEextensioncLcLPolarVectorgR_TClassManip(TClass*);
   static void *new_vectorlEextensioncLcLPolarVectorgR(void *p = nullptr);
   static void *newArray_vectorlEextensioncLcLPolarVectorgR(Long_t size, void *p);
   static void delete_vectorlEextensioncLcLPolarVectorgR(void *p);
   static void deleteArray_vectorlEextensioncLcLPolarVectorgR(void *p);
   static void destruct_vectorlEextensioncLcLPolarVectorgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<extension::PolarVector>*)
   {
      vector<extension::PolarVector> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<extension::PolarVector>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<extension::PolarVector>", -2, "vector", 423,
                  typeid(vector<extension::PolarVector>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEextensioncLcLPolarVectorgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<extension::PolarVector>) );
      instance.SetNew(&new_vectorlEextensioncLcLPolarVectorgR);
      instance.SetNewArray(&newArray_vectorlEextensioncLcLPolarVectorgR);
      instance.SetDelete(&delete_vectorlEextensioncLcLPolarVectorgR);
      instance.SetDeleteArray(&deleteArray_vectorlEextensioncLcLPolarVectorgR);
      instance.SetDestructor(&destruct_vectorlEextensioncLcLPolarVectorgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<extension::PolarVector> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<extension::PolarVector>","std::vector<extension::PolarVector, std::allocator<extension::PolarVector> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<extension::PolarVector>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEextensioncLcLPolarVectorgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<extension::PolarVector>*>(nullptr))->GetClass();
      vectorlEextensioncLcLPolarVectorgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEextensioncLcLPolarVectorgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEextensioncLcLPolarVectorgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::PolarVector> : new vector<extension::PolarVector>;
   }
   static void *newArray_vectorlEextensioncLcLPolarVectorgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::PolarVector>[nElements] : new vector<extension::PolarVector>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEextensioncLcLPolarVectorgR(void *p) {
      delete (static_cast<vector<extension::PolarVector>*>(p));
   }
   static void deleteArray_vectorlEextensioncLcLPolarVectorgR(void *p) {
      delete [] (static_cast<vector<extension::PolarVector>*>(p));
   }
   static void destruct_vectorlEextensioncLcLPolarVectorgR(void *p) {
      typedef vector<extension::PolarVector> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<extension::PolarVector>

namespace ROOT {
   static TClass *vectorlEextensioncLcLExternalRelationTypeDatagR_Dictionary();
   static void vectorlEextensioncLcLExternalRelationTypeDatagR_TClassManip(TClass*);
   static void *new_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p = nullptr);
   static void *newArray_vectorlEextensioncLcLExternalRelationTypeDatagR(Long_t size, void *p);
   static void delete_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p);
   static void deleteArray_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p);
   static void destruct_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<extension::ExternalRelationTypeData>*)
   {
      vector<extension::ExternalRelationTypeData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<extension::ExternalRelationTypeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<extension::ExternalRelationTypeData>", -2, "vector", 423,
                  typeid(vector<extension::ExternalRelationTypeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEextensioncLcLExternalRelationTypeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<extension::ExternalRelationTypeData>) );
      instance.SetNew(&new_vectorlEextensioncLcLExternalRelationTypeDatagR);
      instance.SetNewArray(&newArray_vectorlEextensioncLcLExternalRelationTypeDatagR);
      instance.SetDelete(&delete_vectorlEextensioncLcLExternalRelationTypeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEextensioncLcLExternalRelationTypeDatagR);
      instance.SetDestructor(&destruct_vectorlEextensioncLcLExternalRelationTypeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<extension::ExternalRelationTypeData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<extension::ExternalRelationTypeData>","std::vector<extension::ExternalRelationTypeData, std::allocator<extension::ExternalRelationTypeData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<extension::ExternalRelationTypeData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEextensioncLcLExternalRelationTypeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<extension::ExternalRelationTypeData>*>(nullptr))->GetClass();
      vectorlEextensioncLcLExternalRelationTypeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEextensioncLcLExternalRelationTypeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ExternalRelationTypeData> : new vector<extension::ExternalRelationTypeData>;
   }
   static void *newArray_vectorlEextensioncLcLExternalRelationTypeDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ExternalRelationTypeData>[nElements] : new vector<extension::ExternalRelationTypeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p) {
      delete (static_cast<vector<extension::ExternalRelationTypeData>*>(p));
   }
   static void deleteArray_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p) {
      delete [] (static_cast<vector<extension::ExternalRelationTypeData>*>(p));
   }
   static void destruct_vectorlEextensioncLcLExternalRelationTypeDatagR(void *p) {
      typedef vector<extension::ExternalRelationTypeData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<extension::ExternalRelationTypeData>

namespace ROOT {
   static TClass *vectorlEextensioncLcLExternalComponentTypeDatagR_Dictionary();
   static void vectorlEextensioncLcLExternalComponentTypeDatagR_TClassManip(TClass*);
   static void *new_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p = nullptr);
   static void *newArray_vectorlEextensioncLcLExternalComponentTypeDatagR(Long_t size, void *p);
   static void delete_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p);
   static void deleteArray_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p);
   static void destruct_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<extension::ExternalComponentTypeData>*)
   {
      vector<extension::ExternalComponentTypeData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<extension::ExternalComponentTypeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<extension::ExternalComponentTypeData>", -2, "vector", 423,
                  typeid(vector<extension::ExternalComponentTypeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEextensioncLcLExternalComponentTypeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<extension::ExternalComponentTypeData>) );
      instance.SetNew(&new_vectorlEextensioncLcLExternalComponentTypeDatagR);
      instance.SetNewArray(&newArray_vectorlEextensioncLcLExternalComponentTypeDatagR);
      instance.SetDelete(&delete_vectorlEextensioncLcLExternalComponentTypeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEextensioncLcLExternalComponentTypeDatagR);
      instance.SetDestructor(&destruct_vectorlEextensioncLcLExternalComponentTypeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<extension::ExternalComponentTypeData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<extension::ExternalComponentTypeData>","std::vector<extension::ExternalComponentTypeData, std::allocator<extension::ExternalComponentTypeData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<extension::ExternalComponentTypeData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEextensioncLcLExternalComponentTypeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<extension::ExternalComponentTypeData>*>(nullptr))->GetClass();
      vectorlEextensioncLcLExternalComponentTypeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEextensioncLcLExternalComponentTypeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ExternalComponentTypeData> : new vector<extension::ExternalComponentTypeData>;
   }
   static void *newArray_vectorlEextensioncLcLExternalComponentTypeDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ExternalComponentTypeData>[nElements] : new vector<extension::ExternalComponentTypeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p) {
      delete (static_cast<vector<extension::ExternalComponentTypeData>*>(p));
   }
   static void deleteArray_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p) {
      delete [] (static_cast<vector<extension::ExternalComponentTypeData>*>(p));
   }
   static void destruct_vectorlEextensioncLcLExternalComponentTypeDatagR(void *p) {
      typedef vector<extension::ExternalComponentTypeData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<extension::ExternalComponentTypeData>

namespace ROOT {
   static TClass *vectorlEextensioncLcLExtComponentgR_Dictionary();
   static void vectorlEextensioncLcLExtComponentgR_TClassManip(TClass*);
   static void *new_vectorlEextensioncLcLExtComponentgR(void *p = nullptr);
   static void *newArray_vectorlEextensioncLcLExtComponentgR(Long_t size, void *p);
   static void delete_vectorlEextensioncLcLExtComponentgR(void *p);
   static void deleteArray_vectorlEextensioncLcLExtComponentgR(void *p);
   static void destruct_vectorlEextensioncLcLExtComponentgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<extension::ExtComponent>*)
   {
      vector<extension::ExtComponent> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<extension::ExtComponent>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<extension::ExtComponent>", -2, "vector", 423,
                  typeid(vector<extension::ExtComponent>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEextensioncLcLExtComponentgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<extension::ExtComponent>) );
      instance.SetNew(&new_vectorlEextensioncLcLExtComponentgR);
      instance.SetNewArray(&newArray_vectorlEextensioncLcLExtComponentgR);
      instance.SetDelete(&delete_vectorlEextensioncLcLExtComponentgR);
      instance.SetDeleteArray(&deleteArray_vectorlEextensioncLcLExtComponentgR);
      instance.SetDestructor(&destruct_vectorlEextensioncLcLExtComponentgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<extension::ExtComponent> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<extension::ExtComponent>","std::vector<extension::ExtComponent, std::allocator<extension::ExtComponent> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<extension::ExtComponent>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEextensioncLcLExtComponentgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<extension::ExtComponent>*>(nullptr))->GetClass();
      vectorlEextensioncLcLExtComponentgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEextensioncLcLExtComponentgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEextensioncLcLExtComponentgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ExtComponent> : new vector<extension::ExtComponent>;
   }
   static void *newArray_vectorlEextensioncLcLExtComponentgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ExtComponent>[nElements] : new vector<extension::ExtComponent>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEextensioncLcLExtComponentgR(void *p) {
      delete (static_cast<vector<extension::ExtComponent>*>(p));
   }
   static void deleteArray_vectorlEextensioncLcLExtComponentgR(void *p) {
      delete [] (static_cast<vector<extension::ExtComponent>*>(p));
   }
   static void destruct_vectorlEextensioncLcLExtComponentgR(void *p) {
      typedef vector<extension::ExtComponent> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<extension::ExtComponent>

namespace ROOT {
   static TClass *vectorlEextensioncLcLContainedTypeDatagR_Dictionary();
   static void vectorlEextensioncLcLContainedTypeDatagR_TClassManip(TClass*);
   static void *new_vectorlEextensioncLcLContainedTypeDatagR(void *p = nullptr);
   static void *newArray_vectorlEextensioncLcLContainedTypeDatagR(Long_t size, void *p);
   static void delete_vectorlEextensioncLcLContainedTypeDatagR(void *p);
   static void deleteArray_vectorlEextensioncLcLContainedTypeDatagR(void *p);
   static void destruct_vectorlEextensioncLcLContainedTypeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<extension::ContainedTypeData>*)
   {
      vector<extension::ContainedTypeData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<extension::ContainedTypeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<extension::ContainedTypeData>", -2, "vector", 423,
                  typeid(vector<extension::ContainedTypeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEextensioncLcLContainedTypeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<extension::ContainedTypeData>) );
      instance.SetNew(&new_vectorlEextensioncLcLContainedTypeDatagR);
      instance.SetNewArray(&newArray_vectorlEextensioncLcLContainedTypeDatagR);
      instance.SetDelete(&delete_vectorlEextensioncLcLContainedTypeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEextensioncLcLContainedTypeDatagR);
      instance.SetDestructor(&destruct_vectorlEextensioncLcLContainedTypeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<extension::ContainedTypeData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<extension::ContainedTypeData>","std::vector<extension::ContainedTypeData, std::allocator<extension::ContainedTypeData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<extension::ContainedTypeData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEextensioncLcLContainedTypeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<extension::ContainedTypeData>*>(nullptr))->GetClass();
      vectorlEextensioncLcLContainedTypeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEextensioncLcLContainedTypeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEextensioncLcLContainedTypeDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ContainedTypeData> : new vector<extension::ContainedTypeData>;
   }
   static void *newArray_vectorlEextensioncLcLContainedTypeDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<extension::ContainedTypeData>[nElements] : new vector<extension::ContainedTypeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEextensioncLcLContainedTypeDatagR(void *p) {
      delete (static_cast<vector<extension::ContainedTypeData>*>(p));
   }
   static void deleteArray_vectorlEextensioncLcLContainedTypeDatagR(void *p) {
      delete [] (static_cast<vector<extension::ContainedTypeData>*>(p));
   }
   static void destruct_vectorlEextensioncLcLContainedTypeDatagR(void *p) {
      typedef vector<extension::ContainedTypeData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<extension::ContainedTypeData>

namespace {
  void TriggerDictionaryInitialization_libExtensionDataModelDict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"/home/tsai/eic/podio.src/tests",
"/home/tsai/eic/podio.src/tests/extension_model",
"/home/tsai/eic/podio.src/tests/extension_model",
"/home/tsai/eic/podio.src/include",
"/home/tsai/eic/podio.src/tests",
"/usr/local/include",
"/usr/local/include",
"/usr/local/include/root",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/podio.build/tests/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libExtensionDataModelDict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace extension{class PolarVector;}
namespace extension{class ExtComponent;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/ContainedTypeData.h")))  ContainedTypeData;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/ContainedType.h")))  ContainedType;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/MutableContainedType.h")))  MutableContainedType;}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/ExternalComponentTypeData.h")))  ExternalComponentTypeData;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/ExternalRelationTypeData.h")))  ExternalRelationTypeData;}
namespace extension{class ContainedTypeCollection;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/ExternalComponentType.h")))  ExternalComponentType;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/MutableExternalComponentType.h")))  MutableExternalComponentType;}
namespace extension{class ExternalComponentTypeCollection;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/ExternalRelationType.h")))  ExternalRelationType;}
namespace extension{class __attribute__((annotate("$clingAutoload$extension_model/MutableExternalRelationType.h")))  MutableExternalRelationType;}
namespace extension{class ExternalRelationTypeCollection;}
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libExtensionDataModelDict dictionary payload"

#ifndef PODIO_JSON_OUTPUT
  #define PODIO_JSON_OUTPUT 1
#endif

#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_PolarVector_H
#define EXTENSION_MODEL_PolarVector_H

#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace extension {

/** @class PolarVector
 *  
 *  @author: 
 */
class PolarVector {
public:
  float r{};
  float phi{};
  float rho{};


};

std::ostream& operator<<(std::ostream& o, const extension::PolarVector& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const PolarVector& value);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExtComponent_H
#define EXTENSION_MODEL_ExtComponent_H

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace extension {

/** @class ExtComponent
 *  
 *  @author: 
 */
class ExtComponent {
public:
  NotSoSimpleStruct aStruct{};
  ::ex2::NamespaceStruct nspStruct{};


};

std::ostream& operator<<(std::ostream& o, const extension::ExtComponent& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExtComponent& value);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ContainedTypeCollection_H
#define EXTENSION_MODEL_ContainedTypeCollection_H

// datamodel specific includes
#include "extension_model/ContainedTypeData.h"
#include "extension_model/ContainedType.h"
#include "extension_model/MutableContainedType.h"
#include "extension_model/ContainedTypeObj.h"
#include "extension_model/ContainedTypeCollectionData.h"

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

namespace extension {



class ContainedTypeCollectionIterator {
public:
  ContainedTypeCollectionIterator(size_t index, const ContainedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ContainedTypeObj>{nullptr}), m_collection(collection) {}

  ContainedTypeCollectionIterator(const ContainedTypeCollectionIterator&) = delete;
  ContainedTypeCollectionIterator& operator=(const ContainedTypeCollectionIterator&) = delete;

  bool operator!=(const ContainedTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ContainedTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ContainedType operator*();
  ContainedType* operator->();
  ContainedTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ContainedType m_object;
  const ContainedTypeObjPointerContainer* m_collection;
};


class ContainedTypeMutableCollectionIterator {
public:
  ContainedTypeMutableCollectionIterator(size_t index, const ContainedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ContainedTypeObj>{nullptr}), m_collection(collection) {}

  ContainedTypeMutableCollectionIterator(const ContainedTypeMutableCollectionIterator&) = delete;
  ContainedTypeMutableCollectionIterator& operator=(const ContainedTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ContainedTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ContainedTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableContainedType operator*();
  MutableContainedType* operator->();
  ContainedTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableContainedType m_object;
  const ContainedTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ContainedTypeCollection : public podio::CollectionBase {
public:
  using value_type = ContainedType;
  using const_iterator = ContainedTypeCollectionIterator;
  using iterator = ContainedTypeMutableCollectionIterator;

  ContainedTypeCollection();
  ContainedTypeCollection(ContainedTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ContainedTypeCollection(const ContainedTypeCollection& ) = delete;
  ContainedTypeCollection& operator=(const ContainedTypeCollection& ) = delete;
  ContainedTypeCollection(ContainedTypeCollection&&) = default;
  ContainedTypeCollection& operator=(ContainedTypeCollection&&) = default;

//  ContainedTypeCollection(ContainedTypeVector* data, uint32_t collectionID);
  ~ContainedTypeCollection();

  constexpr static auto typeName = "extension::ContainedTypeCollection";
  constexpr static auto valueTypeName = "extension::ContainedType";
  constexpr static auto dataTypeName = "extension::ContainedTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ContainedTypeCollection* operator->() { return (ContainedTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableContainedType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableContainedType create(Args&&... args);

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
  ContainedType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableContainedType operator[](std::size_t index);
  /// Returns the const object of given index
  ContainedType at(std::size_t index) const;
  /// Returns the object of given index
  MutableContainedType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableContainedType object);
  /// Append an object to the (subset) collection
  void push_back(ContainedType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ContainedTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<extension::PolarVector> aVector(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ContainedTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ContainedTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ContainedTypeCollection& v);

template<typename... Args>
MutableContainedType ContainedTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ContainedTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableContainedType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ContainedTypeCollection& collection);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ContainedTypeDATA_H
#define EXTENSION_MODEL_ContainedTypeDATA_H

#include "extension_model/PolarVector.h"

namespace extension {


/** @class ContainedTypeData
 *  A datatype in the extension that is self-contained
 *  @author: T. Madlener
 */
class ContainedTypeData {
public:
  ::extension::PolarVector aVector{}; ///< a polar vector defined in this datamodel

};

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ContainedType_H
#define EXTENSION_MODEL_ContainedType_H

#include "extension_model/ContainedTypeObj.h"

#include "extension_model/PolarVector.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace extension {

class MutableContainedType;
class ContainedTypeCollection;
class ContainedTypeCollectionData;

/** @class ContainedType
 *  A datatype in the extension that is self-contained
 *  @author: T. Madlener
 */
class ContainedType {

  friend class MutableContainedType;
  friend class ContainedTypeCollection;
  friend class extension::ContainedTypeCollectionData;
  friend class ContainedTypeCollectionIterator;

public:
  using mutable_type = MutableContainedType;
  using collection_type = ContainedTypeCollection;

  /// default constructor
  ContainedType();

  /// Constructor initializing all members
  ContainedType(extension::PolarVector aVector);

  /// copy constructor
  ContainedType(const ContainedType& other) = default;

  /// copy-assignment operator
  ContainedType& operator=(ContainedType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableContainedType clone() const;

  /// destructor
  ~ContainedType() = default;

  /// converting constructor from mutable object
  ContainedType(const MutableContainedType& other);

  static ContainedType makeEmpty();

public:

  /// Access the a polar vector defined in this datamodel
  const extension::PolarVector& getAVector() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ContainedTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ContainedTypeObj>{nullptr}; }

  bool operator==(const ContainedType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableContainedType& other) const;

  bool operator!=(const ContainedType& other) const { return !(*this == other); }
  bool operator!=(const MutableContainedType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ContainedType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ContainedType& a, ContainedType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ContainedTypeObj
  explicit ContainedType(podio::utils::MaybeSharedPtr<ContainedTypeObj> obj);
  ContainedType(ContainedTypeObj* obj);

  podio::utils::MaybeSharedPtr<ContainedTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ContainedType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ContainedType& value);
#endif


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_MutableContainedType_H
#define EXTENSION_MODEL_MutableContainedType_H

#include "extension_model/ContainedTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "extension_model/ContainedType.h"

#include "extension_model/PolarVector.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace extension {


/** @class MutableContainedType
 *  A datatype in the extension that is self-contained
 *  @author: T. Madlener
 */
class MutableContainedType {

  friend class ContainedTypeCollection;
  friend class ContainedTypeMutableCollectionIterator;
  friend class ContainedType;

public:
  using object_type = ContainedType;
  using collection_type = ContainedTypeCollection;

  /// default constructor
  MutableContainedType();

  /// Constructor initializing all members
  MutableContainedType(extension::PolarVector aVector);

  /// copy constructor
  MutableContainedType(const MutableContainedType& other) = default;

  /// copy-assignment operator
  MutableContainedType& operator=(MutableContainedType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableContainedType clone() const;

  /// destructor
  ~MutableContainedType() = default;


public:

  /// Access the a polar vector defined in this datamodel
  const extension::PolarVector& getAVector() const;



  /// Set the a polar vector defined in this datamodel
  void setAVector(extension::PolarVector value);
  /// Get mutable reference to a polar vector defined in this datamodel
  extension::PolarVector& getAVector();
  /// Get reference to a polar vector defined in this datamodel
  [[deprecated("use getAVector instead")]]
  extension::PolarVector& aVector();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ContainedTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ContainedTypeObj>{nullptr}; }

  bool operator==(const MutableContainedType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ContainedType& other) const;

  bool operator!=(const MutableContainedType& other) const { return !(*this == other); }
  bool operator!=(const ContainedType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableContainedType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableContainedType& a, MutableContainedType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ContainedTypeObj
  explicit MutableContainedType(podio::utils::MaybeSharedPtr<ContainedTypeObj> obj);

  podio::utils::MaybeSharedPtr<ContainedTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableContainedType& value);
#endif


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ContainedTypeOBJ_H
#define EXTENSION_MODEL_ContainedTypeOBJ_H

// data model specific includes
#include "extension_model/ContainedTypeData.h"

#include "podio/ObjectID.h"



namespace extension {

class ContainedType;

class ContainedTypeObj {
public:
  /// constructor
  ContainedTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ContainedTypeObj(const ContainedTypeObj&);
  /// constructor from ObjectID and ContainedTypeData
  /// does not initialize the internal relation containers
  ContainedTypeObj(const podio::ObjectID id, ContainedTypeData data);
  /// No assignment operator
  ContainedTypeObj& operator=(const ContainedTypeObj&) = delete;
  virtual ~ContainedTypeObj() = default;

public:
  podio::ObjectID id;
  ContainedTypeData data;
};

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ContainedTypeCollection_H
#define EXTENSION_MODEL_ContainedTypeCollection_H

// datamodel specific includes
#include "extension_model/ContainedTypeData.h"
#include "extension_model/ContainedType.h"
#include "extension_model/MutableContainedType.h"
#include "extension_model/ContainedTypeObj.h"
#include "extension_model/ContainedTypeCollectionData.h"

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

namespace extension {



class ContainedTypeCollectionIterator {
public:
  ContainedTypeCollectionIterator(size_t index, const ContainedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ContainedTypeObj>{nullptr}), m_collection(collection) {}

  ContainedTypeCollectionIterator(const ContainedTypeCollectionIterator&) = delete;
  ContainedTypeCollectionIterator& operator=(const ContainedTypeCollectionIterator&) = delete;

  bool operator!=(const ContainedTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ContainedTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ContainedType operator*();
  ContainedType* operator->();
  ContainedTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ContainedType m_object;
  const ContainedTypeObjPointerContainer* m_collection;
};


class ContainedTypeMutableCollectionIterator {
public:
  ContainedTypeMutableCollectionIterator(size_t index, const ContainedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ContainedTypeObj>{nullptr}), m_collection(collection) {}

  ContainedTypeMutableCollectionIterator(const ContainedTypeMutableCollectionIterator&) = delete;
  ContainedTypeMutableCollectionIterator& operator=(const ContainedTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ContainedTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ContainedTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableContainedType operator*();
  MutableContainedType* operator->();
  ContainedTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableContainedType m_object;
  const ContainedTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ContainedTypeCollection : public podio::CollectionBase {
public:
  using value_type = ContainedType;
  using const_iterator = ContainedTypeCollectionIterator;
  using iterator = ContainedTypeMutableCollectionIterator;

  ContainedTypeCollection();
  ContainedTypeCollection(ContainedTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ContainedTypeCollection(const ContainedTypeCollection& ) = delete;
  ContainedTypeCollection& operator=(const ContainedTypeCollection& ) = delete;
  ContainedTypeCollection(ContainedTypeCollection&&) = default;
  ContainedTypeCollection& operator=(ContainedTypeCollection&&) = default;

//  ContainedTypeCollection(ContainedTypeVector* data, uint32_t collectionID);
  ~ContainedTypeCollection();

  constexpr static auto typeName = "extension::ContainedTypeCollection";
  constexpr static auto valueTypeName = "extension::ContainedType";
  constexpr static auto dataTypeName = "extension::ContainedTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ContainedTypeCollection* operator->() { return (ContainedTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableContainedType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableContainedType create(Args&&... args);

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
  ContainedType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableContainedType operator[](std::size_t index);
  /// Returns the const object of given index
  ContainedType at(std::size_t index) const;
  /// Returns the object of given index
  MutableContainedType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableContainedType object);
  /// Append an object to the (subset) collection
  void push_back(ContainedType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ContainedTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<extension::PolarVector> aVector(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ContainedTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ContainedTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ContainedTypeCollection& v);

template<typename... Args>
MutableContainedType ContainedTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ContainedTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableContainedType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ContainedTypeCollection& collection);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ContainedType_CollectionData_H
#define EXTENSION_MODEL_ContainedType_CollectionData_H

// datamodel specific includes
#include "extension_model/ContainedTypeData.h"
#include "extension_model/ContainedTypeObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace extension {


using ContainedTypeObjPointerContainer = std::deque<ContainedTypeObj*>;
using ContainedTypeDataContainer = std::vector<ContainedTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ContainedTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ContainedTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ContainedTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ContainedTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ContainedTypeCollectionData(const ContainedTypeCollectionData&) = delete;
  ContainedTypeCollectionData& operator=(const ContainedTypeCollectionData&) = delete;
  ContainedTypeCollectionData(ContainedTypeCollectionData&& other) = default;
  ContainedTypeCollectionData& operator=(ContainedTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ContainedTypeCollectionData() = default;

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
  std::unique_ptr<ContainedTypeDataContainer> m_data{nullptr};
};


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalComponentTypeCollection_H
#define EXTENSION_MODEL_ExternalComponentTypeCollection_H

// datamodel specific includes
#include "extension_model/ExternalComponentTypeData.h"
#include "extension_model/ExternalComponentType.h"
#include "extension_model/MutableExternalComponentType.h"
#include "extension_model/ExternalComponentTypeObj.h"
#include "extension_model/ExternalComponentTypeCollectionData.h"

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

namespace extension {



class ExternalComponentTypeCollectionIterator {
public:
  ExternalComponentTypeCollectionIterator(size_t index, const ExternalComponentTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalComponentTypeObj>{nullptr}), m_collection(collection) {}

  ExternalComponentTypeCollectionIterator(const ExternalComponentTypeCollectionIterator&) = delete;
  ExternalComponentTypeCollectionIterator& operator=(const ExternalComponentTypeCollectionIterator&) = delete;

  bool operator!=(const ExternalComponentTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalComponentTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExternalComponentType operator*();
  ExternalComponentType* operator->();
  ExternalComponentTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExternalComponentType m_object;
  const ExternalComponentTypeObjPointerContainer* m_collection;
};


class ExternalComponentTypeMutableCollectionIterator {
public:
  ExternalComponentTypeMutableCollectionIterator(size_t index, const ExternalComponentTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalComponentTypeObj>{nullptr}), m_collection(collection) {}

  ExternalComponentTypeMutableCollectionIterator(const ExternalComponentTypeMutableCollectionIterator&) = delete;
  ExternalComponentTypeMutableCollectionIterator& operator=(const ExternalComponentTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExternalComponentTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalComponentTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExternalComponentType operator*();
  MutableExternalComponentType* operator->();
  ExternalComponentTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExternalComponentType m_object;
  const ExternalComponentTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExternalComponentTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExternalComponentType;
  using const_iterator = ExternalComponentTypeCollectionIterator;
  using iterator = ExternalComponentTypeMutableCollectionIterator;

  ExternalComponentTypeCollection();
  ExternalComponentTypeCollection(ExternalComponentTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExternalComponentTypeCollection(const ExternalComponentTypeCollection& ) = delete;
  ExternalComponentTypeCollection& operator=(const ExternalComponentTypeCollection& ) = delete;
  ExternalComponentTypeCollection(ExternalComponentTypeCollection&&) = default;
  ExternalComponentTypeCollection& operator=(ExternalComponentTypeCollection&&) = default;

//  ExternalComponentTypeCollection(ExternalComponentTypeVector* data, uint32_t collectionID);
  ~ExternalComponentTypeCollection();

  constexpr static auto typeName = "extension::ExternalComponentTypeCollection";
  constexpr static auto valueTypeName = "extension::ExternalComponentType";
  constexpr static auto dataTypeName = "extension::ExternalComponentTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExternalComponentTypeCollection* operator->() { return (ExternalComponentTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExternalComponentType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExternalComponentType create(Args&&... args);

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
  ExternalComponentType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExternalComponentType operator[](std::size_t index);
  /// Returns the const object of given index
  ExternalComponentType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExternalComponentType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExternalComponentType object);
  /// Append an object to the (subset) collection
  void push_back(ExternalComponentType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExternalComponentTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<SimpleStruct> aStruct(const size_t nElem = 0) const;
  std::vector<extension::PolarVector> aVector(const size_t nElem = 0) const;
  std::vector<extension::ExtComponent> aComponent(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExternalComponentTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExternalComponentTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExternalComponentTypeCollection& v);

template<typename... Args>
MutableExternalComponentType ExternalComponentTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExternalComponentTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExternalComponentType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExternalComponentTypeCollection& collection);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalComponentTypeDATA_H
#define EXTENSION_MODEL_ExternalComponentTypeDATA_H

#include "extension_model/ExtComponent.h"
#include "extension_model/PolarVector.h"
#include "datamodel/SimpleStruct.h"

namespace extension {


/** @class ExternalComponentTypeData
 *  A datatype in the extension with components from an upstream datamodel
 *  @author: T. Madlener
 */
class ExternalComponentTypeData {
public:
  SimpleStruct aStruct{}; ///< a simple struct defined upstream
  ::extension::PolarVector aVector{}; ///< an included component
  ::extension::ExtComponent aComponent{}; ///< a component with an external component internally

};

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalComponentType_H
#define EXTENSION_MODEL_ExternalComponentType_H

#include "extension_model/ExternalComponentTypeObj.h"

#include "extension_model/ExtComponent.h"
#include "extension_model/PolarVector.h"
#include "datamodel/SimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace extension {

class MutableExternalComponentType;
class ExternalComponentTypeCollection;
class ExternalComponentTypeCollectionData;

/** @class ExternalComponentType
 *  A datatype in the extension with components from an upstream datamodel
 *  @author: T. Madlener
 */
class ExternalComponentType {

  friend class MutableExternalComponentType;
  friend class ExternalComponentTypeCollection;
  friend class extension::ExternalComponentTypeCollectionData;
  friend class ExternalComponentTypeCollectionIterator;

public:
  using mutable_type = MutableExternalComponentType;
  using collection_type = ExternalComponentTypeCollection;

  /// default constructor
  ExternalComponentType();

  /// Constructor initializing all members
  ExternalComponentType(SimpleStruct aStruct, extension::PolarVector aVector, extension::ExtComponent aComponent);

  /// copy constructor
  ExternalComponentType(const ExternalComponentType& other) = default;

  /// copy-assignment operator
  ExternalComponentType& operator=(ExternalComponentType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExternalComponentType clone() const;

  /// destructor
  ~ExternalComponentType() = default;

  /// converting constructor from mutable object
  ExternalComponentType(const MutableExternalComponentType& other);

  static ExternalComponentType makeEmpty();

public:

  /// Access the a simple struct defined upstream
  const SimpleStruct& getAStruct() const;

  /// Access the an included component
  const extension::PolarVector& getAVector() const;

  /// Access the a component with an external component internally
  const extension::ExtComponent& getAComponent() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExternalComponentTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExternalComponentTypeObj>{nullptr}; }

  bool operator==(const ExternalComponentType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExternalComponentType& other) const;

  bool operator!=(const ExternalComponentType& other) const { return !(*this == other); }
  bool operator!=(const MutableExternalComponentType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExternalComponentType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExternalComponentType& a, ExternalComponentType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExternalComponentTypeObj
  explicit ExternalComponentType(podio::utils::MaybeSharedPtr<ExternalComponentTypeObj> obj);
  ExternalComponentType(ExternalComponentTypeObj* obj);

  podio::utils::MaybeSharedPtr<ExternalComponentTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExternalComponentType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExternalComponentType& value);
#endif


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_MutableExternalComponentType_H
#define EXTENSION_MODEL_MutableExternalComponentType_H

#include "extension_model/ExternalComponentTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "extension_model/ExternalComponentType.h"

#include "extension_model/ExtComponent.h"
#include "extension_model/PolarVector.h"
#include "datamodel/SimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace extension {


/** @class MutableExternalComponentType
 *  A datatype in the extension with components from an upstream datamodel
 *  @author: T. Madlener
 */
class MutableExternalComponentType {

  friend class ExternalComponentTypeCollection;
  friend class ExternalComponentTypeMutableCollectionIterator;
  friend class ExternalComponentType;

public:
  using object_type = ExternalComponentType;
  using collection_type = ExternalComponentTypeCollection;

  /// default constructor
  MutableExternalComponentType();

  /// Constructor initializing all members
  MutableExternalComponentType(SimpleStruct aStruct, extension::PolarVector aVector, extension::ExtComponent aComponent);

  /// copy constructor
  MutableExternalComponentType(const MutableExternalComponentType& other) = default;

  /// copy-assignment operator
  MutableExternalComponentType& operator=(MutableExternalComponentType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExternalComponentType clone() const;

  /// destructor
  ~MutableExternalComponentType() = default;


public:

  /// Access the a simple struct defined upstream
  const SimpleStruct& getAStruct() const;

  /// Access the an included component
  const extension::PolarVector& getAVector() const;

  /// Access the a component with an external component internally
  const extension::ExtComponent& getAComponent() const;



  /// Set the a simple struct defined upstream
  void setAStruct(SimpleStruct value);
  /// Get mutable reference to a simple struct defined upstream
  SimpleStruct& getAStruct();
  /// Get reference to a simple struct defined upstream
  [[deprecated("use getAStruct instead")]]
  SimpleStruct& aStruct();

  /// Set the an included component
  void setAVector(extension::PolarVector value);
  /// Get mutable reference to an included component
  extension::PolarVector& getAVector();
  /// Get reference to an included component
  [[deprecated("use getAVector instead")]]
  extension::PolarVector& aVector();

  /// Set the a component with an external component internally
  void setAComponent(extension::ExtComponent value);
  /// Get mutable reference to a component with an external component internally
  extension::ExtComponent& getAComponent();
  /// Get reference to a component with an external component internally
  [[deprecated("use getAComponent instead")]]
  extension::ExtComponent& aComponent();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExternalComponentTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExternalComponentTypeObj>{nullptr}; }

  bool operator==(const MutableExternalComponentType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExternalComponentType& other) const;

  bool operator!=(const MutableExternalComponentType& other) const { return !(*this == other); }
  bool operator!=(const ExternalComponentType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExternalComponentType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExternalComponentType& a, MutableExternalComponentType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExternalComponentTypeObj
  explicit MutableExternalComponentType(podio::utils::MaybeSharedPtr<ExternalComponentTypeObj> obj);

  podio::utils::MaybeSharedPtr<ExternalComponentTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExternalComponentType& value);
#endif


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalComponentTypeOBJ_H
#define EXTENSION_MODEL_ExternalComponentTypeOBJ_H

// data model specific includes
#include "extension_model/ExternalComponentTypeData.h"

#include "podio/ObjectID.h"



namespace extension {

class ExternalComponentType;

class ExternalComponentTypeObj {
public:
  /// constructor
  ExternalComponentTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExternalComponentTypeObj(const ExternalComponentTypeObj&);
  /// constructor from ObjectID and ExternalComponentTypeData
  /// does not initialize the internal relation containers
  ExternalComponentTypeObj(const podio::ObjectID id, ExternalComponentTypeData data);
  /// No assignment operator
  ExternalComponentTypeObj& operator=(const ExternalComponentTypeObj&) = delete;
  virtual ~ExternalComponentTypeObj() = default;

public:
  podio::ObjectID id;
  ExternalComponentTypeData data;
};

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalComponentTypeCollection_H
#define EXTENSION_MODEL_ExternalComponentTypeCollection_H

// datamodel specific includes
#include "extension_model/ExternalComponentTypeData.h"
#include "extension_model/ExternalComponentType.h"
#include "extension_model/MutableExternalComponentType.h"
#include "extension_model/ExternalComponentTypeObj.h"
#include "extension_model/ExternalComponentTypeCollectionData.h"

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

namespace extension {



class ExternalComponentTypeCollectionIterator {
public:
  ExternalComponentTypeCollectionIterator(size_t index, const ExternalComponentTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalComponentTypeObj>{nullptr}), m_collection(collection) {}

  ExternalComponentTypeCollectionIterator(const ExternalComponentTypeCollectionIterator&) = delete;
  ExternalComponentTypeCollectionIterator& operator=(const ExternalComponentTypeCollectionIterator&) = delete;

  bool operator!=(const ExternalComponentTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalComponentTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExternalComponentType operator*();
  ExternalComponentType* operator->();
  ExternalComponentTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExternalComponentType m_object;
  const ExternalComponentTypeObjPointerContainer* m_collection;
};


class ExternalComponentTypeMutableCollectionIterator {
public:
  ExternalComponentTypeMutableCollectionIterator(size_t index, const ExternalComponentTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalComponentTypeObj>{nullptr}), m_collection(collection) {}

  ExternalComponentTypeMutableCollectionIterator(const ExternalComponentTypeMutableCollectionIterator&) = delete;
  ExternalComponentTypeMutableCollectionIterator& operator=(const ExternalComponentTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExternalComponentTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalComponentTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExternalComponentType operator*();
  MutableExternalComponentType* operator->();
  ExternalComponentTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExternalComponentType m_object;
  const ExternalComponentTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExternalComponentTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExternalComponentType;
  using const_iterator = ExternalComponentTypeCollectionIterator;
  using iterator = ExternalComponentTypeMutableCollectionIterator;

  ExternalComponentTypeCollection();
  ExternalComponentTypeCollection(ExternalComponentTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExternalComponentTypeCollection(const ExternalComponentTypeCollection& ) = delete;
  ExternalComponentTypeCollection& operator=(const ExternalComponentTypeCollection& ) = delete;
  ExternalComponentTypeCollection(ExternalComponentTypeCollection&&) = default;
  ExternalComponentTypeCollection& operator=(ExternalComponentTypeCollection&&) = default;

//  ExternalComponentTypeCollection(ExternalComponentTypeVector* data, uint32_t collectionID);
  ~ExternalComponentTypeCollection();

  constexpr static auto typeName = "extension::ExternalComponentTypeCollection";
  constexpr static auto valueTypeName = "extension::ExternalComponentType";
  constexpr static auto dataTypeName = "extension::ExternalComponentTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExternalComponentTypeCollection* operator->() { return (ExternalComponentTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExternalComponentType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExternalComponentType create(Args&&... args);

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
  ExternalComponentType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExternalComponentType operator[](std::size_t index);
  /// Returns the const object of given index
  ExternalComponentType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExternalComponentType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExternalComponentType object);
  /// Append an object to the (subset) collection
  void push_back(ExternalComponentType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExternalComponentTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<SimpleStruct> aStruct(const size_t nElem = 0) const;
  std::vector<extension::PolarVector> aVector(const size_t nElem = 0) const;
  std::vector<extension::ExtComponent> aComponent(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExternalComponentTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExternalComponentTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExternalComponentTypeCollection& v);

template<typename... Args>
MutableExternalComponentType ExternalComponentTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExternalComponentTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExternalComponentType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExternalComponentTypeCollection& collection);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalComponentType_CollectionData_H
#define EXTENSION_MODEL_ExternalComponentType_CollectionData_H

// datamodel specific includes
#include "extension_model/ExternalComponentTypeData.h"
#include "extension_model/ExternalComponentTypeObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace extension {


using ExternalComponentTypeObjPointerContainer = std::deque<ExternalComponentTypeObj*>;
using ExternalComponentTypeDataContainer = std::vector<ExternalComponentTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExternalComponentTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExternalComponentTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExternalComponentTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExternalComponentTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExternalComponentTypeCollectionData(const ExternalComponentTypeCollectionData&) = delete;
  ExternalComponentTypeCollectionData& operator=(const ExternalComponentTypeCollectionData&) = delete;
  ExternalComponentTypeCollectionData(ExternalComponentTypeCollectionData&& other) = default;
  ExternalComponentTypeCollectionData& operator=(ExternalComponentTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExternalComponentTypeCollectionData() = default;

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
  std::unique_ptr<ExternalComponentTypeDataContainer> m_data{nullptr};
};


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalRelationTypeCollection_H
#define EXTENSION_MODEL_ExternalRelationTypeCollection_H

// datamodel specific includes
#include "extension_model/ExternalRelationTypeData.h"
#include "extension_model/ExternalRelationType.h"
#include "extension_model/MutableExternalRelationType.h"
#include "extension_model/ExternalRelationTypeObj.h"
#include "extension_model/ExternalRelationTypeCollectionData.h"

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

namespace extension {



class ExternalRelationTypeCollectionIterator {
public:
  ExternalRelationTypeCollectionIterator(size_t index, const ExternalRelationTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalRelationTypeObj>{nullptr}), m_collection(collection) {}

  ExternalRelationTypeCollectionIterator(const ExternalRelationTypeCollectionIterator&) = delete;
  ExternalRelationTypeCollectionIterator& operator=(const ExternalRelationTypeCollectionIterator&) = delete;

  bool operator!=(const ExternalRelationTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalRelationTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExternalRelationType operator*();
  ExternalRelationType* operator->();
  ExternalRelationTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExternalRelationType m_object;
  const ExternalRelationTypeObjPointerContainer* m_collection;
};


class ExternalRelationTypeMutableCollectionIterator {
public:
  ExternalRelationTypeMutableCollectionIterator(size_t index, const ExternalRelationTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalRelationTypeObj>{nullptr}), m_collection(collection) {}

  ExternalRelationTypeMutableCollectionIterator(const ExternalRelationTypeMutableCollectionIterator&) = delete;
  ExternalRelationTypeMutableCollectionIterator& operator=(const ExternalRelationTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExternalRelationTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalRelationTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExternalRelationType operator*();
  MutableExternalRelationType* operator->();
  ExternalRelationTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExternalRelationType m_object;
  const ExternalRelationTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExternalRelationTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExternalRelationType;
  using const_iterator = ExternalRelationTypeCollectionIterator;
  using iterator = ExternalRelationTypeMutableCollectionIterator;

  ExternalRelationTypeCollection();
  ExternalRelationTypeCollection(ExternalRelationTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExternalRelationTypeCollection(const ExternalRelationTypeCollection& ) = delete;
  ExternalRelationTypeCollection& operator=(const ExternalRelationTypeCollection& ) = delete;
  ExternalRelationTypeCollection(ExternalRelationTypeCollection&&) = default;
  ExternalRelationTypeCollection& operator=(ExternalRelationTypeCollection&&) = default;

//  ExternalRelationTypeCollection(ExternalRelationTypeVector* data, uint32_t collectionID);
  ~ExternalRelationTypeCollection();

  constexpr static auto typeName = "extension::ExternalRelationTypeCollection";
  constexpr static auto valueTypeName = "extension::ExternalRelationType";
  constexpr static auto dataTypeName = "extension::ExternalRelationTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExternalRelationTypeCollection* operator->() { return (ExternalRelationTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExternalRelationType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExternalRelationType create(Args&&... args);

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
  ExternalRelationType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExternalRelationType operator[](std::size_t index);
  /// Returns the const object of given index
  ExternalRelationType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExternalRelationType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExternalRelationType object);
  /// Append an object to the (subset) collection
  void push_back(ExternalRelationType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExternalRelationTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<float> weight(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExternalRelationTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExternalRelationTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExternalRelationTypeCollection& v);

template<typename... Args>
MutableExternalRelationType ExternalRelationTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExternalRelationTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExternalRelationTypeData} constructor
  obj->m_clusters = new std::vector<ExampleCluster>();
  obj->m_relationType = new std::vector<ex42::ExampleWithARelation>();
  obj->m_someStructs = new std::vector<SimpleStruct>();
  m_storage.createRelations(obj);
  return MutableExternalRelationType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExternalRelationTypeCollection& collection);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalRelationTypeDATA_H
#define EXTENSION_MODEL_ExternalRelationTypeDATA_H


namespace extension {


/** @class ExternalRelationTypeData
 *  A datatype with relations to external datatypes
 *  @author: T. Madlener
 */
class ExternalRelationTypeData {
public:
  float weight{}; ///< an arbitrary weight

  unsigned int someStructs_begin{};
  unsigned int someStructs_end{};
  unsigned int clusters_begin{};
  unsigned int clusters_end{};
  unsigned int relationType_begin{};
  unsigned int relationType_end{};
};

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalRelationType_H
#define EXTENSION_MODEL_ExternalRelationType_H

#include "extension_model/ExternalRelationTypeObj.h"

#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleWithARelation.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleHit;
class MutableExampleHit;


namespace extension {

class MutableExternalRelationType;
class ExternalRelationTypeCollection;
class ExternalRelationTypeCollectionData;

/** @class ExternalRelationType
 *  A datatype with relations to external datatypes
 *  @author: T. Madlener
 */
class ExternalRelationType {

  friend class MutableExternalRelationType;
  friend class ExternalRelationTypeCollection;
  friend class extension::ExternalRelationTypeCollectionData;
  friend class ExternalRelationTypeCollectionIterator;

public:
  using mutable_type = MutableExternalRelationType;
  using collection_type = ExternalRelationTypeCollection;

  /// default constructor
  ExternalRelationType();

  /// Constructor initializing all members
  ExternalRelationType(float weight);

  /// copy constructor
  ExternalRelationType(const ExternalRelationType& other) = default;

  /// copy-assignment operator
  ExternalRelationType& operator=(ExternalRelationType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExternalRelationType clone() const;

  /// destructor
  ~ExternalRelationType() = default;

  /// converting constructor from mutable object
  ExternalRelationType(const MutableExternalRelationType& other);

  static ExternalRelationType makeEmpty();

public:

  /// Access the an arbitrary weight
  float getWeight() const;


  /// Access the a Hit from the upstream datamodel
  const ExampleHit getSingleHit() const;

  std::size_t clusters_size() const;
  ExampleCluster getClusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator clusters_end() const;
  podio::RelationRange<ExampleCluster> getClusters() const;
  std::size_t relationType_size() const;
  ex42::ExampleWithARelation getRelationType(std::size_t) const;
  std::vector<ex42::ExampleWithARelation>::const_iterator relationType_begin() const;
  std::vector<ex42::ExampleWithARelation>::const_iterator relationType_end() const;
  podio::RelationRange<ex42::ExampleWithARelation> getRelationType() const;
  std::size_t someStructs_size() const;
  SimpleStruct getSomeStructs(std::size_t) const;
  std::vector<SimpleStruct>::const_iterator someStructs_begin() const;
  std::vector<SimpleStruct>::const_iterator someStructs_end() const;
  podio::RelationRange<SimpleStruct> getSomeStructs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExternalRelationTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExternalRelationTypeObj>{nullptr}; }

  bool operator==(const ExternalRelationType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExternalRelationType& other) const;

  bool operator!=(const ExternalRelationType& other) const { return !(*this == other); }
  bool operator!=(const MutableExternalRelationType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExternalRelationType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExternalRelationType& a, ExternalRelationType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExternalRelationTypeObj
  explicit ExternalRelationType(podio::utils::MaybeSharedPtr<ExternalRelationTypeObj> obj);
  ExternalRelationType(ExternalRelationTypeObj* obj);

  podio::utils::MaybeSharedPtr<ExternalRelationTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExternalRelationType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExternalRelationType& value);
#endif


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_MutableExternalRelationType_H
#define EXTENSION_MODEL_MutableExternalRelationType_H

#include "extension_model/ExternalRelationTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "extension_model/ExternalRelationType.h"

#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleWithARelation.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleHit;
class MutableExampleHit;


namespace extension {


/** @class MutableExternalRelationType
 *  A datatype with relations to external datatypes
 *  @author: T. Madlener
 */
class MutableExternalRelationType {

  friend class ExternalRelationTypeCollection;
  friend class ExternalRelationTypeMutableCollectionIterator;
  friend class ExternalRelationType;

public:
  using object_type = ExternalRelationType;
  using collection_type = ExternalRelationTypeCollection;

  /// default constructor
  MutableExternalRelationType();

  /// Constructor initializing all members
  MutableExternalRelationType(float weight);

  /// copy constructor
  MutableExternalRelationType(const MutableExternalRelationType& other) = default;

  /// copy-assignment operator
  MutableExternalRelationType& operator=(MutableExternalRelationType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExternalRelationType clone() const;

  /// destructor
  ~MutableExternalRelationType() = default;


public:

  /// Access the an arbitrary weight
  float getWeight() const;


  /// Access the a Hit from the upstream datamodel
  const ExampleHit getSingleHit() const;

  /// Set the an arbitrary weight
  void setWeight(float value);
  /// Get mutable reference to an arbitrary weight
  float& getWeight();
  /// Get reference to an arbitrary weight
  [[deprecated("use getWeight instead")]]
  float& weight();


  /// Set the a Hit from the upstream datamodel
  void setSingleHit(ExampleHit value);

  void addToClusters(ExampleCluster);
  std::size_t clusters_size() const;
  ExampleCluster getClusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator clusters_end() const;
  podio::RelationRange<ExampleCluster> getClusters() const;
  void addToRelationType(ex42::ExampleWithARelation);
  std::size_t relationType_size() const;
  ex42::ExampleWithARelation getRelationType(std::size_t) const;
  std::vector<ex42::ExampleWithARelation>::const_iterator relationType_begin() const;
  std::vector<ex42::ExampleWithARelation>::const_iterator relationType_end() const;
  podio::RelationRange<ex42::ExampleWithARelation> getRelationType() const;
  void addToSomeStructs(SimpleStruct);
  std::size_t someStructs_size() const;
  SimpleStruct getSomeStructs(std::size_t) const;
  std::vector<SimpleStruct>::const_iterator someStructs_begin() const;
  std::vector<SimpleStruct>::const_iterator someStructs_end() const;
  podio::RelationRange<SimpleStruct> getSomeStructs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExternalRelationTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExternalRelationTypeObj>{nullptr}; }

  bool operator==(const MutableExternalRelationType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExternalRelationType& other) const;

  bool operator!=(const MutableExternalRelationType& other) const { return !(*this == other); }
  bool operator!=(const ExternalRelationType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExternalRelationType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExternalRelationType& a, MutableExternalRelationType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExternalRelationTypeObj
  explicit MutableExternalRelationType(podio::utils::MaybeSharedPtr<ExternalRelationTypeObj> obj);

  podio::utils::MaybeSharedPtr<ExternalRelationTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExternalRelationType& value);
#endif


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalRelationTypeOBJ_H
#define EXTENSION_MODEL_ExternalRelationTypeOBJ_H

// data model specific includes
#include "extension_model/ExternalRelationTypeData.h"
#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleWithARelation.h"
#include "datamodel/SimpleStruct.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>
// forward declarations
class ExampleHit;


namespace extension {

class ExternalRelationType;

class ExternalRelationTypeObj {
public:
  /// constructor
  ExternalRelationTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExternalRelationTypeObj(const ExternalRelationTypeObj&);
  /// constructor from ObjectID and ExternalRelationTypeData
  /// does not initialize the internal relation containers
  ExternalRelationTypeObj(const podio::ObjectID id, ExternalRelationTypeData data);
  /// No assignment operator
  ExternalRelationTypeObj& operator=(const ExternalRelationTypeObj&) = delete;
  virtual ~ExternalRelationTypeObj();

public:
  podio::ObjectID id;
  ExternalRelationTypeData data;
  ExampleHit* m_singleHit{nullptr};
  std::vector<ExampleCluster>* m_clusters{nullptr};
  std::vector<ex42::ExampleWithARelation>* m_relationType{nullptr};
  std::vector<SimpleStruct>* m_someStructs{nullptr};
};

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalRelationTypeCollection_H
#define EXTENSION_MODEL_ExternalRelationTypeCollection_H

// datamodel specific includes
#include "extension_model/ExternalRelationTypeData.h"
#include "extension_model/ExternalRelationType.h"
#include "extension_model/MutableExternalRelationType.h"
#include "extension_model/ExternalRelationTypeObj.h"
#include "extension_model/ExternalRelationTypeCollectionData.h"

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

namespace extension {



class ExternalRelationTypeCollectionIterator {
public:
  ExternalRelationTypeCollectionIterator(size_t index, const ExternalRelationTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalRelationTypeObj>{nullptr}), m_collection(collection) {}

  ExternalRelationTypeCollectionIterator(const ExternalRelationTypeCollectionIterator&) = delete;
  ExternalRelationTypeCollectionIterator& operator=(const ExternalRelationTypeCollectionIterator&) = delete;

  bool operator!=(const ExternalRelationTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalRelationTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExternalRelationType operator*();
  ExternalRelationType* operator->();
  ExternalRelationTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExternalRelationType m_object;
  const ExternalRelationTypeObjPointerContainer* m_collection;
};


class ExternalRelationTypeMutableCollectionIterator {
public:
  ExternalRelationTypeMutableCollectionIterator(size_t index, const ExternalRelationTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExternalRelationTypeObj>{nullptr}), m_collection(collection) {}

  ExternalRelationTypeMutableCollectionIterator(const ExternalRelationTypeMutableCollectionIterator&) = delete;
  ExternalRelationTypeMutableCollectionIterator& operator=(const ExternalRelationTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExternalRelationTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExternalRelationTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExternalRelationType operator*();
  MutableExternalRelationType* operator->();
  ExternalRelationTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExternalRelationType m_object;
  const ExternalRelationTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExternalRelationTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExternalRelationType;
  using const_iterator = ExternalRelationTypeCollectionIterator;
  using iterator = ExternalRelationTypeMutableCollectionIterator;

  ExternalRelationTypeCollection();
  ExternalRelationTypeCollection(ExternalRelationTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExternalRelationTypeCollection(const ExternalRelationTypeCollection& ) = delete;
  ExternalRelationTypeCollection& operator=(const ExternalRelationTypeCollection& ) = delete;
  ExternalRelationTypeCollection(ExternalRelationTypeCollection&&) = default;
  ExternalRelationTypeCollection& operator=(ExternalRelationTypeCollection&&) = default;

//  ExternalRelationTypeCollection(ExternalRelationTypeVector* data, uint32_t collectionID);
  ~ExternalRelationTypeCollection();

  constexpr static auto typeName = "extension::ExternalRelationTypeCollection";
  constexpr static auto valueTypeName = "extension::ExternalRelationType";
  constexpr static auto dataTypeName = "extension::ExternalRelationTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExternalRelationTypeCollection* operator->() { return (ExternalRelationTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExternalRelationType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExternalRelationType create(Args&&... args);

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
  ExternalRelationType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExternalRelationType operator[](std::size_t index);
  /// Returns the const object of given index
  ExternalRelationType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExternalRelationType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExternalRelationType object);
  /// Append an object to the (subset) collection
  void push_back(ExternalRelationType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExternalRelationTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<float> weight(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExternalRelationTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExternalRelationTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExternalRelationTypeCollection& v);

template<typename... Args>
MutableExternalRelationType ExternalRelationTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExternalRelationTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExternalRelationTypeData} constructor
  obj->m_clusters = new std::vector<ExampleCluster>();
  obj->m_relationType = new std::vector<ex42::ExampleWithARelation>();
  obj->m_someStructs = new std::vector<SimpleStruct>();
  m_storage.createRelations(obj);
  return MutableExternalRelationType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExternalRelationTypeCollection& collection);
#endif

} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef EXTENSION_MODEL_ExternalRelationType_CollectionData_H
#define EXTENSION_MODEL_ExternalRelationType_CollectionData_H

// datamodel specific includes
#include "extension_model/ExternalRelationTypeData.h"
#include "extension_model/ExternalRelationTypeObj.h"
#include "datamodel/ExampleCluster.h"
#include "datamodel/ExampleHit.h"
#include "datamodel/ExampleWithARelation.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace extension {


using ExternalRelationTypeObjPointerContainer = std::deque<ExternalRelationTypeObj*>;
using ExternalRelationTypeDataContainer = std::vector<ExternalRelationTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExternalRelationTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExternalRelationTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExternalRelationTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExternalRelationTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExternalRelationTypeCollectionData(const ExternalRelationTypeCollectionData&) = delete;
  ExternalRelationTypeCollectionData& operator=(const ExternalRelationTypeCollectionData&) = delete;
  ExternalRelationTypeCollectionData(ExternalRelationTypeCollectionData&& other) = default;
  ExternalRelationTypeCollectionData& operator=(ExternalRelationTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExternalRelationTypeCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExternalRelationTypeObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleCluster> m_rel_clusters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleCluster>> m_rel_clusters_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<ex42::ExampleWithARelation> m_rel_relationType;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<ex42::ExampleWithARelation>> m_rel_relationType_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleHit> m_rel_singleHit{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members
  podio::UVecPtr<SimpleStruct> m_vec_someStructs{nullptr}; /// combined vector of all objects in collection
  std::vector<podio::UVecPtr<SimpleStruct>> m_vecs_someStructs{}; /// pointers to individual member vectors

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExternalRelationTypeDataContainer> m_data{nullptr};
};


} // namespace extension


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "podio/DatamodelRegistry.h"
#include "podio/SchemaEvolution.h"

namespace extension_model::meta {
/**
 * The complete definition of the datamodel at generation time in JSON format.
 */
static constexpr auto extension_model__JSONDefinition = R"DATAMODELDEF({"options": {"getSyntax": true, "exposePODMembers": false, "includeSubfolder": "extension_model/"}, "schema_version": 1, "components": {"extension::PolarVector": {"Members": ["float r", "float phi", "float rho"]}, "extension::ExtComponent": {"Members": ["NotSoSimpleStruct aStruct", "ex2::NamespaceStruct nspStruct"]}}, "datatypes": {"extension::ContainedType": {"Author": "T. Madlener", "Description": "A datatype in the extension that is self-contained", "Members": ["extension::PolarVector aVector // a polar vector defined in this datamodel"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "extension::ExternalComponentType": {"Author": "T. Madlener", "Description": "A datatype in the extension with components from an upstream datamodel", "Members": ["SimpleStruct aStruct // a simple struct defined upstream", "extension::PolarVector aVector // an included component", "extension::ExtComponent aComponent // a component with an external component internally"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "extension::ExternalRelationType": {"Author": "T. Madlener", "Description": "A datatype with relations to external datatypes", "Members": ["float weight // an arbitrary weight"], "OneToOneRelations": ["ExampleHit singleHit // a Hit from the upstream datamodel"], "OneToManyRelations": ["ExampleCluster clusters // clusters from the upstream datamodel", "ex42::ExampleWithARelation relationType // a namespaced type from upstream"], "VectorMembers": ["SimpleStruct someStructs // a vector member component from upstream"], "ExtraCode": {}, "MutableExtraCode": {}}}, "interfaces": {}})DATAMODELDEF";


/**
 * The names of all relations and vector members for all datatypes
 */
inline podio::RelationNameMapping extension_model__getRelationNames() {
  using namespace std::string_view_literals;
  return {
    {"extension::ContainedType"sv,
      {  },
      {  },
    },
    {"extension::ExternalComponentType"sv,
      {  },
      {  },
    },
    {"extension::ExternalRelationType"sv,
      { "clusters"sv, "relationType"sv, "singleHit"sv },
      { "someStructs"sv },
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
    static const auto relationNames = extension_model__getRelationNames();
    static auto index = DatamodelRegistryIndex(podio::DatamodelRegistry::mutInstance().registerDatamodel("extension_model", extension_model__JSONDefinition, relationNames));
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
      return extension_model::meta::DatamodelRegistryIndex::value() != podio::DatamodelRegistry::NoDefinitionAvailable;
    }();
    return reg;
  }

  const auto registrationEnsured = ensureRegistration();
}

} // namespace extension_model::meta

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"extension::ContainedType", payloadCode, "@",
"extension::ContainedTypeCollection", payloadCode, "@",
"extension::ContainedTypeData", payloadCode, "@",
"extension::ExtComponent", payloadCode, "@",
"extension::ExternalComponentType", payloadCode, "@",
"extension::ExternalComponentTypeCollection", payloadCode, "@",
"extension::ExternalComponentTypeData", payloadCode, "@",
"extension::ExternalRelationType", payloadCode, "@",
"extension::ExternalRelationTypeCollection", payloadCode, "@",
"extension::ExternalRelationTypeData", payloadCode, "@",
"extension::MutableContainedType", payloadCode, "@",
"extension::MutableExternalComponentType", payloadCode, "@",
"extension::MutableExternalRelationType", payloadCode, "@",
"extension::PolarVector", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libExtensionDataModelDict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libExtensionDataModelDict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libExtensionDataModelDict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libExtensionDataModelDict() {
  TriggerDictionaryInitialization_libExtensionDataModelDict_Impl();
}
