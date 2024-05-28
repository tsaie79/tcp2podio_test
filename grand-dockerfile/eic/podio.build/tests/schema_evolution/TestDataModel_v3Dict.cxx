// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME TestDataModel_v3Dict
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

#include "TBuffer.h"
#include "TVirtualObject.h"
#include <vector>
#include "TSchemaHelper.h"


// Header files passed as explicit arguments
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/SimpleStruct.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/NotSoSimpleStruct.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/NamespaceStruct.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/NamespaceStructv2.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/NamespaceInNamespaceStruct.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/StructWithFixedWithTypes.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/CompWithInit.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/EventInfoNewNameCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/EventInfoNewNameData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/EventInfoNewName.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableEventInfoNewName.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/EventInfoNewNameObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/EventInfoNewNameCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/EventInfoNewNameCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleHitCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleHitData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleHit.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleHit.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleHitObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleHitCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleHitCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleMCCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleMCData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleMC.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleMC.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleMCObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleMCCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleMCCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleClusterCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleClusterData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleCluster.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleCluster.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleClusterObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleClusterCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleClusterCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleReferencingTypeCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleReferencingTypeData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleReferencingType.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleReferencingType.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleReferencingTypeObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleReferencingTypeCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleReferencingTypeCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithVectorMemberCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithVectorMemberData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithVectorMember.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithVectorMember.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithVectorMemberObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithVectorMemberCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithVectorMemberCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithOneRelationCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithOneRelationData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithOneRelation.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithOneRelation.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithOneRelationObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithOneRelationCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithOneRelationCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayComponentCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayComponentData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayComponent.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithArrayComponent.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayComponentObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayComponentCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayComponentCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithComponentCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithComponentData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithComponent.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithComponent.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithComponentObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithComponentCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithComponentCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency1Collection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency1Data.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency1.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleForCyclicDependency1.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency1Obj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency1Collection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency1CollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency2Collection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency2Data.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency2.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleForCyclicDependency2.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency2Obj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency2Collection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleForCyclicDependency2CollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespacev2Data.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespaceCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespaceData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespace.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithNamespace.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespaceObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespaceCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithNamespaceCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithARelationCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithARelationData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithARelation.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithARelation.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithARelationObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithARelationCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithARelationCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithDifferentNamespaceRelationsCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithDifferentNamespaceRelations.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithDifferentNamespaceRelations.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithDifferentNamespaceRelationsCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithDifferentNamespaceRelationsCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayv2Data.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArray.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithArray.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithArrayCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithFixedWidthIntegersCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithFixedWidthIntegersData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithFixedWidthIntegers.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithFixedWidthIntegers.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithFixedWidthIntegersObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithFixedWidthIntegersCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithFixedWidthIntegersCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInitv2Data.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInitCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInitData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInit.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleWithUserInit.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInitObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInitCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleWithUserInitCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleOfDroppedTypeCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleOfDroppedTypeData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleOfDroppedType.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/MutableExampleOfDroppedType.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleOfDroppedTypeObj.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleOfDroppedTypeCollection.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/ExampleOfDroppedTypeCollectionData.h"
#include "/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new/datamodel/DatamodelDefinition.h"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *SimpleStruct_Dictionary();
   static void SimpleStruct_TClassManip(TClass*);
   static void *new_SimpleStruct(void *p = nullptr);
   static void *newArray_SimpleStruct(Long_t size, void *p);
   static void delete_SimpleStruct(void *p);
   static void deleteArray_SimpleStruct(void *p);
   static void destruct_SimpleStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SimpleStruct*)
   {
      ::SimpleStruct *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::SimpleStruct));
      static ::ROOT::TGenericClassInfo 
         instance("SimpleStruct", 3, "", 20,
                  typeid(::SimpleStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &SimpleStruct_Dictionary, isa_proxy, 12,
                  sizeof(::SimpleStruct) );
      instance.SetNew(&new_SimpleStruct);
      instance.SetNewArray(&newArray_SimpleStruct);
      instance.SetDelete(&delete_SimpleStruct);
      instance.SetDeleteArray(&deleteArray_SimpleStruct);
      instance.SetDestructor(&destruct_SimpleStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SimpleStruct*)
   {
      return GenerateInitInstanceLocal(static_cast<::SimpleStruct*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SimpleStruct*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *SimpleStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::SimpleStruct*>(nullptr))->GetClass();
      SimpleStruct_TClassManip(theClass);
   return theClass;
   }

   static void SimpleStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *NotSoSimpleStruct_Dictionary();
   static void NotSoSimpleStruct_TClassManip(TClass*);
   static void *new_NotSoSimpleStruct(void *p = nullptr);
   static void *newArray_NotSoSimpleStruct(Long_t size, void *p);
   static void delete_NotSoSimpleStruct(void *p);
   static void deleteArray_NotSoSimpleStruct(void *p);
   static void destruct_NotSoSimpleStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::NotSoSimpleStruct*)
   {
      ::NotSoSimpleStruct *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::NotSoSimpleStruct));
      static ::ROOT::TGenericClassInfo 
         instance("NotSoSimpleStruct", 3, "", 60,
                  typeid(::NotSoSimpleStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &NotSoSimpleStruct_Dictionary, isa_proxy, 12,
                  sizeof(::NotSoSimpleStruct) );
      instance.SetNew(&new_NotSoSimpleStruct);
      instance.SetNewArray(&newArray_NotSoSimpleStruct);
      instance.SetDelete(&delete_NotSoSimpleStruct);
      instance.SetDeleteArray(&deleteArray_NotSoSimpleStruct);
      instance.SetDestructor(&destruct_NotSoSimpleStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::NotSoSimpleStruct*)
   {
      return GenerateInitInstanceLocal(static_cast<::NotSoSimpleStruct*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::NotSoSimpleStruct*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *NotSoSimpleStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::NotSoSimpleStruct*>(nullptr))->GetClass();
      NotSoSimpleStruct_TClassManip(theClass);
   return theClass;
   }

   static void NotSoSimpleStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex2cLcLNamespaceStruct_Dictionary();
   static void ex2cLcLNamespaceStruct_TClassManip(TClass*);
   static void *new_ex2cLcLNamespaceStruct(void *p = nullptr);
   static void *newArray_ex2cLcLNamespaceStruct(Long_t size, void *p);
   static void delete_ex2cLcLNamespaceStruct(void *p);
   static void deleteArray_ex2cLcLNamespaceStruct(void *p);
   static void destruct_ex2cLcLNamespaceStruct(void *p);

   // Schema evolution read functions
   static void read_ex2cLcLNamespaceStruct_0( char* target, TVirtualObject *oldObj )
   {
      //--- Automatically generated variables ---
#if 0
      static Int_t id_y = oldObj->GetId("y");
#endif
      struct ex2cLcLNamespaceStruct_Onfile {
         int &y;
         ex2cLcLNamespaceStruct_Onfile(int &onfile_y ): y(onfile_y) {}
      };
      static Long_t offset_Onfile_ex2cLcLNamespaceStruct_y = oldObj->GetClass()->GetDataMemberOffset("y");
      char *onfile_add = (char*)oldObj->GetObject();
      ex2cLcLNamespaceStruct_Onfile onfile(
         *(int*)(onfile_add+offset_Onfile_ex2cLcLNamespaceStruct_y) );

      static TClassRef cls("ex2::NamespaceStruct");
      static Long_t offset_y_new = cls->GetDataMemberOffset("y_new");
      int& y_new = *(int*)(target+offset_y_new);
      ex2::NamespaceStruct* newObj = (ex2::NamespaceStruct*)target;
      // Supress warning message.
      (void)oldObj;

      (void)newObj;

      //--- User's code ---
     
	     y_new = onfile.y;
        
   }

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex2::NamespaceStruct*)
   {
      ::ex2::NamespaceStruct *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex2::NamespaceStruct));
      static ::ROOT::TGenericClassInfo 
         instance("ex2::NamespaceStruct", 3, "", 94,
                  typeid(::ex2::NamespaceStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex2cLcLNamespaceStruct_Dictionary, isa_proxy, 12,
                  sizeof(::ex2::NamespaceStruct) );
      instance.SetNew(&new_ex2cLcLNamespaceStruct);
      instance.SetNewArray(&newArray_ex2cLcLNamespaceStruct);
      instance.SetDelete(&delete_ex2cLcLNamespaceStruct);
      instance.SetDeleteArray(&deleteArray_ex2cLcLNamespaceStruct);
      instance.SetDestructor(&destruct_ex2cLcLNamespaceStruct);

      ::ROOT::Internal::TSchemaHelper* rule;

      // the io read rules
      std::vector<::ROOT::Internal::TSchemaHelper> readrules(1);
      rule = &readrules[0];
      rule->fSourceClass = "ex2::NamespaceStruct";
      rule->fTarget      = "y_new";
      rule->fSource      = "int y";
      rule->fFunctionPtr = (void *)TFunc2void( read_ex2cLcLNamespaceStruct_0);
      rule->fCode        = "\n	     y_new = onfile.y;\n        ";
      rule->fVersion     = "[2]";
      instance.SetReadRules( readrules );
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex2::NamespaceStruct*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex2::NamespaceStruct*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex2::NamespaceStruct*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex2cLcLNamespaceStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex2::NamespaceStruct*>(nullptr))->GetClass();
      ex2cLcLNamespaceStruct_TClassManip(theClass);
   return theClass;
   }

   static void ex2cLcLNamespaceStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex2cLcLNamespaceStructv2_Dictionary();
   static void ex2cLcLNamespaceStructv2_TClassManip(TClass*);
   static void *new_ex2cLcLNamespaceStructv2(void *p = nullptr);
   static void *newArray_ex2cLcLNamespaceStructv2(Long_t size, void *p);
   static void delete_ex2cLcLNamespaceStructv2(void *p);
   static void deleteArray_ex2cLcLNamespaceStructv2(void *p);
   static void destruct_ex2cLcLNamespaceStructv2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex2::NamespaceStructv2*)
   {
      ::ex2::NamespaceStructv2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex2::NamespaceStructv2));
      static ::ROOT::TGenericClassInfo 
         instance("ex2::NamespaceStructv2", 3, "", 130,
                  typeid(::ex2::NamespaceStructv2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex2cLcLNamespaceStructv2_Dictionary, isa_proxy, 12,
                  sizeof(::ex2::NamespaceStructv2) );
      instance.SetNew(&new_ex2cLcLNamespaceStructv2);
      instance.SetNewArray(&newArray_ex2cLcLNamespaceStructv2);
      instance.SetDelete(&delete_ex2cLcLNamespaceStructv2);
      instance.SetDeleteArray(&deleteArray_ex2cLcLNamespaceStructv2);
      instance.SetDestructor(&destruct_ex2cLcLNamespaceStructv2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex2::NamespaceStructv2*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex2::NamespaceStructv2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex2::NamespaceStructv2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex2cLcLNamespaceStructv2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex2::NamespaceStructv2*>(nullptr))->GetClass();
      ex2cLcLNamespaceStructv2_TClassManip(theClass);
   return theClass;
   }

   static void ex2cLcLNamespaceStructv2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex2cLcLNamespaceInNamespaceStruct_Dictionary();
   static void ex2cLcLNamespaceInNamespaceStruct_TClassManip(TClass*);
   static void *new_ex2cLcLNamespaceInNamespaceStruct(void *p = nullptr);
   static void *newArray_ex2cLcLNamespaceInNamespaceStruct(Long_t size, void *p);
   static void delete_ex2cLcLNamespaceInNamespaceStruct(void *p);
   static void deleteArray_ex2cLcLNamespaceInNamespaceStruct(void *p);
   static void destruct_ex2cLcLNamespaceInNamespaceStruct(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex2::NamespaceInNamespaceStruct*)
   {
      ::ex2::NamespaceInNamespaceStruct *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex2::NamespaceInNamespaceStruct));
      static ::ROOT::TGenericClassInfo 
         instance("ex2::NamespaceInNamespaceStruct", 3, "", 167,
                  typeid(::ex2::NamespaceInNamespaceStruct), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex2cLcLNamespaceInNamespaceStruct_Dictionary, isa_proxy, 12,
                  sizeof(::ex2::NamespaceInNamespaceStruct) );
      instance.SetNew(&new_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetNewArray(&newArray_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetDelete(&delete_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetDeleteArray(&deleteArray_ex2cLcLNamespaceInNamespaceStruct);
      instance.SetDestructor(&destruct_ex2cLcLNamespaceInNamespaceStruct);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex2::NamespaceInNamespaceStruct*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex2::NamespaceInNamespaceStruct*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex2::NamespaceInNamespaceStruct*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex2cLcLNamespaceInNamespaceStruct_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex2::NamespaceInNamespaceStruct*>(nullptr))->GetClass();
      ex2cLcLNamespaceInNamespaceStruct_TClassManip(theClass);
   return theClass;
   }

   static void ex2cLcLNamespaceInNamespaceStruct_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *StructWithFixedWithTypes_Dictionary();
   static void StructWithFixedWithTypes_TClassManip(TClass*);
   static void *new_StructWithFixedWithTypes(void *p = nullptr);
   static void *newArray_StructWithFixedWithTypes(Long_t size, void *p);
   static void delete_StructWithFixedWithTypes(void *p);
   static void deleteArray_StructWithFixedWithTypes(void *p);
   static void destruct_StructWithFixedWithTypes(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::StructWithFixedWithTypes*)
   {
      ::StructWithFixedWithTypes *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::StructWithFixedWithTypes));
      static ::ROOT::TGenericClassInfo 
         instance("StructWithFixedWithTypes", 3, "", 202,
                  typeid(::StructWithFixedWithTypes), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &StructWithFixedWithTypes_Dictionary, isa_proxy, 12,
                  sizeof(::StructWithFixedWithTypes) );
      instance.SetNew(&new_StructWithFixedWithTypes);
      instance.SetNewArray(&newArray_StructWithFixedWithTypes);
      instance.SetDelete(&delete_StructWithFixedWithTypes);
      instance.SetDeleteArray(&deleteArray_StructWithFixedWithTypes);
      instance.SetDestructor(&destruct_StructWithFixedWithTypes);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::StructWithFixedWithTypes*)
   {
      return GenerateInitInstanceLocal(static_cast<::StructWithFixedWithTypes*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::StructWithFixedWithTypes*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *StructWithFixedWithTypes_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::StructWithFixedWithTypes*>(nullptr))->GetClass();
      StructWithFixedWithTypes_TClassManip(theClass);
   return theClass;
   }

   static void StructWithFixedWithTypes_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *CompWithInit_Dictionary();
   static void CompWithInit_TClassManip(TClass*);
   static void *new_CompWithInit(void *p = nullptr);
   static void *newArray_CompWithInit(Long_t size, void *p);
   static void delete_CompWithInit(void *p);
   static void deleteArray_CompWithInit(void *p);
   static void destruct_CompWithInit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CompWithInit*)
   {
      ::CompWithInit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::CompWithInit));
      static ::ROOT::TGenericClassInfo 
         instance("CompWithInit", 3, "", 238,
                  typeid(::CompWithInit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &CompWithInit_Dictionary, isa_proxy, 12,
                  sizeof(::CompWithInit) );
      instance.SetNew(&new_CompWithInit);
      instance.SetNewArray(&newArray_CompWithInit);
      instance.SetDelete(&delete_CompWithInit);
      instance.SetDeleteArray(&deleteArray_CompWithInit);
      instance.SetDestructor(&destruct_CompWithInit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CompWithInit*)
   {
      return GenerateInitInstanceLocal(static_cast<::CompWithInit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CompWithInit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *CompWithInit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::CompWithInit*>(nullptr))->GetClass();
      CompWithInit_TClassManip(theClass);
   return theClass;
   }

   static void CompWithInit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfoNewNameData_Dictionary();
   static void EventInfoNewNameData_TClassManip(TClass*);
   static void *new_EventInfoNewNameData(void *p = nullptr);
   static void *newArray_EventInfoNewNameData(Long_t size, void *p);
   static void delete_EventInfoNewNameData(void *p);
   static void deleteArray_EventInfoNewNameData(void *p);
   static void destruct_EventInfoNewNameData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoNewNameData*)
   {
      ::EventInfoNewNameData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoNewNameData));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoNewNameData", 3, "datamodel/EventInfoNewNameData.h", 13,
                  typeid(::EventInfoNewNameData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoNewNameData_Dictionary, isa_proxy, 12,
                  sizeof(::EventInfoNewNameData) );
      instance.SetNew(&new_EventInfoNewNameData);
      instance.SetNewArray(&newArray_EventInfoNewNameData);
      instance.SetDelete(&delete_EventInfoNewNameData);
      instance.SetDeleteArray(&deleteArray_EventInfoNewNameData);
      instance.SetDestructor(&destruct_EventInfoNewNameData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoNewNameData*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfoNewNameData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfoNewNameData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoNewNameData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventInfoNewNameData*>(nullptr))->GetClass();
      EventInfoNewNameData_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoNewNameData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfoNewName_Dictionary();
   static void EventInfoNewName_TClassManip(TClass*);
   static void *new_EventInfoNewName(void *p = nullptr);
   static void *newArray_EventInfoNewName(Long_t size, void *p);
   static void delete_EventInfoNewName(void *p);
   static void deleteArray_EventInfoNewName(void *p);
   static void destruct_EventInfoNewName(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoNewName*)
   {
      ::EventInfoNewName *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoNewName));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoNewName", 3, "datamodel/EventInfoNewName.h", 29,
                  typeid(::EventInfoNewName), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoNewName_Dictionary, isa_proxy, 12,
                  sizeof(::EventInfoNewName) );
      instance.SetNew(&new_EventInfoNewName);
      instance.SetNewArray(&newArray_EventInfoNewName);
      instance.SetDelete(&delete_EventInfoNewName);
      instance.SetDeleteArray(&deleteArray_EventInfoNewName);
      instance.SetDestructor(&destruct_EventInfoNewName);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoNewName*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfoNewName*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfoNewName*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoNewName_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventInfoNewName*>(nullptr))->GetClass();
      EventInfoNewName_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoNewName_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableEventInfoNewName_Dictionary();
   static void MutableEventInfoNewName_TClassManip(TClass*);
   static void *new_MutableEventInfoNewName(void *p = nullptr);
   static void *newArray_MutableEventInfoNewName(Long_t size, void *p);
   static void delete_MutableEventInfoNewName(void *p);
   static void deleteArray_MutableEventInfoNewName(void *p);
   static void destruct_MutableEventInfoNewName(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableEventInfoNewName*)
   {
      ::MutableEventInfoNewName *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableEventInfoNewName));
      static ::ROOT::TGenericClassInfo 
         instance("MutableEventInfoNewName", 3, "datamodel/MutableEventInfoNewName.h", 28,
                  typeid(::MutableEventInfoNewName), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableEventInfoNewName_Dictionary, isa_proxy, 12,
                  sizeof(::MutableEventInfoNewName) );
      instance.SetNew(&new_MutableEventInfoNewName);
      instance.SetNewArray(&newArray_MutableEventInfoNewName);
      instance.SetDelete(&delete_MutableEventInfoNewName);
      instance.SetDeleteArray(&deleteArray_MutableEventInfoNewName);
      instance.SetDestructor(&destruct_MutableEventInfoNewName);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableEventInfoNewName*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableEventInfoNewName*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableEventInfoNewName*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableEventInfoNewName_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableEventInfoNewName*>(nullptr))->GetClass();
      MutableEventInfoNewName_TClassManip(theClass);
   return theClass;
   }

   static void MutableEventInfoNewName_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *EventInfoNewNameCollection_Dictionary();
   static void EventInfoNewNameCollection_TClassManip(TClass*);
   static void *new_EventInfoNewNameCollection(void *p = nullptr);
   static void *newArray_EventInfoNewNameCollection(Long_t size, void *p);
   static void delete_EventInfoNewNameCollection(void *p);
   static void deleteArray_EventInfoNewNameCollection(void *p);
   static void destruct_EventInfoNewNameCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfoNewNameCollection*)
   {
      ::EventInfoNewNameCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::EventInfoNewNameCollection));
      static ::ROOT::TGenericClassInfo 
         instance("EventInfoNewNameCollection", 3, "", 349,
                  typeid(::EventInfoNewNameCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &EventInfoNewNameCollection_Dictionary, isa_proxy, 12,
                  sizeof(::EventInfoNewNameCollection) );
      instance.SetNew(&new_EventInfoNewNameCollection);
      instance.SetNewArray(&newArray_EventInfoNewNameCollection);
      instance.SetDelete(&delete_EventInfoNewNameCollection);
      instance.SetDeleteArray(&deleteArray_EventInfoNewNameCollection);
      instance.SetDestructor(&destruct_EventInfoNewNameCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfoNewNameCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfoNewNameCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfoNewNameCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *EventInfoNewNameCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::EventInfoNewNameCollection*>(nullptr))->GetClass();
      EventInfoNewNameCollection_TClassManip(theClass);
   return theClass;
   }

   static void EventInfoNewNameCollection_TClassManip(TClass* ){
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
         instance("ExampleHitData", 3, "datamodel/ExampleHitData.h", 13,
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
         instance("ExampleHit", 3, "datamodel/ExampleHit.h", 29,
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
         instance("MutableExampleHit", 3, "datamodel/MutableExampleHit.h", 28,
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
         instance("ExampleHitCollection", 3, "", 1213,
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
   static TClass *ExampleMCData_Dictionary();
   static void ExampleMCData_TClassManip(TClass*);
   static void *new_ExampleMCData(void *p = nullptr);
   static void *newArray_ExampleMCData(Long_t size, void *p);
   static void delete_ExampleMCData(void *p);
   static void deleteArray_ExampleMCData(void *p);
   static void destruct_ExampleMCData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMCData*)
   {
      ::ExampleMCData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMCData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMCData", 3, "datamodel/ExampleMCData.h", 13,
                  typeid(::ExampleMCData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMCData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleMCData) );
      instance.SetNew(&new_ExampleMCData);
      instance.SetNewArray(&newArray_ExampleMCData);
      instance.SetDelete(&delete_ExampleMCData);
      instance.SetDeleteArray(&deleteArray_ExampleMCData);
      instance.SetDestructor(&destruct_ExampleMCData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMCData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleMCData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleMCData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMCData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleMCData*>(nullptr))->GetClass();
      ExampleMCData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMCData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleMC_Dictionary();
   static void ExampleMC_TClassManip(TClass*);
   static void *new_ExampleMC(void *p = nullptr);
   static void *newArray_ExampleMC(Long_t size, void *p);
   static void delete_ExampleMC(void *p);
   static void deleteArray_ExampleMC(void *p);
   static void destruct_ExampleMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMC*)
   {
      ::ExampleMC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMC));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMC", 3, "datamodel/ExampleMC.h", 31,
                  typeid(::ExampleMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMC_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleMC) );
      instance.SetNew(&new_ExampleMC);
      instance.SetNewArray(&newArray_ExampleMC);
      instance.SetDelete(&delete_ExampleMC);
      instance.SetDeleteArray(&deleteArray_ExampleMC);
      instance.SetDestructor(&destruct_ExampleMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMC*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleMC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleMC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleMC*>(nullptr))->GetClass();
      ExampleMC_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleMC_Dictionary();
   static void MutableExampleMC_TClassManip(TClass*);
   static void *new_MutableExampleMC(void *p = nullptr);
   static void *newArray_MutableExampleMC(Long_t size, void *p);
   static void delete_MutableExampleMC(void *p);
   static void deleteArray_MutableExampleMC(void *p);
   static void destruct_MutableExampleMC(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleMC*)
   {
      ::MutableExampleMC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleMC));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleMC", 3, "datamodel/MutableExampleMC.h", 30,
                  typeid(::MutableExampleMC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleMC_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleMC) );
      instance.SetNew(&new_MutableExampleMC);
      instance.SetNewArray(&newArray_MutableExampleMC);
      instance.SetDelete(&delete_MutableExampleMC);
      instance.SetDeleteArray(&deleteArray_MutableExampleMC);
      instance.SetDestructor(&destruct_MutableExampleMC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleMC*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleMC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleMC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleMC_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleMC*>(nullptr))->GetClass();
      MutableExampleMC_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleMC_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleMCCollection_Dictionary();
   static void ExampleMCCollection_TClassManip(TClass*);
   static void *new_ExampleMCCollection(void *p = nullptr);
   static void *newArray_ExampleMCCollection(Long_t size, void *p);
   static void delete_ExampleMCCollection(void *p);
   static void deleteArray_ExampleMCCollection(void *p);
   static void destruct_ExampleMCCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleMCCollection*)
   {
      ::ExampleMCCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleMCCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleMCCollection", 3, "", 2144,
                  typeid(::ExampleMCCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleMCCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleMCCollection) );
      instance.SetNew(&new_ExampleMCCollection);
      instance.SetNewArray(&newArray_ExampleMCCollection);
      instance.SetDelete(&delete_ExampleMCCollection);
      instance.SetDeleteArray(&deleteArray_ExampleMCCollection);
      instance.SetDestructor(&destruct_ExampleMCCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleMCCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleMCCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleMCCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleMCCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleMCCollection*>(nullptr))->GetClass();
      ExampleMCCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleMCCollection_TClassManip(TClass* ){
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
         instance("ExampleClusterData", 3, "datamodel/ExampleClusterData.h", 13,
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
         instance("ExampleCluster", 3, "datamodel/ExampleCluster.h", 32,
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
         instance("MutableExampleCluster", 3, "datamodel/MutableExampleCluster.h", 31,
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
         instance("ExampleClusterCollection", 3, "", 3065,
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
   static TClass *ExampleReferencingTypeData_Dictionary();
   static void ExampleReferencingTypeData_TClassManip(TClass*);
   static void *new_ExampleReferencingTypeData(void *p = nullptr);
   static void *newArray_ExampleReferencingTypeData(Long_t size, void *p);
   static void delete_ExampleReferencingTypeData(void *p);
   static void deleteArray_ExampleReferencingTypeData(void *p);
   static void destruct_ExampleReferencingTypeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingTypeData*)
   {
      ::ExampleReferencingTypeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingTypeData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingTypeData", 3, "datamodel/ExampleReferencingTypeData.h", 13,
                  typeid(::ExampleReferencingTypeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingTypeData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleReferencingTypeData) );
      instance.SetNew(&new_ExampleReferencingTypeData);
      instance.SetNewArray(&newArray_ExampleReferencingTypeData);
      instance.SetDelete(&delete_ExampleReferencingTypeData);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingTypeData);
      instance.SetDestructor(&destruct_ExampleReferencingTypeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingTypeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleReferencingTypeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleReferencingTypeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingTypeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleReferencingTypeData*>(nullptr))->GetClass();
      ExampleReferencingTypeData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingTypeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleReferencingType_Dictionary();
   static void ExampleReferencingType_TClassManip(TClass*);
   static void *new_ExampleReferencingType(void *p = nullptr);
   static void *newArray_ExampleReferencingType(Long_t size, void *p);
   static void delete_ExampleReferencingType(void *p);
   static void deleteArray_ExampleReferencingType(void *p);
   static void destruct_ExampleReferencingType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingType*)
   {
      ::ExampleReferencingType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingType));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingType", 3, "datamodel/ExampleReferencingType.h", 32,
                  typeid(::ExampleReferencingType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingType_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleReferencingType) );
      instance.SetNew(&new_ExampleReferencingType);
      instance.SetNewArray(&newArray_ExampleReferencingType);
      instance.SetDelete(&delete_ExampleReferencingType);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingType);
      instance.SetDestructor(&destruct_ExampleReferencingType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingType*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleReferencingType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleReferencingType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleReferencingType*>(nullptr))->GetClass();
      ExampleReferencingType_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleReferencingType_Dictionary();
   static void MutableExampleReferencingType_TClassManip(TClass*);
   static void *new_MutableExampleReferencingType(void *p = nullptr);
   static void *newArray_MutableExampleReferencingType(Long_t size, void *p);
   static void delete_MutableExampleReferencingType(void *p);
   static void deleteArray_MutableExampleReferencingType(void *p);
   static void destruct_MutableExampleReferencingType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleReferencingType*)
   {
      ::MutableExampleReferencingType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleReferencingType));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleReferencingType", 3, "datamodel/MutableExampleReferencingType.h", 31,
                  typeid(::MutableExampleReferencingType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleReferencingType_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleReferencingType) );
      instance.SetNew(&new_MutableExampleReferencingType);
      instance.SetNewArray(&newArray_MutableExampleReferencingType);
      instance.SetDelete(&delete_MutableExampleReferencingType);
      instance.SetDeleteArray(&deleteArray_MutableExampleReferencingType);
      instance.SetDestructor(&destruct_MutableExampleReferencingType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleReferencingType*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleReferencingType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleReferencingType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleReferencingType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleReferencingType*>(nullptr))->GetClass();
      MutableExampleReferencingType_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleReferencingType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleReferencingTypeCollection_Dictionary();
   static void ExampleReferencingTypeCollection_TClassManip(TClass*);
   static void *new_ExampleReferencingTypeCollection(void *p = nullptr);
   static void *newArray_ExampleReferencingTypeCollection(Long_t size, void *p);
   static void delete_ExampleReferencingTypeCollection(void *p);
   static void deleteArray_ExampleReferencingTypeCollection(void *p);
   static void destruct_ExampleReferencingTypeCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleReferencingTypeCollection*)
   {
      ::ExampleReferencingTypeCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleReferencingTypeCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleReferencingTypeCollection", 3, "", 3976,
                  typeid(::ExampleReferencingTypeCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleReferencingTypeCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleReferencingTypeCollection) );
      instance.SetNew(&new_ExampleReferencingTypeCollection);
      instance.SetNewArray(&newArray_ExampleReferencingTypeCollection);
      instance.SetDelete(&delete_ExampleReferencingTypeCollection);
      instance.SetDeleteArray(&deleteArray_ExampleReferencingTypeCollection);
      instance.SetDestructor(&destruct_ExampleReferencingTypeCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleReferencingTypeCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleReferencingTypeCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleReferencingTypeCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleReferencingTypeCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleReferencingTypeCollection*>(nullptr))->GetClass();
      ExampleReferencingTypeCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleReferencingTypeCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMemberData_Dictionary();
   static void ExampleWithVectorMemberData_TClassManip(TClass*);
   static void *new_ExampleWithVectorMemberData(void *p = nullptr);
   static void *newArray_ExampleWithVectorMemberData(Long_t size, void *p);
   static void delete_ExampleWithVectorMemberData(void *p);
   static void deleteArray_ExampleWithVectorMemberData(void *p);
   static void destruct_ExampleWithVectorMemberData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMemberData*)
   {
      ::ExampleWithVectorMemberData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMemberData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMemberData", 3, "datamodel/ExampleWithVectorMemberData.h", 13,
                  typeid(::ExampleWithVectorMemberData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMemberData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithVectorMemberData) );
      instance.SetNew(&new_ExampleWithVectorMemberData);
      instance.SetNewArray(&newArray_ExampleWithVectorMemberData);
      instance.SetDelete(&delete_ExampleWithVectorMemberData);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMemberData);
      instance.SetDestructor(&destruct_ExampleWithVectorMemberData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMemberData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithVectorMemberData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithVectorMemberData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMemberData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithVectorMemberData*>(nullptr))->GetClass();
      ExampleWithVectorMemberData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMemberData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMember_Dictionary();
   static void ExampleWithVectorMember_TClassManip(TClass*);
   static void *new_ExampleWithVectorMember(void *p = nullptr);
   static void *newArray_ExampleWithVectorMember(Long_t size, void *p);
   static void delete_ExampleWithVectorMember(void *p);
   static void deleteArray_ExampleWithVectorMember(void *p);
   static void destruct_ExampleWithVectorMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMember*)
   {
      ::ExampleWithVectorMember *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMember));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMember", 3, "datamodel/ExampleWithVectorMember.h", 31,
                  typeid(::ExampleWithVectorMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMember_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithVectorMember) );
      instance.SetNew(&new_ExampleWithVectorMember);
      instance.SetNewArray(&newArray_ExampleWithVectorMember);
      instance.SetDelete(&delete_ExampleWithVectorMember);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMember);
      instance.SetDestructor(&destruct_ExampleWithVectorMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMember*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithVectorMember*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithVectorMember*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMember_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithVectorMember*>(nullptr))->GetClass();
      ExampleWithVectorMember_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMember_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithVectorMember_Dictionary();
   static void MutableExampleWithVectorMember_TClassManip(TClass*);
   static void *new_MutableExampleWithVectorMember(void *p = nullptr);
   static void *newArray_MutableExampleWithVectorMember(Long_t size, void *p);
   static void delete_MutableExampleWithVectorMember(void *p);
   static void deleteArray_MutableExampleWithVectorMember(void *p);
   static void destruct_MutableExampleWithVectorMember(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithVectorMember*)
   {
      ::MutableExampleWithVectorMember *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithVectorMember));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithVectorMember", 3, "datamodel/MutableExampleWithVectorMember.h", 30,
                  typeid(::MutableExampleWithVectorMember), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithVectorMember_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithVectorMember) );
      instance.SetNew(&new_MutableExampleWithVectorMember);
      instance.SetNewArray(&newArray_MutableExampleWithVectorMember);
      instance.SetDelete(&delete_MutableExampleWithVectorMember);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithVectorMember);
      instance.SetDestructor(&destruct_MutableExampleWithVectorMember);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithVectorMember*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithVectorMember*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithVectorMember*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithVectorMember_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithVectorMember*>(nullptr))->GetClass();
      MutableExampleWithVectorMember_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithVectorMember_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithVectorMemberCollection_Dictionary();
   static void ExampleWithVectorMemberCollection_TClassManip(TClass*);
   static void *new_ExampleWithVectorMemberCollection(void *p = nullptr);
   static void *newArray_ExampleWithVectorMemberCollection(Long_t size, void *p);
   static void delete_ExampleWithVectorMemberCollection(void *p);
   static void deleteArray_ExampleWithVectorMemberCollection(void *p);
   static void destruct_ExampleWithVectorMemberCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithVectorMemberCollection*)
   {
      ::ExampleWithVectorMemberCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithVectorMemberCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithVectorMemberCollection", 3, "", 4869,
                  typeid(::ExampleWithVectorMemberCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithVectorMemberCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithVectorMemberCollection) );
      instance.SetNew(&new_ExampleWithVectorMemberCollection);
      instance.SetNewArray(&newArray_ExampleWithVectorMemberCollection);
      instance.SetDelete(&delete_ExampleWithVectorMemberCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithVectorMemberCollection);
      instance.SetDestructor(&destruct_ExampleWithVectorMemberCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithVectorMemberCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithVectorMemberCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithVectorMemberCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithVectorMemberCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithVectorMemberCollection*>(nullptr))->GetClass();
      ExampleWithVectorMemberCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithVectorMemberCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelationData_Dictionary();
   static void ExampleWithOneRelationData_TClassManip(TClass*);
   static void *new_ExampleWithOneRelationData(void *p = nullptr);
   static void *newArray_ExampleWithOneRelationData(Long_t size, void *p);
   static void delete_ExampleWithOneRelationData(void *p);
   static void deleteArray_ExampleWithOneRelationData(void *p);
   static void destruct_ExampleWithOneRelationData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelationData*)
   {
      ::ExampleWithOneRelationData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelationData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelationData", 3, "datamodel/ExampleWithOneRelationData.h", 13,
                  typeid(::ExampleWithOneRelationData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelationData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithOneRelationData) );
      instance.SetNew(&new_ExampleWithOneRelationData);
      instance.SetNewArray(&newArray_ExampleWithOneRelationData);
      instance.SetDelete(&delete_ExampleWithOneRelationData);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelationData);
      instance.SetDestructor(&destruct_ExampleWithOneRelationData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelationData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithOneRelationData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithOneRelationData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelationData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithOneRelationData*>(nullptr))->GetClass();
      ExampleWithOneRelationData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelationData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelation_Dictionary();
   static void ExampleWithOneRelation_TClassManip(TClass*);
   static void *new_ExampleWithOneRelation(void *p = nullptr);
   static void *newArray_ExampleWithOneRelation(Long_t size, void *p);
   static void delete_ExampleWithOneRelation(void *p);
   static void deleteArray_ExampleWithOneRelation(void *p);
   static void destruct_ExampleWithOneRelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelation*)
   {
      ::ExampleWithOneRelation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelation));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelation", 3, "datamodel/ExampleWithOneRelation.h", 32,
                  typeid(::ExampleWithOneRelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelation_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithOneRelation) );
      instance.SetNew(&new_ExampleWithOneRelation);
      instance.SetNewArray(&newArray_ExampleWithOneRelation);
      instance.SetDelete(&delete_ExampleWithOneRelation);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelation);
      instance.SetDestructor(&destruct_ExampleWithOneRelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelation*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithOneRelation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithOneRelation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithOneRelation*>(nullptr))->GetClass();
      ExampleWithOneRelation_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithOneRelation_Dictionary();
   static void MutableExampleWithOneRelation_TClassManip(TClass*);
   static void *new_MutableExampleWithOneRelation(void *p = nullptr);
   static void *newArray_MutableExampleWithOneRelation(Long_t size, void *p);
   static void delete_MutableExampleWithOneRelation(void *p);
   static void deleteArray_MutableExampleWithOneRelation(void *p);
   static void destruct_MutableExampleWithOneRelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithOneRelation*)
   {
      ::MutableExampleWithOneRelation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithOneRelation));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithOneRelation", 3, "datamodel/MutableExampleWithOneRelation.h", 31,
                  typeid(::MutableExampleWithOneRelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithOneRelation_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithOneRelation) );
      instance.SetNew(&new_MutableExampleWithOneRelation);
      instance.SetNewArray(&newArray_MutableExampleWithOneRelation);
      instance.SetDelete(&delete_MutableExampleWithOneRelation);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithOneRelation);
      instance.SetDestructor(&destruct_MutableExampleWithOneRelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithOneRelation*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithOneRelation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithOneRelation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithOneRelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithOneRelation*>(nullptr))->GetClass();
      MutableExampleWithOneRelation_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithOneRelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithOneRelationCollection_Dictionary();
   static void ExampleWithOneRelationCollection_TClassManip(TClass*);
   static void *new_ExampleWithOneRelationCollection(void *p = nullptr);
   static void *newArray_ExampleWithOneRelationCollection(Long_t size, void *p);
   static void delete_ExampleWithOneRelationCollection(void *p);
   static void deleteArray_ExampleWithOneRelationCollection(void *p);
   static void destruct_ExampleWithOneRelationCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithOneRelationCollection*)
   {
      ::ExampleWithOneRelationCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithOneRelationCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithOneRelationCollection", 3, "", 5740,
                  typeid(::ExampleWithOneRelationCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithOneRelationCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithOneRelationCollection) );
      instance.SetNew(&new_ExampleWithOneRelationCollection);
      instance.SetNewArray(&newArray_ExampleWithOneRelationCollection);
      instance.SetDelete(&delete_ExampleWithOneRelationCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithOneRelationCollection);
      instance.SetDestructor(&destruct_ExampleWithOneRelationCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithOneRelationCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithOneRelationCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithOneRelationCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithOneRelationCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithOneRelationCollection*>(nullptr))->GetClass();
      ExampleWithOneRelationCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithOneRelationCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayComponentData_Dictionary();
   static void ExampleWithArrayComponentData_TClassManip(TClass*);
   static void *new_ExampleWithArrayComponentData(void *p = nullptr);
   static void *newArray_ExampleWithArrayComponentData(Long_t size, void *p);
   static void delete_ExampleWithArrayComponentData(void *p);
   static void deleteArray_ExampleWithArrayComponentData(void *p);
   static void destruct_ExampleWithArrayComponentData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayComponentData*)
   {
      ::ExampleWithArrayComponentData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayComponentData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayComponentData", 3, "datamodel/ExampleWithArrayComponentData.h", 14,
                  typeid(::ExampleWithArrayComponentData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayComponentData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithArrayComponentData) );
      instance.SetNew(&new_ExampleWithArrayComponentData);
      instance.SetNewArray(&newArray_ExampleWithArrayComponentData);
      instance.SetDelete(&delete_ExampleWithArrayComponentData);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayComponentData);
      instance.SetDestructor(&destruct_ExampleWithArrayComponentData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayComponentData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithArrayComponentData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayComponentData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayComponentData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayComponentData*>(nullptr))->GetClass();
      ExampleWithArrayComponentData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayComponentData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayComponent_Dictionary();
   static void ExampleWithArrayComponent_TClassManip(TClass*);
   static void *new_ExampleWithArrayComponent(void *p = nullptr);
   static void *newArray_ExampleWithArrayComponent(Long_t size, void *p);
   static void delete_ExampleWithArrayComponent(void *p);
   static void deleteArray_ExampleWithArrayComponent(void *p);
   static void destruct_ExampleWithArrayComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayComponent*)
   {
      ::ExampleWithArrayComponent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayComponent));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayComponent", 3, "datamodel/ExampleWithArrayComponent.h", 30,
                  typeid(::ExampleWithArrayComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayComponent_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithArrayComponent) );
      instance.SetNew(&new_ExampleWithArrayComponent);
      instance.SetNewArray(&newArray_ExampleWithArrayComponent);
      instance.SetDelete(&delete_ExampleWithArrayComponent);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayComponent);
      instance.SetDestructor(&destruct_ExampleWithArrayComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayComponent*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithArrayComponent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayComponent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayComponent*>(nullptr))->GetClass();
      ExampleWithArrayComponent_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithArrayComponent_Dictionary();
   static void MutableExampleWithArrayComponent_TClassManip(TClass*);
   static void *new_MutableExampleWithArrayComponent(void *p = nullptr);
   static void *newArray_MutableExampleWithArrayComponent(Long_t size, void *p);
   static void delete_MutableExampleWithArrayComponent(void *p);
   static void deleteArray_MutableExampleWithArrayComponent(void *p);
   static void destruct_MutableExampleWithArrayComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithArrayComponent*)
   {
      ::MutableExampleWithArrayComponent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithArrayComponent));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithArrayComponent", 3, "datamodel/MutableExampleWithArrayComponent.h", 29,
                  typeid(::MutableExampleWithArrayComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithArrayComponent_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithArrayComponent) );
      instance.SetNew(&new_MutableExampleWithArrayComponent);
      instance.SetNewArray(&newArray_MutableExampleWithArrayComponent);
      instance.SetDelete(&delete_MutableExampleWithArrayComponent);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithArrayComponent);
      instance.SetDestructor(&destruct_MutableExampleWithArrayComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithArrayComponent*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithArrayComponent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithArrayComponent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithArrayComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithArrayComponent*>(nullptr))->GetClass();
      MutableExampleWithArrayComponent_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithArrayComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayComponentCollection_Dictionary();
   static void ExampleWithArrayComponentCollection_TClassManip(TClass*);
   static void *new_ExampleWithArrayComponentCollection(void *p = nullptr);
   static void *newArray_ExampleWithArrayComponentCollection(Long_t size, void *p);
   static void delete_ExampleWithArrayComponentCollection(void *p);
   static void deleteArray_ExampleWithArrayComponentCollection(void *p);
   static void destruct_ExampleWithArrayComponentCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayComponentCollection*)
   {
      ::ExampleWithArrayComponentCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayComponentCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayComponentCollection", 3, "", 6600,
                  typeid(::ExampleWithArrayComponentCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayComponentCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithArrayComponentCollection) );
      instance.SetNew(&new_ExampleWithArrayComponentCollection);
      instance.SetNewArray(&newArray_ExampleWithArrayComponentCollection);
      instance.SetDelete(&delete_ExampleWithArrayComponentCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayComponentCollection);
      instance.SetDestructor(&destruct_ExampleWithArrayComponentCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayComponentCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithArrayComponentCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayComponentCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayComponentCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayComponentCollection*>(nullptr))->GetClass();
      ExampleWithArrayComponentCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayComponentCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponentData_Dictionary();
   static void ExampleWithComponentData_TClassManip(TClass*);
   static void *new_ExampleWithComponentData(void *p = nullptr);
   static void *newArray_ExampleWithComponentData(Long_t size, void *p);
   static void delete_ExampleWithComponentData(void *p);
   static void deleteArray_ExampleWithComponentData(void *p);
   static void destruct_ExampleWithComponentData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponentData*)
   {
      ::ExampleWithComponentData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponentData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponentData", 3, "datamodel/ExampleWithComponentData.h", 14,
                  typeid(::ExampleWithComponentData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponentData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithComponentData) );
      instance.SetNew(&new_ExampleWithComponentData);
      instance.SetNewArray(&newArray_ExampleWithComponentData);
      instance.SetDelete(&delete_ExampleWithComponentData);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponentData);
      instance.SetDestructor(&destruct_ExampleWithComponentData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponentData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithComponentData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithComponentData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponentData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithComponentData*>(nullptr))->GetClass();
      ExampleWithComponentData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponentData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponent_Dictionary();
   static void ExampleWithComponent_TClassManip(TClass*);
   static void *new_ExampleWithComponent(void *p = nullptr);
   static void *newArray_ExampleWithComponent(Long_t size, void *p);
   static void delete_ExampleWithComponent(void *p);
   static void deleteArray_ExampleWithComponent(void *p);
   static void destruct_ExampleWithComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponent*)
   {
      ::ExampleWithComponent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponent));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponent", 3, "datamodel/ExampleWithComponent.h", 30,
                  typeid(::ExampleWithComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponent_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithComponent) );
      instance.SetNew(&new_ExampleWithComponent);
      instance.SetNewArray(&newArray_ExampleWithComponent);
      instance.SetDelete(&delete_ExampleWithComponent);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponent);
      instance.SetDestructor(&destruct_ExampleWithComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponent*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithComponent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithComponent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithComponent*>(nullptr))->GetClass();
      ExampleWithComponent_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithComponent_Dictionary();
   static void MutableExampleWithComponent_TClassManip(TClass*);
   static void *new_MutableExampleWithComponent(void *p = nullptr);
   static void *newArray_MutableExampleWithComponent(Long_t size, void *p);
   static void delete_MutableExampleWithComponent(void *p);
   static void deleteArray_MutableExampleWithComponent(void *p);
   static void destruct_MutableExampleWithComponent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithComponent*)
   {
      ::MutableExampleWithComponent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithComponent));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithComponent", 3, "datamodel/MutableExampleWithComponent.h", 29,
                  typeid(::MutableExampleWithComponent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithComponent_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithComponent) );
      instance.SetNew(&new_MutableExampleWithComponent);
      instance.SetNewArray(&newArray_MutableExampleWithComponent);
      instance.SetDelete(&delete_MutableExampleWithComponent);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithComponent);
      instance.SetDestructor(&destruct_MutableExampleWithComponent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithComponent*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithComponent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithComponent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithComponent_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithComponent*>(nullptr))->GetClass();
      MutableExampleWithComponent_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithComponent_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithComponentCollection_Dictionary();
   static void ExampleWithComponentCollection_TClassManip(TClass*);
   static void *new_ExampleWithComponentCollection(void *p = nullptr);
   static void *newArray_ExampleWithComponentCollection(Long_t size, void *p);
   static void delete_ExampleWithComponentCollection(void *p);
   static void deleteArray_ExampleWithComponentCollection(void *p);
   static void destruct_ExampleWithComponentCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithComponentCollection*)
   {
      ::ExampleWithComponentCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithComponentCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithComponentCollection", 3, "", 7496,
                  typeid(::ExampleWithComponentCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithComponentCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithComponentCollection) );
      instance.SetNew(&new_ExampleWithComponentCollection);
      instance.SetNewArray(&newArray_ExampleWithComponentCollection);
      instance.SetDelete(&delete_ExampleWithComponentCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithComponentCollection);
      instance.SetDestructor(&destruct_ExampleWithComponentCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithComponentCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithComponentCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithComponentCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithComponentCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithComponentCollection*>(nullptr))->GetClass();
      ExampleWithComponentCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithComponentCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1Data_Dictionary();
   static void ExampleForCyclicDependency1Data_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1Data(void *p = nullptr);
   static void *newArray_ExampleForCyclicDependency1Data(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1Data(void *p);
   static void deleteArray_ExampleForCyclicDependency1Data(void *p);
   static void destruct_ExampleForCyclicDependency1Data(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1Data*)
   {
      ::ExampleForCyclicDependency1Data *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1Data));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1Data", 3, "datamodel/ExampleForCyclicDependency1Data.h", 13,
                  typeid(::ExampleForCyclicDependency1Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1Data_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleForCyclicDependency1Data) );
      instance.SetNew(&new_ExampleForCyclicDependency1Data);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1Data);
      instance.SetDelete(&delete_ExampleForCyclicDependency1Data);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1Data);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1Data);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1Data*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleForCyclicDependency1Data*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency1Data*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1Data_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency1Data*>(nullptr))->GetClass();
      ExampleForCyclicDependency1Data_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1Data_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1_Dictionary();
   static void ExampleForCyclicDependency1_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1(void *p = nullptr);
   static void *newArray_ExampleForCyclicDependency1(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1(void *p);
   static void deleteArray_ExampleForCyclicDependency1(void *p);
   static void destruct_ExampleForCyclicDependency1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1*)
   {
      ::ExampleForCyclicDependency1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1", 3, "datamodel/ExampleForCyclicDependency1.h", 32,
                  typeid(::ExampleForCyclicDependency1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleForCyclicDependency1) );
      instance.SetNew(&new_ExampleForCyclicDependency1);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1);
      instance.SetDelete(&delete_ExampleForCyclicDependency1);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleForCyclicDependency1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency1*>(nullptr))->GetClass();
      ExampleForCyclicDependency1_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleForCyclicDependency1_Dictionary();
   static void MutableExampleForCyclicDependency1_TClassManip(TClass*);
   static void *new_MutableExampleForCyclicDependency1(void *p = nullptr);
   static void *newArray_MutableExampleForCyclicDependency1(Long_t size, void *p);
   static void delete_MutableExampleForCyclicDependency1(void *p);
   static void deleteArray_MutableExampleForCyclicDependency1(void *p);
   static void destruct_MutableExampleForCyclicDependency1(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleForCyclicDependency1*)
   {
      ::MutableExampleForCyclicDependency1 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleForCyclicDependency1));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleForCyclicDependency1", 3, "datamodel/MutableExampleForCyclicDependency1.h", 31,
                  typeid(::MutableExampleForCyclicDependency1), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleForCyclicDependency1_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleForCyclicDependency1) );
      instance.SetNew(&new_MutableExampleForCyclicDependency1);
      instance.SetNewArray(&newArray_MutableExampleForCyclicDependency1);
      instance.SetDelete(&delete_MutableExampleForCyclicDependency1);
      instance.SetDeleteArray(&deleteArray_MutableExampleForCyclicDependency1);
      instance.SetDestructor(&destruct_MutableExampleForCyclicDependency1);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleForCyclicDependency1*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleForCyclicDependency1*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleForCyclicDependency1*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleForCyclicDependency1_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleForCyclicDependency1*>(nullptr))->GetClass();
      MutableExampleForCyclicDependency1_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleForCyclicDependency1_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2Data_Dictionary();
   static void ExampleForCyclicDependency2Data_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2Data(void *p = nullptr);
   static void *newArray_ExampleForCyclicDependency2Data(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2Data(void *p);
   static void deleteArray_ExampleForCyclicDependency2Data(void *p);
   static void destruct_ExampleForCyclicDependency2Data(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2Data*)
   {
      ::ExampleForCyclicDependency2Data *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2Data));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2Data", 3, "datamodel/ExampleForCyclicDependency2Data.h", 13,
                  typeid(::ExampleForCyclicDependency2Data), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2Data_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleForCyclicDependency2Data) );
      instance.SetNew(&new_ExampleForCyclicDependency2Data);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2Data);
      instance.SetDelete(&delete_ExampleForCyclicDependency2Data);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2Data);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2Data);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2Data*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleForCyclicDependency2Data*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency2Data*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2Data_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency2Data*>(nullptr))->GetClass();
      ExampleForCyclicDependency2Data_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2Data_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2_Dictionary();
   static void ExampleForCyclicDependency2_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2(void *p = nullptr);
   static void *newArray_ExampleForCyclicDependency2(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2(void *p);
   static void deleteArray_ExampleForCyclicDependency2(void *p);
   static void destruct_ExampleForCyclicDependency2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2*)
   {
      ::ExampleForCyclicDependency2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2", 3, "datamodel/ExampleForCyclicDependency2.h", 32,
                  typeid(::ExampleForCyclicDependency2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleForCyclicDependency2) );
      instance.SetNew(&new_ExampleForCyclicDependency2);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2);
      instance.SetDelete(&delete_ExampleForCyclicDependency2);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleForCyclicDependency2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency2*>(nullptr))->GetClass();
      ExampleForCyclicDependency2_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency1Collection_Dictionary();
   static void ExampleForCyclicDependency1Collection_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency1Collection(void *p = nullptr);
   static void *newArray_ExampleForCyclicDependency1Collection(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency1Collection(void *p);
   static void deleteArray_ExampleForCyclicDependency1Collection(void *p);
   static void destruct_ExampleForCyclicDependency1Collection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency1Collection*)
   {
      ::ExampleForCyclicDependency1Collection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency1Collection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency1Collection", 3, "", 8368,
                  typeid(::ExampleForCyclicDependency1Collection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency1Collection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleForCyclicDependency1Collection) );
      instance.SetNew(&new_ExampleForCyclicDependency1Collection);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency1Collection);
      instance.SetDelete(&delete_ExampleForCyclicDependency1Collection);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency1Collection);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency1Collection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency1Collection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleForCyclicDependency1Collection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency1Collection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency1Collection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency1Collection*>(nullptr))->GetClass();
      ExampleForCyclicDependency1Collection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency1Collection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleForCyclicDependency2_Dictionary();
   static void MutableExampleForCyclicDependency2_TClassManip(TClass*);
   static void *new_MutableExampleForCyclicDependency2(void *p = nullptr);
   static void *newArray_MutableExampleForCyclicDependency2(Long_t size, void *p);
   static void delete_MutableExampleForCyclicDependency2(void *p);
   static void deleteArray_MutableExampleForCyclicDependency2(void *p);
   static void destruct_MutableExampleForCyclicDependency2(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleForCyclicDependency2*)
   {
      ::MutableExampleForCyclicDependency2 *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleForCyclicDependency2));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleForCyclicDependency2", 3, "datamodel/MutableExampleForCyclicDependency2.h", 31,
                  typeid(::MutableExampleForCyclicDependency2), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleForCyclicDependency2_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleForCyclicDependency2) );
      instance.SetNew(&new_MutableExampleForCyclicDependency2);
      instance.SetNewArray(&newArray_MutableExampleForCyclicDependency2);
      instance.SetDelete(&delete_MutableExampleForCyclicDependency2);
      instance.SetDeleteArray(&deleteArray_MutableExampleForCyclicDependency2);
      instance.SetDestructor(&destruct_MutableExampleForCyclicDependency2);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleForCyclicDependency2*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleForCyclicDependency2*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleForCyclicDependency2*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleForCyclicDependency2_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleForCyclicDependency2*>(nullptr))->GetClass();
      MutableExampleForCyclicDependency2_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleForCyclicDependency2_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleForCyclicDependency2Collection_Dictionary();
   static void ExampleForCyclicDependency2Collection_TClassManip(TClass*);
   static void *new_ExampleForCyclicDependency2Collection(void *p = nullptr);
   static void *newArray_ExampleForCyclicDependency2Collection(Long_t size, void *p);
   static void delete_ExampleForCyclicDependency2Collection(void *p);
   static void deleteArray_ExampleForCyclicDependency2Collection(void *p);
   static void destruct_ExampleForCyclicDependency2Collection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleForCyclicDependency2Collection*)
   {
      ::ExampleForCyclicDependency2Collection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleForCyclicDependency2Collection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleForCyclicDependency2Collection", 3, "", 9228,
                  typeid(::ExampleForCyclicDependency2Collection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleForCyclicDependency2Collection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleForCyclicDependency2Collection) );
      instance.SetNew(&new_ExampleForCyclicDependency2Collection);
      instance.SetNewArray(&newArray_ExampleForCyclicDependency2Collection);
      instance.SetDelete(&delete_ExampleForCyclicDependency2Collection);
      instance.SetDeleteArray(&deleteArray_ExampleForCyclicDependency2Collection);
      instance.SetDestructor(&destruct_ExampleForCyclicDependency2Collection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleForCyclicDependency2Collection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleForCyclicDependency2Collection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency2Collection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleForCyclicDependency2Collection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleForCyclicDependency2Collection*>(nullptr))->GetClass();
      ExampleForCyclicDependency2Collection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleForCyclicDependency2Collection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespaceData_Dictionary();
   static void ex42cLcLExampleWithNamespaceData_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespaceData(void *p = nullptr);
   static void *newArray_ex42cLcLExampleWithNamespaceData(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespaceData(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespaceData(void *p);
   static void destruct_ex42cLcLExampleWithNamespaceData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespaceData*)
   {
      ::ex42::ExampleWithNamespaceData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespaceData));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespaceData", 3, "datamodel/ExampleWithNamespaceData.h", 15,
                  typeid(::ex42::ExampleWithNamespaceData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespaceData_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::ExampleWithNamespaceData) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespaceData);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespaceData);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespaceData);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespaceData);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespaceData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespaceData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::ExampleWithNamespaceData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithNamespaceData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespaceData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithNamespaceData*>(nullptr))->GetClass();
      ex42cLcLExampleWithNamespaceData_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespaceData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespace_Dictionary();
   static void ex42cLcLExampleWithNamespace_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespace(void *p = nullptr);
   static void *newArray_ex42cLcLExampleWithNamespace(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespace(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespace(void *p);
   static void destruct_ex42cLcLExampleWithNamespace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespace*)
   {
      ::ex42::ExampleWithNamespace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespace));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespace", 3, "datamodel/ExampleWithNamespace.h", 31,
                  typeid(::ex42::ExampleWithNamespace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespace_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::ExampleWithNamespace) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespace);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespace);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespace);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespace);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespace*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::ExampleWithNamespace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithNamespace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespace_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithNamespace*>(nullptr))->GetClass();
      ex42cLcLExampleWithNamespace_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespace_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLMutableExampleWithNamespace_Dictionary();
   static void ex42cLcLMutableExampleWithNamespace_TClassManip(TClass*);
   static void *new_ex42cLcLMutableExampleWithNamespace(void *p = nullptr);
   static void *newArray_ex42cLcLMutableExampleWithNamespace(Long_t size, void *p);
   static void delete_ex42cLcLMutableExampleWithNamespace(void *p);
   static void deleteArray_ex42cLcLMutableExampleWithNamespace(void *p);
   static void destruct_ex42cLcLMutableExampleWithNamespace(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::MutableExampleWithNamespace*)
   {
      ::ex42::MutableExampleWithNamespace *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::MutableExampleWithNamespace));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::MutableExampleWithNamespace", 3, "datamodel/MutableExampleWithNamespace.h", 30,
                  typeid(::ex42::MutableExampleWithNamespace), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLMutableExampleWithNamespace_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::MutableExampleWithNamespace) );
      instance.SetNew(&new_ex42cLcLMutableExampleWithNamespace);
      instance.SetNewArray(&newArray_ex42cLcLMutableExampleWithNamespace);
      instance.SetDelete(&delete_ex42cLcLMutableExampleWithNamespace);
      instance.SetDeleteArray(&deleteArray_ex42cLcLMutableExampleWithNamespace);
      instance.SetDestructor(&destruct_ex42cLcLMutableExampleWithNamespace);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::MutableExampleWithNamespace*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::MutableExampleWithNamespace*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::MutableExampleWithNamespace*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLMutableExampleWithNamespace_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::MutableExampleWithNamespace*>(nullptr))->GetClass();
      ex42cLcLMutableExampleWithNamespace_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLMutableExampleWithNamespace_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithNamespaceCollection_Dictionary();
   static void ex42cLcLExampleWithNamespaceCollection_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithNamespaceCollection(void *p = nullptr);
   static void *newArray_ex42cLcLExampleWithNamespaceCollection(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithNamespaceCollection(void *p);
   static void deleteArray_ex42cLcLExampleWithNamespaceCollection(void *p);
   static void destruct_ex42cLcLExampleWithNamespaceCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithNamespaceCollection*)
   {
      ::ex42::ExampleWithNamespaceCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithNamespaceCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithNamespaceCollection", 3, "", 10114,
                  typeid(::ex42::ExampleWithNamespaceCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithNamespaceCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::ExampleWithNamespaceCollection) );
      instance.SetNew(&new_ex42cLcLExampleWithNamespaceCollection);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithNamespaceCollection);
      instance.SetDelete(&delete_ex42cLcLExampleWithNamespaceCollection);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithNamespaceCollection);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithNamespaceCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithNamespaceCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::ExampleWithNamespaceCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithNamespaceCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithNamespaceCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithNamespaceCollection*>(nullptr))->GetClass();
      ex42cLcLExampleWithNamespaceCollection_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithNamespaceCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelationData_Dictionary();
   static void ex42cLcLExampleWithARelationData_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelationData(void *p = nullptr);
   static void *newArray_ex42cLcLExampleWithARelationData(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelationData(void *p);
   static void deleteArray_ex42cLcLExampleWithARelationData(void *p);
   static void destruct_ex42cLcLExampleWithARelationData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelationData*)
   {
      ::ex42::ExampleWithARelationData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelationData));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelationData", 3, "datamodel/ExampleWithARelationData.h", 14,
                  typeid(::ex42::ExampleWithARelationData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelationData_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::ExampleWithARelationData) );
      instance.SetNew(&new_ex42cLcLExampleWithARelationData);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelationData);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelationData);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelationData);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelationData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelationData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::ExampleWithARelationData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithARelationData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelationData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithARelationData*>(nullptr))->GetClass();
      ex42cLcLExampleWithARelationData_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelationData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelation_Dictionary();
   static void ex42cLcLExampleWithARelation_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelation(void *p = nullptr);
   static void *newArray_ex42cLcLExampleWithARelation(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelation(void *p);
   static void deleteArray_ex42cLcLExampleWithARelation(void *p);
   static void destruct_ex42cLcLExampleWithARelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelation*)
   {
      ::ex42::ExampleWithARelation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelation));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelation", 3, "datamodel/ExampleWithARelation.h", 38,
                  typeid(::ex42::ExampleWithARelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelation_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::ExampleWithARelation) );
      instance.SetNew(&new_ex42cLcLExampleWithARelation);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelation);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelation);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelation);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelation*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::ExampleWithARelation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithARelation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithARelation*>(nullptr))->GetClass();
      ex42cLcLExampleWithARelation_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLMutableExampleWithARelation_Dictionary();
   static void ex42cLcLMutableExampleWithARelation_TClassManip(TClass*);
   static void *new_ex42cLcLMutableExampleWithARelation(void *p = nullptr);
   static void *newArray_ex42cLcLMutableExampleWithARelation(Long_t size, void *p);
   static void delete_ex42cLcLMutableExampleWithARelation(void *p);
   static void deleteArray_ex42cLcLMutableExampleWithARelation(void *p);
   static void destruct_ex42cLcLMutableExampleWithARelation(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::MutableExampleWithARelation*)
   {
      ::ex42::MutableExampleWithARelation *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::MutableExampleWithARelation));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::MutableExampleWithARelation", 3, "datamodel/MutableExampleWithARelation.h", 37,
                  typeid(::ex42::MutableExampleWithARelation), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLMutableExampleWithARelation_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::MutableExampleWithARelation) );
      instance.SetNew(&new_ex42cLcLMutableExampleWithARelation);
      instance.SetNewArray(&newArray_ex42cLcLMutableExampleWithARelation);
      instance.SetDelete(&delete_ex42cLcLMutableExampleWithARelation);
      instance.SetDeleteArray(&deleteArray_ex42cLcLMutableExampleWithARelation);
      instance.SetDestructor(&destruct_ex42cLcLMutableExampleWithARelation);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::MutableExampleWithARelation*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::MutableExampleWithARelation*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::MutableExampleWithARelation*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLMutableExampleWithARelation_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::MutableExampleWithARelation*>(nullptr))->GetClass();
      ex42cLcLMutableExampleWithARelation_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLMutableExampleWithARelation_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ex42cLcLExampleWithARelationCollection_Dictionary();
   static void ex42cLcLExampleWithARelationCollection_TClassManip(TClass*);
   static void *new_ex42cLcLExampleWithARelationCollection(void *p = nullptr);
   static void *newArray_ex42cLcLExampleWithARelationCollection(Long_t size, void *p);
   static void delete_ex42cLcLExampleWithARelationCollection(void *p);
   static void deleteArray_ex42cLcLExampleWithARelationCollection(void *p);
   static void destruct_ex42cLcLExampleWithARelationCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ex42::ExampleWithARelationCollection*)
   {
      ::ex42::ExampleWithARelationCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ex42::ExampleWithARelationCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ex42::ExampleWithARelationCollection", 3, "", 11004,
                  typeid(::ex42::ExampleWithARelationCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ex42cLcLExampleWithARelationCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ex42::ExampleWithARelationCollection) );
      instance.SetNew(&new_ex42cLcLExampleWithARelationCollection);
      instance.SetNewArray(&newArray_ex42cLcLExampleWithARelationCollection);
      instance.SetDelete(&delete_ex42cLcLExampleWithARelationCollection);
      instance.SetDeleteArray(&deleteArray_ex42cLcLExampleWithARelationCollection);
      instance.SetDestructor(&destruct_ex42cLcLExampleWithARelationCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ex42::ExampleWithARelationCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ex42::ExampleWithARelationCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithARelationCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ex42cLcLExampleWithARelationCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ex42::ExampleWithARelationCollection*>(nullptr))->GetClass();
      ex42cLcLExampleWithARelationCollection_TClassManip(theClass);
   return theClass;
   }

   static void ex42cLcLExampleWithARelationCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithDifferentNamespaceRelationsData_Dictionary();
   static void ExampleWithDifferentNamespaceRelationsData_TClassManip(TClass*);
   static void *new_ExampleWithDifferentNamespaceRelationsData(void *p = nullptr);
   static void *newArray_ExampleWithDifferentNamespaceRelationsData(Long_t size, void *p);
   static void delete_ExampleWithDifferentNamespaceRelationsData(void *p);
   static void deleteArray_ExampleWithDifferentNamespaceRelationsData(void *p);
   static void destruct_ExampleWithDifferentNamespaceRelationsData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithDifferentNamespaceRelationsData*)
   {
      ::ExampleWithDifferentNamespaceRelationsData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithDifferentNamespaceRelationsData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithDifferentNamespaceRelationsData", 3, "datamodel/ExampleWithDifferentNamespaceRelationsData.h", 13,
                  typeid(::ExampleWithDifferentNamespaceRelationsData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithDifferentNamespaceRelationsData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithDifferentNamespaceRelationsData) );
      instance.SetNew(&new_ExampleWithDifferentNamespaceRelationsData);
      instance.SetNewArray(&newArray_ExampleWithDifferentNamespaceRelationsData);
      instance.SetDelete(&delete_ExampleWithDifferentNamespaceRelationsData);
      instance.SetDeleteArray(&deleteArray_ExampleWithDifferentNamespaceRelationsData);
      instance.SetDestructor(&destruct_ExampleWithDifferentNamespaceRelationsData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithDifferentNamespaceRelationsData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithDifferentNamespaceRelationsData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithDifferentNamespaceRelationsData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithDifferentNamespaceRelationsData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithDifferentNamespaceRelationsData*>(nullptr))->GetClass();
      ExampleWithDifferentNamespaceRelationsData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithDifferentNamespaceRelationsData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithDifferentNamespaceRelations_Dictionary();
   static void ExampleWithDifferentNamespaceRelations_TClassManip(TClass*);
   static void *new_ExampleWithDifferentNamespaceRelations(void *p = nullptr);
   static void *newArray_ExampleWithDifferentNamespaceRelations(Long_t size, void *p);
   static void delete_ExampleWithDifferentNamespaceRelations(void *p);
   static void deleteArray_ExampleWithDifferentNamespaceRelations(void *p);
   static void destruct_ExampleWithDifferentNamespaceRelations(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithDifferentNamespaceRelations*)
   {
      ::ExampleWithDifferentNamespaceRelations *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithDifferentNamespaceRelations));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithDifferentNamespaceRelations", 3, "datamodel/ExampleWithDifferentNamespaceRelations.h", 37,
                  typeid(::ExampleWithDifferentNamespaceRelations), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithDifferentNamespaceRelations_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithDifferentNamespaceRelations) );
      instance.SetNew(&new_ExampleWithDifferentNamespaceRelations);
      instance.SetNewArray(&newArray_ExampleWithDifferentNamespaceRelations);
      instance.SetDelete(&delete_ExampleWithDifferentNamespaceRelations);
      instance.SetDeleteArray(&deleteArray_ExampleWithDifferentNamespaceRelations);
      instance.SetDestructor(&destruct_ExampleWithDifferentNamespaceRelations);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithDifferentNamespaceRelations*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithDifferentNamespaceRelations*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithDifferentNamespaceRelations*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithDifferentNamespaceRelations_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithDifferentNamespaceRelations*>(nullptr))->GetClass();
      ExampleWithDifferentNamespaceRelations_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithDifferentNamespaceRelations_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithDifferentNamespaceRelations_Dictionary();
   static void MutableExampleWithDifferentNamespaceRelations_TClassManip(TClass*);
   static void *new_MutableExampleWithDifferentNamespaceRelations(void *p = nullptr);
   static void *newArray_MutableExampleWithDifferentNamespaceRelations(Long_t size, void *p);
   static void delete_MutableExampleWithDifferentNamespaceRelations(void *p);
   static void deleteArray_MutableExampleWithDifferentNamespaceRelations(void *p);
   static void destruct_MutableExampleWithDifferentNamespaceRelations(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithDifferentNamespaceRelations*)
   {
      ::MutableExampleWithDifferentNamespaceRelations *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithDifferentNamespaceRelations));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithDifferentNamespaceRelations", 3, "datamodel/MutableExampleWithDifferentNamespaceRelations.h", 36,
                  typeid(::MutableExampleWithDifferentNamespaceRelations), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithDifferentNamespaceRelations_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithDifferentNamespaceRelations) );
      instance.SetNew(&new_MutableExampleWithDifferentNamespaceRelations);
      instance.SetNewArray(&newArray_MutableExampleWithDifferentNamespaceRelations);
      instance.SetDelete(&delete_MutableExampleWithDifferentNamespaceRelations);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithDifferentNamespaceRelations);
      instance.SetDestructor(&destruct_MutableExampleWithDifferentNamespaceRelations);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithDifferentNamespaceRelations*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithDifferentNamespaceRelations*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithDifferentNamespaceRelations*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithDifferentNamespaceRelations_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithDifferentNamespaceRelations*>(nullptr))->GetClass();
      MutableExampleWithDifferentNamespaceRelations_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithDifferentNamespaceRelations_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithDifferentNamespaceRelationsCollection_Dictionary();
   static void ExampleWithDifferentNamespaceRelationsCollection_TClassManip(TClass*);
   static void *new_ExampleWithDifferentNamespaceRelationsCollection(void *p = nullptr);
   static void *newArray_ExampleWithDifferentNamespaceRelationsCollection(Long_t size, void *p);
   static void delete_ExampleWithDifferentNamespaceRelationsCollection(void *p);
   static void deleteArray_ExampleWithDifferentNamespaceRelationsCollection(void *p);
   static void destruct_ExampleWithDifferentNamespaceRelationsCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithDifferentNamespaceRelationsCollection*)
   {
      ::ExampleWithDifferentNamespaceRelationsCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithDifferentNamespaceRelationsCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithDifferentNamespaceRelationsCollection", 3, "", 11932,
                  typeid(::ExampleWithDifferentNamespaceRelationsCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithDifferentNamespaceRelationsCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithDifferentNamespaceRelationsCollection) );
      instance.SetNew(&new_ExampleWithDifferentNamespaceRelationsCollection);
      instance.SetNewArray(&newArray_ExampleWithDifferentNamespaceRelationsCollection);
      instance.SetDelete(&delete_ExampleWithDifferentNamespaceRelationsCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithDifferentNamespaceRelationsCollection);
      instance.SetDestructor(&destruct_ExampleWithDifferentNamespaceRelationsCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithDifferentNamespaceRelationsCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithDifferentNamespaceRelationsCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithDifferentNamespaceRelationsCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithDifferentNamespaceRelationsCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithDifferentNamespaceRelationsCollection*>(nullptr))->GetClass();
      ExampleWithDifferentNamespaceRelationsCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithDifferentNamespaceRelationsCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayData_Dictionary();
   static void ExampleWithArrayData_TClassManip(TClass*);
   static void *new_ExampleWithArrayData(void *p = nullptr);
   static void *newArray_ExampleWithArrayData(Long_t size, void *p);
   static void delete_ExampleWithArrayData(void *p);
   static void deleteArray_ExampleWithArrayData(void *p);
   static void destruct_ExampleWithArrayData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayData*)
   {
      ::ExampleWithArrayData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayData", 3, "datamodel/ExampleWithArrayData.h", 16,
                  typeid(::ExampleWithArrayData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithArrayData) );
      instance.SetNew(&new_ExampleWithArrayData);
      instance.SetNewArray(&newArray_ExampleWithArrayData);
      instance.SetDelete(&delete_ExampleWithArrayData);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayData);
      instance.SetDestructor(&destruct_ExampleWithArrayData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithArrayData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayData*>(nullptr))->GetClass();
      ExampleWithArrayData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArray_Dictionary();
   static void ExampleWithArray_TClassManip(TClass*);
   static void *new_ExampleWithArray(void *p = nullptr);
   static void *newArray_ExampleWithArray(Long_t size, void *p);
   static void delete_ExampleWithArray(void *p);
   static void deleteArray_ExampleWithArray(void *p);
   static void destruct_ExampleWithArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArray*)
   {
      ::ExampleWithArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArray));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArray", 3, "datamodel/ExampleWithArray.h", 32,
                  typeid(::ExampleWithArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArray_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithArray) );
      instance.SetNew(&new_ExampleWithArray);
      instance.SetNewArray(&newArray_ExampleWithArray);
      instance.SetDelete(&delete_ExampleWithArray);
      instance.SetDeleteArray(&deleteArray_ExampleWithArray);
      instance.SetDestructor(&destruct_ExampleWithArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithArray*>(nullptr))->GetClass();
      ExampleWithArray_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithArray_Dictionary();
   static void MutableExampleWithArray_TClassManip(TClass*);
   static void *new_MutableExampleWithArray(void *p = nullptr);
   static void *newArray_MutableExampleWithArray(Long_t size, void *p);
   static void delete_MutableExampleWithArray(void *p);
   static void deleteArray_MutableExampleWithArray(void *p);
   static void destruct_MutableExampleWithArray(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithArray*)
   {
      ::MutableExampleWithArray *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithArray));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithArray", 3, "datamodel/MutableExampleWithArray.h", 31,
                  typeid(::MutableExampleWithArray), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithArray_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithArray) );
      instance.SetNew(&new_MutableExampleWithArray);
      instance.SetNewArray(&newArray_MutableExampleWithArray);
      instance.SetDelete(&delete_MutableExampleWithArray);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithArray);
      instance.SetDestructor(&destruct_MutableExampleWithArray);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithArray*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithArray*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithArray*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithArray_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithArray*>(nullptr))->GetClass();
      MutableExampleWithArray_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithArray_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithArrayCollection_Dictionary();
   static void ExampleWithArrayCollection_TClassManip(TClass*);
   static void *new_ExampleWithArrayCollection(void *p = nullptr);
   static void *newArray_ExampleWithArrayCollection(Long_t size, void *p);
   static void delete_ExampleWithArrayCollection(void *p);
   static void deleteArray_ExampleWithArrayCollection(void *p);
   static void destruct_ExampleWithArrayCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithArrayCollection*)
   {
      ::ExampleWithArrayCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithArrayCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithArrayCollection", 3, "", 12859,
                  typeid(::ExampleWithArrayCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithArrayCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithArrayCollection) );
      instance.SetNew(&new_ExampleWithArrayCollection);
      instance.SetNewArray(&newArray_ExampleWithArrayCollection);
      instance.SetDelete(&delete_ExampleWithArrayCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithArrayCollection);
      instance.SetDestructor(&destruct_ExampleWithArrayCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithArrayCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithArrayCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithArrayCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithArrayCollection*>(nullptr))->GetClass();
      ExampleWithArrayCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithArrayCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithFixedWidthIntegersData_Dictionary();
   static void ExampleWithFixedWidthIntegersData_TClassManip(TClass*);
   static void *new_ExampleWithFixedWidthIntegersData(void *p = nullptr);
   static void *newArray_ExampleWithFixedWidthIntegersData(Long_t size, void *p);
   static void delete_ExampleWithFixedWidthIntegersData(void *p);
   static void deleteArray_ExampleWithFixedWidthIntegersData(void *p);
   static void destruct_ExampleWithFixedWidthIntegersData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithFixedWidthIntegersData*)
   {
      ::ExampleWithFixedWidthIntegersData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithFixedWidthIntegersData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithFixedWidthIntegersData", 3, "datamodel/ExampleWithFixedWidthIntegersData.h", 16,
                  typeid(::ExampleWithFixedWidthIntegersData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithFixedWidthIntegersData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithFixedWidthIntegersData) );
      instance.SetNew(&new_ExampleWithFixedWidthIntegersData);
      instance.SetNewArray(&newArray_ExampleWithFixedWidthIntegersData);
      instance.SetDelete(&delete_ExampleWithFixedWidthIntegersData);
      instance.SetDeleteArray(&deleteArray_ExampleWithFixedWidthIntegersData);
      instance.SetDestructor(&destruct_ExampleWithFixedWidthIntegersData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithFixedWidthIntegersData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithFixedWidthIntegersData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithFixedWidthIntegersData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithFixedWidthIntegersData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithFixedWidthIntegersData*>(nullptr))->GetClass();
      ExampleWithFixedWidthIntegersData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithFixedWidthIntegersData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithFixedWidthIntegers_Dictionary();
   static void ExampleWithFixedWidthIntegers_TClassManip(TClass*);
   static void *new_ExampleWithFixedWidthIntegers(void *p = nullptr);
   static void *newArray_ExampleWithFixedWidthIntegers(Long_t size, void *p);
   static void delete_ExampleWithFixedWidthIntegers(void *p);
   static void deleteArray_ExampleWithFixedWidthIntegers(void *p);
   static void destruct_ExampleWithFixedWidthIntegers(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithFixedWidthIntegers*)
   {
      ::ExampleWithFixedWidthIntegers *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithFixedWidthIntegers));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithFixedWidthIntegers", 3, "datamodel/ExampleWithFixedWidthIntegers.h", 32,
                  typeid(::ExampleWithFixedWidthIntegers), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithFixedWidthIntegers_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithFixedWidthIntegers) );
      instance.SetNew(&new_ExampleWithFixedWidthIntegers);
      instance.SetNewArray(&newArray_ExampleWithFixedWidthIntegers);
      instance.SetDelete(&delete_ExampleWithFixedWidthIntegers);
      instance.SetDeleteArray(&deleteArray_ExampleWithFixedWidthIntegers);
      instance.SetDestructor(&destruct_ExampleWithFixedWidthIntegers);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithFixedWidthIntegers*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithFixedWidthIntegers*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithFixedWidthIntegers*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithFixedWidthIntegers_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithFixedWidthIntegers*>(nullptr))->GetClass();
      ExampleWithFixedWidthIntegers_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithFixedWidthIntegers_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithFixedWidthIntegers_Dictionary();
   static void MutableExampleWithFixedWidthIntegers_TClassManip(TClass*);
   static void *new_MutableExampleWithFixedWidthIntegers(void *p = nullptr);
   static void *newArray_MutableExampleWithFixedWidthIntegers(Long_t size, void *p);
   static void delete_MutableExampleWithFixedWidthIntegers(void *p);
   static void deleteArray_MutableExampleWithFixedWidthIntegers(void *p);
   static void destruct_MutableExampleWithFixedWidthIntegers(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithFixedWidthIntegers*)
   {
      ::MutableExampleWithFixedWidthIntegers *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithFixedWidthIntegers));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithFixedWidthIntegers", 3, "datamodel/MutableExampleWithFixedWidthIntegers.h", 31,
                  typeid(::MutableExampleWithFixedWidthIntegers), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithFixedWidthIntegers_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithFixedWidthIntegers) );
      instance.SetNew(&new_MutableExampleWithFixedWidthIntegers);
      instance.SetNewArray(&newArray_MutableExampleWithFixedWidthIntegers);
      instance.SetDelete(&delete_MutableExampleWithFixedWidthIntegers);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithFixedWidthIntegers);
      instance.SetDestructor(&destruct_MutableExampleWithFixedWidthIntegers);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithFixedWidthIntegers*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithFixedWidthIntegers*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithFixedWidthIntegers*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithFixedWidthIntegers_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithFixedWidthIntegers*>(nullptr))->GetClass();
      MutableExampleWithFixedWidthIntegers_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithFixedWidthIntegers_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithFixedWidthIntegersCollection_Dictionary();
   static void ExampleWithFixedWidthIntegersCollection_TClassManip(TClass*);
   static void *new_ExampleWithFixedWidthIntegersCollection(void *p = nullptr);
   static void *newArray_ExampleWithFixedWidthIntegersCollection(Long_t size, void *p);
   static void delete_ExampleWithFixedWidthIntegersCollection(void *p);
   static void deleteArray_ExampleWithFixedWidthIntegersCollection(void *p);
   static void destruct_ExampleWithFixedWidthIntegersCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithFixedWidthIntegersCollection*)
   {
      ::ExampleWithFixedWidthIntegersCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithFixedWidthIntegersCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithFixedWidthIntegersCollection", 3, "", 13822,
                  typeid(::ExampleWithFixedWidthIntegersCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithFixedWidthIntegersCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithFixedWidthIntegersCollection) );
      instance.SetNew(&new_ExampleWithFixedWidthIntegersCollection);
      instance.SetNewArray(&newArray_ExampleWithFixedWidthIntegersCollection);
      instance.SetDelete(&delete_ExampleWithFixedWidthIntegersCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithFixedWidthIntegersCollection);
      instance.SetDestructor(&destruct_ExampleWithFixedWidthIntegersCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithFixedWidthIntegersCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithFixedWidthIntegersCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithFixedWidthIntegersCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithFixedWidthIntegersCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithFixedWidthIntegersCollection*>(nullptr))->GetClass();
      ExampleWithFixedWidthIntegersCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithFixedWidthIntegersCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithUserInitData_Dictionary();
   static void ExampleWithUserInitData_TClassManip(TClass*);
   static void *new_ExampleWithUserInitData(void *p = nullptr);
   static void *newArray_ExampleWithUserInitData(Long_t size, void *p);
   static void delete_ExampleWithUserInitData(void *p);
   static void deleteArray_ExampleWithUserInitData(void *p);
   static void destruct_ExampleWithUserInitData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithUserInitData*)
   {
      ::ExampleWithUserInitData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithUserInitData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithUserInitData", 3, "datamodel/ExampleWithUserInitData.h", 17,
                  typeid(::ExampleWithUserInitData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithUserInitData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithUserInitData) );
      instance.SetNew(&new_ExampleWithUserInitData);
      instance.SetNewArray(&newArray_ExampleWithUserInitData);
      instance.SetDelete(&delete_ExampleWithUserInitData);
      instance.SetDeleteArray(&deleteArray_ExampleWithUserInitData);
      instance.SetDestructor(&destruct_ExampleWithUserInitData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithUserInitData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithUserInitData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithUserInitData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithUserInitData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithUserInitData*>(nullptr))->GetClass();
      ExampleWithUserInitData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithUserInitData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithUserInit_Dictionary();
   static void ExampleWithUserInit_TClassManip(TClass*);
   static void *new_ExampleWithUserInit(void *p = nullptr);
   static void *newArray_ExampleWithUserInit(Long_t size, void *p);
   static void delete_ExampleWithUserInit(void *p);
   static void deleteArray_ExampleWithUserInit(void *p);
   static void destruct_ExampleWithUserInit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithUserInit*)
   {
      ::ExampleWithUserInit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithUserInit));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithUserInit", 3, "datamodel/ExampleWithUserInit.h", 33,
                  typeid(::ExampleWithUserInit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithUserInit_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithUserInit) );
      instance.SetNew(&new_ExampleWithUserInit);
      instance.SetNewArray(&newArray_ExampleWithUserInit);
      instance.SetDelete(&delete_ExampleWithUserInit);
      instance.SetDeleteArray(&deleteArray_ExampleWithUserInit);
      instance.SetDestructor(&destruct_ExampleWithUserInit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithUserInit*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithUserInit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithUserInit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithUserInit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithUserInit*>(nullptr))->GetClass();
      ExampleWithUserInit_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithUserInit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleWithUserInit_Dictionary();
   static void MutableExampleWithUserInit_TClassManip(TClass*);
   static void *new_MutableExampleWithUserInit(void *p = nullptr);
   static void *newArray_MutableExampleWithUserInit(Long_t size, void *p);
   static void delete_MutableExampleWithUserInit(void *p);
   static void deleteArray_MutableExampleWithUserInit(void *p);
   static void destruct_MutableExampleWithUserInit(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleWithUserInit*)
   {
      ::MutableExampleWithUserInit *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleWithUserInit));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleWithUserInit", 3, "datamodel/MutableExampleWithUserInit.h", 32,
                  typeid(::MutableExampleWithUserInit), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleWithUserInit_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleWithUserInit) );
      instance.SetNew(&new_MutableExampleWithUserInit);
      instance.SetNewArray(&newArray_MutableExampleWithUserInit);
      instance.SetDelete(&delete_MutableExampleWithUserInit);
      instance.SetDeleteArray(&deleteArray_MutableExampleWithUserInit);
      instance.SetDestructor(&destruct_MutableExampleWithUserInit);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleWithUserInit*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleWithUserInit*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithUserInit*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleWithUserInit_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleWithUserInit*>(nullptr))->GetClass();
      MutableExampleWithUserInit_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleWithUserInit_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleWithUserInitCollection_Dictionary();
   static void ExampleWithUserInitCollection_TClassManip(TClass*);
   static void *new_ExampleWithUserInitCollection(void *p = nullptr);
   static void *newArray_ExampleWithUserInitCollection(Long_t size, void *p);
   static void delete_ExampleWithUserInitCollection(void *p);
   static void deleteArray_ExampleWithUserInitCollection(void *p);
   static void destruct_ExampleWithUserInitCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleWithUserInitCollection*)
   {
      ::ExampleWithUserInitCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleWithUserInitCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleWithUserInitCollection", 3, "", 14799,
                  typeid(::ExampleWithUserInitCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleWithUserInitCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleWithUserInitCollection) );
      instance.SetNew(&new_ExampleWithUserInitCollection);
      instance.SetNewArray(&newArray_ExampleWithUserInitCollection);
      instance.SetDelete(&delete_ExampleWithUserInitCollection);
      instance.SetDeleteArray(&deleteArray_ExampleWithUserInitCollection);
      instance.SetDestructor(&destruct_ExampleWithUserInitCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleWithUserInitCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleWithUserInitCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleWithUserInitCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleWithUserInitCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleWithUserInitCollection*>(nullptr))->GetClass();
      ExampleWithUserInitCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleWithUserInitCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleOfDroppedTypeData_Dictionary();
   static void ExampleOfDroppedTypeData_TClassManip(TClass*);
   static void *new_ExampleOfDroppedTypeData(void *p = nullptr);
   static void *newArray_ExampleOfDroppedTypeData(Long_t size, void *p);
   static void delete_ExampleOfDroppedTypeData(void *p);
   static void deleteArray_ExampleOfDroppedTypeData(void *p);
   static void destruct_ExampleOfDroppedTypeData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleOfDroppedTypeData*)
   {
      ::ExampleOfDroppedTypeData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleOfDroppedTypeData));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleOfDroppedTypeData", 3, "datamodel/ExampleOfDroppedTypeData.h", 13,
                  typeid(::ExampleOfDroppedTypeData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleOfDroppedTypeData_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleOfDroppedTypeData) );
      instance.SetNew(&new_ExampleOfDroppedTypeData);
      instance.SetNewArray(&newArray_ExampleOfDroppedTypeData);
      instance.SetDelete(&delete_ExampleOfDroppedTypeData);
      instance.SetDeleteArray(&deleteArray_ExampleOfDroppedTypeData);
      instance.SetDestructor(&destruct_ExampleOfDroppedTypeData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleOfDroppedTypeData*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleOfDroppedTypeData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleOfDroppedTypeData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleOfDroppedTypeData_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleOfDroppedTypeData*>(nullptr))->GetClass();
      ExampleOfDroppedTypeData_TClassManip(theClass);
   return theClass;
   }

   static void ExampleOfDroppedTypeData_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleOfDroppedType_Dictionary();
   static void ExampleOfDroppedType_TClassManip(TClass*);
   static void *new_ExampleOfDroppedType(void *p = nullptr);
   static void *newArray_ExampleOfDroppedType(Long_t size, void *p);
   static void delete_ExampleOfDroppedType(void *p);
   static void deleteArray_ExampleOfDroppedType(void *p);
   static void destruct_ExampleOfDroppedType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleOfDroppedType*)
   {
      ::ExampleOfDroppedType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleOfDroppedType));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleOfDroppedType", 3, "datamodel/ExampleOfDroppedType.h", 29,
                  typeid(::ExampleOfDroppedType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleOfDroppedType_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleOfDroppedType) );
      instance.SetNew(&new_ExampleOfDroppedType);
      instance.SetNewArray(&newArray_ExampleOfDroppedType);
      instance.SetDelete(&delete_ExampleOfDroppedType);
      instance.SetDeleteArray(&deleteArray_ExampleOfDroppedType);
      instance.SetDestructor(&destruct_ExampleOfDroppedType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleOfDroppedType*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleOfDroppedType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleOfDroppedType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleOfDroppedType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleOfDroppedType*>(nullptr))->GetClass();
      ExampleOfDroppedType_TClassManip(theClass);
   return theClass;
   }

   static void ExampleOfDroppedType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *MutableExampleOfDroppedType_Dictionary();
   static void MutableExampleOfDroppedType_TClassManip(TClass*);
   static void *new_MutableExampleOfDroppedType(void *p = nullptr);
   static void *newArray_MutableExampleOfDroppedType(Long_t size, void *p);
   static void delete_MutableExampleOfDroppedType(void *p);
   static void deleteArray_MutableExampleOfDroppedType(void *p);
   static void destruct_MutableExampleOfDroppedType(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MutableExampleOfDroppedType*)
   {
      ::MutableExampleOfDroppedType *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::MutableExampleOfDroppedType));
      static ::ROOT::TGenericClassInfo 
         instance("MutableExampleOfDroppedType", 3, "datamodel/MutableExampleOfDroppedType.h", 28,
                  typeid(::MutableExampleOfDroppedType), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &MutableExampleOfDroppedType_Dictionary, isa_proxy, 12,
                  sizeof(::MutableExampleOfDroppedType) );
      instance.SetNew(&new_MutableExampleOfDroppedType);
      instance.SetNewArray(&newArray_MutableExampleOfDroppedType);
      instance.SetDelete(&delete_MutableExampleOfDroppedType);
      instance.SetDeleteArray(&deleteArray_MutableExampleOfDroppedType);
      instance.SetDestructor(&destruct_MutableExampleOfDroppedType);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MutableExampleOfDroppedType*)
   {
      return GenerateInitInstanceLocal(static_cast<::MutableExampleOfDroppedType*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MutableExampleOfDroppedType*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *MutableExampleOfDroppedType_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::MutableExampleOfDroppedType*>(nullptr))->GetClass();
      MutableExampleOfDroppedType_TClassManip(theClass);
   return theClass;
   }

   static void MutableExampleOfDroppedType_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *ExampleOfDroppedTypeCollection_Dictionary();
   static void ExampleOfDroppedTypeCollection_TClassManip(TClass*);
   static void *new_ExampleOfDroppedTypeCollection(void *p = nullptr);
   static void *newArray_ExampleOfDroppedTypeCollection(Long_t size, void *p);
   static void delete_ExampleOfDroppedTypeCollection(void *p);
   static void deleteArray_ExampleOfDroppedTypeCollection(void *p);
   static void destruct_ExampleOfDroppedTypeCollection(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ExampleOfDroppedTypeCollection*)
   {
      ::ExampleOfDroppedTypeCollection *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::ExampleOfDroppedTypeCollection));
      static ::ROOT::TGenericClassInfo 
         instance("ExampleOfDroppedTypeCollection", 3, "", 15757,
                  typeid(::ExampleOfDroppedTypeCollection), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &ExampleOfDroppedTypeCollection_Dictionary, isa_proxy, 12,
                  sizeof(::ExampleOfDroppedTypeCollection) );
      instance.SetNew(&new_ExampleOfDroppedTypeCollection);
      instance.SetNewArray(&newArray_ExampleOfDroppedTypeCollection);
      instance.SetDelete(&delete_ExampleOfDroppedTypeCollection);
      instance.SetDeleteArray(&deleteArray_ExampleOfDroppedTypeCollection);
      instance.SetDestructor(&destruct_ExampleOfDroppedTypeCollection);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ExampleOfDroppedTypeCollection*)
   {
      return GenerateInitInstanceLocal(static_cast<::ExampleOfDroppedTypeCollection*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ExampleOfDroppedTypeCollection*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *ExampleOfDroppedTypeCollection_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const ::ExampleOfDroppedTypeCollection*>(nullptr))->GetClass();
      ExampleOfDroppedTypeCollection_TClassManip(theClass);
   return theClass;
   }

   static void ExampleOfDroppedTypeCollection_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_SimpleStruct(void *p) {
      return  p ? new(p) ::SimpleStruct : new ::SimpleStruct;
   }
   static void *newArray_SimpleStruct(Long_t nElements, void *p) {
      return p ? new(p) ::SimpleStruct[nElements] : new ::SimpleStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_SimpleStruct(void *p) {
      delete (static_cast<::SimpleStruct*>(p));
   }
   static void deleteArray_SimpleStruct(void *p) {
      delete [] (static_cast<::SimpleStruct*>(p));
   }
   static void destruct_SimpleStruct(void *p) {
      typedef ::SimpleStruct current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SimpleStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_NotSoSimpleStruct(void *p) {
      return  p ? new(p) ::NotSoSimpleStruct : new ::NotSoSimpleStruct;
   }
   static void *newArray_NotSoSimpleStruct(Long_t nElements, void *p) {
      return p ? new(p) ::NotSoSimpleStruct[nElements] : new ::NotSoSimpleStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_NotSoSimpleStruct(void *p) {
      delete (static_cast<::NotSoSimpleStruct*>(p));
   }
   static void deleteArray_NotSoSimpleStruct(void *p) {
      delete [] (static_cast<::NotSoSimpleStruct*>(p));
   }
   static void destruct_NotSoSimpleStruct(void *p) {
      typedef ::NotSoSimpleStruct current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::NotSoSimpleStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex2cLcLNamespaceStruct(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex2::NamespaceStruct : new ::ex2::NamespaceStruct;
   }
   static void *newArray_ex2cLcLNamespaceStruct(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex2::NamespaceStruct[nElements] : new ::ex2::NamespaceStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex2cLcLNamespaceStruct(void *p) {
      delete (static_cast<::ex2::NamespaceStruct*>(p));
   }
   static void deleteArray_ex2cLcLNamespaceStruct(void *p) {
      delete [] (static_cast<::ex2::NamespaceStruct*>(p));
   }
   static void destruct_ex2cLcLNamespaceStruct(void *p) {
      typedef ::ex2::NamespaceStruct current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex2::NamespaceStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex2cLcLNamespaceStructv2(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex2::NamespaceStructv2 : new ::ex2::NamespaceStructv2;
   }
   static void *newArray_ex2cLcLNamespaceStructv2(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex2::NamespaceStructv2[nElements] : new ::ex2::NamespaceStructv2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex2cLcLNamespaceStructv2(void *p) {
      delete (static_cast<::ex2::NamespaceStructv2*>(p));
   }
   static void deleteArray_ex2cLcLNamespaceStructv2(void *p) {
      delete [] (static_cast<::ex2::NamespaceStructv2*>(p));
   }
   static void destruct_ex2cLcLNamespaceStructv2(void *p) {
      typedef ::ex2::NamespaceStructv2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex2::NamespaceStructv2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex2::NamespaceInNamespaceStruct : new ::ex2::NamespaceInNamespaceStruct;
   }
   static void *newArray_ex2cLcLNamespaceInNamespaceStruct(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex2::NamespaceInNamespaceStruct[nElements] : new ::ex2::NamespaceInNamespaceStruct[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      delete (static_cast<::ex2::NamespaceInNamespaceStruct*>(p));
   }
   static void deleteArray_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      delete [] (static_cast<::ex2::NamespaceInNamespaceStruct*>(p));
   }
   static void destruct_ex2cLcLNamespaceInNamespaceStruct(void *p) {
      typedef ::ex2::NamespaceInNamespaceStruct current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex2::NamespaceInNamespaceStruct

namespace ROOT {
   // Wrappers around operator new
   static void *new_StructWithFixedWithTypes(void *p) {
      return  p ? new(p) ::StructWithFixedWithTypes : new ::StructWithFixedWithTypes;
   }
   static void *newArray_StructWithFixedWithTypes(Long_t nElements, void *p) {
      return p ? new(p) ::StructWithFixedWithTypes[nElements] : new ::StructWithFixedWithTypes[nElements];
   }
   // Wrapper around operator delete
   static void delete_StructWithFixedWithTypes(void *p) {
      delete (static_cast<::StructWithFixedWithTypes*>(p));
   }
   static void deleteArray_StructWithFixedWithTypes(void *p) {
      delete [] (static_cast<::StructWithFixedWithTypes*>(p));
   }
   static void destruct_StructWithFixedWithTypes(void *p) {
      typedef ::StructWithFixedWithTypes current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::StructWithFixedWithTypes

namespace ROOT {
   // Wrappers around operator new
   static void *new_CompWithInit(void *p) {
      return  p ? new(p) ::CompWithInit : new ::CompWithInit;
   }
   static void *newArray_CompWithInit(Long_t nElements, void *p) {
      return p ? new(p) ::CompWithInit[nElements] : new ::CompWithInit[nElements];
   }
   // Wrapper around operator delete
   static void delete_CompWithInit(void *p) {
      delete (static_cast<::CompWithInit*>(p));
   }
   static void deleteArray_CompWithInit(void *p) {
      delete [] (static_cast<::CompWithInit*>(p));
   }
   static void destruct_CompWithInit(void *p) {
      typedef ::CompWithInit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::CompWithInit

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoNewNameData(void *p) {
      return  p ? new(p) ::EventInfoNewNameData : new ::EventInfoNewNameData;
   }
   static void *newArray_EventInfoNewNameData(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoNewNameData[nElements] : new ::EventInfoNewNameData[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoNewNameData(void *p) {
      delete (static_cast<::EventInfoNewNameData*>(p));
   }
   static void deleteArray_EventInfoNewNameData(void *p) {
      delete [] (static_cast<::EventInfoNewNameData*>(p));
   }
   static void destruct_EventInfoNewNameData(void *p) {
      typedef ::EventInfoNewNameData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoNewNameData

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoNewName(void *p) {
      return  p ? new(p) ::EventInfoNewName : new ::EventInfoNewName;
   }
   static void *newArray_EventInfoNewName(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoNewName[nElements] : new ::EventInfoNewName[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoNewName(void *p) {
      delete (static_cast<::EventInfoNewName*>(p));
   }
   static void deleteArray_EventInfoNewName(void *p) {
      delete [] (static_cast<::EventInfoNewName*>(p));
   }
   static void destruct_EventInfoNewName(void *p) {
      typedef ::EventInfoNewName current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoNewName

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableEventInfoNewName(void *p) {
      return  p ? new(p) ::MutableEventInfoNewName : new ::MutableEventInfoNewName;
   }
   static void *newArray_MutableEventInfoNewName(Long_t nElements, void *p) {
      return p ? new(p) ::MutableEventInfoNewName[nElements] : new ::MutableEventInfoNewName[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableEventInfoNewName(void *p) {
      delete (static_cast<::MutableEventInfoNewName*>(p));
   }
   static void deleteArray_MutableEventInfoNewName(void *p) {
      delete [] (static_cast<::MutableEventInfoNewName*>(p));
   }
   static void destruct_MutableEventInfoNewName(void *p) {
      typedef ::MutableEventInfoNewName current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableEventInfoNewName

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfoNewNameCollection(void *p) {
      return  p ? new(p) ::EventInfoNewNameCollection : new ::EventInfoNewNameCollection;
   }
   static void *newArray_EventInfoNewNameCollection(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfoNewNameCollection[nElements] : new ::EventInfoNewNameCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfoNewNameCollection(void *p) {
      delete (static_cast<::EventInfoNewNameCollection*>(p));
   }
   static void deleteArray_EventInfoNewNameCollection(void *p) {
      delete [] (static_cast<::EventInfoNewNameCollection*>(p));
   }
   static void destruct_EventInfoNewNameCollection(void *p) {
      typedef ::EventInfoNewNameCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfoNewNameCollection

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
   static void *new_ExampleMCData(void *p) {
      return  p ? new(p) ::ExampleMCData : new ::ExampleMCData;
   }
   static void *newArray_ExampleMCData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMCData[nElements] : new ::ExampleMCData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMCData(void *p) {
      delete (static_cast<::ExampleMCData*>(p));
   }
   static void deleteArray_ExampleMCData(void *p) {
      delete [] (static_cast<::ExampleMCData*>(p));
   }
   static void destruct_ExampleMCData(void *p) {
      typedef ::ExampleMCData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMCData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleMC(void *p) {
      return  p ? new(p) ::ExampleMC : new ::ExampleMC;
   }
   static void *newArray_ExampleMC(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMC[nElements] : new ::ExampleMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMC(void *p) {
      delete (static_cast<::ExampleMC*>(p));
   }
   static void deleteArray_ExampleMC(void *p) {
      delete [] (static_cast<::ExampleMC*>(p));
   }
   static void destruct_ExampleMC(void *p) {
      typedef ::ExampleMC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMC

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleMC(void *p) {
      return  p ? new(p) ::MutableExampleMC : new ::MutableExampleMC;
   }
   static void *newArray_MutableExampleMC(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleMC[nElements] : new ::MutableExampleMC[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleMC(void *p) {
      delete (static_cast<::MutableExampleMC*>(p));
   }
   static void deleteArray_MutableExampleMC(void *p) {
      delete [] (static_cast<::MutableExampleMC*>(p));
   }
   static void destruct_MutableExampleMC(void *p) {
      typedef ::MutableExampleMC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleMC

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleMCCollection(void *p) {
      return  p ? new(p) ::ExampleMCCollection : new ::ExampleMCCollection;
   }
   static void *newArray_ExampleMCCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleMCCollection[nElements] : new ::ExampleMCCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleMCCollection(void *p) {
      delete (static_cast<::ExampleMCCollection*>(p));
   }
   static void deleteArray_ExampleMCCollection(void *p) {
      delete [] (static_cast<::ExampleMCCollection*>(p));
   }
   static void destruct_ExampleMCCollection(void *p) {
      typedef ::ExampleMCCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleMCCollection

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
   // Wrappers around operator new
   static void *new_ExampleReferencingTypeData(void *p) {
      return  p ? new(p) ::ExampleReferencingTypeData : new ::ExampleReferencingTypeData;
   }
   static void *newArray_ExampleReferencingTypeData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingTypeData[nElements] : new ::ExampleReferencingTypeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingTypeData(void *p) {
      delete (static_cast<::ExampleReferencingTypeData*>(p));
   }
   static void deleteArray_ExampleReferencingTypeData(void *p) {
      delete [] (static_cast<::ExampleReferencingTypeData*>(p));
   }
   static void destruct_ExampleReferencingTypeData(void *p) {
      typedef ::ExampleReferencingTypeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingTypeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleReferencingType(void *p) {
      return  p ? new(p) ::ExampleReferencingType : new ::ExampleReferencingType;
   }
   static void *newArray_ExampleReferencingType(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingType[nElements] : new ::ExampleReferencingType[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingType(void *p) {
      delete (static_cast<::ExampleReferencingType*>(p));
   }
   static void deleteArray_ExampleReferencingType(void *p) {
      delete [] (static_cast<::ExampleReferencingType*>(p));
   }
   static void destruct_ExampleReferencingType(void *p) {
      typedef ::ExampleReferencingType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingType

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleReferencingType(void *p) {
      return  p ? new(p) ::MutableExampleReferencingType : new ::MutableExampleReferencingType;
   }
   static void *newArray_MutableExampleReferencingType(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleReferencingType[nElements] : new ::MutableExampleReferencingType[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleReferencingType(void *p) {
      delete (static_cast<::MutableExampleReferencingType*>(p));
   }
   static void deleteArray_MutableExampleReferencingType(void *p) {
      delete [] (static_cast<::MutableExampleReferencingType*>(p));
   }
   static void destruct_MutableExampleReferencingType(void *p) {
      typedef ::MutableExampleReferencingType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleReferencingType

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleReferencingTypeCollection(void *p) {
      return  p ? new(p) ::ExampleReferencingTypeCollection : new ::ExampleReferencingTypeCollection;
   }
   static void *newArray_ExampleReferencingTypeCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleReferencingTypeCollection[nElements] : new ::ExampleReferencingTypeCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleReferencingTypeCollection(void *p) {
      delete (static_cast<::ExampleReferencingTypeCollection*>(p));
   }
   static void deleteArray_ExampleReferencingTypeCollection(void *p) {
      delete [] (static_cast<::ExampleReferencingTypeCollection*>(p));
   }
   static void destruct_ExampleReferencingTypeCollection(void *p) {
      typedef ::ExampleReferencingTypeCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleReferencingTypeCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMemberData(void *p) {
      return  p ? new(p) ::ExampleWithVectorMemberData : new ::ExampleWithVectorMemberData;
   }
   static void *newArray_ExampleWithVectorMemberData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMemberData[nElements] : new ::ExampleWithVectorMemberData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMemberData(void *p) {
      delete (static_cast<::ExampleWithVectorMemberData*>(p));
   }
   static void deleteArray_ExampleWithVectorMemberData(void *p) {
      delete [] (static_cast<::ExampleWithVectorMemberData*>(p));
   }
   static void destruct_ExampleWithVectorMemberData(void *p) {
      typedef ::ExampleWithVectorMemberData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMemberData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMember(void *p) {
      return  p ? new(p) ::ExampleWithVectorMember : new ::ExampleWithVectorMember;
   }
   static void *newArray_ExampleWithVectorMember(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMember[nElements] : new ::ExampleWithVectorMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMember(void *p) {
      delete (static_cast<::ExampleWithVectorMember*>(p));
   }
   static void deleteArray_ExampleWithVectorMember(void *p) {
      delete [] (static_cast<::ExampleWithVectorMember*>(p));
   }
   static void destruct_ExampleWithVectorMember(void *p) {
      typedef ::ExampleWithVectorMember current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMember

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithVectorMember(void *p) {
      return  p ? new(p) ::MutableExampleWithVectorMember : new ::MutableExampleWithVectorMember;
   }
   static void *newArray_MutableExampleWithVectorMember(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithVectorMember[nElements] : new ::MutableExampleWithVectorMember[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithVectorMember(void *p) {
      delete (static_cast<::MutableExampleWithVectorMember*>(p));
   }
   static void deleteArray_MutableExampleWithVectorMember(void *p) {
      delete [] (static_cast<::MutableExampleWithVectorMember*>(p));
   }
   static void destruct_MutableExampleWithVectorMember(void *p) {
      typedef ::MutableExampleWithVectorMember current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithVectorMember

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithVectorMemberCollection(void *p) {
      return  p ? new(p) ::ExampleWithVectorMemberCollection : new ::ExampleWithVectorMemberCollection;
   }
   static void *newArray_ExampleWithVectorMemberCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithVectorMemberCollection[nElements] : new ::ExampleWithVectorMemberCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithVectorMemberCollection(void *p) {
      delete (static_cast<::ExampleWithVectorMemberCollection*>(p));
   }
   static void deleteArray_ExampleWithVectorMemberCollection(void *p) {
      delete [] (static_cast<::ExampleWithVectorMemberCollection*>(p));
   }
   static void destruct_ExampleWithVectorMemberCollection(void *p) {
      typedef ::ExampleWithVectorMemberCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithVectorMemberCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelationData(void *p) {
      return  p ? new(p) ::ExampleWithOneRelationData : new ::ExampleWithOneRelationData;
   }
   static void *newArray_ExampleWithOneRelationData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelationData[nElements] : new ::ExampleWithOneRelationData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelationData(void *p) {
      delete (static_cast<::ExampleWithOneRelationData*>(p));
   }
   static void deleteArray_ExampleWithOneRelationData(void *p) {
      delete [] (static_cast<::ExampleWithOneRelationData*>(p));
   }
   static void destruct_ExampleWithOneRelationData(void *p) {
      typedef ::ExampleWithOneRelationData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelationData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelation(void *p) {
      return  p ? new(p) ::ExampleWithOneRelation : new ::ExampleWithOneRelation;
   }
   static void *newArray_ExampleWithOneRelation(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelation[nElements] : new ::ExampleWithOneRelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelation(void *p) {
      delete (static_cast<::ExampleWithOneRelation*>(p));
   }
   static void deleteArray_ExampleWithOneRelation(void *p) {
      delete [] (static_cast<::ExampleWithOneRelation*>(p));
   }
   static void destruct_ExampleWithOneRelation(void *p) {
      typedef ::ExampleWithOneRelation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithOneRelation(void *p) {
      return  p ? new(p) ::MutableExampleWithOneRelation : new ::MutableExampleWithOneRelation;
   }
   static void *newArray_MutableExampleWithOneRelation(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithOneRelation[nElements] : new ::MutableExampleWithOneRelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithOneRelation(void *p) {
      delete (static_cast<::MutableExampleWithOneRelation*>(p));
   }
   static void deleteArray_MutableExampleWithOneRelation(void *p) {
      delete [] (static_cast<::MutableExampleWithOneRelation*>(p));
   }
   static void destruct_MutableExampleWithOneRelation(void *p) {
      typedef ::MutableExampleWithOneRelation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithOneRelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithOneRelationCollection(void *p) {
      return  p ? new(p) ::ExampleWithOneRelationCollection : new ::ExampleWithOneRelationCollection;
   }
   static void *newArray_ExampleWithOneRelationCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithOneRelationCollection[nElements] : new ::ExampleWithOneRelationCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithOneRelationCollection(void *p) {
      delete (static_cast<::ExampleWithOneRelationCollection*>(p));
   }
   static void deleteArray_ExampleWithOneRelationCollection(void *p) {
      delete [] (static_cast<::ExampleWithOneRelationCollection*>(p));
   }
   static void destruct_ExampleWithOneRelationCollection(void *p) {
      typedef ::ExampleWithOneRelationCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithOneRelationCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayComponentData(void *p) {
      return  p ? new(p) ::ExampleWithArrayComponentData : new ::ExampleWithArrayComponentData;
   }
   static void *newArray_ExampleWithArrayComponentData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayComponentData[nElements] : new ::ExampleWithArrayComponentData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayComponentData(void *p) {
      delete (static_cast<::ExampleWithArrayComponentData*>(p));
   }
   static void deleteArray_ExampleWithArrayComponentData(void *p) {
      delete [] (static_cast<::ExampleWithArrayComponentData*>(p));
   }
   static void destruct_ExampleWithArrayComponentData(void *p) {
      typedef ::ExampleWithArrayComponentData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayComponentData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayComponent(void *p) {
      return  p ? new(p) ::ExampleWithArrayComponent : new ::ExampleWithArrayComponent;
   }
   static void *newArray_ExampleWithArrayComponent(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayComponent[nElements] : new ::ExampleWithArrayComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayComponent(void *p) {
      delete (static_cast<::ExampleWithArrayComponent*>(p));
   }
   static void deleteArray_ExampleWithArrayComponent(void *p) {
      delete [] (static_cast<::ExampleWithArrayComponent*>(p));
   }
   static void destruct_ExampleWithArrayComponent(void *p) {
      typedef ::ExampleWithArrayComponent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithArrayComponent(void *p) {
      return  p ? new(p) ::MutableExampleWithArrayComponent : new ::MutableExampleWithArrayComponent;
   }
   static void *newArray_MutableExampleWithArrayComponent(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithArrayComponent[nElements] : new ::MutableExampleWithArrayComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithArrayComponent(void *p) {
      delete (static_cast<::MutableExampleWithArrayComponent*>(p));
   }
   static void deleteArray_MutableExampleWithArrayComponent(void *p) {
      delete [] (static_cast<::MutableExampleWithArrayComponent*>(p));
   }
   static void destruct_MutableExampleWithArrayComponent(void *p) {
      typedef ::MutableExampleWithArrayComponent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithArrayComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayComponentCollection(void *p) {
      return  p ? new(p) ::ExampleWithArrayComponentCollection : new ::ExampleWithArrayComponentCollection;
   }
   static void *newArray_ExampleWithArrayComponentCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayComponentCollection[nElements] : new ::ExampleWithArrayComponentCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayComponentCollection(void *p) {
      delete (static_cast<::ExampleWithArrayComponentCollection*>(p));
   }
   static void deleteArray_ExampleWithArrayComponentCollection(void *p) {
      delete [] (static_cast<::ExampleWithArrayComponentCollection*>(p));
   }
   static void destruct_ExampleWithArrayComponentCollection(void *p) {
      typedef ::ExampleWithArrayComponentCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayComponentCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponentData(void *p) {
      return  p ? new(p) ::ExampleWithComponentData : new ::ExampleWithComponentData;
   }
   static void *newArray_ExampleWithComponentData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponentData[nElements] : new ::ExampleWithComponentData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponentData(void *p) {
      delete (static_cast<::ExampleWithComponentData*>(p));
   }
   static void deleteArray_ExampleWithComponentData(void *p) {
      delete [] (static_cast<::ExampleWithComponentData*>(p));
   }
   static void destruct_ExampleWithComponentData(void *p) {
      typedef ::ExampleWithComponentData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponentData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponent(void *p) {
      return  p ? new(p) ::ExampleWithComponent : new ::ExampleWithComponent;
   }
   static void *newArray_ExampleWithComponent(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponent[nElements] : new ::ExampleWithComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponent(void *p) {
      delete (static_cast<::ExampleWithComponent*>(p));
   }
   static void deleteArray_ExampleWithComponent(void *p) {
      delete [] (static_cast<::ExampleWithComponent*>(p));
   }
   static void destruct_ExampleWithComponent(void *p) {
      typedef ::ExampleWithComponent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithComponent(void *p) {
      return  p ? new(p) ::MutableExampleWithComponent : new ::MutableExampleWithComponent;
   }
   static void *newArray_MutableExampleWithComponent(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithComponent[nElements] : new ::MutableExampleWithComponent[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithComponent(void *p) {
      delete (static_cast<::MutableExampleWithComponent*>(p));
   }
   static void deleteArray_MutableExampleWithComponent(void *p) {
      delete [] (static_cast<::MutableExampleWithComponent*>(p));
   }
   static void destruct_MutableExampleWithComponent(void *p) {
      typedef ::MutableExampleWithComponent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithComponent

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithComponentCollection(void *p) {
      return  p ? new(p) ::ExampleWithComponentCollection : new ::ExampleWithComponentCollection;
   }
   static void *newArray_ExampleWithComponentCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithComponentCollection[nElements] : new ::ExampleWithComponentCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithComponentCollection(void *p) {
      delete (static_cast<::ExampleWithComponentCollection*>(p));
   }
   static void deleteArray_ExampleWithComponentCollection(void *p) {
      delete [] (static_cast<::ExampleWithComponentCollection*>(p));
   }
   static void destruct_ExampleWithComponentCollection(void *p) {
      typedef ::ExampleWithComponentCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithComponentCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1Data(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1Data : new ::ExampleForCyclicDependency1Data;
   }
   static void *newArray_ExampleForCyclicDependency1Data(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1Data[nElements] : new ::ExampleForCyclicDependency1Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1Data(void *p) {
      delete (static_cast<::ExampleForCyclicDependency1Data*>(p));
   }
   static void deleteArray_ExampleForCyclicDependency1Data(void *p) {
      delete [] (static_cast<::ExampleForCyclicDependency1Data*>(p));
   }
   static void destruct_ExampleForCyclicDependency1Data(void *p) {
      typedef ::ExampleForCyclicDependency1Data current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1Data

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1 : new ::ExampleForCyclicDependency1;
   }
   static void *newArray_ExampleForCyclicDependency1(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1[nElements] : new ::ExampleForCyclicDependency1[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1(void *p) {
      delete (static_cast<::ExampleForCyclicDependency1*>(p));
   }
   static void deleteArray_ExampleForCyclicDependency1(void *p) {
      delete [] (static_cast<::ExampleForCyclicDependency1*>(p));
   }
   static void destruct_ExampleForCyclicDependency1(void *p) {
      typedef ::ExampleForCyclicDependency1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleForCyclicDependency1(void *p) {
      return  p ? new(p) ::MutableExampleForCyclicDependency1 : new ::MutableExampleForCyclicDependency1;
   }
   static void *newArray_MutableExampleForCyclicDependency1(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleForCyclicDependency1[nElements] : new ::MutableExampleForCyclicDependency1[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleForCyclicDependency1(void *p) {
      delete (static_cast<::MutableExampleForCyclicDependency1*>(p));
   }
   static void deleteArray_MutableExampleForCyclicDependency1(void *p) {
      delete [] (static_cast<::MutableExampleForCyclicDependency1*>(p));
   }
   static void destruct_MutableExampleForCyclicDependency1(void *p) {
      typedef ::MutableExampleForCyclicDependency1 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleForCyclicDependency1

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2Data(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2Data : new ::ExampleForCyclicDependency2Data;
   }
   static void *newArray_ExampleForCyclicDependency2Data(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2Data[nElements] : new ::ExampleForCyclicDependency2Data[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2Data(void *p) {
      delete (static_cast<::ExampleForCyclicDependency2Data*>(p));
   }
   static void deleteArray_ExampleForCyclicDependency2Data(void *p) {
      delete [] (static_cast<::ExampleForCyclicDependency2Data*>(p));
   }
   static void destruct_ExampleForCyclicDependency2Data(void *p) {
      typedef ::ExampleForCyclicDependency2Data current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2Data

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2 : new ::ExampleForCyclicDependency2;
   }
   static void *newArray_ExampleForCyclicDependency2(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2[nElements] : new ::ExampleForCyclicDependency2[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2(void *p) {
      delete (static_cast<::ExampleForCyclicDependency2*>(p));
   }
   static void deleteArray_ExampleForCyclicDependency2(void *p) {
      delete [] (static_cast<::ExampleForCyclicDependency2*>(p));
   }
   static void destruct_ExampleForCyclicDependency2(void *p) {
      typedef ::ExampleForCyclicDependency2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency1Collection(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency1Collection : new ::ExampleForCyclicDependency1Collection;
   }
   static void *newArray_ExampleForCyclicDependency1Collection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency1Collection[nElements] : new ::ExampleForCyclicDependency1Collection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency1Collection(void *p) {
      delete (static_cast<::ExampleForCyclicDependency1Collection*>(p));
   }
   static void deleteArray_ExampleForCyclicDependency1Collection(void *p) {
      delete [] (static_cast<::ExampleForCyclicDependency1Collection*>(p));
   }
   static void destruct_ExampleForCyclicDependency1Collection(void *p) {
      typedef ::ExampleForCyclicDependency1Collection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency1Collection

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleForCyclicDependency2(void *p) {
      return  p ? new(p) ::MutableExampleForCyclicDependency2 : new ::MutableExampleForCyclicDependency2;
   }
   static void *newArray_MutableExampleForCyclicDependency2(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleForCyclicDependency2[nElements] : new ::MutableExampleForCyclicDependency2[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleForCyclicDependency2(void *p) {
      delete (static_cast<::MutableExampleForCyclicDependency2*>(p));
   }
   static void deleteArray_MutableExampleForCyclicDependency2(void *p) {
      delete [] (static_cast<::MutableExampleForCyclicDependency2*>(p));
   }
   static void destruct_MutableExampleForCyclicDependency2(void *p) {
      typedef ::MutableExampleForCyclicDependency2 current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleForCyclicDependency2

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleForCyclicDependency2Collection(void *p) {
      return  p ? new(p) ::ExampleForCyclicDependency2Collection : new ::ExampleForCyclicDependency2Collection;
   }
   static void *newArray_ExampleForCyclicDependency2Collection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleForCyclicDependency2Collection[nElements] : new ::ExampleForCyclicDependency2Collection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleForCyclicDependency2Collection(void *p) {
      delete (static_cast<::ExampleForCyclicDependency2Collection*>(p));
   }
   static void deleteArray_ExampleForCyclicDependency2Collection(void *p) {
      delete [] (static_cast<::ExampleForCyclicDependency2Collection*>(p));
   }
   static void destruct_ExampleForCyclicDependency2Collection(void *p) {
      typedef ::ExampleForCyclicDependency2Collection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleForCyclicDependency2Collection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespaceData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithNamespaceData : new ::ex42::ExampleWithNamespaceData;
   }
   static void *newArray_ex42cLcLExampleWithNamespaceData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithNamespaceData[nElements] : new ::ex42::ExampleWithNamespaceData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespaceData(void *p) {
      delete (static_cast<::ex42::ExampleWithNamespaceData*>(p));
   }
   static void deleteArray_ex42cLcLExampleWithNamespaceData(void *p) {
      delete [] (static_cast<::ex42::ExampleWithNamespaceData*>(p));
   }
   static void destruct_ex42cLcLExampleWithNamespaceData(void *p) {
      typedef ::ex42::ExampleWithNamespaceData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespaceData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespace(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithNamespace : new ::ex42::ExampleWithNamespace;
   }
   static void *newArray_ex42cLcLExampleWithNamespace(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithNamespace[nElements] : new ::ex42::ExampleWithNamespace[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespace(void *p) {
      delete (static_cast<::ex42::ExampleWithNamespace*>(p));
   }
   static void deleteArray_ex42cLcLExampleWithNamespace(void *p) {
      delete [] (static_cast<::ex42::ExampleWithNamespace*>(p));
   }
   static void destruct_ex42cLcLExampleWithNamespace(void *p) {
      typedef ::ex42::ExampleWithNamespace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespace

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLMutableExampleWithNamespace(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::MutableExampleWithNamespace : new ::ex42::MutableExampleWithNamespace;
   }
   static void *newArray_ex42cLcLMutableExampleWithNamespace(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::MutableExampleWithNamespace[nElements] : new ::ex42::MutableExampleWithNamespace[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLMutableExampleWithNamespace(void *p) {
      delete (static_cast<::ex42::MutableExampleWithNamespace*>(p));
   }
   static void deleteArray_ex42cLcLMutableExampleWithNamespace(void *p) {
      delete [] (static_cast<::ex42::MutableExampleWithNamespace*>(p));
   }
   static void destruct_ex42cLcLMutableExampleWithNamespace(void *p) {
      typedef ::ex42::MutableExampleWithNamespace current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::MutableExampleWithNamespace

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithNamespaceCollection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithNamespaceCollection : new ::ex42::ExampleWithNamespaceCollection;
   }
   static void *newArray_ex42cLcLExampleWithNamespaceCollection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithNamespaceCollection[nElements] : new ::ex42::ExampleWithNamespaceCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithNamespaceCollection(void *p) {
      delete (static_cast<::ex42::ExampleWithNamespaceCollection*>(p));
   }
   static void deleteArray_ex42cLcLExampleWithNamespaceCollection(void *p) {
      delete [] (static_cast<::ex42::ExampleWithNamespaceCollection*>(p));
   }
   static void destruct_ex42cLcLExampleWithNamespaceCollection(void *p) {
      typedef ::ex42::ExampleWithNamespaceCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithNamespaceCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelationData(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithARelationData : new ::ex42::ExampleWithARelationData;
   }
   static void *newArray_ex42cLcLExampleWithARelationData(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithARelationData[nElements] : new ::ex42::ExampleWithARelationData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelationData(void *p) {
      delete (static_cast<::ex42::ExampleWithARelationData*>(p));
   }
   static void deleteArray_ex42cLcLExampleWithARelationData(void *p) {
      delete [] (static_cast<::ex42::ExampleWithARelationData*>(p));
   }
   static void destruct_ex42cLcLExampleWithARelationData(void *p) {
      typedef ::ex42::ExampleWithARelationData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelationData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelation(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithARelation : new ::ex42::ExampleWithARelation;
   }
   static void *newArray_ex42cLcLExampleWithARelation(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithARelation[nElements] : new ::ex42::ExampleWithARelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelation(void *p) {
      delete (static_cast<::ex42::ExampleWithARelation*>(p));
   }
   static void deleteArray_ex42cLcLExampleWithARelation(void *p) {
      delete [] (static_cast<::ex42::ExampleWithARelation*>(p));
   }
   static void destruct_ex42cLcLExampleWithARelation(void *p) {
      typedef ::ex42::ExampleWithARelation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLMutableExampleWithARelation(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::MutableExampleWithARelation : new ::ex42::MutableExampleWithARelation;
   }
   static void *newArray_ex42cLcLMutableExampleWithARelation(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::MutableExampleWithARelation[nElements] : new ::ex42::MutableExampleWithARelation[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLMutableExampleWithARelation(void *p) {
      delete (static_cast<::ex42::MutableExampleWithARelation*>(p));
   }
   static void deleteArray_ex42cLcLMutableExampleWithARelation(void *p) {
      delete [] (static_cast<::ex42::MutableExampleWithARelation*>(p));
   }
   static void destruct_ex42cLcLMutableExampleWithARelation(void *p) {
      typedef ::ex42::MutableExampleWithARelation current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::MutableExampleWithARelation

namespace ROOT {
   // Wrappers around operator new
   static void *new_ex42cLcLExampleWithARelationCollection(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithARelationCollection : new ::ex42::ExampleWithARelationCollection;
   }
   static void *newArray_ex42cLcLExampleWithARelationCollection(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) ::ex42::ExampleWithARelationCollection[nElements] : new ::ex42::ExampleWithARelationCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ex42cLcLExampleWithARelationCollection(void *p) {
      delete (static_cast<::ex42::ExampleWithARelationCollection*>(p));
   }
   static void deleteArray_ex42cLcLExampleWithARelationCollection(void *p) {
      delete [] (static_cast<::ex42::ExampleWithARelationCollection*>(p));
   }
   static void destruct_ex42cLcLExampleWithARelationCollection(void *p) {
      typedef ::ex42::ExampleWithARelationCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ex42::ExampleWithARelationCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithDifferentNamespaceRelationsData(void *p) {
      return  p ? new(p) ::ExampleWithDifferentNamespaceRelationsData : new ::ExampleWithDifferentNamespaceRelationsData;
   }
   static void *newArray_ExampleWithDifferentNamespaceRelationsData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithDifferentNamespaceRelationsData[nElements] : new ::ExampleWithDifferentNamespaceRelationsData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithDifferentNamespaceRelationsData(void *p) {
      delete (static_cast<::ExampleWithDifferentNamespaceRelationsData*>(p));
   }
   static void deleteArray_ExampleWithDifferentNamespaceRelationsData(void *p) {
      delete [] (static_cast<::ExampleWithDifferentNamespaceRelationsData*>(p));
   }
   static void destruct_ExampleWithDifferentNamespaceRelationsData(void *p) {
      typedef ::ExampleWithDifferentNamespaceRelationsData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithDifferentNamespaceRelationsData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithDifferentNamespaceRelations(void *p) {
      return  p ? new(p) ::ExampleWithDifferentNamespaceRelations : new ::ExampleWithDifferentNamespaceRelations;
   }
   static void *newArray_ExampleWithDifferentNamespaceRelations(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithDifferentNamespaceRelations[nElements] : new ::ExampleWithDifferentNamespaceRelations[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithDifferentNamespaceRelations(void *p) {
      delete (static_cast<::ExampleWithDifferentNamespaceRelations*>(p));
   }
   static void deleteArray_ExampleWithDifferentNamespaceRelations(void *p) {
      delete [] (static_cast<::ExampleWithDifferentNamespaceRelations*>(p));
   }
   static void destruct_ExampleWithDifferentNamespaceRelations(void *p) {
      typedef ::ExampleWithDifferentNamespaceRelations current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithDifferentNamespaceRelations

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithDifferentNamespaceRelations(void *p) {
      return  p ? new(p) ::MutableExampleWithDifferentNamespaceRelations : new ::MutableExampleWithDifferentNamespaceRelations;
   }
   static void *newArray_MutableExampleWithDifferentNamespaceRelations(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithDifferentNamespaceRelations[nElements] : new ::MutableExampleWithDifferentNamespaceRelations[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithDifferentNamespaceRelations(void *p) {
      delete (static_cast<::MutableExampleWithDifferentNamespaceRelations*>(p));
   }
   static void deleteArray_MutableExampleWithDifferentNamespaceRelations(void *p) {
      delete [] (static_cast<::MutableExampleWithDifferentNamespaceRelations*>(p));
   }
   static void destruct_MutableExampleWithDifferentNamespaceRelations(void *p) {
      typedef ::MutableExampleWithDifferentNamespaceRelations current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithDifferentNamespaceRelations

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithDifferentNamespaceRelationsCollection(void *p) {
      return  p ? new(p) ::ExampleWithDifferentNamespaceRelationsCollection : new ::ExampleWithDifferentNamespaceRelationsCollection;
   }
   static void *newArray_ExampleWithDifferentNamespaceRelationsCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithDifferentNamespaceRelationsCollection[nElements] : new ::ExampleWithDifferentNamespaceRelationsCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithDifferentNamespaceRelationsCollection(void *p) {
      delete (static_cast<::ExampleWithDifferentNamespaceRelationsCollection*>(p));
   }
   static void deleteArray_ExampleWithDifferentNamespaceRelationsCollection(void *p) {
      delete [] (static_cast<::ExampleWithDifferentNamespaceRelationsCollection*>(p));
   }
   static void destruct_ExampleWithDifferentNamespaceRelationsCollection(void *p) {
      typedef ::ExampleWithDifferentNamespaceRelationsCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithDifferentNamespaceRelationsCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayData(void *p) {
      return  p ? new(p) ::ExampleWithArrayData : new ::ExampleWithArrayData;
   }
   static void *newArray_ExampleWithArrayData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayData[nElements] : new ::ExampleWithArrayData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayData(void *p) {
      delete (static_cast<::ExampleWithArrayData*>(p));
   }
   static void deleteArray_ExampleWithArrayData(void *p) {
      delete [] (static_cast<::ExampleWithArrayData*>(p));
   }
   static void destruct_ExampleWithArrayData(void *p) {
      typedef ::ExampleWithArrayData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArray(void *p) {
      return  p ? new(p) ::ExampleWithArray : new ::ExampleWithArray;
   }
   static void *newArray_ExampleWithArray(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArray[nElements] : new ::ExampleWithArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArray(void *p) {
      delete (static_cast<::ExampleWithArray*>(p));
   }
   static void deleteArray_ExampleWithArray(void *p) {
      delete [] (static_cast<::ExampleWithArray*>(p));
   }
   static void destruct_ExampleWithArray(void *p) {
      typedef ::ExampleWithArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithArray(void *p) {
      return  p ? new(p) ::MutableExampleWithArray : new ::MutableExampleWithArray;
   }
   static void *newArray_MutableExampleWithArray(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithArray[nElements] : new ::MutableExampleWithArray[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithArray(void *p) {
      delete (static_cast<::MutableExampleWithArray*>(p));
   }
   static void deleteArray_MutableExampleWithArray(void *p) {
      delete [] (static_cast<::MutableExampleWithArray*>(p));
   }
   static void destruct_MutableExampleWithArray(void *p) {
      typedef ::MutableExampleWithArray current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithArray

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithArrayCollection(void *p) {
      return  p ? new(p) ::ExampleWithArrayCollection : new ::ExampleWithArrayCollection;
   }
   static void *newArray_ExampleWithArrayCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithArrayCollection[nElements] : new ::ExampleWithArrayCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithArrayCollection(void *p) {
      delete (static_cast<::ExampleWithArrayCollection*>(p));
   }
   static void deleteArray_ExampleWithArrayCollection(void *p) {
      delete [] (static_cast<::ExampleWithArrayCollection*>(p));
   }
   static void destruct_ExampleWithArrayCollection(void *p) {
      typedef ::ExampleWithArrayCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithArrayCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithFixedWidthIntegersData(void *p) {
      return  p ? new(p) ::ExampleWithFixedWidthIntegersData : new ::ExampleWithFixedWidthIntegersData;
   }
   static void *newArray_ExampleWithFixedWidthIntegersData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithFixedWidthIntegersData[nElements] : new ::ExampleWithFixedWidthIntegersData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithFixedWidthIntegersData(void *p) {
      delete (static_cast<::ExampleWithFixedWidthIntegersData*>(p));
   }
   static void deleteArray_ExampleWithFixedWidthIntegersData(void *p) {
      delete [] (static_cast<::ExampleWithFixedWidthIntegersData*>(p));
   }
   static void destruct_ExampleWithFixedWidthIntegersData(void *p) {
      typedef ::ExampleWithFixedWidthIntegersData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithFixedWidthIntegersData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithFixedWidthIntegers(void *p) {
      return  p ? new(p) ::ExampleWithFixedWidthIntegers : new ::ExampleWithFixedWidthIntegers;
   }
   static void *newArray_ExampleWithFixedWidthIntegers(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithFixedWidthIntegers[nElements] : new ::ExampleWithFixedWidthIntegers[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithFixedWidthIntegers(void *p) {
      delete (static_cast<::ExampleWithFixedWidthIntegers*>(p));
   }
   static void deleteArray_ExampleWithFixedWidthIntegers(void *p) {
      delete [] (static_cast<::ExampleWithFixedWidthIntegers*>(p));
   }
   static void destruct_ExampleWithFixedWidthIntegers(void *p) {
      typedef ::ExampleWithFixedWidthIntegers current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithFixedWidthIntegers

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithFixedWidthIntegers(void *p) {
      return  p ? new(p) ::MutableExampleWithFixedWidthIntegers : new ::MutableExampleWithFixedWidthIntegers;
   }
   static void *newArray_MutableExampleWithFixedWidthIntegers(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithFixedWidthIntegers[nElements] : new ::MutableExampleWithFixedWidthIntegers[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithFixedWidthIntegers(void *p) {
      delete (static_cast<::MutableExampleWithFixedWidthIntegers*>(p));
   }
   static void deleteArray_MutableExampleWithFixedWidthIntegers(void *p) {
      delete [] (static_cast<::MutableExampleWithFixedWidthIntegers*>(p));
   }
   static void destruct_MutableExampleWithFixedWidthIntegers(void *p) {
      typedef ::MutableExampleWithFixedWidthIntegers current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithFixedWidthIntegers

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithFixedWidthIntegersCollection(void *p) {
      return  p ? new(p) ::ExampleWithFixedWidthIntegersCollection : new ::ExampleWithFixedWidthIntegersCollection;
   }
   static void *newArray_ExampleWithFixedWidthIntegersCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithFixedWidthIntegersCollection[nElements] : new ::ExampleWithFixedWidthIntegersCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithFixedWidthIntegersCollection(void *p) {
      delete (static_cast<::ExampleWithFixedWidthIntegersCollection*>(p));
   }
   static void deleteArray_ExampleWithFixedWidthIntegersCollection(void *p) {
      delete [] (static_cast<::ExampleWithFixedWidthIntegersCollection*>(p));
   }
   static void destruct_ExampleWithFixedWidthIntegersCollection(void *p) {
      typedef ::ExampleWithFixedWidthIntegersCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithFixedWidthIntegersCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithUserInitData(void *p) {
      return  p ? new(p) ::ExampleWithUserInitData : new ::ExampleWithUserInitData;
   }
   static void *newArray_ExampleWithUserInitData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithUserInitData[nElements] : new ::ExampleWithUserInitData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithUserInitData(void *p) {
      delete (static_cast<::ExampleWithUserInitData*>(p));
   }
   static void deleteArray_ExampleWithUserInitData(void *p) {
      delete [] (static_cast<::ExampleWithUserInitData*>(p));
   }
   static void destruct_ExampleWithUserInitData(void *p) {
      typedef ::ExampleWithUserInitData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithUserInitData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithUserInit(void *p) {
      return  p ? new(p) ::ExampleWithUserInit : new ::ExampleWithUserInit;
   }
   static void *newArray_ExampleWithUserInit(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithUserInit[nElements] : new ::ExampleWithUserInit[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithUserInit(void *p) {
      delete (static_cast<::ExampleWithUserInit*>(p));
   }
   static void deleteArray_ExampleWithUserInit(void *p) {
      delete [] (static_cast<::ExampleWithUserInit*>(p));
   }
   static void destruct_ExampleWithUserInit(void *p) {
      typedef ::ExampleWithUserInit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithUserInit

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleWithUserInit(void *p) {
      return  p ? new(p) ::MutableExampleWithUserInit : new ::MutableExampleWithUserInit;
   }
   static void *newArray_MutableExampleWithUserInit(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleWithUserInit[nElements] : new ::MutableExampleWithUserInit[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleWithUserInit(void *p) {
      delete (static_cast<::MutableExampleWithUserInit*>(p));
   }
   static void deleteArray_MutableExampleWithUserInit(void *p) {
      delete [] (static_cast<::MutableExampleWithUserInit*>(p));
   }
   static void destruct_MutableExampleWithUserInit(void *p) {
      typedef ::MutableExampleWithUserInit current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleWithUserInit

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleWithUserInitCollection(void *p) {
      return  p ? new(p) ::ExampleWithUserInitCollection : new ::ExampleWithUserInitCollection;
   }
   static void *newArray_ExampleWithUserInitCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleWithUserInitCollection[nElements] : new ::ExampleWithUserInitCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleWithUserInitCollection(void *p) {
      delete (static_cast<::ExampleWithUserInitCollection*>(p));
   }
   static void deleteArray_ExampleWithUserInitCollection(void *p) {
      delete [] (static_cast<::ExampleWithUserInitCollection*>(p));
   }
   static void destruct_ExampleWithUserInitCollection(void *p) {
      typedef ::ExampleWithUserInitCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleWithUserInitCollection

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleOfDroppedTypeData(void *p) {
      return  p ? new(p) ::ExampleOfDroppedTypeData : new ::ExampleOfDroppedTypeData;
   }
   static void *newArray_ExampleOfDroppedTypeData(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleOfDroppedTypeData[nElements] : new ::ExampleOfDroppedTypeData[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleOfDroppedTypeData(void *p) {
      delete (static_cast<::ExampleOfDroppedTypeData*>(p));
   }
   static void deleteArray_ExampleOfDroppedTypeData(void *p) {
      delete [] (static_cast<::ExampleOfDroppedTypeData*>(p));
   }
   static void destruct_ExampleOfDroppedTypeData(void *p) {
      typedef ::ExampleOfDroppedTypeData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleOfDroppedTypeData

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleOfDroppedType(void *p) {
      return  p ? new(p) ::ExampleOfDroppedType : new ::ExampleOfDroppedType;
   }
   static void *newArray_ExampleOfDroppedType(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleOfDroppedType[nElements] : new ::ExampleOfDroppedType[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleOfDroppedType(void *p) {
      delete (static_cast<::ExampleOfDroppedType*>(p));
   }
   static void deleteArray_ExampleOfDroppedType(void *p) {
      delete [] (static_cast<::ExampleOfDroppedType*>(p));
   }
   static void destruct_ExampleOfDroppedType(void *p) {
      typedef ::ExampleOfDroppedType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleOfDroppedType

namespace ROOT {
   // Wrappers around operator new
   static void *new_MutableExampleOfDroppedType(void *p) {
      return  p ? new(p) ::MutableExampleOfDroppedType : new ::MutableExampleOfDroppedType;
   }
   static void *newArray_MutableExampleOfDroppedType(Long_t nElements, void *p) {
      return p ? new(p) ::MutableExampleOfDroppedType[nElements] : new ::MutableExampleOfDroppedType[nElements];
   }
   // Wrapper around operator delete
   static void delete_MutableExampleOfDroppedType(void *p) {
      delete (static_cast<::MutableExampleOfDroppedType*>(p));
   }
   static void deleteArray_MutableExampleOfDroppedType(void *p) {
      delete [] (static_cast<::MutableExampleOfDroppedType*>(p));
   }
   static void destruct_MutableExampleOfDroppedType(void *p) {
      typedef ::MutableExampleOfDroppedType current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MutableExampleOfDroppedType

namespace ROOT {
   // Wrappers around operator new
   static void *new_ExampleOfDroppedTypeCollection(void *p) {
      return  p ? new(p) ::ExampleOfDroppedTypeCollection : new ::ExampleOfDroppedTypeCollection;
   }
   static void *newArray_ExampleOfDroppedTypeCollection(Long_t nElements, void *p) {
      return p ? new(p) ::ExampleOfDroppedTypeCollection[nElements] : new ::ExampleOfDroppedTypeCollection[nElements];
   }
   // Wrapper around operator delete
   static void delete_ExampleOfDroppedTypeCollection(void *p) {
      delete (static_cast<::ExampleOfDroppedTypeCollection*>(p));
   }
   static void deleteArray_ExampleOfDroppedTypeCollection(void *p) {
      delete [] (static_cast<::ExampleOfDroppedTypeCollection*>(p));
   }
   static void destruct_ExampleOfDroppedTypeCollection(void *p) {
      typedef ::ExampleOfDroppedTypeCollection current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ExampleOfDroppedTypeCollection

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithNamespaceDatagR_Dictionary();
   static void vectorlEex42cLcLExampleWithNamespaceDatagR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p = nullptr);
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceDatagR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithNamespaceData>*)
   {
      vector<ex42::ExampleWithNamespaceData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithNamespaceData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithNamespaceData>", -2, "vector", 423,
                  typeid(vector<ex42::ExampleWithNamespaceData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithNamespaceDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithNamespaceData>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithNamespaceDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithNamespaceData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ex42::ExampleWithNamespaceData>","std::vector<ex42::ExampleWithNamespaceData, std::allocator<ex42::ExampleWithNamespaceData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ex42::ExampleWithNamespaceData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithNamespaceDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ex42::ExampleWithNamespaceData>*>(nullptr))->GetClass();
      vectorlEex42cLcLExampleWithNamespaceDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithNamespaceDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex42::ExampleWithNamespaceData> : new vector<ex42::ExampleWithNamespaceData>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithNamespaceDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex42::ExampleWithNamespaceData>[nElements] : new vector<ex42::ExampleWithNamespaceData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      delete (static_cast<vector<ex42::ExampleWithNamespaceData>*>(p));
   }
   static void deleteArray_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      delete [] (static_cast<vector<ex42::ExampleWithNamespaceData>*>(p));
   }
   static void destruct_vectorlEex42cLcLExampleWithNamespaceDatagR(void *p) {
      typedef vector<ex42::ExampleWithNamespaceData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithNamespaceData>

namespace ROOT {
   static TClass *vectorlEex42cLcLExampleWithARelationDatagR_Dictionary();
   static void vectorlEex42cLcLExampleWithARelationDatagR_TClassManip(TClass*);
   static void *new_vectorlEex42cLcLExampleWithARelationDatagR(void *p = nullptr);
   static void *newArray_vectorlEex42cLcLExampleWithARelationDatagR(Long_t size, void *p);
   static void delete_vectorlEex42cLcLExampleWithARelationDatagR(void *p);
   static void deleteArray_vectorlEex42cLcLExampleWithARelationDatagR(void *p);
   static void destruct_vectorlEex42cLcLExampleWithARelationDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex42::ExampleWithARelationData>*)
   {
      vector<ex42::ExampleWithARelationData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex42::ExampleWithARelationData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex42::ExampleWithARelationData>", -2, "vector", 423,
                  typeid(vector<ex42::ExampleWithARelationData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex42cLcLExampleWithARelationDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex42::ExampleWithARelationData>) );
      instance.SetNew(&new_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetNewArray(&newArray_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetDelete(&delete_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.SetDestructor(&destruct_vectorlEex42cLcLExampleWithARelationDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex42::ExampleWithARelationData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ex42::ExampleWithARelationData>","std::vector<ex42::ExampleWithARelationData, std::allocator<ex42::ExampleWithARelationData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ex42::ExampleWithARelationData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex42cLcLExampleWithARelationDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ex42::ExampleWithARelationData>*>(nullptr))->GetClass();
      vectorlEex42cLcLExampleWithARelationDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex42cLcLExampleWithARelationDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex42::ExampleWithARelationData> : new vector<ex42::ExampleWithARelationData>;
   }
   static void *newArray_vectorlEex42cLcLExampleWithARelationDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex42::ExampleWithARelationData>[nElements] : new vector<ex42::ExampleWithARelationData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      delete (static_cast<vector<ex42::ExampleWithARelationData>*>(p));
   }
   static void deleteArray_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      delete [] (static_cast<vector<ex42::ExampleWithARelationData>*>(p));
   }
   static void destruct_vectorlEex42cLcLExampleWithARelationDatagR(void *p) {
      typedef vector<ex42::ExampleWithARelationData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ex42::ExampleWithARelationData>

namespace ROOT {
   static TClass *vectorlEex2cLcLNamespaceStructgR_Dictionary();
   static void vectorlEex2cLcLNamespaceStructgR_TClassManip(TClass*);
   static void *new_vectorlEex2cLcLNamespaceStructgR(void *p = nullptr);
   static void *newArray_vectorlEex2cLcLNamespaceStructgR(Long_t size, void *p);
   static void delete_vectorlEex2cLcLNamespaceStructgR(void *p);
   static void deleteArray_vectorlEex2cLcLNamespaceStructgR(void *p);
   static void destruct_vectorlEex2cLcLNamespaceStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex2::NamespaceStruct>*)
   {
      vector<ex2::NamespaceStruct> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex2::NamespaceStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex2::NamespaceStruct>", -2, "vector", 423,
                  typeid(vector<ex2::NamespaceStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex2cLcLNamespaceStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex2::NamespaceStruct>) );
      instance.SetNew(&new_vectorlEex2cLcLNamespaceStructgR);
      instance.SetNewArray(&newArray_vectorlEex2cLcLNamespaceStructgR);
      instance.SetDelete(&delete_vectorlEex2cLcLNamespaceStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex2cLcLNamespaceStructgR);
      instance.SetDestructor(&destruct_vectorlEex2cLcLNamespaceStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex2::NamespaceStruct> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ex2::NamespaceStruct>","std::vector<ex2::NamespaceStruct, std::allocator<ex2::NamespaceStruct> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ex2::NamespaceStruct>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex2cLcLNamespaceStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ex2::NamespaceStruct>*>(nullptr))->GetClass();
      vectorlEex2cLcLNamespaceStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex2cLcLNamespaceStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex2cLcLNamespaceStructgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex2::NamespaceStruct> : new vector<ex2::NamespaceStruct>;
   }
   static void *newArray_vectorlEex2cLcLNamespaceStructgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex2::NamespaceStruct>[nElements] : new vector<ex2::NamespaceStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex2cLcLNamespaceStructgR(void *p) {
      delete (static_cast<vector<ex2::NamespaceStruct>*>(p));
   }
   static void deleteArray_vectorlEex2cLcLNamespaceStructgR(void *p) {
      delete [] (static_cast<vector<ex2::NamespaceStruct>*>(p));
   }
   static void destruct_vectorlEex2cLcLNamespaceStructgR(void *p) {
      typedef vector<ex2::NamespaceStruct> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ex2::NamespaceStruct>

namespace ROOT {
   static TClass *vectorlEex2cLcLNamespaceInNamespaceStructgR_Dictionary();
   static void vectorlEex2cLcLNamespaceInNamespaceStructgR_TClassManip(TClass*);
   static void *new_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p = nullptr);
   static void *newArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(Long_t size, void *p);
   static void delete_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p);
   static void deleteArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p);
   static void destruct_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ex2::NamespaceInNamespaceStruct>*)
   {
      vector<ex2::NamespaceInNamespaceStruct> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ex2::NamespaceInNamespaceStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ex2::NamespaceInNamespaceStruct>", -2, "vector", 423,
                  typeid(vector<ex2::NamespaceInNamespaceStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEex2cLcLNamespaceInNamespaceStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ex2::NamespaceInNamespaceStruct>) );
      instance.SetNew(&new_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetNewArray(&newArray_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetDelete(&delete_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.SetDestructor(&destruct_vectorlEex2cLcLNamespaceInNamespaceStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ex2::NamespaceInNamespaceStruct> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ex2::NamespaceInNamespaceStruct>","std::vector<ex2::NamespaceInNamespaceStruct, std::allocator<ex2::NamespaceInNamespaceStruct> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ex2::NamespaceInNamespaceStruct>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEex2cLcLNamespaceInNamespaceStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ex2::NamespaceInNamespaceStruct>*>(nullptr))->GetClass();
      vectorlEex2cLcLNamespaceInNamespaceStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEex2cLcLNamespaceInNamespaceStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex2::NamespaceInNamespaceStruct> : new vector<ex2::NamespaceInNamespaceStruct>;
   }
   static void *newArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ex2::NamespaceInNamespaceStruct>[nElements] : new vector<ex2::NamespaceInNamespaceStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      delete (static_cast<vector<ex2::NamespaceInNamespaceStruct>*>(p));
   }
   static void deleteArray_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      delete [] (static_cast<vector<ex2::NamespaceInNamespaceStruct>*>(p));
   }
   static void destruct_vectorlEex2cLcLNamespaceInNamespaceStructgR(void *p) {
      typedef vector<ex2::NamespaceInNamespaceStruct> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ex2::NamespaceInNamespaceStruct>

namespace ROOT {
   static TClass *vectorlEStructWithFixedWithTypesgR_Dictionary();
   static void vectorlEStructWithFixedWithTypesgR_TClassManip(TClass*);
   static void *new_vectorlEStructWithFixedWithTypesgR(void *p = nullptr);
   static void *newArray_vectorlEStructWithFixedWithTypesgR(Long_t size, void *p);
   static void delete_vectorlEStructWithFixedWithTypesgR(void *p);
   static void deleteArray_vectorlEStructWithFixedWithTypesgR(void *p);
   static void destruct_vectorlEStructWithFixedWithTypesgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<StructWithFixedWithTypes>*)
   {
      vector<StructWithFixedWithTypes> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<StructWithFixedWithTypes>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<StructWithFixedWithTypes>", -2, "vector", 423,
                  typeid(vector<StructWithFixedWithTypes>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEStructWithFixedWithTypesgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<StructWithFixedWithTypes>) );
      instance.SetNew(&new_vectorlEStructWithFixedWithTypesgR);
      instance.SetNewArray(&newArray_vectorlEStructWithFixedWithTypesgR);
      instance.SetDelete(&delete_vectorlEStructWithFixedWithTypesgR);
      instance.SetDeleteArray(&deleteArray_vectorlEStructWithFixedWithTypesgR);
      instance.SetDestructor(&destruct_vectorlEStructWithFixedWithTypesgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<StructWithFixedWithTypes> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<StructWithFixedWithTypes>","std::vector<StructWithFixedWithTypes, std::allocator<StructWithFixedWithTypes> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<StructWithFixedWithTypes>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEStructWithFixedWithTypesgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<StructWithFixedWithTypes>*>(nullptr))->GetClass();
      vectorlEStructWithFixedWithTypesgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEStructWithFixedWithTypesgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEStructWithFixedWithTypesgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<StructWithFixedWithTypes> : new vector<StructWithFixedWithTypes>;
   }
   static void *newArray_vectorlEStructWithFixedWithTypesgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<StructWithFixedWithTypes>[nElements] : new vector<StructWithFixedWithTypes>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEStructWithFixedWithTypesgR(void *p) {
      delete (static_cast<vector<StructWithFixedWithTypes>*>(p));
   }
   static void deleteArray_vectorlEStructWithFixedWithTypesgR(void *p) {
      delete [] (static_cast<vector<StructWithFixedWithTypes>*>(p));
   }
   static void destruct_vectorlEStructWithFixedWithTypesgR(void *p) {
      typedef vector<StructWithFixedWithTypes> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<StructWithFixedWithTypes>

namespace ROOT {
   static TClass *vectorlESimpleStructgR_Dictionary();
   static void vectorlESimpleStructgR_TClassManip(TClass*);
   static void *new_vectorlESimpleStructgR(void *p = nullptr);
   static void *newArray_vectorlESimpleStructgR(Long_t size, void *p);
   static void delete_vectorlESimpleStructgR(void *p);
   static void deleteArray_vectorlESimpleStructgR(void *p);
   static void destruct_vectorlESimpleStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<SimpleStruct>*)
   {
      vector<SimpleStruct> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<SimpleStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<SimpleStruct>", -2, "vector", 423,
                  typeid(vector<SimpleStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlESimpleStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<SimpleStruct>) );
      instance.SetNew(&new_vectorlESimpleStructgR);
      instance.SetNewArray(&newArray_vectorlESimpleStructgR);
      instance.SetDelete(&delete_vectorlESimpleStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlESimpleStructgR);
      instance.SetDestructor(&destruct_vectorlESimpleStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<SimpleStruct> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<SimpleStruct>","std::vector<SimpleStruct, std::allocator<SimpleStruct> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<SimpleStruct>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlESimpleStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<SimpleStruct>*>(nullptr))->GetClass();
      vectorlESimpleStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlESimpleStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlESimpleStructgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SimpleStruct> : new vector<SimpleStruct>;
   }
   static void *newArray_vectorlESimpleStructgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<SimpleStruct>[nElements] : new vector<SimpleStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlESimpleStructgR(void *p) {
      delete (static_cast<vector<SimpleStruct>*>(p));
   }
   static void deleteArray_vectorlESimpleStructgR(void *p) {
      delete [] (static_cast<vector<SimpleStruct>*>(p));
   }
   static void destruct_vectorlESimpleStructgR(void *p) {
      typedef vector<SimpleStruct> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<SimpleStruct>

namespace ROOT {
   static TClass *vectorlENotSoSimpleStructgR_Dictionary();
   static void vectorlENotSoSimpleStructgR_TClassManip(TClass*);
   static void *new_vectorlENotSoSimpleStructgR(void *p = nullptr);
   static void *newArray_vectorlENotSoSimpleStructgR(Long_t size, void *p);
   static void delete_vectorlENotSoSimpleStructgR(void *p);
   static void deleteArray_vectorlENotSoSimpleStructgR(void *p);
   static void destruct_vectorlENotSoSimpleStructgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<NotSoSimpleStruct>*)
   {
      vector<NotSoSimpleStruct> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<NotSoSimpleStruct>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<NotSoSimpleStruct>", -2, "vector", 423,
                  typeid(vector<NotSoSimpleStruct>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlENotSoSimpleStructgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<NotSoSimpleStruct>) );
      instance.SetNew(&new_vectorlENotSoSimpleStructgR);
      instance.SetNewArray(&newArray_vectorlENotSoSimpleStructgR);
      instance.SetDelete(&delete_vectorlENotSoSimpleStructgR);
      instance.SetDeleteArray(&deleteArray_vectorlENotSoSimpleStructgR);
      instance.SetDestructor(&destruct_vectorlENotSoSimpleStructgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<NotSoSimpleStruct> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<NotSoSimpleStruct>","std::vector<NotSoSimpleStruct, std::allocator<NotSoSimpleStruct> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<NotSoSimpleStruct>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlENotSoSimpleStructgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<NotSoSimpleStruct>*>(nullptr))->GetClass();
      vectorlENotSoSimpleStructgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlENotSoSimpleStructgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlENotSoSimpleStructgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NotSoSimpleStruct> : new vector<NotSoSimpleStruct>;
   }
   static void *newArray_vectorlENotSoSimpleStructgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<NotSoSimpleStruct>[nElements] : new vector<NotSoSimpleStruct>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlENotSoSimpleStructgR(void *p) {
      delete (static_cast<vector<NotSoSimpleStruct>*>(p));
   }
   static void deleteArray_vectorlENotSoSimpleStructgR(void *p) {
      delete [] (static_cast<vector<NotSoSimpleStruct>*>(p));
   }
   static void destruct_vectorlENotSoSimpleStructgR(void *p) {
      typedef vector<NotSoSimpleStruct> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<NotSoSimpleStruct>

namespace ROOT {
   static TClass *vectorlEExampleWithVectorMemberDatagR_Dictionary();
   static void vectorlEExampleWithVectorMemberDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithVectorMemberDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithVectorMemberDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithVectorMemberDatagR(void *p);
   static void deleteArray_vectorlEExampleWithVectorMemberDatagR(void *p);
   static void destruct_vectorlEExampleWithVectorMemberDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithVectorMemberData>*)
   {
      vector<ExampleWithVectorMemberData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithVectorMemberData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithVectorMemberData>", -2, "vector", 423,
                  typeid(vector<ExampleWithVectorMemberData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithVectorMemberDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithVectorMemberData>) );
      instance.SetNew(&new_vectorlEExampleWithVectorMemberDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithVectorMemberDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithVectorMemberDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithVectorMemberDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithVectorMemberDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithVectorMemberData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithVectorMemberData>","std::vector<ExampleWithVectorMemberData, std::allocator<ExampleWithVectorMemberData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithVectorMemberData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithVectorMemberDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithVectorMemberData>*>(nullptr))->GetClass();
      vectorlEExampleWithVectorMemberDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithVectorMemberDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithVectorMemberDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithVectorMemberData> : new vector<ExampleWithVectorMemberData>;
   }
   static void *newArray_vectorlEExampleWithVectorMemberDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithVectorMemberData>[nElements] : new vector<ExampleWithVectorMemberData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithVectorMemberDatagR(void *p) {
      delete (static_cast<vector<ExampleWithVectorMemberData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithVectorMemberDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithVectorMemberData>*>(p));
   }
   static void destruct_vectorlEExampleWithVectorMemberDatagR(void *p) {
      typedef vector<ExampleWithVectorMemberData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithVectorMemberData>

namespace ROOT {
   static TClass *vectorlEExampleWithUserInitDatagR_Dictionary();
   static void vectorlEExampleWithUserInitDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithUserInitDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithUserInitDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithUserInitDatagR(void *p);
   static void deleteArray_vectorlEExampleWithUserInitDatagR(void *p);
   static void destruct_vectorlEExampleWithUserInitDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithUserInitData>*)
   {
      vector<ExampleWithUserInitData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithUserInitData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithUserInitData>", -2, "vector", 423,
                  typeid(vector<ExampleWithUserInitData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithUserInitDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithUserInitData>) );
      instance.SetNew(&new_vectorlEExampleWithUserInitDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithUserInitDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithUserInitDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithUserInitDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithUserInitDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithUserInitData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithUserInitData>","std::vector<ExampleWithUserInitData, std::allocator<ExampleWithUserInitData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithUserInitData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithUserInitDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithUserInitData>*>(nullptr))->GetClass();
      vectorlEExampleWithUserInitDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithUserInitDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithUserInitDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithUserInitData> : new vector<ExampleWithUserInitData>;
   }
   static void *newArray_vectorlEExampleWithUserInitDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithUserInitData>[nElements] : new vector<ExampleWithUserInitData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithUserInitDatagR(void *p) {
      delete (static_cast<vector<ExampleWithUserInitData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithUserInitDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithUserInitData>*>(p));
   }
   static void destruct_vectorlEExampleWithUserInitDatagR(void *p) {
      typedef vector<ExampleWithUserInitData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithUserInitData>

namespace ROOT {
   static TClass *vectorlEExampleWithOneRelationDatagR_Dictionary();
   static void vectorlEExampleWithOneRelationDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithOneRelationDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithOneRelationDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithOneRelationDatagR(void *p);
   static void deleteArray_vectorlEExampleWithOneRelationDatagR(void *p);
   static void destruct_vectorlEExampleWithOneRelationDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithOneRelationData>*)
   {
      vector<ExampleWithOneRelationData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithOneRelationData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithOneRelationData>", -2, "vector", 423,
                  typeid(vector<ExampleWithOneRelationData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithOneRelationDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithOneRelationData>) );
      instance.SetNew(&new_vectorlEExampleWithOneRelationDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithOneRelationDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithOneRelationDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithOneRelationDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithOneRelationDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithOneRelationData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithOneRelationData>","std::vector<ExampleWithOneRelationData, std::allocator<ExampleWithOneRelationData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithOneRelationData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithOneRelationDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithOneRelationData>*>(nullptr))->GetClass();
      vectorlEExampleWithOneRelationDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithOneRelationDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithOneRelationDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithOneRelationData> : new vector<ExampleWithOneRelationData>;
   }
   static void *newArray_vectorlEExampleWithOneRelationDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithOneRelationData>[nElements] : new vector<ExampleWithOneRelationData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithOneRelationDatagR(void *p) {
      delete (static_cast<vector<ExampleWithOneRelationData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithOneRelationDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithOneRelationData>*>(p));
   }
   static void destruct_vectorlEExampleWithOneRelationDatagR(void *p) {
      typedef vector<ExampleWithOneRelationData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithOneRelationData>

namespace ROOT {
   static TClass *vectorlEExampleWithFixedWidthIntegersDatagR_Dictionary();
   static void vectorlEExampleWithFixedWidthIntegersDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithFixedWidthIntegersDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithFixedWidthIntegersDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithFixedWidthIntegersDatagR(void *p);
   static void deleteArray_vectorlEExampleWithFixedWidthIntegersDatagR(void *p);
   static void destruct_vectorlEExampleWithFixedWidthIntegersDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithFixedWidthIntegersData>*)
   {
      vector<ExampleWithFixedWidthIntegersData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithFixedWidthIntegersData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithFixedWidthIntegersData>", -2, "vector", 423,
                  typeid(vector<ExampleWithFixedWidthIntegersData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithFixedWidthIntegersDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithFixedWidthIntegersData>) );
      instance.SetNew(&new_vectorlEExampleWithFixedWidthIntegersDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithFixedWidthIntegersDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithFixedWidthIntegersDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithFixedWidthIntegersDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithFixedWidthIntegersDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithFixedWidthIntegersData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithFixedWidthIntegersData>","std::vector<ExampleWithFixedWidthIntegersData, std::allocator<ExampleWithFixedWidthIntegersData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithFixedWidthIntegersData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithFixedWidthIntegersDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithFixedWidthIntegersData>*>(nullptr))->GetClass();
      vectorlEExampleWithFixedWidthIntegersDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithFixedWidthIntegersDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithFixedWidthIntegersDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithFixedWidthIntegersData> : new vector<ExampleWithFixedWidthIntegersData>;
   }
   static void *newArray_vectorlEExampleWithFixedWidthIntegersDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithFixedWidthIntegersData>[nElements] : new vector<ExampleWithFixedWidthIntegersData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithFixedWidthIntegersDatagR(void *p) {
      delete (static_cast<vector<ExampleWithFixedWidthIntegersData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithFixedWidthIntegersDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithFixedWidthIntegersData>*>(p));
   }
   static void destruct_vectorlEExampleWithFixedWidthIntegersDatagR(void *p) {
      typedef vector<ExampleWithFixedWidthIntegersData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithFixedWidthIntegersData>

namespace ROOT {
   static TClass *vectorlEExampleWithDifferentNamespaceRelationsDatagR_Dictionary();
   static void vectorlEExampleWithDifferentNamespaceRelationsDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithDifferentNamespaceRelationsDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p);
   static void deleteArray_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p);
   static void destruct_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithDifferentNamespaceRelationsData>*)
   {
      vector<ExampleWithDifferentNamespaceRelationsData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithDifferentNamespaceRelationsData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithDifferentNamespaceRelationsData>", -2, "vector", 423,
                  typeid(vector<ExampleWithDifferentNamespaceRelationsData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithDifferentNamespaceRelationsDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithDifferentNamespaceRelationsData>) );
      instance.SetNew(&new_vectorlEExampleWithDifferentNamespaceRelationsDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithDifferentNamespaceRelationsDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithDifferentNamespaceRelationsDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithDifferentNamespaceRelationsDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithDifferentNamespaceRelationsDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithDifferentNamespaceRelationsData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithDifferentNamespaceRelationsData>","std::vector<ExampleWithDifferentNamespaceRelationsData, std::allocator<ExampleWithDifferentNamespaceRelationsData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithDifferentNamespaceRelationsData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithDifferentNamespaceRelationsDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithDifferentNamespaceRelationsData>*>(nullptr))->GetClass();
      vectorlEExampleWithDifferentNamespaceRelationsDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithDifferentNamespaceRelationsDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithDifferentNamespaceRelationsData> : new vector<ExampleWithDifferentNamespaceRelationsData>;
   }
   static void *newArray_vectorlEExampleWithDifferentNamespaceRelationsDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithDifferentNamespaceRelationsData>[nElements] : new vector<ExampleWithDifferentNamespaceRelationsData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p) {
      delete (static_cast<vector<ExampleWithDifferentNamespaceRelationsData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithDifferentNamespaceRelationsData>*>(p));
   }
   static void destruct_vectorlEExampleWithDifferentNamespaceRelationsDatagR(void *p) {
      typedef vector<ExampleWithDifferentNamespaceRelationsData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithDifferentNamespaceRelationsData>

namespace ROOT {
   static TClass *vectorlEExampleWithComponentDatagR_Dictionary();
   static void vectorlEExampleWithComponentDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithComponentDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithComponentDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithComponentDatagR(void *p);
   static void deleteArray_vectorlEExampleWithComponentDatagR(void *p);
   static void destruct_vectorlEExampleWithComponentDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithComponentData>*)
   {
      vector<ExampleWithComponentData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithComponentData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithComponentData>", -2, "vector", 423,
                  typeid(vector<ExampleWithComponentData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithComponentDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithComponentData>) );
      instance.SetNew(&new_vectorlEExampleWithComponentDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithComponentDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithComponentDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithComponentDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithComponentDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithComponentData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithComponentData>","std::vector<ExampleWithComponentData, std::allocator<ExampleWithComponentData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithComponentData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithComponentDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithComponentData>*>(nullptr))->GetClass();
      vectorlEExampleWithComponentDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithComponentDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithComponentDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithComponentData> : new vector<ExampleWithComponentData>;
   }
   static void *newArray_vectorlEExampleWithComponentDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithComponentData>[nElements] : new vector<ExampleWithComponentData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithComponentDatagR(void *p) {
      delete (static_cast<vector<ExampleWithComponentData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithComponentDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithComponentData>*>(p));
   }
   static void destruct_vectorlEExampleWithComponentDatagR(void *p) {
      typedef vector<ExampleWithComponentData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithComponentData>

namespace ROOT {
   static TClass *vectorlEExampleWithArrayDatagR_Dictionary();
   static void vectorlEExampleWithArrayDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithArrayDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithArrayDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithArrayDatagR(void *p);
   static void deleteArray_vectorlEExampleWithArrayDatagR(void *p);
   static void destruct_vectorlEExampleWithArrayDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithArrayData>*)
   {
      vector<ExampleWithArrayData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithArrayData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithArrayData>", -2, "vector", 423,
                  typeid(vector<ExampleWithArrayData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithArrayDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithArrayData>) );
      instance.SetNew(&new_vectorlEExampleWithArrayDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithArrayDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithArrayDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithArrayDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithArrayDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithArrayData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithArrayData>","std::vector<ExampleWithArrayData, std::allocator<ExampleWithArrayData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithArrayData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithArrayDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithArrayData>*>(nullptr))->GetClass();
      vectorlEExampleWithArrayDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithArrayDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithArrayDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithArrayData> : new vector<ExampleWithArrayData>;
   }
   static void *newArray_vectorlEExampleWithArrayDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithArrayData>[nElements] : new vector<ExampleWithArrayData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithArrayDatagR(void *p) {
      delete (static_cast<vector<ExampleWithArrayData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithArrayDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithArrayData>*>(p));
   }
   static void destruct_vectorlEExampleWithArrayDatagR(void *p) {
      typedef vector<ExampleWithArrayData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithArrayData>

namespace ROOT {
   static TClass *vectorlEExampleWithArrayComponentDatagR_Dictionary();
   static void vectorlEExampleWithArrayComponentDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleWithArrayComponentDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleWithArrayComponentDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleWithArrayComponentDatagR(void *p);
   static void deleteArray_vectorlEExampleWithArrayComponentDatagR(void *p);
   static void destruct_vectorlEExampleWithArrayComponentDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleWithArrayComponentData>*)
   {
      vector<ExampleWithArrayComponentData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleWithArrayComponentData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleWithArrayComponentData>", -2, "vector", 423,
                  typeid(vector<ExampleWithArrayComponentData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleWithArrayComponentDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleWithArrayComponentData>) );
      instance.SetNew(&new_vectorlEExampleWithArrayComponentDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleWithArrayComponentDatagR);
      instance.SetDelete(&delete_vectorlEExampleWithArrayComponentDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleWithArrayComponentDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleWithArrayComponentDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleWithArrayComponentData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleWithArrayComponentData>","std::vector<ExampleWithArrayComponentData, std::allocator<ExampleWithArrayComponentData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleWithArrayComponentData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleWithArrayComponentDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleWithArrayComponentData>*>(nullptr))->GetClass();
      vectorlEExampleWithArrayComponentDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleWithArrayComponentDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleWithArrayComponentDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithArrayComponentData> : new vector<ExampleWithArrayComponentData>;
   }
   static void *newArray_vectorlEExampleWithArrayComponentDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleWithArrayComponentData>[nElements] : new vector<ExampleWithArrayComponentData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleWithArrayComponentDatagR(void *p) {
      delete (static_cast<vector<ExampleWithArrayComponentData>*>(p));
   }
   static void deleteArray_vectorlEExampleWithArrayComponentDatagR(void *p) {
      delete [] (static_cast<vector<ExampleWithArrayComponentData>*>(p));
   }
   static void destruct_vectorlEExampleWithArrayComponentDatagR(void *p) {
      typedef vector<ExampleWithArrayComponentData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleWithArrayComponentData>

namespace ROOT {
   static TClass *vectorlEExampleReferencingTypeDatagR_Dictionary();
   static void vectorlEExampleReferencingTypeDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleReferencingTypeDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleReferencingTypeDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleReferencingTypeDatagR(void *p);
   static void deleteArray_vectorlEExampleReferencingTypeDatagR(void *p);
   static void destruct_vectorlEExampleReferencingTypeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleReferencingTypeData>*)
   {
      vector<ExampleReferencingTypeData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleReferencingTypeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleReferencingTypeData>", -2, "vector", 423,
                  typeid(vector<ExampleReferencingTypeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleReferencingTypeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleReferencingTypeData>) );
      instance.SetNew(&new_vectorlEExampleReferencingTypeDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleReferencingTypeDatagR);
      instance.SetDelete(&delete_vectorlEExampleReferencingTypeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleReferencingTypeDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleReferencingTypeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleReferencingTypeData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleReferencingTypeData>","std::vector<ExampleReferencingTypeData, std::allocator<ExampleReferencingTypeData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleReferencingTypeData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleReferencingTypeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleReferencingTypeData>*>(nullptr))->GetClass();
      vectorlEExampleReferencingTypeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleReferencingTypeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleReferencingTypeDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleReferencingTypeData> : new vector<ExampleReferencingTypeData>;
   }
   static void *newArray_vectorlEExampleReferencingTypeDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleReferencingTypeData>[nElements] : new vector<ExampleReferencingTypeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleReferencingTypeDatagR(void *p) {
      delete (static_cast<vector<ExampleReferencingTypeData>*>(p));
   }
   static void deleteArray_vectorlEExampleReferencingTypeDatagR(void *p) {
      delete [] (static_cast<vector<ExampleReferencingTypeData>*>(p));
   }
   static void destruct_vectorlEExampleReferencingTypeDatagR(void *p) {
      typedef vector<ExampleReferencingTypeData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleReferencingTypeData>

namespace ROOT {
   static TClass *vectorlEExampleOfDroppedTypeDatagR_Dictionary();
   static void vectorlEExampleOfDroppedTypeDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleOfDroppedTypeDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleOfDroppedTypeDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleOfDroppedTypeDatagR(void *p);
   static void deleteArray_vectorlEExampleOfDroppedTypeDatagR(void *p);
   static void destruct_vectorlEExampleOfDroppedTypeDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleOfDroppedTypeData>*)
   {
      vector<ExampleOfDroppedTypeData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleOfDroppedTypeData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleOfDroppedTypeData>", -2, "vector", 423,
                  typeid(vector<ExampleOfDroppedTypeData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleOfDroppedTypeDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleOfDroppedTypeData>) );
      instance.SetNew(&new_vectorlEExampleOfDroppedTypeDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleOfDroppedTypeDatagR);
      instance.SetDelete(&delete_vectorlEExampleOfDroppedTypeDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleOfDroppedTypeDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleOfDroppedTypeDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleOfDroppedTypeData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleOfDroppedTypeData>","std::vector<ExampleOfDroppedTypeData, std::allocator<ExampleOfDroppedTypeData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleOfDroppedTypeData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleOfDroppedTypeDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleOfDroppedTypeData>*>(nullptr))->GetClass();
      vectorlEExampleOfDroppedTypeDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleOfDroppedTypeDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleOfDroppedTypeDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleOfDroppedTypeData> : new vector<ExampleOfDroppedTypeData>;
   }
   static void *newArray_vectorlEExampleOfDroppedTypeDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleOfDroppedTypeData>[nElements] : new vector<ExampleOfDroppedTypeData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleOfDroppedTypeDatagR(void *p) {
      delete (static_cast<vector<ExampleOfDroppedTypeData>*>(p));
   }
   static void deleteArray_vectorlEExampleOfDroppedTypeDatagR(void *p) {
      delete [] (static_cast<vector<ExampleOfDroppedTypeData>*>(p));
   }
   static void destruct_vectorlEExampleOfDroppedTypeDatagR(void *p) {
      typedef vector<ExampleOfDroppedTypeData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleOfDroppedTypeData>

namespace ROOT {
   static TClass *vectorlEExampleMCDatagR_Dictionary();
   static void vectorlEExampleMCDatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleMCDatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleMCDatagR(Long_t size, void *p);
   static void delete_vectorlEExampleMCDatagR(void *p);
   static void deleteArray_vectorlEExampleMCDatagR(void *p);
   static void destruct_vectorlEExampleMCDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleMCData>*)
   {
      vector<ExampleMCData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleMCData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleMCData>", -2, "vector", 423,
                  typeid(vector<ExampleMCData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleMCDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleMCData>) );
      instance.SetNew(&new_vectorlEExampleMCDatagR);
      instance.SetNewArray(&newArray_vectorlEExampleMCDatagR);
      instance.SetDelete(&delete_vectorlEExampleMCDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleMCDatagR);
      instance.SetDestructor(&destruct_vectorlEExampleMCDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleMCData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleMCData>","std::vector<ExampleMCData, std::allocator<ExampleMCData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleMCData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleMCDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleMCData>*>(nullptr))->GetClass();
      vectorlEExampleMCDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleMCDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleMCDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleMCData> : new vector<ExampleMCData>;
   }
   static void *newArray_vectorlEExampleMCDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleMCData>[nElements] : new vector<ExampleMCData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleMCDatagR(void *p) {
      delete (static_cast<vector<ExampleMCData>*>(p));
   }
   static void deleteArray_vectorlEExampleMCDatagR(void *p) {
      delete [] (static_cast<vector<ExampleMCData>*>(p));
   }
   static void destruct_vectorlEExampleMCDatagR(void *p) {
      typedef vector<ExampleMCData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleMCData>

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
   static TClass *vectorlEExampleForCyclicDependency2DatagR_Dictionary();
   static void vectorlEExampleForCyclicDependency2DatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency2DatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleForCyclicDependency2DatagR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency2DatagR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency2DatagR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency2DatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency2Data>*)
   {
      vector<ExampleForCyclicDependency2Data> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency2Data>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency2Data>", -2, "vector", 423,
                  typeid(vector<ExampleForCyclicDependency2Data>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency2DatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency2Data>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency2DatagR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency2DatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency2Data> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleForCyclicDependency2Data>","std::vector<ExampleForCyclicDependency2Data, std::allocator<ExampleForCyclicDependency2Data> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleForCyclicDependency2Data>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency2DatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleForCyclicDependency2Data>*>(nullptr))->GetClass();
      vectorlEExampleForCyclicDependency2DatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency2DatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleForCyclicDependency2Data> : new vector<ExampleForCyclicDependency2Data>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency2DatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleForCyclicDependency2Data>[nElements] : new vector<ExampleForCyclicDependency2Data>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      delete (static_cast<vector<ExampleForCyclicDependency2Data>*>(p));
   }
   static void deleteArray_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      delete [] (static_cast<vector<ExampleForCyclicDependency2Data>*>(p));
   }
   static void destruct_vectorlEExampleForCyclicDependency2DatagR(void *p) {
      typedef vector<ExampleForCyclicDependency2Data> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency2Data>

namespace ROOT {
   static TClass *vectorlEExampleForCyclicDependency1DatagR_Dictionary();
   static void vectorlEExampleForCyclicDependency1DatagR_TClassManip(TClass*);
   static void *new_vectorlEExampleForCyclicDependency1DatagR(void *p = nullptr);
   static void *newArray_vectorlEExampleForCyclicDependency1DatagR(Long_t size, void *p);
   static void delete_vectorlEExampleForCyclicDependency1DatagR(void *p);
   static void deleteArray_vectorlEExampleForCyclicDependency1DatagR(void *p);
   static void destruct_vectorlEExampleForCyclicDependency1DatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<ExampleForCyclicDependency1Data>*)
   {
      vector<ExampleForCyclicDependency1Data> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<ExampleForCyclicDependency1Data>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<ExampleForCyclicDependency1Data>", -2, "vector", 423,
                  typeid(vector<ExampleForCyclicDependency1Data>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEExampleForCyclicDependency1DatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<ExampleForCyclicDependency1Data>) );
      instance.SetNew(&new_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetNewArray(&newArray_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetDelete(&delete_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEExampleForCyclicDependency1DatagR);
      instance.SetDestructor(&destruct_vectorlEExampleForCyclicDependency1DatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<ExampleForCyclicDependency1Data> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<ExampleForCyclicDependency1Data>","std::vector<ExampleForCyclicDependency1Data, std::allocator<ExampleForCyclicDependency1Data> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<ExampleForCyclicDependency1Data>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEExampleForCyclicDependency1DatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<ExampleForCyclicDependency1Data>*>(nullptr))->GetClass();
      vectorlEExampleForCyclicDependency1DatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEExampleForCyclicDependency1DatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleForCyclicDependency1Data> : new vector<ExampleForCyclicDependency1Data>;
   }
   static void *newArray_vectorlEExampleForCyclicDependency1DatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<ExampleForCyclicDependency1Data>[nElements] : new vector<ExampleForCyclicDependency1Data>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      delete (static_cast<vector<ExampleForCyclicDependency1Data>*>(p));
   }
   static void deleteArray_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      delete [] (static_cast<vector<ExampleForCyclicDependency1Data>*>(p));
   }
   static void destruct_vectorlEExampleForCyclicDependency1DatagR(void *p) {
      typedef vector<ExampleForCyclicDependency1Data> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<ExampleForCyclicDependency1Data>

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
   static TClass *vectorlEEventInfoNewNameDatagR_Dictionary();
   static void vectorlEEventInfoNewNameDatagR_TClassManip(TClass*);
   static void *new_vectorlEEventInfoNewNameDatagR(void *p = nullptr);
   static void *newArray_vectorlEEventInfoNewNameDatagR(Long_t size, void *p);
   static void delete_vectorlEEventInfoNewNameDatagR(void *p);
   static void deleteArray_vectorlEEventInfoNewNameDatagR(void *p);
   static void destruct_vectorlEEventInfoNewNameDatagR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<EventInfoNewNameData>*)
   {
      vector<EventInfoNewNameData> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<EventInfoNewNameData>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<EventInfoNewNameData>", -2, "vector", 423,
                  typeid(vector<EventInfoNewNameData>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEEventInfoNewNameDatagR_Dictionary, isa_proxy, 4,
                  sizeof(vector<EventInfoNewNameData>) );
      instance.SetNew(&new_vectorlEEventInfoNewNameDatagR);
      instance.SetNewArray(&newArray_vectorlEEventInfoNewNameDatagR);
      instance.SetDelete(&delete_vectorlEEventInfoNewNameDatagR);
      instance.SetDeleteArray(&deleteArray_vectorlEEventInfoNewNameDatagR);
      instance.SetDestructor(&destruct_vectorlEEventInfoNewNameDatagR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<EventInfoNewNameData> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<EventInfoNewNameData>","std::vector<EventInfoNewNameData, std::allocator<EventInfoNewNameData> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<EventInfoNewNameData>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEEventInfoNewNameDatagR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<EventInfoNewNameData>*>(nullptr))->GetClass();
      vectorlEEventInfoNewNameDatagR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEEventInfoNewNameDatagR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEEventInfoNewNameDatagR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EventInfoNewNameData> : new vector<EventInfoNewNameData>;
   }
   static void *newArray_vectorlEEventInfoNewNameDatagR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<EventInfoNewNameData>[nElements] : new vector<EventInfoNewNameData>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEEventInfoNewNameDatagR(void *p) {
      delete (static_cast<vector<EventInfoNewNameData>*>(p));
   }
   static void deleteArray_vectorlEEventInfoNewNameDatagR(void *p) {
      delete [] (static_cast<vector<EventInfoNewNameData>*>(p));
   }
   static void destruct_vectorlEEventInfoNewNameDatagR(void *p) {
      typedef vector<EventInfoNewNameData> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<EventInfoNewNameData>

namespace ROOT {
   static TClass *vectorlECompWithInitgR_Dictionary();
   static void vectorlECompWithInitgR_TClassManip(TClass*);
   static void *new_vectorlECompWithInitgR(void *p = nullptr);
   static void *newArray_vectorlECompWithInitgR(Long_t size, void *p);
   static void delete_vectorlECompWithInitgR(void *p);
   static void deleteArray_vectorlECompWithInitgR(void *p);
   static void destruct_vectorlECompWithInitgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<CompWithInit>*)
   {
      vector<CompWithInit> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<CompWithInit>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<CompWithInit>", -2, "vector", 423,
                  typeid(vector<CompWithInit>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlECompWithInitgR_Dictionary, isa_proxy, 4,
                  sizeof(vector<CompWithInit>) );
      instance.SetNew(&new_vectorlECompWithInitgR);
      instance.SetNewArray(&newArray_vectorlECompWithInitgR);
      instance.SetDelete(&delete_vectorlECompWithInitgR);
      instance.SetDeleteArray(&deleteArray_vectorlECompWithInitgR);
      instance.SetDestructor(&destruct_vectorlECompWithInitgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<CompWithInit> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<CompWithInit>","std::vector<CompWithInit, std::allocator<CompWithInit> >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<CompWithInit>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlECompWithInitgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<CompWithInit>*>(nullptr))->GetClass();
      vectorlECompWithInitgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlECompWithInitgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlECompWithInitgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<CompWithInit> : new vector<CompWithInit>;
   }
   static void *newArray_vectorlECompWithInitgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<CompWithInit>[nElements] : new vector<CompWithInit>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlECompWithInitgR(void *p) {
      delete (static_cast<vector<CompWithInit>*>(p));
   }
   static void deleteArray_vectorlECompWithInitgR(void *p) {
      delete [] (static_cast<vector<CompWithInit>*>(p));
   }
   static void destruct_vectorlECompWithInitgR(void *p) {
      typedef vector<CompWithInit> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<CompWithInit>

namespace {
  void TriggerDictionaryInitialization_libTestDataModel_v3Dict_Impl() {
    static const char* headers[] = {
"0",
nullptr
    };
    static const char* includePaths[] = {
"/home/tsai/eic/podio.src/tests/schema_evolution",
"/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new",
"/home/tsai/eic/podio.build/tests/schema_evolution/datamodel_new",
"/home/tsai/eic/podio.src/include",
"/usr/local/include/root",
"/opt/software/linux-debian12-x86_64_v2/gcc-12.2.0/root-6.30.02-yqprya52ulncdk4lpohafegptluyvjpq/include/root",
"/home/tsai/eic/podio.build/tests/schema_evolution/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libTestDataModel_v3Dict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class SimpleStruct;
class NotSoSimpleStruct;
namespace ex2{class NamespaceStruct;}
namespace ex2{class NamespaceStructv2;}
namespace ex2{class NamespaceInNamespaceStruct;}
class StructWithFixedWithTypes;
class CompWithInit;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfoNewNameData.h")))  EventInfoNewNameData;
class __attribute__((annotate("$clingAutoload$datamodel/EventInfoNewName.h")))  EventInfoNewName;
class __attribute__((annotate("$clingAutoload$datamodel/MutableEventInfoNewName.h")))  MutableEventInfoNewName;
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHitData.h")))  ExampleHitData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleMCData.h")))  ExampleMCData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleClusterData.h")))  ExampleClusterData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingTypeData.h")))  ExampleReferencingTypeData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMemberData.h")))  ExampleWithVectorMemberData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelationData.h")))  ExampleWithOneRelationData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayComponentData.h")))  ExampleWithArrayComponentData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponentData.h")))  ExampleWithComponentData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1Data.h")))  ExampleForCyclicDependency1Data;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2Data.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1CollectionData.h")))  ExampleForCyclicDependency2Data;
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithNamespaceData.h")))  ExampleWithNamespaceData;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelationData.h")))  ExampleWithARelationData;}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithDifferentNamespaceRelationsData.h")))  ExampleWithDifferentNamespaceRelationsData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayData.h")))  ExampleWithArrayData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithFixedWidthIntegersData.h")))  ExampleWithFixedWidthIntegersData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithUserInitData.h")))  ExampleWithUserInitData;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleOfDroppedTypeData.h")))  ExampleOfDroppedTypeData;
class EventInfoNewNameCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleHit.h")))  ExampleHit;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleHit.h")))  MutableExampleHit;
class ExampleHitCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleMC.h")))  ExampleMC;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleMC.h")))  MutableExampleMC;
class ExampleMCCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleCluster.h")))  ExampleCluster;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleCluster.h")))  MutableExampleCluster;
class ExampleClusterCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleReferencingType.h")))  ExampleReferencingType;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleReferencingType.h")))  MutableExampleReferencingType;
class ExampleReferencingTypeCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithVectorMember.h")))  ExampleWithVectorMember;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithVectorMember.h")))  MutableExampleWithVectorMember;
class ExampleWithVectorMemberCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithOneRelation.h")))  ExampleWithOneRelation;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithOneRelation.h")))  MutableExampleWithOneRelation;
class ExampleWithOneRelationCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArrayComponent.h")))  ExampleWithArrayComponent;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithArrayComponent.h")))  MutableExampleWithArrayComponent;
class ExampleWithArrayComponentCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithComponent.h")))  ExampleWithComponent;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithComponent.h")))  MutableExampleWithComponent;
class ExampleWithComponentCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1.h")))  ExampleForCyclicDependency1;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleForCyclicDependency1.h")))  MutableExampleForCyclicDependency1;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency2.h")))  __attribute__((annotate("$clingAutoload$datamodel/ExampleForCyclicDependency1CollectionData.h")))  ExampleForCyclicDependency2;
class ExampleForCyclicDependency1Collection;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleForCyclicDependency2.h")))  MutableExampleForCyclicDependency2;
class ExampleForCyclicDependency2Collection;
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithNamespace.h")))  ExampleWithNamespace;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithNamespace.h")))  MutableExampleWithNamespace;}
namespace ex42{class ExampleWithNamespaceCollection;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithARelation.h")))  ExampleWithARelation;}
namespace ex42{class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithARelation.h")))  MutableExampleWithARelation;}
namespace ex42{class ExampleWithARelationCollection;}
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithDifferentNamespaceRelations.h")))  ExampleWithDifferentNamespaceRelations;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithDifferentNamespaceRelations.h")))  MutableExampleWithDifferentNamespaceRelations;
class ExampleWithDifferentNamespaceRelationsCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithArray.h")))  ExampleWithArray;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithArray.h")))  MutableExampleWithArray;
class ExampleWithArrayCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithFixedWidthIntegers.h")))  ExampleWithFixedWidthIntegers;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithFixedWidthIntegers.h")))  MutableExampleWithFixedWidthIntegers;
class ExampleWithFixedWidthIntegersCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleWithUserInit.h")))  ExampleWithUserInit;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleWithUserInit.h")))  MutableExampleWithUserInit;
class ExampleWithUserInitCollection;
class __attribute__((annotate("$clingAutoload$datamodel/ExampleOfDroppedType.h")))  ExampleOfDroppedType;
class __attribute__((annotate("$clingAutoload$datamodel/MutableExampleOfDroppedType.h")))  MutableExampleOfDroppedType;
class ExampleOfDroppedTypeCollection;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libTestDataModel_v3Dict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_SimpleStruct_H
#define DATAMODEL_SimpleStruct_H

#include <array>
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif


/** @class SimpleStruct
 *  
 *  @author: 
 */
class SimpleStruct {
public:
  int x{};
  int y{};
  int z{};
  int t{};
  std::array<int, 4> p{};

 SimpleStruct() : x(0),z(0) {}
 SimpleStruct( const int* v) : x(v[0]),z(v[2]) {} 

};

std::ostream& operator<<(std::ostream& o, const SimpleStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const SimpleStruct& value);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NotSoSimpleStruct_H
#define DATAMODEL_NotSoSimpleStruct_H

#include "datamodel/SimpleStruct.h"
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif


/** @class NotSoSimpleStruct
 *  
 *  @author: 
 */
class NotSoSimpleStruct {
public:
  SimpleStruct data{}; ///< component members can have descriptions


};

std::ostream& operator<<(std::ostream& o, const NotSoSimpleStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NotSoSimpleStruct& value);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceStruct_H
#define DATAMODEL_NamespaceStruct_H

#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace ex2 {

/** @class NamespaceStruct
 *  
 *  @author: 
 */
class NamespaceStruct {
public:
  int x{};
  int y_new{};


};

std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceStruct& value);
#endif

} // namespace ex2


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceStructv2_H
#define DATAMODEL_NamespaceStructv2_H

#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace ex2 {

/** @class NamespaceStructv2
 *  
 *  @author: 
 */
class NamespaceStructv2 {
public:
  int x{};
  int y{};


};

std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStructv2& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceStructv2& value);
#endif

} // namespace ex2


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceInNamespaceStruct_H
#define DATAMODEL_NamespaceInNamespaceStruct_H

#include "datamodel/NamespaceStruct.h"
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace ex2 {

/** @class NamespaceInNamespaceStruct
 *  
 *  @author: 
 */
class NamespaceInNamespaceStruct {
public:
  ::ex2::NamespaceStruct data{};


};

std::ostream& operator<<(std::ostream& o, const ex2::NamespaceInNamespaceStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceInNamespaceStruct& value);
#endif

} // namespace ex2


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_StructWithFixedWithTypes_H
#define DATAMODEL_StructWithFixedWithTypes_H

#include <cstdint>
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif


/** @class StructWithFixedWithTypes
 *  
 *  @author: 
 */
class StructWithFixedWithTypes {
public:
  std::uint16_t fixedUnsigned16{}; ///< unsigned int with exactly 16 bits
  std::int64_t fixedInteger64{}; ///< int with exactly 64 bits
  std::int32_t fixedInteger32{}; ///< int with exactly 32 bits


};

std::ostream& operator<<(std::ostream& o, const StructWithFixedWithTypes& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const StructWithFixedWithTypes& value);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_CompWithInit_H
#define DATAMODEL_CompWithInit_H

#include <array>
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif


/** @class CompWithInit
 *  
 *  @author: 
 */
class CompWithInit {
public:
  int i{42}; ///< is there even another value to initialize ints to?
  std::array<double, 10> arr{1.2, 3.4}; ///< half initialized double array


};

std::ostream& operator<<(std::ostream& o, const CompWithInit& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const CompWithInit& value);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewNameCollection_H
#define DATAMODEL_EventInfoNewNameCollection_H

// datamodel specific includes
#include "datamodel/EventInfoNewNameData.h"
#include "datamodel/EventInfoNewName.h"
#include "datamodel/MutableEventInfoNewName.h"
#include "datamodel/EventInfoNewNameObj.h"
#include "datamodel/EventInfoNewNameCollectionData.h"

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




class EventInfoNewNameCollectionIterator {
public:
  EventInfoNewNameCollectionIterator(size_t index, const EventInfoNewNameObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}), m_collection(collection) {}

  EventInfoNewNameCollectionIterator(const EventInfoNewNameCollectionIterator&) = delete;
  EventInfoNewNameCollectionIterator& operator=(const EventInfoNewNameCollectionIterator&) = delete;

  bool operator!=(const EventInfoNewNameCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoNewNameCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  EventInfoNewName operator*();
  EventInfoNewName* operator->();
  EventInfoNewNameCollectionIterator& operator++();

private:
  size_t m_index;
  EventInfoNewName m_object;
  const EventInfoNewNameObjPointerContainer* m_collection;
};


class EventInfoNewNameMutableCollectionIterator {
public:
  EventInfoNewNameMutableCollectionIterator(size_t index, const EventInfoNewNameObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}), m_collection(collection) {}

  EventInfoNewNameMutableCollectionIterator(const EventInfoNewNameMutableCollectionIterator&) = delete;
  EventInfoNewNameMutableCollectionIterator& operator=(const EventInfoNewNameMutableCollectionIterator&) = delete;

  bool operator!=(const EventInfoNewNameMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoNewNameMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableEventInfoNewName operator*();
  MutableEventInfoNewName* operator->();
  EventInfoNewNameMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableEventInfoNewName m_object;
  const EventInfoNewNameObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class EventInfoNewNameCollection : public podio::CollectionBase {
public:
  using value_type = EventInfoNewName;
  using const_iterator = EventInfoNewNameCollectionIterator;
  using iterator = EventInfoNewNameMutableCollectionIterator;

  EventInfoNewNameCollection();
  EventInfoNewNameCollection(EventInfoNewNameCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  EventInfoNewNameCollection(const EventInfoNewNameCollection& ) = delete;
  EventInfoNewNameCollection& operator=(const EventInfoNewNameCollection& ) = delete;
  EventInfoNewNameCollection(EventInfoNewNameCollection&&) = default;
  EventInfoNewNameCollection& operator=(EventInfoNewNameCollection&&) = default;

//  EventInfoNewNameCollection(EventInfoNewNameVector* data, uint32_t collectionID);
  ~EventInfoNewNameCollection();

  constexpr static auto typeName = "EventInfoNewNameCollection";
  constexpr static auto valueTypeName = "EventInfoNewName";
  constexpr static auto dataTypeName = "EventInfoNewNameData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  EventInfoNewNameCollection* operator->() { return (EventInfoNewNameCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableEventInfoNewName create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableEventInfoNewName create(Args&&... args);

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
  EventInfoNewName operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableEventInfoNewName operator[](std::size_t index);
  /// Returns the const object of given index
  EventInfoNewName at(std::size_t index) const;
  /// Returns the object of given index
  MutableEventInfoNewName at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableEventInfoNewName object);
  /// Append an object to the (subset) collection
  void push_back(EventInfoNewName object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (EventInfoNewNameObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<int> Number(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class EventInfoNewNameCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable EventInfoNewNameCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const EventInfoNewNameCollection& v);

template<typename... Args>
MutableEventInfoNewName EventInfoNewNameCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new EventInfoNewNameObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableEventInfoNewName(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoNewNameCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewNameDATA_H
#define DATAMODEL_EventInfoNewNameDATA_H




/** @class EventInfoNewNameData
 *  Event info
 *  @author: B. Hegner
 */
class EventInfoNewNameData {
public:
  int Number{}; ///< event number

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewName_H
#define DATAMODEL_EventInfoNewName_H

#include "datamodel/EventInfoNewNameObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableEventInfoNewName;
class EventInfoNewNameCollection;
class EventInfoNewNameCollectionData;

/** @class EventInfoNewName
 *  Event info
 *  @author: B. Hegner
 */
class EventInfoNewName {

  friend class MutableEventInfoNewName;
  friend class EventInfoNewNameCollection;
  friend class EventInfoNewNameCollectionData;
  friend class EventInfoNewNameCollectionIterator;

public:
  using mutable_type = MutableEventInfoNewName;
  using collection_type = EventInfoNewNameCollection;

  /// default constructor
  EventInfoNewName();

  /// Constructor initializing all members
  EventInfoNewName(int Number);

  /// copy constructor
  EventInfoNewName(const EventInfoNewName& other) = default;

  /// copy-assignment operator
  EventInfoNewName& operator=(EventInfoNewName other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventInfoNewName clone() const;

  /// destructor
  ~EventInfoNewName() = default;

  /// converting constructor from mutable object
  EventInfoNewName(const MutableEventInfoNewName& other);

  static EventInfoNewName makeEmpty();

public:

  /// Access the event number
  int Number() const;




int getNumber() const;

  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoNewNameObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}; }

  bool operator==(const EventInfoNewName& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableEventInfoNewName& other) const;

  bool operator!=(const EventInfoNewName& other) const { return !(*this == other); }
  bool operator!=(const MutableEventInfoNewName& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const EventInfoNewName& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(EventInfoNewName& a, EventInfoNewName& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing EventInfoNewNameObj
  explicit EventInfoNewName(podio::utils::MaybeSharedPtr<EventInfoNewNameObj> obj);
  EventInfoNewName(EventInfoNewNameObj* obj);

  podio::utils::MaybeSharedPtr<EventInfoNewNameObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const EventInfoNewName& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoNewName& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableEventInfoNewName_H
#define DATAMODEL_MutableEventInfoNewName_H

#include "datamodel/EventInfoNewNameObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/EventInfoNewName.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableEventInfoNewName
 *  Event info
 *  @author: B. Hegner
 */
class MutableEventInfoNewName {

  friend class EventInfoNewNameCollection;
  friend class EventInfoNewNameMutableCollectionIterator;
  friend class EventInfoNewName;

public:
  using object_type = EventInfoNewName;
  using collection_type = EventInfoNewNameCollection;

  /// default constructor
  MutableEventInfoNewName();

  /// Constructor initializing all members
  MutableEventInfoNewName(int Number);

  /// copy constructor
  MutableEventInfoNewName(const MutableEventInfoNewName& other) = default;

  /// copy-assignment operator
  MutableEventInfoNewName& operator=(MutableEventInfoNewName other);

  /// create a mutable deep-copy of the object with identical relations
  MutableEventInfoNewName clone() const;

  /// destructor
  ~MutableEventInfoNewName() = default;


public:

  /// Access the event number
  int Number() const;



  /// Set the event number
  void Number(int value);
  /// Get mutable reference to event number
  int& Number();




int getNumber() const;

void setNumber(int n) { Number( n ) ; } 

  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from EventInfoNewNameObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}; }

  bool operator==(const MutableEventInfoNewName& other) const { return m_obj == other.m_obj; }
  bool operator==(const EventInfoNewName& other) const;

  bool operator!=(const MutableEventInfoNewName& other) const { return !(*this == other); }
  bool operator!=(const EventInfoNewName& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableEventInfoNewName& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableEventInfoNewName& a, MutableEventInfoNewName& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing EventInfoNewNameObj
  explicit MutableEventInfoNewName(podio::utils::MaybeSharedPtr<EventInfoNewNameObj> obj);

  podio::utils::MaybeSharedPtr<EventInfoNewNameObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableEventInfoNewName& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewNameOBJ_H
#define DATAMODEL_EventInfoNewNameOBJ_H

// data model specific includes
#include "datamodel/EventInfoNewNameData.h"

#include "podio/ObjectID.h"




class EventInfoNewName;

class EventInfoNewNameObj {
public:
  /// constructor
  EventInfoNewNameObj();
  /// copy constructor (does a deep-copy of relation containers)
  EventInfoNewNameObj(const EventInfoNewNameObj&);
  /// constructor from ObjectID and EventInfoNewNameData
  /// does not initialize the internal relation containers
  EventInfoNewNameObj(const podio::ObjectID id, EventInfoNewNameData data);
  /// No assignment operator
  EventInfoNewNameObj& operator=(const EventInfoNewNameObj&) = delete;
  virtual ~EventInfoNewNameObj() = default;

public:
  podio::ObjectID id;
  EventInfoNewNameData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewNameCollection_H
#define DATAMODEL_EventInfoNewNameCollection_H

// datamodel specific includes
#include "datamodel/EventInfoNewNameData.h"
#include "datamodel/EventInfoNewName.h"
#include "datamodel/MutableEventInfoNewName.h"
#include "datamodel/EventInfoNewNameObj.h"
#include "datamodel/EventInfoNewNameCollectionData.h"

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




class EventInfoNewNameCollectionIterator {
public:
  EventInfoNewNameCollectionIterator(size_t index, const EventInfoNewNameObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}), m_collection(collection) {}

  EventInfoNewNameCollectionIterator(const EventInfoNewNameCollectionIterator&) = delete;
  EventInfoNewNameCollectionIterator& operator=(const EventInfoNewNameCollectionIterator&) = delete;

  bool operator!=(const EventInfoNewNameCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoNewNameCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  EventInfoNewName operator*();
  EventInfoNewName* operator->();
  EventInfoNewNameCollectionIterator& operator++();

private:
  size_t m_index;
  EventInfoNewName m_object;
  const EventInfoNewNameObjPointerContainer* m_collection;
};


class EventInfoNewNameMutableCollectionIterator {
public:
  EventInfoNewNameMutableCollectionIterator(size_t index, const EventInfoNewNameObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<EventInfoNewNameObj>{nullptr}), m_collection(collection) {}

  EventInfoNewNameMutableCollectionIterator(const EventInfoNewNameMutableCollectionIterator&) = delete;
  EventInfoNewNameMutableCollectionIterator& operator=(const EventInfoNewNameMutableCollectionIterator&) = delete;

  bool operator!=(const EventInfoNewNameMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const EventInfoNewNameMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableEventInfoNewName operator*();
  MutableEventInfoNewName* operator->();
  EventInfoNewNameMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableEventInfoNewName m_object;
  const EventInfoNewNameObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class EventInfoNewNameCollection : public podio::CollectionBase {
public:
  using value_type = EventInfoNewName;
  using const_iterator = EventInfoNewNameCollectionIterator;
  using iterator = EventInfoNewNameMutableCollectionIterator;

  EventInfoNewNameCollection();
  EventInfoNewNameCollection(EventInfoNewNameCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  EventInfoNewNameCollection(const EventInfoNewNameCollection& ) = delete;
  EventInfoNewNameCollection& operator=(const EventInfoNewNameCollection& ) = delete;
  EventInfoNewNameCollection(EventInfoNewNameCollection&&) = default;
  EventInfoNewNameCollection& operator=(EventInfoNewNameCollection&&) = default;

//  EventInfoNewNameCollection(EventInfoNewNameVector* data, uint32_t collectionID);
  ~EventInfoNewNameCollection();

  constexpr static auto typeName = "EventInfoNewNameCollection";
  constexpr static auto valueTypeName = "EventInfoNewName";
  constexpr static auto dataTypeName = "EventInfoNewNameData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  EventInfoNewNameCollection* operator->() { return (EventInfoNewNameCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableEventInfoNewName create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableEventInfoNewName create(Args&&... args);

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
  EventInfoNewName operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableEventInfoNewName operator[](std::size_t index);
  /// Returns the const object of given index
  EventInfoNewName at(std::size_t index) const;
  /// Returns the object of given index
  MutableEventInfoNewName at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableEventInfoNewName object);
  /// Append an object to the (subset) collection
  void push_back(EventInfoNewName object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (EventInfoNewNameObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<int> Number(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class EventInfoNewNameCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable EventInfoNewNameCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const EventInfoNewNameCollection& v);

template<typename... Args>
MutableEventInfoNewName EventInfoNewNameCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new EventInfoNewNameObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableEventInfoNewName(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const EventInfoNewNameCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_EventInfoNewName_CollectionData_H
#define DATAMODEL_EventInfoNewName_CollectionData_H

// datamodel specific includes
#include "datamodel/EventInfoNewNameData.h"
#include "datamodel/EventInfoNewNameObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using EventInfoNewNameObjPointerContainer = std::deque<EventInfoNewNameObj*>;
using EventInfoNewNameDataContainer = std::vector<EventInfoNewNameData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class EventInfoNewNameCollectionData {
public:
  /**
   * The Objs of this collection
   */
  EventInfoNewNameObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  EventInfoNewNameCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  EventInfoNewNameCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  EventInfoNewNameCollectionData(const EventInfoNewNameCollectionData&) = delete;
  EventInfoNewNameCollectionData& operator=(const EventInfoNewNameCollectionData&) = delete;
  EventInfoNewNameCollectionData(EventInfoNewNameCollectionData&& other) = default;
  EventInfoNewNameCollectionData& operator=(EventInfoNewNameCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~EventInfoNewNameCollectionData() = default;

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
  std::unique_ptr<EventInfoNewNameDataContainer> m_data{nullptr};
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
  std::vector<double> t(const size_t nElem = 0) const;

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
  double energy{}; ///< energy
  double t{}; ///< time

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleHit_H
#define DATAMODEL_ExampleHit_H

#include "datamodel/ExampleHitObj.h"


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
  ExampleHit(unsigned long long cellID, double x, double y, double z, double energy, double t);

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

  /// Access the energy
  double energy() const;

  /// Access the time
  double t() const;





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
  MutableExampleHit(unsigned long long cellID, double x, double y, double z, double energy, double t);

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

  /// Access the energy
  double energy() const;

  /// Access the time
  double t() const;



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

  /// Set the energy
  void energy(double value);
  /// Get mutable reference to energy
  double& energy();

  /// Set the time
  void t(double value);
  /// Get mutable reference to time
  double& t();






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
  std::vector<double> t(const size_t nElem = 0) const;

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

#ifndef DATAMODEL_ExampleMCCollection_H
#define DATAMODEL_ExampleMCCollection_H

// datamodel specific includes
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMC.h"
#include "datamodel/MutableExampleMC.h"
#include "datamodel/ExampleMCObj.h"
#include "datamodel/ExampleMCCollectionData.h"

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




class ExampleMCCollectionIterator {
public:
  ExampleMCCollectionIterator(size_t index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}), m_collection(collection) {}

  ExampleMCCollectionIterator(const ExampleMCCollectionIterator&) = delete;
  ExampleMCCollectionIterator& operator=(const ExampleMCCollectionIterator&) = delete;

  bool operator!=(const ExampleMCCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleMCCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleMC operator*();
  ExampleMC* operator->();
  ExampleMCCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};


class ExampleMCMutableCollectionIterator {
public:
  ExampleMCMutableCollectionIterator(size_t index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}), m_collection(collection) {}

  ExampleMCMutableCollectionIterator(const ExampleMCMutableCollectionIterator&) = delete;
  ExampleMCMutableCollectionIterator& operator=(const ExampleMCMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleMCMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleMCMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleMC operator*();
  MutableExampleMC* operator->();
  ExampleMCMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleMCCollection : public podio::CollectionBase {
public:
  using value_type = ExampleMC;
  using const_iterator = ExampleMCCollectionIterator;
  using iterator = ExampleMCMutableCollectionIterator;

  ExampleMCCollection();
  ExampleMCCollection(ExampleMCCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleMCCollection(const ExampleMCCollection& ) = delete;
  ExampleMCCollection& operator=(const ExampleMCCollection& ) = delete;
  ExampleMCCollection(ExampleMCCollection&&) = default;
  ExampleMCCollection& operator=(ExampleMCCollection&&) = default;

//  ExampleMCCollection(ExampleMCVector* data, uint32_t collectionID);
  ~ExampleMCCollection();

  constexpr static auto typeName = "ExampleMCCollection";
  constexpr static auto valueTypeName = "ExampleMC";
  constexpr static auto dataTypeName = "ExampleMCData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleMCCollection* operator->() { return (ExampleMCCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleMC create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleMC create(Args&&... args);

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
  ExampleMC operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleMC operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleMC at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleMC at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleMC object);
  /// Append an object to the (subset) collection
  void push_back(ExampleMC object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleMCObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  std::vector<int> PDG(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleMCCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleMCCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleMCCollection& v);

template<typename... Args>
MutableExampleMC ExampleMCCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleMCObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleMCData} constructor
  obj->m_parents = new std::vector<ExampleMC>();
  obj->m_daughters = new std::vector<ExampleMC>();
  m_storage.createRelations(obj);
  return MutableExampleMC(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleMCCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCDATA_H
#define DATAMODEL_ExampleMCDATA_H




/** @class ExampleMCData
 *  Example MC-particle
 *  @author: F.Gaede
 */
class ExampleMCData {
public:
  double energy{}; ///< energy
  int PDG{}; ///< PDG code

  unsigned int parents_begin{};
  unsigned int parents_end{};
  unsigned int daughters_begin{};
  unsigned int daughters_end{};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMC_H
#define DATAMODEL_ExampleMC_H

#include "datamodel/ExampleMCObj.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleMC;
class ExampleMCCollection;
class ExampleMCCollectionData;

/** @class ExampleMC
 *  Example MC-particle
 *  @author: F.Gaede
 */
class ExampleMC {

  friend class MutableExampleMC;
  friend class ExampleMCCollection;
  friend class ExampleMCCollectionData;
  friend class ExampleMCCollectionIterator;

public:
  using mutable_type = MutableExampleMC;
  using collection_type = ExampleMCCollection;

  /// default constructor
  ExampleMC();

  /// Constructor initializing all members
  ExampleMC(double energy, int PDG);

  /// copy constructor
  ExampleMC(const ExampleMC& other) = default;

  /// copy-assignment operator
  ExampleMC& operator=(ExampleMC other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleMC clone() const;

  /// destructor
  ~ExampleMC() = default;

  /// converting constructor from mutable object
  ExampleMC(const MutableExampleMC& other);

  static ExampleMC makeEmpty();

public:

  /// Access the energy
  double energy() const;

  /// Access the PDG code
  int PDG() const;



  std::size_t parents_size() const;
  ExampleMC parents(std::size_t) const;
  std::vector<ExampleMC>::const_iterator parents_begin() const;
  std::vector<ExampleMC>::const_iterator parents_end() const;
  podio::RelationRange<ExampleMC> parents() const;
  std::size_t daughters_size() const;
  ExampleMC daughters(std::size_t) const;
  std::vector<ExampleMC>::const_iterator daughters_begin() const;
  std::vector<ExampleMC>::const_iterator daughters_end() const;
  podio::RelationRange<ExampleMC> daughters() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}; }

  bool operator==(const ExampleMC& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleMC& other) const;

  bool operator!=(const ExampleMC& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleMC& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleMC& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleMC& a, ExampleMC& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleMCObj
  explicit ExampleMC(podio::utils::MaybeSharedPtr<ExampleMCObj> obj);
  ExampleMC(ExampleMCObj* obj);

  podio::utils::MaybeSharedPtr<ExampleMCObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleMC& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleMC& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleMC_H
#define DATAMODEL_MutableExampleMC_H

#include "datamodel/ExampleMCObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleMC.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleMC
 *  Example MC-particle
 *  @author: F.Gaede
 */
class MutableExampleMC {

  friend class ExampleMCCollection;
  friend class ExampleMCMutableCollectionIterator;
  friend class ExampleMC;

public:
  using object_type = ExampleMC;
  using collection_type = ExampleMCCollection;

  /// default constructor
  MutableExampleMC();

  /// Constructor initializing all members
  MutableExampleMC(double energy, int PDG);

  /// copy constructor
  MutableExampleMC(const MutableExampleMC& other) = default;

  /// copy-assignment operator
  MutableExampleMC& operator=(MutableExampleMC other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleMC clone() const;

  /// destructor
  ~MutableExampleMC() = default;


public:

  /// Access the energy
  double energy() const;

  /// Access the PDG code
  int PDG() const;



  /// Set the energy
  void energy(double value);
  /// Get mutable reference to energy
  double& energy();

  /// Set the PDG code
  void PDG(int value);
  /// Get mutable reference to PDG code
  int& PDG();



  void addparents(ExampleMC);
  std::size_t parents_size() const;
  ExampleMC parents(std::size_t) const;
  std::vector<ExampleMC>::const_iterator parents_begin() const;
  std::vector<ExampleMC>::const_iterator parents_end() const;
  podio::RelationRange<ExampleMC> parents() const;
  void adddaughters(ExampleMC);
  std::size_t daughters_size() const;
  ExampleMC daughters(std::size_t) const;
  std::vector<ExampleMC>::const_iterator daughters_begin() const;
  std::vector<ExampleMC>::const_iterator daughters_end() const;
  podio::RelationRange<ExampleMC> daughters() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleMCObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}; }

  bool operator==(const MutableExampleMC& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleMC& other) const;

  bool operator!=(const MutableExampleMC& other) const { return !(*this == other); }
  bool operator!=(const ExampleMC& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleMC& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleMC& a, MutableExampleMC& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleMCObj
  explicit MutableExampleMC(podio::utils::MaybeSharedPtr<ExampleMCObj> obj);

  podio::utils::MaybeSharedPtr<ExampleMCObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleMC& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCOBJ_H
#define DATAMODEL_ExampleMCOBJ_H

// data model specific includes
#include "datamodel/ExampleMCData.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleMC;

class ExampleMCObj {
public:
  /// constructor
  ExampleMCObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleMCObj(const ExampleMCObj&);
  /// constructor from ObjectID and ExampleMCData
  /// does not initialize the internal relation containers
  ExampleMCObj(const podio::ObjectID id, ExampleMCData data);
  /// No assignment operator
  ExampleMCObj& operator=(const ExampleMCObj&) = delete;
  virtual ~ExampleMCObj();

public:
  podio::ObjectID id;
  ExampleMCData data;
  std::vector<ExampleMC>* m_parents{nullptr};
  std::vector<ExampleMC>* m_daughters{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMCCollection_H
#define DATAMODEL_ExampleMCCollection_H

// datamodel specific includes
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMC.h"
#include "datamodel/MutableExampleMC.h"
#include "datamodel/ExampleMCObj.h"
#include "datamodel/ExampleMCCollectionData.h"

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




class ExampleMCCollectionIterator {
public:
  ExampleMCCollectionIterator(size_t index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}), m_collection(collection) {}

  ExampleMCCollectionIterator(const ExampleMCCollectionIterator&) = delete;
  ExampleMCCollectionIterator& operator=(const ExampleMCCollectionIterator&) = delete;

  bool operator!=(const ExampleMCCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleMCCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleMC operator*();
  ExampleMC* operator->();
  ExampleMCCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};


class ExampleMCMutableCollectionIterator {
public:
  ExampleMCMutableCollectionIterator(size_t index, const ExampleMCObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleMCObj>{nullptr}), m_collection(collection) {}

  ExampleMCMutableCollectionIterator(const ExampleMCMutableCollectionIterator&) = delete;
  ExampleMCMutableCollectionIterator& operator=(const ExampleMCMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleMCMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleMCMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleMC operator*();
  MutableExampleMC* operator->();
  ExampleMCMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleMC m_object;
  const ExampleMCObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleMCCollection : public podio::CollectionBase {
public:
  using value_type = ExampleMC;
  using const_iterator = ExampleMCCollectionIterator;
  using iterator = ExampleMCMutableCollectionIterator;

  ExampleMCCollection();
  ExampleMCCollection(ExampleMCCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleMCCollection(const ExampleMCCollection& ) = delete;
  ExampleMCCollection& operator=(const ExampleMCCollection& ) = delete;
  ExampleMCCollection(ExampleMCCollection&&) = default;
  ExampleMCCollection& operator=(ExampleMCCollection&&) = default;

//  ExampleMCCollection(ExampleMCVector* data, uint32_t collectionID);
  ~ExampleMCCollection();

  constexpr static auto typeName = "ExampleMCCollection";
  constexpr static auto valueTypeName = "ExampleMC";
  constexpr static auto dataTypeName = "ExampleMCData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleMCCollection* operator->() { return (ExampleMCCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleMC create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleMC create(Args&&... args);

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
  ExampleMC operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleMC operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleMC at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleMC at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleMC object);
  /// Append an object to the (subset) collection
  void push_back(ExampleMC object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleMCObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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
  std::vector<int> PDG(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleMCCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleMCCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleMCCollection& v);

template<typename... Args>
MutableExampleMC ExampleMCCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleMCObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleMCData} constructor
  obj->m_parents = new std::vector<ExampleMC>();
  obj->m_daughters = new std::vector<ExampleMC>();
  m_storage.createRelations(obj);
  return MutableExampleMC(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleMCCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleMC_CollectionData_H
#define DATAMODEL_ExampleMC_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleMCData.h"
#include "datamodel/ExampleMCObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleMCObjPointerContainer = std::deque<ExampleMCObj*>;
using ExampleMCDataContainer = std::vector<ExampleMCData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleMCCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleMCObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleMCCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleMCCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleMCCollectionData(const ExampleMCCollectionData&) = delete;
  ExampleMCCollectionData& operator=(const ExampleMCCollectionData&) = delete;
  ExampleMCCollectionData(ExampleMCCollectionData&& other) = default;
  ExampleMCCollectionData& operator=(ExampleMCCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleMCCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleMCObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleMC> m_rel_parents;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleMC>> m_rel_parents_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleMC> m_rel_daughters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleMC>> m_rel_daughters_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleMCDataContainer> m_data{nullptr};
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

#ifndef DATAMODEL_ExampleReferencingTypeCollection_H
#define DATAMODEL_ExampleReferencingTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingType.h"
#include "datamodel/MutableExampleReferencingType.h"
#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleReferencingTypeCollectionData.h"

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




class ExampleReferencingTypeCollectionIterator {
public:
  ExampleReferencingTypeCollectionIterator(size_t index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}), m_collection(collection) {}

  ExampleReferencingTypeCollectionIterator(const ExampleReferencingTypeCollectionIterator&) = delete;
  ExampleReferencingTypeCollectionIterator& operator=(const ExampleReferencingTypeCollectionIterator&) = delete;

  bool operator!=(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleReferencingType operator*();
  ExampleReferencingType* operator->();
  ExampleReferencingTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};


class ExampleReferencingTypeMutableCollectionIterator {
public:
  ExampleReferencingTypeMutableCollectionIterator(size_t index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}), m_collection(collection) {}

  ExampleReferencingTypeMutableCollectionIterator(const ExampleReferencingTypeMutableCollectionIterator&) = delete;
  ExampleReferencingTypeMutableCollectionIterator& operator=(const ExampleReferencingTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleReferencingTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleReferencingTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleReferencingType operator*();
  MutableExampleReferencingType* operator->();
  ExampleReferencingTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleReferencingTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExampleReferencingType;
  using const_iterator = ExampleReferencingTypeCollectionIterator;
  using iterator = ExampleReferencingTypeMutableCollectionIterator;

  ExampleReferencingTypeCollection();
  ExampleReferencingTypeCollection(ExampleReferencingTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleReferencingTypeCollection(const ExampleReferencingTypeCollection& ) = delete;
  ExampleReferencingTypeCollection& operator=(const ExampleReferencingTypeCollection& ) = delete;
  ExampleReferencingTypeCollection(ExampleReferencingTypeCollection&&) = default;
  ExampleReferencingTypeCollection& operator=(ExampleReferencingTypeCollection&&) = default;

//  ExampleReferencingTypeCollection(ExampleReferencingTypeVector* data, uint32_t collectionID);
  ~ExampleReferencingTypeCollection();

  constexpr static auto typeName = "ExampleReferencingTypeCollection";
  constexpr static auto valueTypeName = "ExampleReferencingType";
  constexpr static auto dataTypeName = "ExampleReferencingTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleReferencingTypeCollection* operator->() { return (ExampleReferencingTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleReferencingType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleReferencingType create(Args&&... args);

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
  ExampleReferencingType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleReferencingType operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleReferencingType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleReferencingType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleReferencingType object);
  /// Append an object to the (subset) collection
  void push_back(ExampleReferencingType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleReferencingTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleReferencingTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleReferencingTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleReferencingTypeCollection& v);

template<typename... Args>
MutableExampleReferencingType ExampleReferencingTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleReferencingTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleReferencingTypeData} constructor
  obj->m_Clusters = new std::vector<ExampleCluster>();
  obj->m_Refs = new std::vector<ExampleReferencingType>();
  m_storage.createRelations(obj);
  return MutableExampleReferencingType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleReferencingTypeCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeDATA_H
#define DATAMODEL_ExampleReferencingTypeDATA_H




/** @class ExampleReferencingTypeData
 *  Referencing Type
 *  @author: B. Hegner
 */
class ExampleReferencingTypeData {
public:

  unsigned int Clusters_begin{};
  unsigned int Clusters_end{};
  unsigned int Refs_begin{};
  unsigned int Refs_end{};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingType_H
#define DATAMODEL_ExampleReferencingType_H

#include "datamodel/ExampleReferencingTypeObj.h"

#include "datamodel/ExampleCluster.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleReferencingType;
class ExampleReferencingTypeCollection;
class ExampleReferencingTypeCollectionData;

/** @class ExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class ExampleReferencingType {

  friend class MutableExampleReferencingType;
  friend class ExampleReferencingTypeCollection;
  friend class ExampleReferencingTypeCollectionData;
  friend class ExampleReferencingTypeCollectionIterator;

public:
  using mutable_type = MutableExampleReferencingType;
  using collection_type = ExampleReferencingTypeCollection;

  /// default constructor
  ExampleReferencingType();


  /// copy constructor
  ExampleReferencingType(const ExampleReferencingType& other) = default;

  /// copy-assignment operator
  ExampleReferencingType& operator=(ExampleReferencingType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleReferencingType clone() const;

  /// destructor
  ~ExampleReferencingType() = default;

  /// converting constructor from mutable object
  ExampleReferencingType(const MutableExampleReferencingType& other);

  static ExampleReferencingType makeEmpty();

public:



  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;
  std::size_t Refs_size() const;
  ExampleReferencingType Refs(std::size_t) const;
  std::vector<ExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ExampleReferencingType> Refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}; }

  bool operator==(const ExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleReferencingType& other) const;

  bool operator!=(const ExampleReferencingType& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleReferencingType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleReferencingType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleReferencingType& a, ExampleReferencingType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleReferencingTypeObj
  explicit ExampleReferencingType(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> obj);
  ExampleReferencingType(ExampleReferencingTypeObj* obj);

  podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleReferencingType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleReferencingType& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleReferencingType_H
#define DATAMODEL_MutableExampleReferencingType_H

#include "datamodel/ExampleReferencingTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleReferencingType.h"

#include "datamodel/ExampleCluster.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleReferencingType
 *  Referencing Type
 *  @author: B. Hegner
 */
class MutableExampleReferencingType {

  friend class ExampleReferencingTypeCollection;
  friend class ExampleReferencingTypeMutableCollectionIterator;
  friend class ExampleReferencingType;

public:
  using object_type = ExampleReferencingType;
  using collection_type = ExampleReferencingTypeCollection;

  /// default constructor
  MutableExampleReferencingType();


  /// copy constructor
  MutableExampleReferencingType(const MutableExampleReferencingType& other) = default;

  /// copy-assignment operator
  MutableExampleReferencingType& operator=(MutableExampleReferencingType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleReferencingType clone() const;

  /// destructor
  ~MutableExampleReferencingType() = default;


public:





  void addClusters(ExampleCluster);
  std::size_t Clusters_size() const;
  ExampleCluster Clusters(std::size_t) const;
  std::vector<ExampleCluster>::const_iterator Clusters_begin() const;
  std::vector<ExampleCluster>::const_iterator Clusters_end() const;
  podio::RelationRange<ExampleCluster> Clusters() const;
  void addRefs(ExampleReferencingType);
  std::size_t Refs_size() const;
  ExampleReferencingType Refs(std::size_t) const;
  std::vector<ExampleReferencingType>::const_iterator Refs_begin() const;
  std::vector<ExampleReferencingType>::const_iterator Refs_end() const;
  podio::RelationRange<ExampleReferencingType> Refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleReferencingTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}; }

  bool operator==(const MutableExampleReferencingType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleReferencingType& other) const;

  bool operator!=(const MutableExampleReferencingType& other) const { return !(*this == other); }
  bool operator!=(const ExampleReferencingType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleReferencingType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleReferencingType& a, MutableExampleReferencingType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleReferencingTypeObj
  explicit MutableExampleReferencingType(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> obj);

  podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleReferencingType& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeOBJ_H
#define DATAMODEL_ExampleReferencingTypeOBJ_H

// data model specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleCluster.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleReferencingType;

class ExampleReferencingTypeObj {
public:
  /// constructor
  ExampleReferencingTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleReferencingTypeObj(const ExampleReferencingTypeObj&);
  /// constructor from ObjectID and ExampleReferencingTypeData
  /// does not initialize the internal relation containers
  ExampleReferencingTypeObj(const podio::ObjectID id, ExampleReferencingTypeData data);
  /// No assignment operator
  ExampleReferencingTypeObj& operator=(const ExampleReferencingTypeObj&) = delete;
  virtual ~ExampleReferencingTypeObj();

public:
  podio::ObjectID id;
  ExampleReferencingTypeData data;
  std::vector<ExampleCluster>* m_Clusters{nullptr};
  std::vector<ExampleReferencingType>* m_Refs{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingTypeCollection_H
#define DATAMODEL_ExampleReferencingTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingType.h"
#include "datamodel/MutableExampleReferencingType.h"
#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleReferencingTypeCollectionData.h"

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




class ExampleReferencingTypeCollectionIterator {
public:
  ExampleReferencingTypeCollectionIterator(size_t index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}), m_collection(collection) {}

  ExampleReferencingTypeCollectionIterator(const ExampleReferencingTypeCollectionIterator&) = delete;
  ExampleReferencingTypeCollectionIterator& operator=(const ExampleReferencingTypeCollectionIterator&) = delete;

  bool operator!=(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleReferencingTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleReferencingType operator*();
  ExampleReferencingType* operator->();
  ExampleReferencingTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};


class ExampleReferencingTypeMutableCollectionIterator {
public:
  ExampleReferencingTypeMutableCollectionIterator(size_t index, const ExampleReferencingTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleReferencingTypeObj>{nullptr}), m_collection(collection) {}

  ExampleReferencingTypeMutableCollectionIterator(const ExampleReferencingTypeMutableCollectionIterator&) = delete;
  ExampleReferencingTypeMutableCollectionIterator& operator=(const ExampleReferencingTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleReferencingTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleReferencingTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleReferencingType operator*();
  MutableExampleReferencingType* operator->();
  ExampleReferencingTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleReferencingType m_object;
  const ExampleReferencingTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleReferencingTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExampleReferencingType;
  using const_iterator = ExampleReferencingTypeCollectionIterator;
  using iterator = ExampleReferencingTypeMutableCollectionIterator;

  ExampleReferencingTypeCollection();
  ExampleReferencingTypeCollection(ExampleReferencingTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleReferencingTypeCollection(const ExampleReferencingTypeCollection& ) = delete;
  ExampleReferencingTypeCollection& operator=(const ExampleReferencingTypeCollection& ) = delete;
  ExampleReferencingTypeCollection(ExampleReferencingTypeCollection&&) = default;
  ExampleReferencingTypeCollection& operator=(ExampleReferencingTypeCollection&&) = default;

//  ExampleReferencingTypeCollection(ExampleReferencingTypeVector* data, uint32_t collectionID);
  ~ExampleReferencingTypeCollection();

  constexpr static auto typeName = "ExampleReferencingTypeCollection";
  constexpr static auto valueTypeName = "ExampleReferencingType";
  constexpr static auto dataTypeName = "ExampleReferencingTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleReferencingTypeCollection* operator->() { return (ExampleReferencingTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleReferencingType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleReferencingType create(Args&&... args);

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
  ExampleReferencingType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleReferencingType operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleReferencingType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleReferencingType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleReferencingType object);
  /// Append an object to the (subset) collection
  void push_back(ExampleReferencingType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleReferencingTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleReferencingTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleReferencingTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleReferencingTypeCollection& v);

template<typename... Args>
MutableExampleReferencingType ExampleReferencingTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleReferencingTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleReferencingTypeData} constructor
  obj->m_Clusters = new std::vector<ExampleCluster>();
  obj->m_Refs = new std::vector<ExampleReferencingType>();
  m_storage.createRelations(obj);
  return MutableExampleReferencingType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleReferencingTypeCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleReferencingType_CollectionData_H
#define DATAMODEL_ExampleReferencingType_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleReferencingTypeData.h"
#include "datamodel/ExampleReferencingTypeObj.h"
#include "datamodel/ExampleCluster.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleReferencingTypeObjPointerContainer = std::deque<ExampleReferencingTypeObj*>;
using ExampleReferencingTypeDataContainer = std::vector<ExampleReferencingTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleReferencingTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleReferencingTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleReferencingTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleReferencingTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleReferencingTypeCollectionData(const ExampleReferencingTypeCollectionData&) = delete;
  ExampleReferencingTypeCollectionData& operator=(const ExampleReferencingTypeCollectionData&) = delete;
  ExampleReferencingTypeCollectionData(ExampleReferencingTypeCollectionData&& other) = default;
  ExampleReferencingTypeCollectionData& operator=(ExampleReferencingTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleReferencingTypeCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleReferencingTypeObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleCluster> m_rel_Clusters;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleCluster>> m_rel_Clusters_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<::ExampleReferencingType> m_rel_Refs;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<::ExampleReferencingType>> m_rel_Refs_tmp{}; ///< Relation buffer for internal book-keeping

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleReferencingTypeDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberCollection_H
#define DATAMODEL_ExampleWithVectorMemberCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMember.h"
#include "datamodel/MutableExampleWithVectorMember.h"
#include "datamodel/ExampleWithVectorMemberObj.h"
#include "datamodel/ExampleWithVectorMemberCollectionData.h"

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




class ExampleWithVectorMemberCollectionIterator {
public:
  ExampleWithVectorMemberCollectionIterator(size_t index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}), m_collection(collection) {}

  ExampleWithVectorMemberCollectionIterator(const ExampleWithVectorMemberCollectionIterator&) = delete;
  ExampleWithVectorMemberCollectionIterator& operator=(const ExampleWithVectorMemberCollectionIterator&) = delete;

  bool operator!=(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithVectorMember operator*();
  ExampleWithVectorMember* operator->();
  ExampleWithVectorMemberCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};


class ExampleWithVectorMemberMutableCollectionIterator {
public:
  ExampleWithVectorMemberMutableCollectionIterator(size_t index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}), m_collection(collection) {}

  ExampleWithVectorMemberMutableCollectionIterator(const ExampleWithVectorMemberMutableCollectionIterator&) = delete;
  ExampleWithVectorMemberMutableCollectionIterator& operator=(const ExampleWithVectorMemberMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithVectorMemberMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithVectorMemberMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithVectorMember operator*();
  MutableExampleWithVectorMember* operator->();
  ExampleWithVectorMemberMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithVectorMemberCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithVectorMember;
  using const_iterator = ExampleWithVectorMemberCollectionIterator;
  using iterator = ExampleWithVectorMemberMutableCollectionIterator;

  ExampleWithVectorMemberCollection();
  ExampleWithVectorMemberCollection(ExampleWithVectorMemberCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithVectorMemberCollection(const ExampleWithVectorMemberCollection& ) = delete;
  ExampleWithVectorMemberCollection& operator=(const ExampleWithVectorMemberCollection& ) = delete;
  ExampleWithVectorMemberCollection(ExampleWithVectorMemberCollection&&) = default;
  ExampleWithVectorMemberCollection& operator=(ExampleWithVectorMemberCollection&&) = default;

//  ExampleWithVectorMemberCollection(ExampleWithVectorMemberVector* data, uint32_t collectionID);
  ~ExampleWithVectorMemberCollection();

  constexpr static auto typeName = "ExampleWithVectorMemberCollection";
  constexpr static auto valueTypeName = "ExampleWithVectorMember";
  constexpr static auto dataTypeName = "ExampleWithVectorMemberData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithVectorMemberCollection* operator->() { return (ExampleWithVectorMemberCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithVectorMember create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithVectorMember create(Args&&... args);

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
  ExampleWithVectorMember operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithVectorMember operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithVectorMember at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithVectorMember at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithVectorMember object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithVectorMember object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithVectorMemberObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithVectorMemberCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithVectorMemberCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMemberCollection& v);

template<typename... Args>
MutableExampleWithVectorMember ExampleWithVectorMemberCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithVectorMemberObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithVectorMemberData} constructor
  obj->m_count = new std::vector<int>();
  m_storage.createRelations(obj);
  return MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithVectorMemberCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberDATA_H
#define DATAMODEL_ExampleWithVectorMemberDATA_H




/** @class ExampleWithVectorMemberData
 *  Type with a vector member
 *  @author: B. Hegner
 */
class ExampleWithVectorMemberData {
public:

  unsigned int count_begin{};
  unsigned int count_end{};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMember_H
#define DATAMODEL_ExampleWithVectorMember_H

#include "datamodel/ExampleWithVectorMemberObj.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithVectorMember;
class ExampleWithVectorMemberCollection;
class ExampleWithVectorMemberCollectionData;

/** @class ExampleWithVectorMember
 *  Type with a vector member
 *  @author: B. Hegner
 */
class ExampleWithVectorMember {

  friend class MutableExampleWithVectorMember;
  friend class ExampleWithVectorMemberCollection;
  friend class ExampleWithVectorMemberCollectionData;
  friend class ExampleWithVectorMemberCollectionIterator;

public:
  using mutable_type = MutableExampleWithVectorMember;
  using collection_type = ExampleWithVectorMemberCollection;

  /// default constructor
  ExampleWithVectorMember();


  /// copy constructor
  ExampleWithVectorMember(const ExampleWithVectorMember& other) = default;

  /// copy-assignment operator
  ExampleWithVectorMember& operator=(ExampleWithVectorMember other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithVectorMember clone() const;

  /// destructor
  ~ExampleWithVectorMember() = default;

  /// converting constructor from mutable object
  ExampleWithVectorMember(const MutableExampleWithVectorMember& other);

  static ExampleWithVectorMember makeEmpty();

public:



  std::size_t count_size() const;
  int count(std::size_t) const;
  std::vector<int>::const_iterator count_begin() const;
  std::vector<int>::const_iterator count_end() const;
  podio::RelationRange<int> count() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithVectorMemberObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}; }

  bool operator==(const ExampleWithVectorMember& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithVectorMember& other) const;

  bool operator!=(const ExampleWithVectorMember& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithVectorMember& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithVectorMember& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithVectorMember& a, ExampleWithVectorMember& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithVectorMemberObj
  explicit ExampleWithVectorMember(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> obj);
  ExampleWithVectorMember(ExampleWithVectorMemberObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMember& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithVectorMember& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithVectorMember_H
#define DATAMODEL_MutableExampleWithVectorMember_H

#include "datamodel/ExampleWithVectorMemberObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithVectorMember.h"

#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithVectorMember
 *  Type with a vector member
 *  @author: B. Hegner
 */
class MutableExampleWithVectorMember {

  friend class ExampleWithVectorMemberCollection;
  friend class ExampleWithVectorMemberMutableCollectionIterator;
  friend class ExampleWithVectorMember;

public:
  using object_type = ExampleWithVectorMember;
  using collection_type = ExampleWithVectorMemberCollection;

  /// default constructor
  MutableExampleWithVectorMember();


  /// copy constructor
  MutableExampleWithVectorMember(const MutableExampleWithVectorMember& other) = default;

  /// copy-assignment operator
  MutableExampleWithVectorMember& operator=(MutableExampleWithVectorMember other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithVectorMember clone() const;

  /// destructor
  ~MutableExampleWithVectorMember() = default;


public:





  void addcount(int);
  std::size_t count_size() const;
  int count(std::size_t) const;
  std::vector<int>::const_iterator count_begin() const;
  std::vector<int>::const_iterator count_end() const;
  podio::RelationRange<int> count() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithVectorMemberObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}; }

  bool operator==(const MutableExampleWithVectorMember& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithVectorMember& other) const;

  bool operator!=(const MutableExampleWithVectorMember& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithVectorMember& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithVectorMember& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithVectorMember& a, MutableExampleWithVectorMember& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithVectorMemberObj
  explicit MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithVectorMember& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberOBJ_H
#define DATAMODEL_ExampleWithVectorMemberOBJ_H

// data model specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>



class ExampleWithVectorMember;

class ExampleWithVectorMemberObj {
public:
  /// constructor
  ExampleWithVectorMemberObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithVectorMemberObj(const ExampleWithVectorMemberObj&);
  /// constructor from ObjectID and ExampleWithVectorMemberData
  /// does not initialize the internal relation containers
  ExampleWithVectorMemberObj(const podio::ObjectID id, ExampleWithVectorMemberData data);
  /// No assignment operator
  ExampleWithVectorMemberObj& operator=(const ExampleWithVectorMemberObj&) = delete;
  virtual ~ExampleWithVectorMemberObj();

public:
  podio::ObjectID id;
  ExampleWithVectorMemberData data;
  std::vector<int>* m_count{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMemberCollection_H
#define DATAMODEL_ExampleWithVectorMemberCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMember.h"
#include "datamodel/MutableExampleWithVectorMember.h"
#include "datamodel/ExampleWithVectorMemberObj.h"
#include "datamodel/ExampleWithVectorMemberCollectionData.h"

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




class ExampleWithVectorMemberCollectionIterator {
public:
  ExampleWithVectorMemberCollectionIterator(size_t index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}), m_collection(collection) {}

  ExampleWithVectorMemberCollectionIterator(const ExampleWithVectorMemberCollectionIterator&) = delete;
  ExampleWithVectorMemberCollectionIterator& operator=(const ExampleWithVectorMemberCollectionIterator&) = delete;

  bool operator!=(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithVectorMemberCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithVectorMember operator*();
  ExampleWithVectorMember* operator->();
  ExampleWithVectorMemberCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};


class ExampleWithVectorMemberMutableCollectionIterator {
public:
  ExampleWithVectorMemberMutableCollectionIterator(size_t index, const ExampleWithVectorMemberObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithVectorMemberObj>{nullptr}), m_collection(collection) {}

  ExampleWithVectorMemberMutableCollectionIterator(const ExampleWithVectorMemberMutableCollectionIterator&) = delete;
  ExampleWithVectorMemberMutableCollectionIterator& operator=(const ExampleWithVectorMemberMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithVectorMemberMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithVectorMemberMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithVectorMember operator*();
  MutableExampleWithVectorMember* operator->();
  ExampleWithVectorMemberMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithVectorMember m_object;
  const ExampleWithVectorMemberObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithVectorMemberCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithVectorMember;
  using const_iterator = ExampleWithVectorMemberCollectionIterator;
  using iterator = ExampleWithVectorMemberMutableCollectionIterator;

  ExampleWithVectorMemberCollection();
  ExampleWithVectorMemberCollection(ExampleWithVectorMemberCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithVectorMemberCollection(const ExampleWithVectorMemberCollection& ) = delete;
  ExampleWithVectorMemberCollection& operator=(const ExampleWithVectorMemberCollection& ) = delete;
  ExampleWithVectorMemberCollection(ExampleWithVectorMemberCollection&&) = default;
  ExampleWithVectorMemberCollection& operator=(ExampleWithVectorMemberCollection&&) = default;

//  ExampleWithVectorMemberCollection(ExampleWithVectorMemberVector* data, uint32_t collectionID);
  ~ExampleWithVectorMemberCollection();

  constexpr static auto typeName = "ExampleWithVectorMemberCollection";
  constexpr static auto valueTypeName = "ExampleWithVectorMember";
  constexpr static auto dataTypeName = "ExampleWithVectorMemberData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithVectorMemberCollection* operator->() { return (ExampleWithVectorMemberCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithVectorMember create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithVectorMember create(Args&&... args);

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
  ExampleWithVectorMember operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithVectorMember operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithVectorMember at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithVectorMember at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithVectorMember object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithVectorMember object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithVectorMemberObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithVectorMemberCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithVectorMemberCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithVectorMemberCollection& v);

template<typename... Args>
MutableExampleWithVectorMember ExampleWithVectorMemberCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithVectorMemberObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithVectorMemberData} constructor
  obj->m_count = new std::vector<int>();
  m_storage.createRelations(obj);
  return MutableExampleWithVectorMember(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithVectorMemberCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithVectorMember_CollectionData_H
#define DATAMODEL_ExampleWithVectorMember_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithVectorMemberData.h"
#include "datamodel/ExampleWithVectorMemberObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithVectorMemberObjPointerContainer = std::deque<ExampleWithVectorMemberObj*>;
using ExampleWithVectorMemberDataContainer = std::vector<ExampleWithVectorMemberData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithVectorMemberCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithVectorMemberObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithVectorMemberCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithVectorMemberCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithVectorMemberCollectionData(const ExampleWithVectorMemberCollectionData&) = delete;
  ExampleWithVectorMemberCollectionData& operator=(const ExampleWithVectorMemberCollectionData&) = delete;
  ExampleWithVectorMemberCollectionData(ExampleWithVectorMemberCollectionData&& other) = default;
  ExampleWithVectorMemberCollectionData& operator=(ExampleWithVectorMemberCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithVectorMemberCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleWithVectorMemberObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations

  // members to handle vector members
  podio::UVecPtr<int> m_vec_count{nullptr}; /// combined vector of all objects in collection
  std::vector<podio::UVecPtr<int>> m_vecs_count{}; /// pointers to individual member vectors

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithVectorMemberDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationCollection_H
#define DATAMODEL_ExampleWithOneRelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelation.h"
#include "datamodel/MutableExampleWithOneRelation.h"
#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleWithOneRelationCollectionData.h"

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




class ExampleWithOneRelationCollectionIterator {
public:
  ExampleWithOneRelationCollectionIterator(size_t index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithOneRelationCollectionIterator(const ExampleWithOneRelationCollectionIterator&) = delete;
  ExampleWithOneRelationCollectionIterator& operator=(const ExampleWithOneRelationCollectionIterator&) = delete;

  bool operator!=(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithOneRelation operator*();
  ExampleWithOneRelation* operator->();
  ExampleWithOneRelationCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};


class ExampleWithOneRelationMutableCollectionIterator {
public:
  ExampleWithOneRelationMutableCollectionIterator(size_t index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithOneRelationMutableCollectionIterator(const ExampleWithOneRelationMutableCollectionIterator&) = delete;
  ExampleWithOneRelationMutableCollectionIterator& operator=(const ExampleWithOneRelationMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithOneRelationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithOneRelationMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithOneRelation operator*();
  MutableExampleWithOneRelation* operator->();
  ExampleWithOneRelationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithOneRelationCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithOneRelation;
  using const_iterator = ExampleWithOneRelationCollectionIterator;
  using iterator = ExampleWithOneRelationMutableCollectionIterator;

  ExampleWithOneRelationCollection();
  ExampleWithOneRelationCollection(ExampleWithOneRelationCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithOneRelationCollection(const ExampleWithOneRelationCollection& ) = delete;
  ExampleWithOneRelationCollection& operator=(const ExampleWithOneRelationCollection& ) = delete;
  ExampleWithOneRelationCollection(ExampleWithOneRelationCollection&&) = default;
  ExampleWithOneRelationCollection& operator=(ExampleWithOneRelationCollection&&) = default;

//  ExampleWithOneRelationCollection(ExampleWithOneRelationVector* data, uint32_t collectionID);
  ~ExampleWithOneRelationCollection();

  constexpr static auto typeName = "ExampleWithOneRelationCollection";
  constexpr static auto valueTypeName = "ExampleWithOneRelation";
  constexpr static auto dataTypeName = "ExampleWithOneRelationData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithOneRelationCollection* operator->() { return (ExampleWithOneRelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithOneRelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithOneRelation create(Args&&... args);

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
  ExampleWithOneRelation operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithOneRelation operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithOneRelation at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithOneRelation at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithOneRelation object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithOneRelation object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithOneRelationObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithOneRelationCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithOneRelationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelationCollection& v);

template<typename... Args>
MutableExampleWithOneRelation ExampleWithOneRelationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithOneRelationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithOneRelationCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationDATA_H
#define DATAMODEL_ExampleWithOneRelationDATA_H




/** @class ExampleWithOneRelationData
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ExampleWithOneRelationData {
public:

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelation_H
#define DATAMODEL_ExampleWithOneRelation_H

#include "datamodel/ExampleWithOneRelationObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleCluster;
class MutableExampleCluster;



class MutableExampleWithOneRelation;
class ExampleWithOneRelationCollection;
class ExampleWithOneRelationCollectionData;

/** @class ExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class ExampleWithOneRelation {

  friend class MutableExampleWithOneRelation;
  friend class ExampleWithOneRelationCollection;
  friend class ExampleWithOneRelationCollectionData;
  friend class ExampleWithOneRelationCollectionIterator;

public:
  using mutable_type = MutableExampleWithOneRelation;
  using collection_type = ExampleWithOneRelationCollection;

  /// default constructor
  ExampleWithOneRelation();


  /// copy constructor
  ExampleWithOneRelation(const ExampleWithOneRelation& other) = default;

  /// copy-assignment operator
  ExampleWithOneRelation& operator=(ExampleWithOneRelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithOneRelation clone() const;

  /// destructor
  ~ExampleWithOneRelation() = default;

  /// converting constructor from mutable object
  ExampleWithOneRelation(const MutableExampleWithOneRelation& other);

  static ExampleWithOneRelation makeEmpty();

public:


  /// Access the a particular cluster
  const ExampleCluster cluster() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}; }

  bool operator==(const ExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithOneRelation& other) const;

  bool operator!=(const ExampleWithOneRelation& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithOneRelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithOneRelation& a, ExampleWithOneRelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithOneRelationObj
  explicit ExampleWithOneRelation(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> obj);
  ExampleWithOneRelation(ExampleWithOneRelationObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelation& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithOneRelation& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithOneRelation_H
#define DATAMODEL_MutableExampleWithOneRelation_H

#include "datamodel/ExampleWithOneRelationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithOneRelation.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleCluster;
class MutableExampleCluster;




/** @class MutableExampleWithOneRelation
 *  Type with one relation member
 *  @author: Benedikt Hegner
 */
class MutableExampleWithOneRelation {

  friend class ExampleWithOneRelationCollection;
  friend class ExampleWithOneRelationMutableCollectionIterator;
  friend class ExampleWithOneRelation;

public:
  using object_type = ExampleWithOneRelation;
  using collection_type = ExampleWithOneRelationCollection;

  /// default constructor
  MutableExampleWithOneRelation();


  /// copy constructor
  MutableExampleWithOneRelation(const MutableExampleWithOneRelation& other) = default;

  /// copy-assignment operator
  MutableExampleWithOneRelation& operator=(MutableExampleWithOneRelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithOneRelation clone() const;

  /// destructor
  ~MutableExampleWithOneRelation() = default;


public:


  /// Access the a particular cluster
  const ExampleCluster cluster() const;


  /// Set the a particular cluster
  void cluster(ExampleCluster value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithOneRelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}; }

  bool operator==(const MutableExampleWithOneRelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithOneRelation& other) const;

  bool operator!=(const MutableExampleWithOneRelation& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithOneRelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithOneRelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithOneRelation& a, MutableExampleWithOneRelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithOneRelationObj
  explicit MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithOneRelation& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationOBJ_H
#define DATAMODEL_ExampleWithOneRelationOBJ_H

// data model specific includes
#include "datamodel/ExampleWithOneRelationData.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleCluster;



class ExampleWithOneRelation;

class ExampleWithOneRelationObj {
public:
  /// constructor
  ExampleWithOneRelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithOneRelationObj(const ExampleWithOneRelationObj&);
  /// constructor from ObjectID and ExampleWithOneRelationData
  /// does not initialize the internal relation containers
  ExampleWithOneRelationObj(const podio::ObjectID id, ExampleWithOneRelationData data);
  /// No assignment operator
  ExampleWithOneRelationObj& operator=(const ExampleWithOneRelationObj&) = delete;
  virtual ~ExampleWithOneRelationObj();

public:
  podio::ObjectID id;
  ExampleWithOneRelationData data;
  ExampleCluster* m_cluster{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelationCollection_H
#define DATAMODEL_ExampleWithOneRelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelation.h"
#include "datamodel/MutableExampleWithOneRelation.h"
#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleWithOneRelationCollectionData.h"

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




class ExampleWithOneRelationCollectionIterator {
public:
  ExampleWithOneRelationCollectionIterator(size_t index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithOneRelationCollectionIterator(const ExampleWithOneRelationCollectionIterator&) = delete;
  ExampleWithOneRelationCollectionIterator& operator=(const ExampleWithOneRelationCollectionIterator&) = delete;

  bool operator!=(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithOneRelationCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithOneRelation operator*();
  ExampleWithOneRelation* operator->();
  ExampleWithOneRelationCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};


class ExampleWithOneRelationMutableCollectionIterator {
public:
  ExampleWithOneRelationMutableCollectionIterator(size_t index, const ExampleWithOneRelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithOneRelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithOneRelationMutableCollectionIterator(const ExampleWithOneRelationMutableCollectionIterator&) = delete;
  ExampleWithOneRelationMutableCollectionIterator& operator=(const ExampleWithOneRelationMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithOneRelationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithOneRelationMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithOneRelation operator*();
  MutableExampleWithOneRelation* operator->();
  ExampleWithOneRelationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithOneRelation m_object;
  const ExampleWithOneRelationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithOneRelationCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithOneRelation;
  using const_iterator = ExampleWithOneRelationCollectionIterator;
  using iterator = ExampleWithOneRelationMutableCollectionIterator;

  ExampleWithOneRelationCollection();
  ExampleWithOneRelationCollection(ExampleWithOneRelationCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithOneRelationCollection(const ExampleWithOneRelationCollection& ) = delete;
  ExampleWithOneRelationCollection& operator=(const ExampleWithOneRelationCollection& ) = delete;
  ExampleWithOneRelationCollection(ExampleWithOneRelationCollection&&) = default;
  ExampleWithOneRelationCollection& operator=(ExampleWithOneRelationCollection&&) = default;

//  ExampleWithOneRelationCollection(ExampleWithOneRelationVector* data, uint32_t collectionID);
  ~ExampleWithOneRelationCollection();

  constexpr static auto typeName = "ExampleWithOneRelationCollection";
  constexpr static auto valueTypeName = "ExampleWithOneRelation";
  constexpr static auto dataTypeName = "ExampleWithOneRelationData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithOneRelationCollection* operator->() { return (ExampleWithOneRelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithOneRelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithOneRelation create(Args&&... args);

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
  ExampleWithOneRelation operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithOneRelation operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithOneRelation at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithOneRelation at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithOneRelation object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithOneRelation object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithOneRelationObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithOneRelationCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithOneRelationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithOneRelationCollection& v);

template<typename... Args>
MutableExampleWithOneRelation ExampleWithOneRelationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithOneRelationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithOneRelation(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithOneRelationCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithOneRelation_CollectionData_H
#define DATAMODEL_ExampleWithOneRelation_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithOneRelationData.h"
#include "datamodel/ExampleWithOneRelationObj.h"
#include "datamodel/ExampleCluster.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithOneRelationObjPointerContainer = std::deque<ExampleWithOneRelationObj*>;
using ExampleWithOneRelationDataContainer = std::vector<ExampleWithOneRelationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithOneRelationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithOneRelationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithOneRelationCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithOneRelationCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithOneRelationCollectionData(const ExampleWithOneRelationCollectionData&) = delete;
  ExampleWithOneRelationCollectionData& operator=(const ExampleWithOneRelationCollectionData&) = delete;
  ExampleWithOneRelationCollectionData(ExampleWithOneRelationCollectionData&& other) = default;
  ExampleWithOneRelationCollectionData& operator=(ExampleWithOneRelationCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithOneRelationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleCluster> m_rel_cluster{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithOneRelationDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponentCollection_H
#define DATAMODEL_ExampleWithArrayComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayComponentData.h"
#include "datamodel/ExampleWithArrayComponent.h"
#include "datamodel/MutableExampleWithArrayComponent.h"
#include "datamodel/ExampleWithArrayComponentObj.h"
#include "datamodel/ExampleWithArrayComponentCollectionData.h"

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




class ExampleWithArrayComponentCollectionIterator {
public:
  ExampleWithArrayComponentCollectionIterator(size_t index, const ExampleWithArrayComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayComponentCollectionIterator(const ExampleWithArrayComponentCollectionIterator&) = delete;
  ExampleWithArrayComponentCollectionIterator& operator=(const ExampleWithArrayComponentCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayComponentCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithArrayComponent operator*();
  ExampleWithArrayComponent* operator->();
  ExampleWithArrayComponentCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithArrayComponent m_object;
  const ExampleWithArrayComponentObjPointerContainer* m_collection;
};


class ExampleWithArrayComponentMutableCollectionIterator {
public:
  ExampleWithArrayComponentMutableCollectionIterator(size_t index, const ExampleWithArrayComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayComponentMutableCollectionIterator(const ExampleWithArrayComponentMutableCollectionIterator&) = delete;
  ExampleWithArrayComponentMutableCollectionIterator& operator=(const ExampleWithArrayComponentMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayComponentMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayComponentMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithArrayComponent operator*();
  MutableExampleWithArrayComponent* operator->();
  ExampleWithArrayComponentMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithArrayComponent m_object;
  const ExampleWithArrayComponentObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithArrayComponentCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithArrayComponent;
  using const_iterator = ExampleWithArrayComponentCollectionIterator;
  using iterator = ExampleWithArrayComponentMutableCollectionIterator;

  ExampleWithArrayComponentCollection();
  ExampleWithArrayComponentCollection(ExampleWithArrayComponentCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithArrayComponentCollection(const ExampleWithArrayComponentCollection& ) = delete;
  ExampleWithArrayComponentCollection& operator=(const ExampleWithArrayComponentCollection& ) = delete;
  ExampleWithArrayComponentCollection(ExampleWithArrayComponentCollection&&) = default;
  ExampleWithArrayComponentCollection& operator=(ExampleWithArrayComponentCollection&&) = default;

//  ExampleWithArrayComponentCollection(ExampleWithArrayComponentVector* data, uint32_t collectionID);
  ~ExampleWithArrayComponentCollection();

  constexpr static auto typeName = "ExampleWithArrayComponentCollection";
  constexpr static auto valueTypeName = "ExampleWithArrayComponent";
  constexpr static auto dataTypeName = "ExampleWithArrayComponentData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayComponentCollection* operator->() { return (ExampleWithArrayComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithArrayComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithArrayComponent create(Args&&... args);

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
  ExampleWithArrayComponent operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithArrayComponent operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithArrayComponent at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithArrayComponent at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithArrayComponent object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithArrayComponent object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithArrayComponentObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<SimpleStruct> s(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithArrayComponentCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithArrayComponentCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayComponentCollection& v);

template<typename... Args>
MutableExampleWithArrayComponent ExampleWithArrayComponentCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithArrayComponentObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayComponentCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponentDATA_H
#define DATAMODEL_ExampleWithArrayComponentDATA_H

#include "datamodel/SimpleStruct.h"



/** @class ExampleWithArrayComponentData
 *  A type that has a component with an array
 *  @author: Thomas Madlener
 */
class ExampleWithArrayComponentData {
public:
  SimpleStruct s{}; ///< a component that has an array

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponent_H
#define DATAMODEL_ExampleWithArrayComponent_H

#include "datamodel/ExampleWithArrayComponentObj.h"

#include "datamodel/SimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithArrayComponent;
class ExampleWithArrayComponentCollection;
class ExampleWithArrayComponentCollectionData;

/** @class ExampleWithArrayComponent
 *  A type that has a component with an array
 *  @author: Thomas Madlener
 */
class ExampleWithArrayComponent {

  friend class MutableExampleWithArrayComponent;
  friend class ExampleWithArrayComponentCollection;
  friend class ExampleWithArrayComponentCollectionData;
  friend class ExampleWithArrayComponentCollectionIterator;

public:
  using mutable_type = MutableExampleWithArrayComponent;
  using collection_type = ExampleWithArrayComponentCollection;

  /// default constructor
  ExampleWithArrayComponent();

  /// Constructor initializing all members
  ExampleWithArrayComponent(SimpleStruct s);

  /// copy constructor
  ExampleWithArrayComponent(const ExampleWithArrayComponent& other) = default;

  /// copy-assignment operator
  ExampleWithArrayComponent& operator=(ExampleWithArrayComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArrayComponent clone() const;

  /// destructor
  ~ExampleWithArrayComponent() = default;

  /// converting constructor from mutable object
  ExampleWithArrayComponent(const MutableExampleWithArrayComponent& other);

  static ExampleWithArrayComponent makeEmpty();

public:

  /// Access the a component that has an array
  const SimpleStruct& s() const;
  /// Access the member of a component that has an array
  int x() const;
  /// Access the member of a component that has an array
  int y() const;
  /// Access the member of a component that has an array
  int z() const;
  /// Access the member of a component that has an array
  int t() const;
  /// Access the member of a component that has an array
  const std::array<int, 4>& p() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}; }

  bool operator==(const ExampleWithArrayComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithArrayComponent& other) const;

  bool operator!=(const ExampleWithArrayComponent& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithArrayComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithArrayComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithArrayComponent& a, ExampleWithArrayComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayComponentObj
  explicit ExampleWithArrayComponent(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> obj);
  ExampleWithArrayComponent(ExampleWithArrayComponentObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayComponent& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayComponent& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithArrayComponent_H
#define DATAMODEL_MutableExampleWithArrayComponent_H

#include "datamodel/ExampleWithArrayComponentObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithArrayComponent.h"

#include "datamodel/SimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithArrayComponent
 *  A type that has a component with an array
 *  @author: Thomas Madlener
 */
class MutableExampleWithArrayComponent {

  friend class ExampleWithArrayComponentCollection;
  friend class ExampleWithArrayComponentMutableCollectionIterator;
  friend class ExampleWithArrayComponent;

public:
  using object_type = ExampleWithArrayComponent;
  using collection_type = ExampleWithArrayComponentCollection;

  /// default constructor
  MutableExampleWithArrayComponent();

  /// Constructor initializing all members
  MutableExampleWithArrayComponent(SimpleStruct s);

  /// copy constructor
  MutableExampleWithArrayComponent(const MutableExampleWithArrayComponent& other) = default;

  /// copy-assignment operator
  MutableExampleWithArrayComponent& operator=(MutableExampleWithArrayComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArrayComponent clone() const;

  /// destructor
  ~MutableExampleWithArrayComponent() = default;


public:

  /// Access the a component that has an array
  const SimpleStruct& s() const;
  /// Access the member of a component that has an array
  int x() const;
  /// Access the member of a component that has an array
  int y() const;
  /// Access the member of a component that has an array
  int z() const;
  /// Access the member of a component that has an array
  int t() const;
  /// Access the member of a component that has an array
  const std::array<int, 4>& p() const;



  /// Set the a component that has an array
  void s(SimpleStruct value);
  /// Get mutable reference to a component that has an array
  SimpleStruct& s();
  /// Set the member of a component that has an array
  void x(int value);
  /// Set the member of a component that has an array
  void y(int value);
  /// Set the member of a component that has an array
  void z(int value);
  /// Set the member of a component that has an array
  void t(int value);
  /// Get reference to the member of a component that has an array
  std::array<int, 4>& p();
  /// Set the member of  a component that has an array
  void p(std::array<int, 4> value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}; }

  bool operator==(const MutableExampleWithArrayComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithArrayComponent& other) const;

  bool operator!=(const MutableExampleWithArrayComponent& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithArrayComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithArrayComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithArrayComponent& a, MutableExampleWithArrayComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayComponentObj
  explicit MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithArrayComponent& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponentOBJ_H
#define DATAMODEL_ExampleWithArrayComponentOBJ_H

// data model specific includes
#include "datamodel/ExampleWithArrayComponentData.h"

#include "podio/ObjectID.h"




class ExampleWithArrayComponent;

class ExampleWithArrayComponentObj {
public:
  /// constructor
  ExampleWithArrayComponentObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithArrayComponentObj(const ExampleWithArrayComponentObj&);
  /// constructor from ObjectID and ExampleWithArrayComponentData
  /// does not initialize the internal relation containers
  ExampleWithArrayComponentObj(const podio::ObjectID id, ExampleWithArrayComponentData data);
  /// No assignment operator
  ExampleWithArrayComponentObj& operator=(const ExampleWithArrayComponentObj&) = delete;
  virtual ~ExampleWithArrayComponentObj() = default;

public:
  podio::ObjectID id;
  ExampleWithArrayComponentData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponentCollection_H
#define DATAMODEL_ExampleWithArrayComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayComponentData.h"
#include "datamodel/ExampleWithArrayComponent.h"
#include "datamodel/MutableExampleWithArrayComponent.h"
#include "datamodel/ExampleWithArrayComponentObj.h"
#include "datamodel/ExampleWithArrayComponentCollectionData.h"

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




class ExampleWithArrayComponentCollectionIterator {
public:
  ExampleWithArrayComponentCollectionIterator(size_t index, const ExampleWithArrayComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayComponentCollectionIterator(const ExampleWithArrayComponentCollectionIterator&) = delete;
  ExampleWithArrayComponentCollectionIterator& operator=(const ExampleWithArrayComponentCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayComponentCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithArrayComponent operator*();
  ExampleWithArrayComponent* operator->();
  ExampleWithArrayComponentCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithArrayComponent m_object;
  const ExampleWithArrayComponentObjPointerContainer* m_collection;
};


class ExampleWithArrayComponentMutableCollectionIterator {
public:
  ExampleWithArrayComponentMutableCollectionIterator(size_t index, const ExampleWithArrayComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayComponentMutableCollectionIterator(const ExampleWithArrayComponentMutableCollectionIterator&) = delete;
  ExampleWithArrayComponentMutableCollectionIterator& operator=(const ExampleWithArrayComponentMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayComponentMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayComponentMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithArrayComponent operator*();
  MutableExampleWithArrayComponent* operator->();
  ExampleWithArrayComponentMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithArrayComponent m_object;
  const ExampleWithArrayComponentObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithArrayComponentCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithArrayComponent;
  using const_iterator = ExampleWithArrayComponentCollectionIterator;
  using iterator = ExampleWithArrayComponentMutableCollectionIterator;

  ExampleWithArrayComponentCollection();
  ExampleWithArrayComponentCollection(ExampleWithArrayComponentCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithArrayComponentCollection(const ExampleWithArrayComponentCollection& ) = delete;
  ExampleWithArrayComponentCollection& operator=(const ExampleWithArrayComponentCollection& ) = delete;
  ExampleWithArrayComponentCollection(ExampleWithArrayComponentCollection&&) = default;
  ExampleWithArrayComponentCollection& operator=(ExampleWithArrayComponentCollection&&) = default;

//  ExampleWithArrayComponentCollection(ExampleWithArrayComponentVector* data, uint32_t collectionID);
  ~ExampleWithArrayComponentCollection();

  constexpr static auto typeName = "ExampleWithArrayComponentCollection";
  constexpr static auto valueTypeName = "ExampleWithArrayComponent";
  constexpr static auto dataTypeName = "ExampleWithArrayComponentData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayComponentCollection* operator->() { return (ExampleWithArrayComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithArrayComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithArrayComponent create(Args&&... args);

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
  ExampleWithArrayComponent operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithArrayComponent operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithArrayComponent at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithArrayComponent at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithArrayComponent object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithArrayComponent object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithArrayComponentObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<SimpleStruct> s(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithArrayComponentCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithArrayComponentCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayComponentCollection& v);

template<typename... Args>
MutableExampleWithArrayComponent ExampleWithArrayComponentCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithArrayComponentObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithArrayComponent(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayComponentCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayComponent_CollectionData_H
#define DATAMODEL_ExampleWithArrayComponent_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayComponentData.h"
#include "datamodel/ExampleWithArrayComponentObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithArrayComponentObjPointerContainer = std::deque<ExampleWithArrayComponentObj*>;
using ExampleWithArrayComponentDataContainer = std::vector<ExampleWithArrayComponentData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithArrayComponentCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithArrayComponentObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithArrayComponentCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithArrayComponentCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithArrayComponentCollectionData(const ExampleWithArrayComponentCollectionData&) = delete;
  ExampleWithArrayComponentCollectionData& operator=(const ExampleWithArrayComponentCollectionData&) = delete;
  ExampleWithArrayComponentCollectionData(ExampleWithArrayComponentCollectionData&& other) = default;
  ExampleWithArrayComponentCollectionData& operator=(ExampleWithArrayComponentCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithArrayComponentCollectionData() = default;

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
  std::unique_ptr<ExampleWithArrayComponentDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentCollection_H
#define DATAMODEL_ExampleWithComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponent.h"
#include "datamodel/MutableExampleWithComponent.h"
#include "datamodel/ExampleWithComponentObj.h"
#include "datamodel/ExampleWithComponentCollectionData.h"

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




class ExampleWithComponentCollectionIterator {
public:
  ExampleWithComponentCollectionIterator(size_t index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithComponentCollectionIterator(const ExampleWithComponentCollectionIterator&) = delete;
  ExampleWithComponentCollectionIterator& operator=(const ExampleWithComponentCollectionIterator&) = delete;

  bool operator!=(const ExampleWithComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithComponentCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithComponent operator*();
  ExampleWithComponent* operator->();
  ExampleWithComponentCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};


class ExampleWithComponentMutableCollectionIterator {
public:
  ExampleWithComponentMutableCollectionIterator(size_t index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithComponentMutableCollectionIterator(const ExampleWithComponentMutableCollectionIterator&) = delete;
  ExampleWithComponentMutableCollectionIterator& operator=(const ExampleWithComponentMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithComponentMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithComponentMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithComponent operator*();
  MutableExampleWithComponent* operator->();
  ExampleWithComponentMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithComponentCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithComponent;
  using const_iterator = ExampleWithComponentCollectionIterator;
  using iterator = ExampleWithComponentMutableCollectionIterator;

  ExampleWithComponentCollection();
  ExampleWithComponentCollection(ExampleWithComponentCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithComponentCollection(const ExampleWithComponentCollection& ) = delete;
  ExampleWithComponentCollection& operator=(const ExampleWithComponentCollection& ) = delete;
  ExampleWithComponentCollection(ExampleWithComponentCollection&&) = default;
  ExampleWithComponentCollection& operator=(ExampleWithComponentCollection&&) = default;

//  ExampleWithComponentCollection(ExampleWithComponentVector* data, uint32_t collectionID);
  ~ExampleWithComponentCollection();

  constexpr static auto typeName = "ExampleWithComponentCollection";
  constexpr static auto valueTypeName = "ExampleWithComponent";
  constexpr static auto dataTypeName = "ExampleWithComponentData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithComponentCollection* operator->() { return (ExampleWithComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithComponent create(Args&&... args);

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
  ExampleWithComponent operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithComponent operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithComponent at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithComponent at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithComponent object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithComponent object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithComponentObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<NotSoSimpleStruct> component(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithComponentCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithComponentCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithComponentCollection& v);

template<typename... Args>
MutableExampleWithComponent ExampleWithComponentCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithComponentObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithComponent(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithComponentCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentDATA_H
#define DATAMODEL_ExampleWithComponentDATA_H

#include "datamodel/NotSoSimpleStruct.h"



/** @class ExampleWithComponentData
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class ExampleWithComponentData {
public:
  NotSoSimpleStruct component{}; ///< a component

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponent_H
#define DATAMODEL_ExampleWithComponent_H

#include "datamodel/ExampleWithComponentObj.h"

#include "datamodel/NotSoSimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithComponent;
class ExampleWithComponentCollection;
class ExampleWithComponentCollectionData;

/** @class ExampleWithComponent
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class ExampleWithComponent {

  friend class MutableExampleWithComponent;
  friend class ExampleWithComponentCollection;
  friend class ExampleWithComponentCollectionData;
  friend class ExampleWithComponentCollectionIterator;

public:
  using mutable_type = MutableExampleWithComponent;
  using collection_type = ExampleWithComponentCollection;

  /// default constructor
  ExampleWithComponent();

  /// Constructor initializing all members
  ExampleWithComponent(NotSoSimpleStruct component);

  /// copy constructor
  ExampleWithComponent(const ExampleWithComponent& other) = default;

  /// copy-assignment operator
  ExampleWithComponent& operator=(ExampleWithComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithComponent clone() const;

  /// destructor
  ~ExampleWithComponent() = default;

  /// converting constructor from mutable object
  ExampleWithComponent(const MutableExampleWithComponent& other);

  static ExampleWithComponent makeEmpty();

public:

  /// Access the a component
  const NotSoSimpleStruct& component() const;
  /// Access the member of a component
  const SimpleStruct& data() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}; }

  bool operator==(const ExampleWithComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithComponent& other) const;

  bool operator!=(const ExampleWithComponent& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithComponent& a, ExampleWithComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithComponentObj
  explicit ExampleWithComponent(podio::utils::MaybeSharedPtr<ExampleWithComponentObj> obj);
  ExampleWithComponent(ExampleWithComponentObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithComponentObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithComponent& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithComponent& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithComponent_H
#define DATAMODEL_MutableExampleWithComponent_H

#include "datamodel/ExampleWithComponentObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithComponent.h"

#include "datamodel/NotSoSimpleStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithComponent
 *  Type with one component
 *  @author: Benedikt Hegner
 */
class MutableExampleWithComponent {

  friend class ExampleWithComponentCollection;
  friend class ExampleWithComponentMutableCollectionIterator;
  friend class ExampleWithComponent;

public:
  using object_type = ExampleWithComponent;
  using collection_type = ExampleWithComponentCollection;

  /// default constructor
  MutableExampleWithComponent();

  /// Constructor initializing all members
  MutableExampleWithComponent(NotSoSimpleStruct component);

  /// copy constructor
  MutableExampleWithComponent(const MutableExampleWithComponent& other) = default;

  /// copy-assignment operator
  MutableExampleWithComponent& operator=(MutableExampleWithComponent other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithComponent clone() const;

  /// destructor
  ~MutableExampleWithComponent() = default;


public:

  /// Access the a component
  const NotSoSimpleStruct& component() const;
  /// Access the member of a component
  const SimpleStruct& data() const;



  /// Set the a component
  void component(NotSoSimpleStruct value);
  /// Get mutable reference to a component
  NotSoSimpleStruct& component();
  /// Get reference to the member of a component
  SimpleStruct& data();
  /// Set the member of  a component
  void data(SimpleStruct value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithComponentObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}; }

  bool operator==(const MutableExampleWithComponent& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithComponent& other) const;

  bool operator!=(const MutableExampleWithComponent& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithComponent& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithComponent& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithComponent& a, MutableExampleWithComponent& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithComponentObj
  explicit MutableExampleWithComponent(podio::utils::MaybeSharedPtr<ExampleWithComponentObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithComponentObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithComponent& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentOBJ_H
#define DATAMODEL_ExampleWithComponentOBJ_H

// data model specific includes
#include "datamodel/ExampleWithComponentData.h"

#include "podio/ObjectID.h"




class ExampleWithComponent;

class ExampleWithComponentObj {
public:
  /// constructor
  ExampleWithComponentObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithComponentObj(const ExampleWithComponentObj&);
  /// constructor from ObjectID and ExampleWithComponentData
  /// does not initialize the internal relation containers
  ExampleWithComponentObj(const podio::ObjectID id, ExampleWithComponentData data);
  /// No assignment operator
  ExampleWithComponentObj& operator=(const ExampleWithComponentObj&) = delete;
  virtual ~ExampleWithComponentObj() = default;

public:
  podio::ObjectID id;
  ExampleWithComponentData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponentCollection_H
#define DATAMODEL_ExampleWithComponentCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponent.h"
#include "datamodel/MutableExampleWithComponent.h"
#include "datamodel/ExampleWithComponentObj.h"
#include "datamodel/ExampleWithComponentCollectionData.h"

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




class ExampleWithComponentCollectionIterator {
public:
  ExampleWithComponentCollectionIterator(size_t index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithComponentCollectionIterator(const ExampleWithComponentCollectionIterator&) = delete;
  ExampleWithComponentCollectionIterator& operator=(const ExampleWithComponentCollectionIterator&) = delete;

  bool operator!=(const ExampleWithComponentCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithComponentCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithComponent operator*();
  ExampleWithComponent* operator->();
  ExampleWithComponentCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};


class ExampleWithComponentMutableCollectionIterator {
public:
  ExampleWithComponentMutableCollectionIterator(size_t index, const ExampleWithComponentObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithComponentObj>{nullptr}), m_collection(collection) {}

  ExampleWithComponentMutableCollectionIterator(const ExampleWithComponentMutableCollectionIterator&) = delete;
  ExampleWithComponentMutableCollectionIterator& operator=(const ExampleWithComponentMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithComponentMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithComponentMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithComponent operator*();
  MutableExampleWithComponent* operator->();
  ExampleWithComponentMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithComponent m_object;
  const ExampleWithComponentObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithComponentCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithComponent;
  using const_iterator = ExampleWithComponentCollectionIterator;
  using iterator = ExampleWithComponentMutableCollectionIterator;

  ExampleWithComponentCollection();
  ExampleWithComponentCollection(ExampleWithComponentCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithComponentCollection(const ExampleWithComponentCollection& ) = delete;
  ExampleWithComponentCollection& operator=(const ExampleWithComponentCollection& ) = delete;
  ExampleWithComponentCollection(ExampleWithComponentCollection&&) = default;
  ExampleWithComponentCollection& operator=(ExampleWithComponentCollection&&) = default;

//  ExampleWithComponentCollection(ExampleWithComponentVector* data, uint32_t collectionID);
  ~ExampleWithComponentCollection();

  constexpr static auto typeName = "ExampleWithComponentCollection";
  constexpr static auto valueTypeName = "ExampleWithComponent";
  constexpr static auto dataTypeName = "ExampleWithComponentData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithComponentCollection* operator->() { return (ExampleWithComponentCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithComponent create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithComponent create(Args&&... args);

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
  ExampleWithComponent operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithComponent operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithComponent at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithComponent at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithComponent object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithComponent object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithComponentObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<NotSoSimpleStruct> component(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithComponentCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithComponentCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithComponentCollection& v);

template<typename... Args>
MutableExampleWithComponent ExampleWithComponentCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithComponentObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithComponent(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithComponentCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithComponent_CollectionData_H
#define DATAMODEL_ExampleWithComponent_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithComponentData.h"
#include "datamodel/ExampleWithComponentObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithComponentObjPointerContainer = std::deque<ExampleWithComponentObj*>;
using ExampleWithComponentDataContainer = std::vector<ExampleWithComponentData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithComponentCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithComponentObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithComponentCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithComponentCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithComponentCollectionData(const ExampleWithComponentCollectionData&) = delete;
  ExampleWithComponentCollectionData& operator=(const ExampleWithComponentCollectionData&) = delete;
  ExampleWithComponentCollectionData(ExampleWithComponentCollectionData&& other) = default;
  ExampleWithComponentCollectionData& operator=(ExampleWithComponentCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithComponentCollectionData() = default;

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
  std::unique_ptr<ExampleWithComponentDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1Collection_H
#define DATAMODEL_ExampleForCyclicDependency1Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1.h"
#include "datamodel/MutableExampleForCyclicDependency1.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency1CollectionData.h"

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




class ExampleForCyclicDependency1CollectionIterator {
public:
  ExampleForCyclicDependency1CollectionIterator(size_t index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency1CollectionIterator(const ExampleForCyclicDependency1CollectionIterator&) = delete;
  ExampleForCyclicDependency1CollectionIterator& operator=(const ExampleForCyclicDependency1CollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleForCyclicDependency1 operator*();
  ExampleForCyclicDependency1* operator->();
  ExampleForCyclicDependency1CollectionIterator& operator++();

private:
  size_t m_index;
  ExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};


class ExampleForCyclicDependency1MutableCollectionIterator {
public:
  ExampleForCyclicDependency1MutableCollectionIterator(size_t index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency1MutableCollectionIterator(const ExampleForCyclicDependency1MutableCollectionIterator&) = delete;
  ExampleForCyclicDependency1MutableCollectionIterator& operator=(const ExampleForCyclicDependency1MutableCollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency1MutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency1MutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleForCyclicDependency1 operator*();
  MutableExampleForCyclicDependency1* operator->();
  ExampleForCyclicDependency1MutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency1Collection : public podio::CollectionBase {
public:
  using value_type = ExampleForCyclicDependency1;
  using const_iterator = ExampleForCyclicDependency1CollectionIterator;
  using iterator = ExampleForCyclicDependency1MutableCollectionIterator;

  ExampleForCyclicDependency1Collection();
  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1CollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleForCyclicDependency1Collection(const ExampleForCyclicDependency1Collection& ) = delete;
  ExampleForCyclicDependency1Collection& operator=(const ExampleForCyclicDependency1Collection& ) = delete;
  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Collection&&) = default;
  ExampleForCyclicDependency1Collection& operator=(ExampleForCyclicDependency1Collection&&) = default;

//  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Vector* data, uint32_t collectionID);
  ~ExampleForCyclicDependency1Collection();

  constexpr static auto typeName = "ExampleForCyclicDependency1Collection";
  constexpr static auto valueTypeName = "ExampleForCyclicDependency1";
  constexpr static auto dataTypeName = "ExampleForCyclicDependency1Data";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency1Collection* operator->() { return (ExampleForCyclicDependency1Collection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleForCyclicDependency1 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleForCyclicDependency1 create(Args&&... args);

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
  ExampleForCyclicDependency1 operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleForCyclicDependency1 operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleForCyclicDependency1 at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleForCyclicDependency1 at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleForCyclicDependency1 object);
  /// Append an object to the (subset) collection
  void push_back(ExampleForCyclicDependency1 object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleForCyclicDependency1Obj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleForCyclicDependency1CollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleForCyclicDependency1CollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1Collection& v);

template<typename... Args>
MutableExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleForCyclicDependency1Obj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1Collection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1DATA_H
#define DATAMODEL_ExampleForCyclicDependency1DATA_H




/** @class ExampleForCyclicDependency1Data
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency1Data {
public:

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1_H
#define DATAMODEL_ExampleForCyclicDependency1_H

#include "datamodel/ExampleForCyclicDependency1Obj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency2;
class MutableExampleForCyclicDependency2;



class MutableExampleForCyclicDependency1;
class ExampleForCyclicDependency1Collection;
class ExampleForCyclicDependency1CollectionData;

/** @class ExampleForCyclicDependency1
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency1 {

  friend class MutableExampleForCyclicDependency1;
  friend class ExampleForCyclicDependency1Collection;
  friend class ExampleForCyclicDependency1CollectionData;
  friend class ExampleForCyclicDependency1CollectionIterator;

public:
  using mutable_type = MutableExampleForCyclicDependency1;
  using collection_type = ExampleForCyclicDependency1Collection;

  /// default constructor
  ExampleForCyclicDependency1();


  /// copy constructor
  ExampleForCyclicDependency1(const ExampleForCyclicDependency1& other) = default;

  /// copy-assignment operator
  ExampleForCyclicDependency1& operator=(ExampleForCyclicDependency1 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency1 clone() const;

  /// destructor
  ~ExampleForCyclicDependency1() = default;

  /// converting constructor from mutable object
  ExampleForCyclicDependency1(const MutableExampleForCyclicDependency1& other);

  static ExampleForCyclicDependency1 makeEmpty();

public:


  /// Access the a ref
  const ExampleForCyclicDependency2 ref() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency1Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}; }

  bool operator==(const ExampleForCyclicDependency1& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleForCyclicDependency1& other) const;

  bool operator!=(const ExampleForCyclicDependency1& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleForCyclicDependency1& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleForCyclicDependency1& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleForCyclicDependency1& a, ExampleForCyclicDependency1& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency1Obj
  explicit ExampleForCyclicDependency1(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> obj);
  ExampleForCyclicDependency1(ExampleForCyclicDependency1Obj* obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleForCyclicDependency1_H
#define DATAMODEL_MutableExampleForCyclicDependency1_H

#include "datamodel/ExampleForCyclicDependency1Obj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleForCyclicDependency1.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency2;
class MutableExampleForCyclicDependency2;




/** @class MutableExampleForCyclicDependency1
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class MutableExampleForCyclicDependency1 {

  friend class ExampleForCyclicDependency1Collection;
  friend class ExampleForCyclicDependency1MutableCollectionIterator;
  friend class ExampleForCyclicDependency1;

public:
  using object_type = ExampleForCyclicDependency1;
  using collection_type = ExampleForCyclicDependency1Collection;

  /// default constructor
  MutableExampleForCyclicDependency1();


  /// copy constructor
  MutableExampleForCyclicDependency1(const MutableExampleForCyclicDependency1& other) = default;

  /// copy-assignment operator
  MutableExampleForCyclicDependency1& operator=(MutableExampleForCyclicDependency1 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency1 clone() const;

  /// destructor
  ~MutableExampleForCyclicDependency1() = default;


public:


  /// Access the a ref
  const ExampleForCyclicDependency2 ref() const;


  /// Set the a ref
  void ref(ExampleForCyclicDependency2 value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency1Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}; }

  bool operator==(const MutableExampleForCyclicDependency1& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleForCyclicDependency1& other) const;

  bool operator!=(const MutableExampleForCyclicDependency1& other) const { return !(*this == other); }
  bool operator!=(const ExampleForCyclicDependency1& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleForCyclicDependency1& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleForCyclicDependency1& a, MutableExampleForCyclicDependency1& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency1Obj
  explicit MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleForCyclicDependency1& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1OBJ_H
#define DATAMODEL_ExampleForCyclicDependency1OBJ_H

// data model specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleForCyclicDependency2;



class ExampleForCyclicDependency1;

class ExampleForCyclicDependency1Obj {
public:
  /// constructor
  ExampleForCyclicDependency1Obj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleForCyclicDependency1Obj(const ExampleForCyclicDependency1Obj&);
  /// constructor from ObjectID and ExampleForCyclicDependency1Data
  /// does not initialize the internal relation containers
  ExampleForCyclicDependency1Obj(const podio::ObjectID id, ExampleForCyclicDependency1Data data);
  /// No assignment operator
  ExampleForCyclicDependency1Obj& operator=(const ExampleForCyclicDependency1Obj&) = delete;
  virtual ~ExampleForCyclicDependency1Obj();

public:
  podio::ObjectID id;
  ExampleForCyclicDependency1Data data;
  ExampleForCyclicDependency2* m_ref{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1Collection_H
#define DATAMODEL_ExampleForCyclicDependency1Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1.h"
#include "datamodel/MutableExampleForCyclicDependency1.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency1CollectionData.h"

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




class ExampleForCyclicDependency1CollectionIterator {
public:
  ExampleForCyclicDependency1CollectionIterator(size_t index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency1CollectionIterator(const ExampleForCyclicDependency1CollectionIterator&) = delete;
  ExampleForCyclicDependency1CollectionIterator& operator=(const ExampleForCyclicDependency1CollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency1CollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleForCyclicDependency1 operator*();
  ExampleForCyclicDependency1* operator->();
  ExampleForCyclicDependency1CollectionIterator& operator++();

private:
  size_t m_index;
  ExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};


class ExampleForCyclicDependency1MutableCollectionIterator {
public:
  ExampleForCyclicDependency1MutableCollectionIterator(size_t index, const ExampleForCyclicDependency1ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency1Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency1MutableCollectionIterator(const ExampleForCyclicDependency1MutableCollectionIterator&) = delete;
  ExampleForCyclicDependency1MutableCollectionIterator& operator=(const ExampleForCyclicDependency1MutableCollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency1MutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency1MutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleForCyclicDependency1 operator*();
  MutableExampleForCyclicDependency1* operator->();
  ExampleForCyclicDependency1MutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleForCyclicDependency1 m_object;
  const ExampleForCyclicDependency1ObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency1Collection : public podio::CollectionBase {
public:
  using value_type = ExampleForCyclicDependency1;
  using const_iterator = ExampleForCyclicDependency1CollectionIterator;
  using iterator = ExampleForCyclicDependency1MutableCollectionIterator;

  ExampleForCyclicDependency1Collection();
  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1CollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleForCyclicDependency1Collection(const ExampleForCyclicDependency1Collection& ) = delete;
  ExampleForCyclicDependency1Collection& operator=(const ExampleForCyclicDependency1Collection& ) = delete;
  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Collection&&) = default;
  ExampleForCyclicDependency1Collection& operator=(ExampleForCyclicDependency1Collection&&) = default;

//  ExampleForCyclicDependency1Collection(ExampleForCyclicDependency1Vector* data, uint32_t collectionID);
  ~ExampleForCyclicDependency1Collection();

  constexpr static auto typeName = "ExampleForCyclicDependency1Collection";
  constexpr static auto valueTypeName = "ExampleForCyclicDependency1";
  constexpr static auto dataTypeName = "ExampleForCyclicDependency1Data";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency1Collection* operator->() { return (ExampleForCyclicDependency1Collection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleForCyclicDependency1 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleForCyclicDependency1 create(Args&&... args);

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
  ExampleForCyclicDependency1 operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleForCyclicDependency1 operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleForCyclicDependency1 at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleForCyclicDependency1 at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleForCyclicDependency1 object);
  /// Append an object to the (subset) collection
  void push_back(ExampleForCyclicDependency1 object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleForCyclicDependency1Obj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleForCyclicDependency1CollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleForCyclicDependency1CollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency1Collection& v);

template<typename... Args>
MutableExampleForCyclicDependency1 ExampleForCyclicDependency1Collection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleForCyclicDependency1Obj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleForCyclicDependency1(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency1Collection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency1_CollectionData_H
#define DATAMODEL_ExampleForCyclicDependency1_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency1Data.h"
#include "datamodel/ExampleForCyclicDependency1Obj.h"
#include "datamodel/ExampleForCyclicDependency2.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleForCyclicDependency1ObjPointerContainer = std::deque<ExampleForCyclicDependency1Obj*>;
using ExampleForCyclicDependency1DataContainer = std::vector<ExampleForCyclicDependency1Data>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleForCyclicDependency1CollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleForCyclicDependency1ObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleForCyclicDependency1CollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleForCyclicDependency1CollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleForCyclicDependency1CollectionData(const ExampleForCyclicDependency1CollectionData&) = delete;
  ExampleForCyclicDependency1CollectionData& operator=(const ExampleForCyclicDependency1CollectionData&) = delete;
  ExampleForCyclicDependency1CollectionData(ExampleForCyclicDependency1CollectionData&& other) = default;
  ExampleForCyclicDependency1CollectionData& operator=(ExampleForCyclicDependency1CollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleForCyclicDependency1CollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleForCyclicDependency2> m_rel_ref{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleForCyclicDependency1DataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2Collection_H
#define DATAMODEL_ExampleForCyclicDependency2Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2.h"
#include "datamodel/MutableExampleForCyclicDependency2.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency2CollectionData.h"

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




class ExampleForCyclicDependency2CollectionIterator {
public:
  ExampleForCyclicDependency2CollectionIterator(size_t index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency2CollectionIterator(const ExampleForCyclicDependency2CollectionIterator&) = delete;
  ExampleForCyclicDependency2CollectionIterator& operator=(const ExampleForCyclicDependency2CollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleForCyclicDependency2 operator*();
  ExampleForCyclicDependency2* operator->();
  ExampleForCyclicDependency2CollectionIterator& operator++();

private:
  size_t m_index;
  ExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};


class ExampleForCyclicDependency2MutableCollectionIterator {
public:
  ExampleForCyclicDependency2MutableCollectionIterator(size_t index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency2MutableCollectionIterator(const ExampleForCyclicDependency2MutableCollectionIterator&) = delete;
  ExampleForCyclicDependency2MutableCollectionIterator& operator=(const ExampleForCyclicDependency2MutableCollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency2MutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency2MutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleForCyclicDependency2 operator*();
  MutableExampleForCyclicDependency2* operator->();
  ExampleForCyclicDependency2MutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency2Collection : public podio::CollectionBase {
public:
  using value_type = ExampleForCyclicDependency2;
  using const_iterator = ExampleForCyclicDependency2CollectionIterator;
  using iterator = ExampleForCyclicDependency2MutableCollectionIterator;

  ExampleForCyclicDependency2Collection();
  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2CollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleForCyclicDependency2Collection(const ExampleForCyclicDependency2Collection& ) = delete;
  ExampleForCyclicDependency2Collection& operator=(const ExampleForCyclicDependency2Collection& ) = delete;
  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Collection&&) = default;
  ExampleForCyclicDependency2Collection& operator=(ExampleForCyclicDependency2Collection&&) = default;

//  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Vector* data, uint32_t collectionID);
  ~ExampleForCyclicDependency2Collection();

  constexpr static auto typeName = "ExampleForCyclicDependency2Collection";
  constexpr static auto valueTypeName = "ExampleForCyclicDependency2";
  constexpr static auto dataTypeName = "ExampleForCyclicDependency2Data";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency2Collection* operator->() { return (ExampleForCyclicDependency2Collection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleForCyclicDependency2 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleForCyclicDependency2 create(Args&&... args);

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
  ExampleForCyclicDependency2 operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleForCyclicDependency2 operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleForCyclicDependency2 at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleForCyclicDependency2 at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleForCyclicDependency2 object);
  /// Append an object to the (subset) collection
  void push_back(ExampleForCyclicDependency2 object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleForCyclicDependency2Obj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleForCyclicDependency2CollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleForCyclicDependency2CollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2Collection& v);

template<typename... Args>
MutableExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleForCyclicDependency2Obj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2Collection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2DATA_H
#define DATAMODEL_ExampleForCyclicDependency2DATA_H




/** @class ExampleForCyclicDependency2Data
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency2Data {
public:

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2_H
#define DATAMODEL_ExampleForCyclicDependency2_H

#include "datamodel/ExampleForCyclicDependency2Obj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency1;
class MutableExampleForCyclicDependency1;



class MutableExampleForCyclicDependency2;
class ExampleForCyclicDependency2Collection;
class ExampleForCyclicDependency2CollectionData;

/** @class ExampleForCyclicDependency2
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class ExampleForCyclicDependency2 {

  friend class MutableExampleForCyclicDependency2;
  friend class ExampleForCyclicDependency2Collection;
  friend class ExampleForCyclicDependency2CollectionData;
  friend class ExampleForCyclicDependency2CollectionIterator;

public:
  using mutable_type = MutableExampleForCyclicDependency2;
  using collection_type = ExampleForCyclicDependency2Collection;

  /// default constructor
  ExampleForCyclicDependency2();


  /// copy constructor
  ExampleForCyclicDependency2(const ExampleForCyclicDependency2& other) = default;

  /// copy-assignment operator
  ExampleForCyclicDependency2& operator=(ExampleForCyclicDependency2 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency2 clone() const;

  /// destructor
  ~ExampleForCyclicDependency2() = default;

  /// converting constructor from mutable object
  ExampleForCyclicDependency2(const MutableExampleForCyclicDependency2& other);

  static ExampleForCyclicDependency2 makeEmpty();

public:


  /// Access the a ref
  const ExampleForCyclicDependency1 ref() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency2Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}; }

  bool operator==(const ExampleForCyclicDependency2& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleForCyclicDependency2& other) const;

  bool operator!=(const ExampleForCyclicDependency2& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleForCyclicDependency2& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleForCyclicDependency2& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleForCyclicDependency2& a, ExampleForCyclicDependency2& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency2Obj
  explicit ExampleForCyclicDependency2(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> obj);
  ExampleForCyclicDependency2(ExampleForCyclicDependency2Obj* obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleForCyclicDependency2_H
#define DATAMODEL_MutableExampleForCyclicDependency2_H

#include "datamodel/ExampleForCyclicDependency2Obj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleForCyclicDependency2.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
class ExampleForCyclicDependency1;
class MutableExampleForCyclicDependency1;




/** @class MutableExampleForCyclicDependency2
 *  Type for cyclic dependency
 *  @author: Benedikt Hegner
 */
class MutableExampleForCyclicDependency2 {

  friend class ExampleForCyclicDependency2Collection;
  friend class ExampleForCyclicDependency2MutableCollectionIterator;
  friend class ExampleForCyclicDependency2;

public:
  using object_type = ExampleForCyclicDependency2;
  using collection_type = ExampleForCyclicDependency2Collection;

  /// default constructor
  MutableExampleForCyclicDependency2();


  /// copy constructor
  MutableExampleForCyclicDependency2(const MutableExampleForCyclicDependency2& other) = default;

  /// copy-assignment operator
  MutableExampleForCyclicDependency2& operator=(MutableExampleForCyclicDependency2 other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleForCyclicDependency2 clone() const;

  /// destructor
  ~MutableExampleForCyclicDependency2() = default;


public:


  /// Access the a ref
  const ExampleForCyclicDependency1 ref() const;


  /// Set the a ref
  void ref(ExampleForCyclicDependency1 value);




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleForCyclicDependency2Obj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}; }

  bool operator==(const MutableExampleForCyclicDependency2& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleForCyclicDependency2& other) const;

  bool operator!=(const MutableExampleForCyclicDependency2& other) const { return !(*this == other); }
  bool operator!=(const ExampleForCyclicDependency2& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleForCyclicDependency2& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleForCyclicDependency2& a, MutableExampleForCyclicDependency2& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleForCyclicDependency2Obj
  explicit MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> obj);

  podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleForCyclicDependency2& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2OBJ_H
#define DATAMODEL_ExampleForCyclicDependency2OBJ_H

// data model specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"

#include "podio/ObjectID.h"

// forward declarations
class ExampleForCyclicDependency1;



class ExampleForCyclicDependency2;

class ExampleForCyclicDependency2Obj {
public:
  /// constructor
  ExampleForCyclicDependency2Obj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleForCyclicDependency2Obj(const ExampleForCyclicDependency2Obj&);
  /// constructor from ObjectID and ExampleForCyclicDependency2Data
  /// does not initialize the internal relation containers
  ExampleForCyclicDependency2Obj(const podio::ObjectID id, ExampleForCyclicDependency2Data data);
  /// No assignment operator
  ExampleForCyclicDependency2Obj& operator=(const ExampleForCyclicDependency2Obj&) = delete;
  virtual ~ExampleForCyclicDependency2Obj();

public:
  podio::ObjectID id;
  ExampleForCyclicDependency2Data data;
  ExampleForCyclicDependency1* m_ref{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2Collection_H
#define DATAMODEL_ExampleForCyclicDependency2Collection_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2.h"
#include "datamodel/MutableExampleForCyclicDependency2.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency2CollectionData.h"

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




class ExampleForCyclicDependency2CollectionIterator {
public:
  ExampleForCyclicDependency2CollectionIterator(size_t index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency2CollectionIterator(const ExampleForCyclicDependency2CollectionIterator&) = delete;
  ExampleForCyclicDependency2CollectionIterator& operator=(const ExampleForCyclicDependency2CollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency2CollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleForCyclicDependency2 operator*();
  ExampleForCyclicDependency2* operator->();
  ExampleForCyclicDependency2CollectionIterator& operator++();

private:
  size_t m_index;
  ExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};


class ExampleForCyclicDependency2MutableCollectionIterator {
public:
  ExampleForCyclicDependency2MutableCollectionIterator(size_t index, const ExampleForCyclicDependency2ObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleForCyclicDependency2Obj>{nullptr}), m_collection(collection) {}

  ExampleForCyclicDependency2MutableCollectionIterator(const ExampleForCyclicDependency2MutableCollectionIterator&) = delete;
  ExampleForCyclicDependency2MutableCollectionIterator& operator=(const ExampleForCyclicDependency2MutableCollectionIterator&) = delete;

  bool operator!=(const ExampleForCyclicDependency2MutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleForCyclicDependency2MutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleForCyclicDependency2 operator*();
  MutableExampleForCyclicDependency2* operator->();
  ExampleForCyclicDependency2MutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleForCyclicDependency2 m_object;
  const ExampleForCyclicDependency2ObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleForCyclicDependency2Collection : public podio::CollectionBase {
public:
  using value_type = ExampleForCyclicDependency2;
  using const_iterator = ExampleForCyclicDependency2CollectionIterator;
  using iterator = ExampleForCyclicDependency2MutableCollectionIterator;

  ExampleForCyclicDependency2Collection();
  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2CollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleForCyclicDependency2Collection(const ExampleForCyclicDependency2Collection& ) = delete;
  ExampleForCyclicDependency2Collection& operator=(const ExampleForCyclicDependency2Collection& ) = delete;
  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Collection&&) = default;
  ExampleForCyclicDependency2Collection& operator=(ExampleForCyclicDependency2Collection&&) = default;

//  ExampleForCyclicDependency2Collection(ExampleForCyclicDependency2Vector* data, uint32_t collectionID);
  ~ExampleForCyclicDependency2Collection();

  constexpr static auto typeName = "ExampleForCyclicDependency2Collection";
  constexpr static auto valueTypeName = "ExampleForCyclicDependency2";
  constexpr static auto dataTypeName = "ExampleForCyclicDependency2Data";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleForCyclicDependency2Collection* operator->() { return (ExampleForCyclicDependency2Collection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleForCyclicDependency2 create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleForCyclicDependency2 create(Args&&... args);

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
  ExampleForCyclicDependency2 operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleForCyclicDependency2 operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleForCyclicDependency2 at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleForCyclicDependency2 at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleForCyclicDependency2 object);
  /// Append an object to the (subset) collection
  void push_back(ExampleForCyclicDependency2 object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleForCyclicDependency2Obj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleForCyclicDependency2CollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleForCyclicDependency2CollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleForCyclicDependency2Collection& v);

template<typename... Args>
MutableExampleForCyclicDependency2 ExampleForCyclicDependency2Collection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleForCyclicDependency2Obj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleForCyclicDependency2(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleForCyclicDependency2Collection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleForCyclicDependency2_CollectionData_H
#define DATAMODEL_ExampleForCyclicDependency2_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleForCyclicDependency2Data.h"
#include "datamodel/ExampleForCyclicDependency2Obj.h"
#include "datamodel/ExampleForCyclicDependency1.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleForCyclicDependency2ObjPointerContainer = std::deque<ExampleForCyclicDependency2Obj*>;
using ExampleForCyclicDependency2DataContainer = std::vector<ExampleForCyclicDependency2Data>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleForCyclicDependency2CollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleForCyclicDependency2ObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleForCyclicDependency2CollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleForCyclicDependency2CollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleForCyclicDependency2CollectionData(const ExampleForCyclicDependency2CollectionData&) = delete;
  ExampleForCyclicDependency2CollectionData& operator=(const ExampleForCyclicDependency2CollectionData&) = delete;
  ExampleForCyclicDependency2CollectionData(ExampleForCyclicDependency2CollectionData&& other) = default;
  ExampleForCyclicDependency2CollectionData& operator=(ExampleForCyclicDependency2CollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleForCyclicDependency2CollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();


  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<::ExampleForCyclicDependency1> m_rel_ref{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleForCyclicDependency2DataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespacev2DATA_H
#define DATAMODEL_ExampleWithNamespacev2DATA_H

#include "datamodel/NamespaceStructv2.h"

namespace ex42 {


/** @class ExampleWithNamespacev2Data
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ExampleWithNamespacev2Data {
public:
  ::ex2::NamespaceStructv2 component{}; ///< a component

};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceCollection_H
#define DATAMODEL_ExampleWithNamespaceCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespace.h"
#include "datamodel/MutableExampleWithNamespace.h"
#include "datamodel/ExampleWithNamespaceObj.h"
#include "datamodel/ExampleWithNamespaceCollectionData.h"

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

namespace ex42 {



class ExampleWithNamespaceCollectionIterator {
public:
  ExampleWithNamespaceCollectionIterator(size_t index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}), m_collection(collection) {}

  ExampleWithNamespaceCollectionIterator(const ExampleWithNamespaceCollectionIterator&) = delete;
  ExampleWithNamespaceCollectionIterator& operator=(const ExampleWithNamespaceCollectionIterator&) = delete;

  bool operator!=(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithNamespace operator*();
  ExampleWithNamespace* operator->();
  ExampleWithNamespaceCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};


class ExampleWithNamespaceMutableCollectionIterator {
public:
  ExampleWithNamespaceMutableCollectionIterator(size_t index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}), m_collection(collection) {}

  ExampleWithNamespaceMutableCollectionIterator(const ExampleWithNamespaceMutableCollectionIterator&) = delete;
  ExampleWithNamespaceMutableCollectionIterator& operator=(const ExampleWithNamespaceMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithNamespaceMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithNamespaceMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithNamespace operator*();
  MutableExampleWithNamespace* operator->();
  ExampleWithNamespaceMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithNamespaceCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithNamespace;
  using const_iterator = ExampleWithNamespaceCollectionIterator;
  using iterator = ExampleWithNamespaceMutableCollectionIterator;

  ExampleWithNamespaceCollection();
  ExampleWithNamespaceCollection(ExampleWithNamespaceCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithNamespaceCollection(const ExampleWithNamespaceCollection& ) = delete;
  ExampleWithNamespaceCollection& operator=(const ExampleWithNamespaceCollection& ) = delete;
  ExampleWithNamespaceCollection(ExampleWithNamespaceCollection&&) = default;
  ExampleWithNamespaceCollection& operator=(ExampleWithNamespaceCollection&&) = default;

//  ExampleWithNamespaceCollection(ExampleWithNamespaceVector* data, uint32_t collectionID);
  ~ExampleWithNamespaceCollection();

  constexpr static auto typeName = "ex42::ExampleWithNamespaceCollection";
  constexpr static auto valueTypeName = "ex42::ExampleWithNamespace";
  constexpr static auto dataTypeName = "ex42::ExampleWithNamespaceData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithNamespaceCollection* operator->() { return (ExampleWithNamespaceCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithNamespace create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithNamespace create(Args&&... args);

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
  ExampleWithNamespace operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithNamespace operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithNamespace at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithNamespace at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithNamespace object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithNamespace object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithNamespaceObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<ex2::NamespaceStruct> component(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithNamespaceCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithNamespaceCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespaceCollection& v);

template<typename... Args>
MutableExampleWithNamespace ExampleWithNamespaceCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithNamespaceObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithNamespace(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithNamespaceCollection& collection);
#endif

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceDATA_H
#define DATAMODEL_ExampleWithNamespaceDATA_H

#include "datamodel/NamespaceStruct.h"

namespace ex42 {


/** @class ExampleWithNamespaceData
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ExampleWithNamespaceData {
public:
  ::ex2::NamespaceStruct component{}; ///< a component

};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespace_H
#define DATAMODEL_ExampleWithNamespace_H

#include "datamodel/ExampleWithNamespaceObj.h"

#include "datamodel/NamespaceStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace ex42 {

class MutableExampleWithNamespace;
class ExampleWithNamespaceCollection;
class ExampleWithNamespaceCollectionData;

/** @class ExampleWithNamespace
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class ExampleWithNamespace {

  friend class MutableExampleWithNamespace;
  friend class ExampleWithNamespaceCollection;
  friend class ex42::ExampleWithNamespaceCollectionData;
  friend class ExampleWithNamespaceCollectionIterator;

public:
  using mutable_type = MutableExampleWithNamespace;
  using collection_type = ExampleWithNamespaceCollection;

  /// default constructor
  ExampleWithNamespace();

  /// Constructor initializing all members
  ExampleWithNamespace(ex2::NamespaceStruct component);

  /// copy constructor
  ExampleWithNamespace(const ExampleWithNamespace& other) = default;

  /// copy-assignment operator
  ExampleWithNamespace& operator=(ExampleWithNamespace other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithNamespace clone() const;

  /// destructor
  ~ExampleWithNamespace() = default;

  /// converting constructor from mutable object
  ExampleWithNamespace(const MutableExampleWithNamespace& other);

  static ExampleWithNamespace makeEmpty();

public:

  /// Access the a component
  const ex2::NamespaceStruct& component() const;
  /// Access the member of a component
  int x() const;
  /// Access the member of a component
  int y_new() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithNamespaceObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}; }

  bool operator==(const ExampleWithNamespace& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithNamespace& other) const;

  bool operator!=(const ExampleWithNamespace& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithNamespace& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithNamespace& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithNamespace& a, ExampleWithNamespace& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithNamespaceObj
  explicit ExampleWithNamespace(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> obj);
  ExampleWithNamespace(ExampleWithNamespaceObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespace& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithNamespace& value);
#endif


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithNamespace_H
#define DATAMODEL_MutableExampleWithNamespace_H

#include "datamodel/ExampleWithNamespaceObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithNamespace.h"

#include "datamodel/NamespaceStruct.h"

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif



namespace ex42 {


/** @class MutableExampleWithNamespace
 *  Type with namespace and namespaced member
 *  @author: Joschka Lingemann
 */
class MutableExampleWithNamespace {

  friend class ExampleWithNamespaceCollection;
  friend class ExampleWithNamespaceMutableCollectionIterator;
  friend class ExampleWithNamespace;

public:
  using object_type = ExampleWithNamespace;
  using collection_type = ExampleWithNamespaceCollection;

  /// default constructor
  MutableExampleWithNamespace();

  /// Constructor initializing all members
  MutableExampleWithNamespace(ex2::NamespaceStruct component);

  /// copy constructor
  MutableExampleWithNamespace(const MutableExampleWithNamespace& other) = default;

  /// copy-assignment operator
  MutableExampleWithNamespace& operator=(MutableExampleWithNamespace other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithNamespace clone() const;

  /// destructor
  ~MutableExampleWithNamespace() = default;


public:

  /// Access the a component
  const ex2::NamespaceStruct& component() const;
  /// Access the member of a component
  int x() const;
  /// Access the member of a component
  int y_new() const;



  /// Set the a component
  void component(ex2::NamespaceStruct value);
  /// Get mutable reference to a component
  ex2::NamespaceStruct& component();
  /// Set the member of a component
  void x(int value);
  /// Set the member of a component
  void y_new(int value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithNamespaceObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}; }

  bool operator==(const MutableExampleWithNamespace& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithNamespace& other) const;

  bool operator!=(const MutableExampleWithNamespace& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithNamespace& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithNamespace& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithNamespace& a, MutableExampleWithNamespace& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithNamespaceObj
  explicit MutableExampleWithNamespace(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithNamespace& value);
#endif


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceOBJ_H
#define DATAMODEL_ExampleWithNamespaceOBJ_H

// data model specific includes
#include "datamodel/ExampleWithNamespaceData.h"

#include "podio/ObjectID.h"



namespace ex42 {

class ExampleWithNamespace;

class ExampleWithNamespaceObj {
public:
  /// constructor
  ExampleWithNamespaceObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithNamespaceObj(const ExampleWithNamespaceObj&);
  /// constructor from ObjectID and ExampleWithNamespaceData
  /// does not initialize the internal relation containers
  ExampleWithNamespaceObj(const podio::ObjectID id, ExampleWithNamespaceData data);
  /// No assignment operator
  ExampleWithNamespaceObj& operator=(const ExampleWithNamespaceObj&) = delete;
  virtual ~ExampleWithNamespaceObj() = default;

public:
  podio::ObjectID id;
  ExampleWithNamespaceData data;
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespaceCollection_H
#define DATAMODEL_ExampleWithNamespaceCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespace.h"
#include "datamodel/MutableExampleWithNamespace.h"
#include "datamodel/ExampleWithNamespaceObj.h"
#include "datamodel/ExampleWithNamespaceCollectionData.h"

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

namespace ex42 {



class ExampleWithNamespaceCollectionIterator {
public:
  ExampleWithNamespaceCollectionIterator(size_t index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}), m_collection(collection) {}

  ExampleWithNamespaceCollectionIterator(const ExampleWithNamespaceCollectionIterator&) = delete;
  ExampleWithNamespaceCollectionIterator& operator=(const ExampleWithNamespaceCollectionIterator&) = delete;

  bool operator!=(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithNamespaceCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithNamespace operator*();
  ExampleWithNamespace* operator->();
  ExampleWithNamespaceCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};


class ExampleWithNamespaceMutableCollectionIterator {
public:
  ExampleWithNamespaceMutableCollectionIterator(size_t index, const ExampleWithNamespaceObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithNamespaceObj>{nullptr}), m_collection(collection) {}

  ExampleWithNamespaceMutableCollectionIterator(const ExampleWithNamespaceMutableCollectionIterator&) = delete;
  ExampleWithNamespaceMutableCollectionIterator& operator=(const ExampleWithNamespaceMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithNamespaceMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithNamespaceMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithNamespace operator*();
  MutableExampleWithNamespace* operator->();
  ExampleWithNamespaceMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithNamespace m_object;
  const ExampleWithNamespaceObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithNamespaceCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithNamespace;
  using const_iterator = ExampleWithNamespaceCollectionIterator;
  using iterator = ExampleWithNamespaceMutableCollectionIterator;

  ExampleWithNamespaceCollection();
  ExampleWithNamespaceCollection(ExampleWithNamespaceCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithNamespaceCollection(const ExampleWithNamespaceCollection& ) = delete;
  ExampleWithNamespaceCollection& operator=(const ExampleWithNamespaceCollection& ) = delete;
  ExampleWithNamespaceCollection(ExampleWithNamespaceCollection&&) = default;
  ExampleWithNamespaceCollection& operator=(ExampleWithNamespaceCollection&&) = default;

//  ExampleWithNamespaceCollection(ExampleWithNamespaceVector* data, uint32_t collectionID);
  ~ExampleWithNamespaceCollection();

  constexpr static auto typeName = "ex42::ExampleWithNamespaceCollection";
  constexpr static auto valueTypeName = "ex42::ExampleWithNamespace";
  constexpr static auto dataTypeName = "ex42::ExampleWithNamespaceData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithNamespaceCollection* operator->() { return (ExampleWithNamespaceCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithNamespace create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithNamespace create(Args&&... args);

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
  ExampleWithNamespace operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithNamespace operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithNamespace at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithNamespace at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithNamespace object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithNamespace object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithNamespaceObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<ex2::NamespaceStruct> component(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithNamespaceCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithNamespaceCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithNamespaceCollection& v);

template<typename... Args>
MutableExampleWithNamespace ExampleWithNamespaceCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithNamespaceObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithNamespace(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithNamespaceCollection& collection);
#endif

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithNamespace_CollectionData_H
#define DATAMODEL_ExampleWithNamespace_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithNamespaceData.h"
#include "datamodel/ExampleWithNamespaceObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace ex42 {


using ExampleWithNamespaceObjPointerContainer = std::deque<ExampleWithNamespaceObj*>;
using ExampleWithNamespaceDataContainer = std::vector<ExampleWithNamespaceData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithNamespaceCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithNamespaceObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithNamespaceCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithNamespaceCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithNamespaceCollectionData(const ExampleWithNamespaceCollectionData&) = delete;
  ExampleWithNamespaceCollectionData& operator=(const ExampleWithNamespaceCollectionData&) = delete;
  ExampleWithNamespaceCollectionData(ExampleWithNamespaceCollectionData&& other) = default;
  ExampleWithNamespaceCollectionData& operator=(ExampleWithNamespaceCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithNamespaceCollectionData() = default;

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
  std::unique_ptr<ExampleWithNamespaceDataContainer> m_data{nullptr};
};


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationCollection_H
#define DATAMODEL_ExampleWithARelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithARelation.h"
#include "datamodel/MutableExampleWithARelation.h"
#include "datamodel/ExampleWithARelationObj.h"
#include "datamodel/ExampleWithARelationCollectionData.h"

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

namespace ex42 {



class ExampleWithARelationCollectionIterator {
public:
  ExampleWithARelationCollectionIterator(size_t index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithARelationCollectionIterator(const ExampleWithARelationCollectionIterator&) = delete;
  ExampleWithARelationCollectionIterator& operator=(const ExampleWithARelationCollectionIterator&) = delete;

  bool operator!=(const ExampleWithARelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithARelationCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithARelation operator*();
  ExampleWithARelation* operator->();
  ExampleWithARelationCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};


class ExampleWithARelationMutableCollectionIterator {
public:
  ExampleWithARelationMutableCollectionIterator(size_t index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithARelationMutableCollectionIterator(const ExampleWithARelationMutableCollectionIterator&) = delete;
  ExampleWithARelationMutableCollectionIterator& operator=(const ExampleWithARelationMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithARelationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithARelationMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithARelation operator*();
  MutableExampleWithARelation* operator->();
  ExampleWithARelationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithARelationCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithARelation;
  using const_iterator = ExampleWithARelationCollectionIterator;
  using iterator = ExampleWithARelationMutableCollectionIterator;

  ExampleWithARelationCollection();
  ExampleWithARelationCollection(ExampleWithARelationCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithARelationCollection(const ExampleWithARelationCollection& ) = delete;
  ExampleWithARelationCollection& operator=(const ExampleWithARelationCollection& ) = delete;
  ExampleWithARelationCollection(ExampleWithARelationCollection&&) = default;
  ExampleWithARelationCollection& operator=(ExampleWithARelationCollection&&) = default;

//  ExampleWithARelationCollection(ExampleWithARelationVector* data, uint32_t collectionID);
  ~ExampleWithARelationCollection();

  constexpr static auto typeName = "ex42::ExampleWithARelationCollection";
  constexpr static auto valueTypeName = "ex42::ExampleWithARelation";
  constexpr static auto dataTypeName = "ex42::ExampleWithARelationData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithARelationCollection* operator->() { return (ExampleWithARelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithARelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithARelation create(Args&&... args);

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
  ExampleWithARelation operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithARelation operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithARelation at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithARelation at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithARelation object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithARelation object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithARelationObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<double> number(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithARelationCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithARelationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithARelationCollection& v);

template<typename... Args>
MutableExampleWithARelation ExampleWithARelationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithARelationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithARelationData} constructor
  obj->m_refs = new std::vector<ex42::ExampleWithNamespace>();
  m_storage.createRelations(obj);
  return MutableExampleWithARelation(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithARelationCollection& collection);
#endif

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationDATA_H
#define DATAMODEL_ExampleWithARelationDATA_H


namespace ex42 {


/** @class ExampleWithARelationData
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class ExampleWithARelationData {
public:
  double number{}; ///< just a number

  unsigned int refs_begin{};
  unsigned int refs_end{};
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelation_H
#define DATAMODEL_ExampleWithARelation_H

#include "datamodel/ExampleWithARelationObj.h"

#include "datamodel/ExampleWithNamespace.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class MutableExampleWithNamespace;
}


namespace ex42 {

class MutableExampleWithARelation;
class ExampleWithARelationCollection;
class ExampleWithARelationCollectionData;

/** @class ExampleWithARelation
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class ExampleWithARelation {

  friend class MutableExampleWithARelation;
  friend class ExampleWithARelationCollection;
  friend class ex42::ExampleWithARelationCollectionData;
  friend class ExampleWithARelationCollectionIterator;

public:
  using mutable_type = MutableExampleWithARelation;
  using collection_type = ExampleWithARelationCollection;

  /// default constructor
  ExampleWithARelation();

  /// Constructor initializing all members
  ExampleWithARelation(double number);

  /// copy constructor
  ExampleWithARelation(const ExampleWithARelation& other) = default;

  /// copy-assignment operator
  ExampleWithARelation& operator=(ExampleWithARelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithARelation clone() const;

  /// destructor
  ~ExampleWithARelation() = default;

  /// converting constructor from mutable object
  ExampleWithARelation(const MutableExampleWithARelation& other);

  static ExampleWithARelation makeEmpty();

public:

  /// Access the just a number
  double number() const;


  /// Access the a ref in a namespace
  const ex42::ExampleWithNamespace ref() const;

  std::size_t refs_size() const;
  ex42::ExampleWithNamespace refs(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> refs() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithARelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}; }

  bool operator==(const ExampleWithARelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithARelation& other) const;

  bool operator!=(const ExampleWithARelation& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithARelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithARelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithARelation& a, ExampleWithARelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithARelationObj
  explicit ExampleWithARelation(podio::utils::MaybeSharedPtr<ExampleWithARelationObj> obj);
  ExampleWithARelation(ExampleWithARelationObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithARelationObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithARelation& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithARelation& value);
#endif


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithARelation_H
#define DATAMODEL_MutableExampleWithARelation_H

#include "datamodel/ExampleWithARelationObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithARelation.h"

#include "datamodel/ExampleWithNamespace.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class MutableExampleWithNamespace;
}


namespace ex42 {


/** @class MutableExampleWithARelation
 *  Type with namespace and namespaced relation
 *  @author: Joschka Lingemann
 */
class MutableExampleWithARelation {

  friend class ExampleWithARelationCollection;
  friend class ExampleWithARelationMutableCollectionIterator;
  friend class ExampleWithARelation;

public:
  using object_type = ExampleWithARelation;
  using collection_type = ExampleWithARelationCollection;

  /// default constructor
  MutableExampleWithARelation();

  /// Constructor initializing all members
  MutableExampleWithARelation(double number);

  /// copy constructor
  MutableExampleWithARelation(const MutableExampleWithARelation& other) = default;

  /// copy-assignment operator
  MutableExampleWithARelation& operator=(MutableExampleWithARelation other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithARelation clone() const;

  /// destructor
  ~MutableExampleWithARelation() = default;


public:

  /// Access the just a number
  double number() const;


  /// Access the a ref in a namespace
  const ex42::ExampleWithNamespace ref() const;

  /// Set the just a number
  void number(double value);
  /// Get mutable reference to just a number
  double& number();


  /// Set the a ref in a namespace
  void ref(ex42::ExampleWithNamespace value);

  void addrefs(ex42::ExampleWithNamespace);
  std::size_t refs_size() const;
  ex42::ExampleWithNamespace refs(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator refs_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> refs() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithARelationObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}; }

  bool operator==(const MutableExampleWithARelation& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithARelation& other) const;

  bool operator!=(const MutableExampleWithARelation& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithARelation& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithARelation& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithARelation& a, MutableExampleWithARelation& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithARelationObj
  explicit MutableExampleWithARelation(podio::utils::MaybeSharedPtr<ExampleWithARelationObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithARelationObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithARelation& value);
#endif


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationOBJ_H
#define DATAMODEL_ExampleWithARelationOBJ_H

// data model specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithNamespace.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>
// forward declarations
namespace ex42 {
class ExampleWithNamespace;
}


namespace ex42 {

class ExampleWithARelation;

class ExampleWithARelationObj {
public:
  /// constructor
  ExampleWithARelationObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithARelationObj(const ExampleWithARelationObj&);
  /// constructor from ObjectID and ExampleWithARelationData
  /// does not initialize the internal relation containers
  ExampleWithARelationObj(const podio::ObjectID id, ExampleWithARelationData data);
  /// No assignment operator
  ExampleWithARelationObj& operator=(const ExampleWithARelationObj&) = delete;
  virtual ~ExampleWithARelationObj();

public:
  podio::ObjectID id;
  ExampleWithARelationData data;
  ex42::ExampleWithNamespace* m_ref{nullptr};
  std::vector<ex42::ExampleWithNamespace>* m_refs{nullptr};
};

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelationCollection_H
#define DATAMODEL_ExampleWithARelationCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithARelation.h"
#include "datamodel/MutableExampleWithARelation.h"
#include "datamodel/ExampleWithARelationObj.h"
#include "datamodel/ExampleWithARelationCollectionData.h"

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

namespace ex42 {



class ExampleWithARelationCollectionIterator {
public:
  ExampleWithARelationCollectionIterator(size_t index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithARelationCollectionIterator(const ExampleWithARelationCollectionIterator&) = delete;
  ExampleWithARelationCollectionIterator& operator=(const ExampleWithARelationCollectionIterator&) = delete;

  bool operator!=(const ExampleWithARelationCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithARelationCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithARelation operator*();
  ExampleWithARelation* operator->();
  ExampleWithARelationCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};


class ExampleWithARelationMutableCollectionIterator {
public:
  ExampleWithARelationMutableCollectionIterator(size_t index, const ExampleWithARelationObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithARelationObj>{nullptr}), m_collection(collection) {}

  ExampleWithARelationMutableCollectionIterator(const ExampleWithARelationMutableCollectionIterator&) = delete;
  ExampleWithARelationMutableCollectionIterator& operator=(const ExampleWithARelationMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithARelationMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithARelationMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithARelation operator*();
  MutableExampleWithARelation* operator->();
  ExampleWithARelationMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithARelation m_object;
  const ExampleWithARelationObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithARelationCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithARelation;
  using const_iterator = ExampleWithARelationCollectionIterator;
  using iterator = ExampleWithARelationMutableCollectionIterator;

  ExampleWithARelationCollection();
  ExampleWithARelationCollection(ExampleWithARelationCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithARelationCollection(const ExampleWithARelationCollection& ) = delete;
  ExampleWithARelationCollection& operator=(const ExampleWithARelationCollection& ) = delete;
  ExampleWithARelationCollection(ExampleWithARelationCollection&&) = default;
  ExampleWithARelationCollection& operator=(ExampleWithARelationCollection&&) = default;

//  ExampleWithARelationCollection(ExampleWithARelationVector* data, uint32_t collectionID);
  ~ExampleWithARelationCollection();

  constexpr static auto typeName = "ex42::ExampleWithARelationCollection";
  constexpr static auto valueTypeName = "ex42::ExampleWithARelation";
  constexpr static auto dataTypeName = "ex42::ExampleWithARelationData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithARelationCollection* operator->() { return (ExampleWithARelationCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithARelation create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithARelation create(Args&&... args);

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
  ExampleWithARelation operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithARelation operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithARelation at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithARelation at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithARelation object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithARelation object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithARelationObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<double> number(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithARelationCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithARelationCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithARelationCollection& v);

template<typename... Args>
MutableExampleWithARelation ExampleWithARelationCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithARelationObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithARelationData} constructor
  obj->m_refs = new std::vector<ex42::ExampleWithNamespace>();
  m_storage.createRelations(obj);
  return MutableExampleWithARelation(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithARelationCollection& collection);
#endif

} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithARelation_CollectionData_H
#define DATAMODEL_ExampleWithARelation_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithARelationData.h"
#include "datamodel/ExampleWithARelationObj.h"
#include "datamodel/ExampleWithNamespace.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>

namespace ex42 {


using ExampleWithARelationObjPointerContainer = std::deque<ExampleWithARelationObj*>;
using ExampleWithARelationDataContainer = std::vector<ExampleWithARelationData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithARelationCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithARelationObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithARelationCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithARelationCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithARelationCollectionData(const ExampleWithARelationCollectionData&) = delete;
  ExampleWithARelationCollectionData& operator=(const ExampleWithARelationCollectionData&) = delete;
  ExampleWithARelationCollectionData(ExampleWithARelationCollectionData&& other) = default;
  ExampleWithARelationCollectionData& operator=(ExampleWithARelationCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithARelationCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleWithARelationObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<ex42::ExampleWithNamespace> m_rel_refs;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<ex42::ExampleWithNamespace>> m_rel_refs_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<ex42::ExampleWithNamespace> m_rel_ref{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithARelationDataContainer> m_data{nullptr};
};


} // namespace ex42


#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelationsCollection_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelationsCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithDifferentNamespaceRelations.h"
#include "datamodel/MutableExampleWithDifferentNamespaceRelations.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsCollectionData.h"

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




class ExampleWithDifferentNamespaceRelationsCollectionIterator {
public:
  ExampleWithDifferentNamespaceRelationsCollectionIterator(size_t index, const ExampleWithDifferentNamespaceRelationsObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}), m_collection(collection) {}

  ExampleWithDifferentNamespaceRelationsCollectionIterator(const ExampleWithDifferentNamespaceRelationsCollectionIterator&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionIterator& operator=(const ExampleWithDifferentNamespaceRelationsCollectionIterator&) = delete;

  bool operator!=(const ExampleWithDifferentNamespaceRelationsCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithDifferentNamespaceRelationsCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithDifferentNamespaceRelations operator*();
  ExampleWithDifferentNamespaceRelations* operator->();
  ExampleWithDifferentNamespaceRelationsCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithDifferentNamespaceRelations m_object;
  const ExampleWithDifferentNamespaceRelationsObjPointerContainer* m_collection;
};


class ExampleWithDifferentNamespaceRelationsMutableCollectionIterator {
public:
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator(size_t index, const ExampleWithDifferentNamespaceRelationsObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}), m_collection(collection) {}

  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator&) = delete;
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& operator=(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithDifferentNamespaceRelations operator*();
  MutableExampleWithDifferentNamespaceRelations* operator->();
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithDifferentNamespaceRelations m_object;
  const ExampleWithDifferentNamespaceRelationsObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithDifferentNamespaceRelationsCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithDifferentNamespaceRelations;
  using const_iterator = ExampleWithDifferentNamespaceRelationsCollectionIterator;
  using iterator = ExampleWithDifferentNamespaceRelationsMutableCollectionIterator;

  ExampleWithDifferentNamespaceRelationsCollection();
  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithDifferentNamespaceRelationsCollection(const ExampleWithDifferentNamespaceRelationsCollection& ) = delete;
  ExampleWithDifferentNamespaceRelationsCollection& operator=(const ExampleWithDifferentNamespaceRelationsCollection& ) = delete;
  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsCollection&&) = default;
  ExampleWithDifferentNamespaceRelationsCollection& operator=(ExampleWithDifferentNamespaceRelationsCollection&&) = default;

//  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsVector* data, uint32_t collectionID);
  ~ExampleWithDifferentNamespaceRelationsCollection();

  constexpr static auto typeName = "ExampleWithDifferentNamespaceRelationsCollection";
  constexpr static auto valueTypeName = "ExampleWithDifferentNamespaceRelations";
  constexpr static auto dataTypeName = "ExampleWithDifferentNamespaceRelationsData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithDifferentNamespaceRelationsCollection* operator->() { return (ExampleWithDifferentNamespaceRelationsCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithDifferentNamespaceRelations create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithDifferentNamespaceRelations create(Args&&... args);

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
  ExampleWithDifferentNamespaceRelations operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithDifferentNamespaceRelations operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithDifferentNamespaceRelations at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithDifferentNamespaceRelations at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithDifferentNamespaceRelations object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithDifferentNamespaceRelations object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithDifferentNamespaceRelationsObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithDifferentNamespaceRelationsCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithDifferentNamespaceRelationsCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithDifferentNamespaceRelationsCollection& v);

template<typename... Args>
MutableExampleWithDifferentNamespaceRelations ExampleWithDifferentNamespaceRelationsCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithDifferentNamespaceRelationsObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithDifferentNamespaceRelationsData} constructor
  obj->m_rels = new std::vector<ex42::ExampleWithNamespace>();
  m_storage.createRelations(obj);
  return MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithDifferentNamespaceRelationsCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelationsDATA_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelationsDATA_H




/** @class ExampleWithDifferentNamespaceRelationsData
 *  Datatype using a namespaced relation without being in the same namespace
 *  @author: Thomas Madlener
 */
class ExampleWithDifferentNamespaceRelationsData {
public:

  unsigned int rels_begin{};
  unsigned int rels_end{};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelations_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelations_H

#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"

#include "datamodel/ExampleWithNamespace.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class MutableExampleWithNamespace;
}



class MutableExampleWithDifferentNamespaceRelations;
class ExampleWithDifferentNamespaceRelationsCollection;
class ExampleWithDifferentNamespaceRelationsCollectionData;

/** @class ExampleWithDifferentNamespaceRelations
 *  Datatype using a namespaced relation without being in the same namespace
 *  @author: Thomas Madlener
 */
class ExampleWithDifferentNamespaceRelations {

  friend class MutableExampleWithDifferentNamespaceRelations;
  friend class ExampleWithDifferentNamespaceRelationsCollection;
  friend class ExampleWithDifferentNamespaceRelationsCollectionData;
  friend class ExampleWithDifferentNamespaceRelationsCollectionIterator;

public:
  using mutable_type = MutableExampleWithDifferentNamespaceRelations;
  using collection_type = ExampleWithDifferentNamespaceRelationsCollection;

  /// default constructor
  ExampleWithDifferentNamespaceRelations();


  /// copy constructor
  ExampleWithDifferentNamespaceRelations(const ExampleWithDifferentNamespaceRelations& other) = default;

  /// copy-assignment operator
  ExampleWithDifferentNamespaceRelations& operator=(ExampleWithDifferentNamespaceRelations other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithDifferentNamespaceRelations clone() const;

  /// destructor
  ~ExampleWithDifferentNamespaceRelations() = default;

  /// converting constructor from mutable object
  ExampleWithDifferentNamespaceRelations(const MutableExampleWithDifferentNamespaceRelations& other);

  static ExampleWithDifferentNamespaceRelations makeEmpty();

public:


  /// Access the a relation in a different namespace
  const ex42::ExampleWithNamespace rel() const;

  std::size_t rels_size() const;
  ex42::ExampleWithNamespace rels(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> rels() const;


  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithDifferentNamespaceRelationsObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}; }

  bool operator==(const ExampleWithDifferentNamespaceRelations& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithDifferentNamespaceRelations& other) const;

  bool operator!=(const ExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithDifferentNamespaceRelations& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithDifferentNamespaceRelations& a, ExampleWithDifferentNamespaceRelations& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithDifferentNamespaceRelationsObj
  explicit ExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> obj);
  ExampleWithDifferentNamespaceRelations(ExampleWithDifferentNamespaceRelationsObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithDifferentNamespaceRelations& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithDifferentNamespaceRelations& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithDifferentNamespaceRelations_H
#define DATAMODEL_MutableExampleWithDifferentNamespaceRelations_H

#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithDifferentNamespaceRelations.h"

#include "datamodel/ExampleWithNamespace.h"
#include "podio/RelationRange.h"
#include <vector>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

// forward declarations
namespace ex42 {
class ExampleWithNamespace;
class MutableExampleWithNamespace;
}




/** @class MutableExampleWithDifferentNamespaceRelations
 *  Datatype using a namespaced relation without being in the same namespace
 *  @author: Thomas Madlener
 */
class MutableExampleWithDifferentNamespaceRelations {

  friend class ExampleWithDifferentNamespaceRelationsCollection;
  friend class ExampleWithDifferentNamespaceRelationsMutableCollectionIterator;
  friend class ExampleWithDifferentNamespaceRelations;

public:
  using object_type = ExampleWithDifferentNamespaceRelations;
  using collection_type = ExampleWithDifferentNamespaceRelationsCollection;

  /// default constructor
  MutableExampleWithDifferentNamespaceRelations();


  /// copy constructor
  MutableExampleWithDifferentNamespaceRelations(const MutableExampleWithDifferentNamespaceRelations& other) = default;

  /// copy-assignment operator
  MutableExampleWithDifferentNamespaceRelations& operator=(MutableExampleWithDifferentNamespaceRelations other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithDifferentNamespaceRelations clone() const;

  /// destructor
  ~MutableExampleWithDifferentNamespaceRelations() = default;


public:


  /// Access the a relation in a different namespace
  const ex42::ExampleWithNamespace rel() const;


  /// Set the a relation in a different namespace
  void rel(ex42::ExampleWithNamespace value);

  void addrels(ex42::ExampleWithNamespace);
  std::size_t rels_size() const;
  ex42::ExampleWithNamespace rels(std::size_t) const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_begin() const;
  std::vector<ex42::ExampleWithNamespace>::const_iterator rels_end() const;
  podio::RelationRange<ex42::ExampleWithNamespace> rels() const;



  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithDifferentNamespaceRelationsObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}; }

  bool operator==(const MutableExampleWithDifferentNamespaceRelations& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithDifferentNamespaceRelations& other) const;

  bool operator!=(const MutableExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithDifferentNamespaceRelations& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithDifferentNamespaceRelations& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithDifferentNamespaceRelations& a, MutableExampleWithDifferentNamespaceRelations& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithDifferentNamespaceRelationsObj
  explicit MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithDifferentNamespaceRelations& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelationsOBJ_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelationsOBJ_H

// data model specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithNamespace.h"
#include <vector>

#include "podio/ObjectID.h"
#include <vector>
// forward declarations
namespace ex42 {
class ExampleWithNamespace;
}



class ExampleWithDifferentNamespaceRelations;

class ExampleWithDifferentNamespaceRelationsObj {
public:
  /// constructor
  ExampleWithDifferentNamespaceRelationsObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithDifferentNamespaceRelationsObj(const ExampleWithDifferentNamespaceRelationsObj&);
  /// constructor from ObjectID and ExampleWithDifferentNamespaceRelationsData
  /// does not initialize the internal relation containers
  ExampleWithDifferentNamespaceRelationsObj(const podio::ObjectID id, ExampleWithDifferentNamespaceRelationsData data);
  /// No assignment operator
  ExampleWithDifferentNamespaceRelationsObj& operator=(const ExampleWithDifferentNamespaceRelationsObj&) = delete;
  virtual ~ExampleWithDifferentNamespaceRelationsObj();

public:
  podio::ObjectID id;
  ExampleWithDifferentNamespaceRelationsData data;
  ex42::ExampleWithNamespace* m_rel{nullptr};
  std::vector<ex42::ExampleWithNamespace>* m_rels{nullptr};
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelationsCollection_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelationsCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithDifferentNamespaceRelations.h"
#include "datamodel/MutableExampleWithDifferentNamespaceRelations.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsCollectionData.h"

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




class ExampleWithDifferentNamespaceRelationsCollectionIterator {
public:
  ExampleWithDifferentNamespaceRelationsCollectionIterator(size_t index, const ExampleWithDifferentNamespaceRelationsObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}), m_collection(collection) {}

  ExampleWithDifferentNamespaceRelationsCollectionIterator(const ExampleWithDifferentNamespaceRelationsCollectionIterator&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionIterator& operator=(const ExampleWithDifferentNamespaceRelationsCollectionIterator&) = delete;

  bool operator!=(const ExampleWithDifferentNamespaceRelationsCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithDifferentNamespaceRelationsCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithDifferentNamespaceRelations operator*();
  ExampleWithDifferentNamespaceRelations* operator->();
  ExampleWithDifferentNamespaceRelationsCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithDifferentNamespaceRelations m_object;
  const ExampleWithDifferentNamespaceRelationsObjPointerContainer* m_collection;
};


class ExampleWithDifferentNamespaceRelationsMutableCollectionIterator {
public:
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator(size_t index, const ExampleWithDifferentNamespaceRelationsObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithDifferentNamespaceRelationsObj>{nullptr}), m_collection(collection) {}

  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator&) = delete;
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& operator=(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithDifferentNamespaceRelations operator*();
  MutableExampleWithDifferentNamespaceRelations* operator->();
  ExampleWithDifferentNamespaceRelationsMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithDifferentNamespaceRelations m_object;
  const ExampleWithDifferentNamespaceRelationsObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithDifferentNamespaceRelationsCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithDifferentNamespaceRelations;
  using const_iterator = ExampleWithDifferentNamespaceRelationsCollectionIterator;
  using iterator = ExampleWithDifferentNamespaceRelationsMutableCollectionIterator;

  ExampleWithDifferentNamespaceRelationsCollection();
  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithDifferentNamespaceRelationsCollection(const ExampleWithDifferentNamespaceRelationsCollection& ) = delete;
  ExampleWithDifferentNamespaceRelationsCollection& operator=(const ExampleWithDifferentNamespaceRelationsCollection& ) = delete;
  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsCollection&&) = default;
  ExampleWithDifferentNamespaceRelationsCollection& operator=(ExampleWithDifferentNamespaceRelationsCollection&&) = default;

//  ExampleWithDifferentNamespaceRelationsCollection(ExampleWithDifferentNamespaceRelationsVector* data, uint32_t collectionID);
  ~ExampleWithDifferentNamespaceRelationsCollection();

  constexpr static auto typeName = "ExampleWithDifferentNamespaceRelationsCollection";
  constexpr static auto valueTypeName = "ExampleWithDifferentNamespaceRelations";
  constexpr static auto dataTypeName = "ExampleWithDifferentNamespaceRelationsData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithDifferentNamespaceRelationsCollection* operator->() { return (ExampleWithDifferentNamespaceRelationsCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithDifferentNamespaceRelations create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithDifferentNamespaceRelations create(Args&&... args);

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
  ExampleWithDifferentNamespaceRelations operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithDifferentNamespaceRelations operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithDifferentNamespaceRelations at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithDifferentNamespaceRelations at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithDifferentNamespaceRelations object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithDifferentNamespaceRelations object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithDifferentNamespaceRelationsObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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


private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithDifferentNamespaceRelationsCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithDifferentNamespaceRelationsCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithDifferentNamespaceRelationsCollection& v);

template<typename... Args>
MutableExampleWithDifferentNamespaceRelations ExampleWithDifferentNamespaceRelationsCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithDifferentNamespaceRelationsObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  // Need to initialize the relation vectors manually for the {ObjectID, ExampleWithDifferentNamespaceRelationsData} constructor
  obj->m_rels = new std::vector<ex42::ExampleWithNamespace>();
  m_storage.createRelations(obj);
  return MutableExampleWithDifferentNamespaceRelations(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithDifferentNamespaceRelationsCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithDifferentNamespaceRelations_CollectionData_H
#define DATAMODEL_ExampleWithDifferentNamespaceRelations_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithDifferentNamespaceRelationsData.h"
#include "datamodel/ExampleWithDifferentNamespaceRelationsObj.h"
#include "datamodel/ExampleWithNamespace.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithDifferentNamespaceRelationsObjPointerContainer = std::deque<ExampleWithDifferentNamespaceRelationsObj*>;
using ExampleWithDifferentNamespaceRelationsDataContainer = std::vector<ExampleWithDifferentNamespaceRelationsData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithDifferentNamespaceRelationsCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithDifferentNamespaceRelationsObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithDifferentNamespaceRelationsCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithDifferentNamespaceRelationsCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithDifferentNamespaceRelationsCollectionData(const ExampleWithDifferentNamespaceRelationsCollectionData&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionData& operator=(const ExampleWithDifferentNamespaceRelationsCollectionData&) = delete;
  ExampleWithDifferentNamespaceRelationsCollectionData(ExampleWithDifferentNamespaceRelationsCollectionData&& other) = default;
  ExampleWithDifferentNamespaceRelationsCollectionData& operator=(ExampleWithDifferentNamespaceRelationsCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithDifferentNamespaceRelationsCollectionData() = default;

  void clear(bool isSubsetColl);

  podio::CollectionWriteBuffers getCollectionBuffers(bool isSubsetColl);

  void prepareForWrite(bool isSubsetColl);

  void prepareAfterRead(uint32_t collectionID);

  void makeSubsetCollection();

  void createRelations(ExampleWithDifferentNamespaceRelationsObj* obj);

  bool setReferences(const podio::ICollectionProvider* collectionProvider, bool isSubsetColl);

private:
  // members to handle 1-to-N-relations
  podio::UVecPtr<ex42::ExampleWithNamespace> m_rel_rels;  ///< Relation buffer for read / write
  std::vector<podio::UVecPtr<ex42::ExampleWithNamespace>> m_rel_rels_tmp{}; ///< Relation buffer for internal book-keeping
  podio::UVecPtr<ex42::ExampleWithNamespace> m_rel_rel{nullptr}; ///< Relation buffer for read / write

  // members to handle vector members

  // I/O related buffers
  podio::CollRefCollection m_refCollections{};
  podio::VectorMembersInfo m_vecmem_info{};
  std::unique_ptr<ExampleWithDifferentNamespaceRelationsDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayv2DATA_H
#define DATAMODEL_ExampleWithArrayv2DATA_H

#include "datamodel/NamespaceStructv2.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>



/** @class ExampleWithArrayv2Data
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArrayv2Data {
public:
  NotSoSimpleStruct arrayStruct{}; ///< component that contains an array
  std::array<int, 4> myArray{}; ///< array-member without space to test regex
  std::array<int, 4> anotherArray2{}; ///< array-member with space to test regex
  std::array<int, 4> snail_case_array{}; ///< snail case to test regex
  std::array<int, 4> snail_case_Array3{}; ///< mixing things up for regex
  std::array<ex2::NamespaceStructv2, 4> structArray{}; ///< an array containing structs

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayCollection_H
#define DATAMODEL_ExampleWithArrayCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArray.h"
#include "datamodel/MutableExampleWithArray.h"
#include "datamodel/ExampleWithArrayObj.h"
#include "datamodel/ExampleWithArrayCollectionData.h"

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




class ExampleWithArrayCollectionIterator {
public:
  ExampleWithArrayCollectionIterator(size_t index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayCollectionIterator(const ExampleWithArrayCollectionIterator&) = delete;
  ExampleWithArrayCollectionIterator& operator=(const ExampleWithArrayCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithArray operator*();
  ExampleWithArray* operator->();
  ExampleWithArrayCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};


class ExampleWithArrayMutableCollectionIterator {
public:
  ExampleWithArrayMutableCollectionIterator(size_t index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayMutableCollectionIterator(const ExampleWithArrayMutableCollectionIterator&) = delete;
  ExampleWithArrayMutableCollectionIterator& operator=(const ExampleWithArrayMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithArray operator*();
  MutableExampleWithArray* operator->();
  ExampleWithArrayMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithArrayCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithArray;
  using const_iterator = ExampleWithArrayCollectionIterator;
  using iterator = ExampleWithArrayMutableCollectionIterator;

  ExampleWithArrayCollection();
  ExampleWithArrayCollection(ExampleWithArrayCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithArrayCollection(const ExampleWithArrayCollection& ) = delete;
  ExampleWithArrayCollection& operator=(const ExampleWithArrayCollection& ) = delete;
  ExampleWithArrayCollection(ExampleWithArrayCollection&&) = default;
  ExampleWithArrayCollection& operator=(ExampleWithArrayCollection&&) = default;

//  ExampleWithArrayCollection(ExampleWithArrayVector* data, uint32_t collectionID);
  ~ExampleWithArrayCollection();

  constexpr static auto typeName = "ExampleWithArrayCollection";
  constexpr static auto valueTypeName = "ExampleWithArray";
  constexpr static auto dataTypeName = "ExampleWithArrayData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayCollection* operator->() { return (ExampleWithArrayCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithArray create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithArray create(Args&&... args);

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
  ExampleWithArray operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithArray operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithArray at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithArray at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithArray object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithArray object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithArrayObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<NotSoSimpleStruct> arrayStruct(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> myArray(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> anotherArray2(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> snail_case_array(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> snail_case_Array3(const size_t nElem = 0) const;
  std::vector<std::array<ex2::NamespaceStruct, 4>> structArray(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithArrayCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithArrayCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayCollection& v);

template<typename... Args>
MutableExampleWithArray ExampleWithArrayCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithArrayObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithArray(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayDATA_H
#define DATAMODEL_ExampleWithArrayDATA_H

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>



/** @class ExampleWithArrayData
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArrayData {
public:
  NotSoSimpleStruct arrayStruct{}; ///< component that contains an array
  std::array<int, 4> myArray{}; ///< array-member without space to test regex
  std::array<int, 4> anotherArray2{}; ///< array-member with space to test regex
  std::array<int, 4> snail_case_array{}; ///< snail case to test regex
  std::array<int, 4> snail_case_Array3{}; ///< mixing things up for regex
  std::array<ex2::NamespaceStruct, 4> structArray{}; ///< an array containing structs

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArray_H
#define DATAMODEL_ExampleWithArray_H

#include "datamodel/ExampleWithArrayObj.h"

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithArray;
class ExampleWithArrayCollection;
class ExampleWithArrayCollectionData;

/** @class ExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class ExampleWithArray {

  friend class MutableExampleWithArray;
  friend class ExampleWithArrayCollection;
  friend class ExampleWithArrayCollectionData;
  friend class ExampleWithArrayCollectionIterator;

public:
  using mutable_type = MutableExampleWithArray;
  using collection_type = ExampleWithArrayCollection;

  /// default constructor
  ExampleWithArray();

  /// Constructor initializing all members
  ExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// copy constructor
  ExampleWithArray(const ExampleWithArray& other) = default;

  /// copy-assignment operator
  ExampleWithArray& operator=(ExampleWithArray other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArray clone() const;

  /// destructor
  ~ExampleWithArray() = default;

  /// converting constructor from mutable object
  ExampleWithArray(const MutableExampleWithArray& other);

  static ExampleWithArray makeEmpty();

public:

  /// Access the component that contains an array
  const NotSoSimpleStruct& arrayStruct() const;
  /// Access the member of component that contains an array
  const SimpleStruct& data() const;

  /// Access the array-member without space to test regex
  const std::array<int, 4>& myArray() const;
  /// Access item i of the array-member without space to test regex
  int myArray(size_t i) const;
  /// Access the array-member with space to test regex
  const std::array<int, 4>& anotherArray2() const;
  /// Access item i of the array-member with space to test regex
  int anotherArray2(size_t i) const;
  /// Access the snail case to test regex
  const std::array<int, 4>& snail_case_array() const;
  /// Access item i of the snail case to test regex
  int snail_case_array(size_t i) const;
  /// Access the mixing things up for regex
  const std::array<int, 4>& snail_case_Array3() const;
  /// Access item i of the mixing things up for regex
  int snail_case_Array3(size_t i) const;
  /// Access the an array containing structs
  const std::array<ex2::NamespaceStruct, 4>& structArray() const;
  /// Access item i of the an array containing structs
  const ex2::NamespaceStruct& structArray(size_t i) const;




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}; }

  bool operator==(const ExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithArray& other) const;

  bool operator!=(const ExampleWithArray& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithArray& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithArray& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithArray& a, ExampleWithArray& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayObj
  explicit ExampleWithArray(podio::utils::MaybeSharedPtr<ExampleWithArrayObj> obj);
  ExampleWithArray(ExampleWithArrayObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArray& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArray& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithArray_H
#define DATAMODEL_MutableExampleWithArray_H

#include "datamodel/ExampleWithArrayObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithArray.h"

#include "datamodel/NamespaceStruct.h"
#include "datamodel/NotSoSimpleStruct.h"
#include <array>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithArray
 *  Datatype with an array member
 *  @author: Joschka Lingemann
 */
class MutableExampleWithArray {

  friend class ExampleWithArrayCollection;
  friend class ExampleWithArrayMutableCollectionIterator;
  friend class ExampleWithArray;

public:
  using object_type = ExampleWithArray;
  using collection_type = ExampleWithArrayCollection;

  /// default constructor
  MutableExampleWithArray();

  /// Constructor initializing all members
  MutableExampleWithArray(NotSoSimpleStruct arrayStruct, std::array<int, 4> myArray, std::array<int, 4> anotherArray2, std::array<int, 4> snail_case_array, std::array<int, 4> snail_case_Array3, std::array<ex2::NamespaceStruct, 4> structArray);

  /// copy constructor
  MutableExampleWithArray(const MutableExampleWithArray& other) = default;

  /// copy-assignment operator
  MutableExampleWithArray& operator=(MutableExampleWithArray other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithArray clone() const;

  /// destructor
  ~MutableExampleWithArray() = default;


public:

  /// Access the component that contains an array
  const NotSoSimpleStruct& arrayStruct() const;
  /// Access the member of component that contains an array
  const SimpleStruct& data() const;

  /// Access the array-member without space to test regex
  const std::array<int, 4>& myArray() const;
  /// Access item i of the array-member without space to test regex
  int myArray(size_t i) const;
  /// Access the array-member with space to test regex
  const std::array<int, 4>& anotherArray2() const;
  /// Access item i of the array-member with space to test regex
  int anotherArray2(size_t i) const;
  /// Access the snail case to test regex
  const std::array<int, 4>& snail_case_array() const;
  /// Access item i of the snail case to test regex
  int snail_case_array(size_t i) const;
  /// Access the mixing things up for regex
  const std::array<int, 4>& snail_case_Array3() const;
  /// Access item i of the mixing things up for regex
  int snail_case_Array3(size_t i) const;
  /// Access the an array containing structs
  const std::array<ex2::NamespaceStruct, 4>& structArray() const;
  /// Access item i of the an array containing structs
  const ex2::NamespaceStruct& structArray(size_t i) const;


  /// Set the component that contains an array
  void arrayStruct(NotSoSimpleStruct value);
  /// Get mutable reference to component that contains an array
  NotSoSimpleStruct& arrayStruct();
  /// Get reference to the member of component that contains an array
  SimpleStruct& data();
  /// Set the member of  component that contains an array
  void data(SimpleStruct value);

  /// Set the array-member without space to test regex
  void myArray(std::array<int, 4> value);
  void myArray(size_t i, int value);
  /// Get mutable reference to array-member without space to test regex
  std::array<int, 4>& myArray();

  /// Set the array-member with space to test regex
  void anotherArray2(std::array<int, 4> value);
  void anotherArray2(size_t i, int value);
  /// Get mutable reference to array-member with space to test regex
  std::array<int, 4>& anotherArray2();

  /// Set the snail case to test regex
  void snail_case_array(std::array<int, 4> value);
  void snail_case_array(size_t i, int value);
  /// Get mutable reference to snail case to test regex
  std::array<int, 4>& snail_case_array();

  /// Set the mixing things up for regex
  void snail_case_Array3(std::array<int, 4> value);
  void snail_case_Array3(size_t i, int value);
  /// Get mutable reference to mixing things up for regex
  std::array<int, 4>& snail_case_Array3();

  /// Set the an array containing structs
  void structArray(std::array<ex2::NamespaceStruct, 4> value);
  void structArray(size_t i, ex2::NamespaceStruct value);
  /// Get mutable reference to an array containing structs
  std::array<ex2::NamespaceStruct, 4>& structArray();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithArrayObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}; }

  bool operator==(const MutableExampleWithArray& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithArray& other) const;

  bool operator!=(const MutableExampleWithArray& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithArray& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithArray& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithArray& a, MutableExampleWithArray& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithArrayObj
  explicit MutableExampleWithArray(podio::utils::MaybeSharedPtr<ExampleWithArrayObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithArrayObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithArray& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayOBJ_H
#define DATAMODEL_ExampleWithArrayOBJ_H

// data model specific includes
#include "datamodel/ExampleWithArrayData.h"

#include "podio/ObjectID.h"




class ExampleWithArray;

class ExampleWithArrayObj {
public:
  /// constructor
  ExampleWithArrayObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithArrayObj(const ExampleWithArrayObj&);
  /// constructor from ObjectID and ExampleWithArrayData
  /// does not initialize the internal relation containers
  ExampleWithArrayObj(const podio::ObjectID id, ExampleWithArrayData data);
  /// No assignment operator
  ExampleWithArrayObj& operator=(const ExampleWithArrayObj&) = delete;
  virtual ~ExampleWithArrayObj() = default;

public:
  podio::ObjectID id;
  ExampleWithArrayData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArrayCollection_H
#define DATAMODEL_ExampleWithArrayCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArray.h"
#include "datamodel/MutableExampleWithArray.h"
#include "datamodel/ExampleWithArrayObj.h"
#include "datamodel/ExampleWithArrayCollectionData.h"

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




class ExampleWithArrayCollectionIterator {
public:
  ExampleWithArrayCollectionIterator(size_t index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayCollectionIterator(const ExampleWithArrayCollectionIterator&) = delete;
  ExampleWithArrayCollectionIterator& operator=(const ExampleWithArrayCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithArray operator*();
  ExampleWithArray* operator->();
  ExampleWithArrayCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};


class ExampleWithArrayMutableCollectionIterator {
public:
  ExampleWithArrayMutableCollectionIterator(size_t index, const ExampleWithArrayObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithArrayObj>{nullptr}), m_collection(collection) {}

  ExampleWithArrayMutableCollectionIterator(const ExampleWithArrayMutableCollectionIterator&) = delete;
  ExampleWithArrayMutableCollectionIterator& operator=(const ExampleWithArrayMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithArrayMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithArrayMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithArray operator*();
  MutableExampleWithArray* operator->();
  ExampleWithArrayMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithArray m_object;
  const ExampleWithArrayObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithArrayCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithArray;
  using const_iterator = ExampleWithArrayCollectionIterator;
  using iterator = ExampleWithArrayMutableCollectionIterator;

  ExampleWithArrayCollection();
  ExampleWithArrayCollection(ExampleWithArrayCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithArrayCollection(const ExampleWithArrayCollection& ) = delete;
  ExampleWithArrayCollection& operator=(const ExampleWithArrayCollection& ) = delete;
  ExampleWithArrayCollection(ExampleWithArrayCollection&&) = default;
  ExampleWithArrayCollection& operator=(ExampleWithArrayCollection&&) = default;

//  ExampleWithArrayCollection(ExampleWithArrayVector* data, uint32_t collectionID);
  ~ExampleWithArrayCollection();

  constexpr static auto typeName = "ExampleWithArrayCollection";
  constexpr static auto valueTypeName = "ExampleWithArray";
  constexpr static auto dataTypeName = "ExampleWithArrayData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithArrayCollection* operator->() { return (ExampleWithArrayCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithArray create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithArray create(Args&&... args);

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
  ExampleWithArray operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithArray operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithArray at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithArray at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithArray object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithArray object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithArrayObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<NotSoSimpleStruct> arrayStruct(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> myArray(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> anotherArray2(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> snail_case_array(const size_t nElem = 0) const;
  std::vector<std::array<int, 4>> snail_case_Array3(const size_t nElem = 0) const;
  std::vector<std::array<ex2::NamespaceStruct, 4>> structArray(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithArrayCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithArrayCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithArrayCollection& v);

template<typename... Args>
MutableExampleWithArray ExampleWithArrayCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithArrayObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithArray(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithArrayCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithArray_CollectionData_H
#define DATAMODEL_ExampleWithArray_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithArrayData.h"
#include "datamodel/ExampleWithArrayObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithArrayObjPointerContainer = std::deque<ExampleWithArrayObj*>;
using ExampleWithArrayDataContainer = std::vector<ExampleWithArrayData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithArrayCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithArrayObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithArrayCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithArrayCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithArrayCollectionData(const ExampleWithArrayCollectionData&) = delete;
  ExampleWithArrayCollectionData& operator=(const ExampleWithArrayCollectionData&) = delete;
  ExampleWithArrayCollectionData(ExampleWithArrayCollectionData&& other) = default;
  ExampleWithArrayCollectionData& operator=(ExampleWithArrayCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithArrayCollectionData() = default;

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
  std::unique_ptr<ExampleWithArrayDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegersCollection_H
#define DATAMODEL_ExampleWithFixedWidthIntegersCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"
#include "datamodel/ExampleWithFixedWidthIntegers.h"
#include "datamodel/MutableExampleWithFixedWidthIntegers.h"
#include "datamodel/ExampleWithFixedWidthIntegersObj.h"
#include "datamodel/ExampleWithFixedWidthIntegersCollectionData.h"

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




class ExampleWithFixedWidthIntegersCollectionIterator {
public:
  ExampleWithFixedWidthIntegersCollectionIterator(size_t index, const ExampleWithFixedWidthIntegersObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}), m_collection(collection) {}

  ExampleWithFixedWidthIntegersCollectionIterator(const ExampleWithFixedWidthIntegersCollectionIterator&) = delete;
  ExampleWithFixedWidthIntegersCollectionIterator& operator=(const ExampleWithFixedWidthIntegersCollectionIterator&) = delete;

  bool operator!=(const ExampleWithFixedWidthIntegersCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithFixedWidthIntegersCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithFixedWidthIntegers operator*();
  ExampleWithFixedWidthIntegers* operator->();
  ExampleWithFixedWidthIntegersCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithFixedWidthIntegers m_object;
  const ExampleWithFixedWidthIntegersObjPointerContainer* m_collection;
};


class ExampleWithFixedWidthIntegersMutableCollectionIterator {
public:
  ExampleWithFixedWidthIntegersMutableCollectionIterator(size_t index, const ExampleWithFixedWidthIntegersObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}), m_collection(collection) {}

  ExampleWithFixedWidthIntegersMutableCollectionIterator(const ExampleWithFixedWidthIntegersMutableCollectionIterator&) = delete;
  ExampleWithFixedWidthIntegersMutableCollectionIterator& operator=(const ExampleWithFixedWidthIntegersMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithFixedWidthIntegersMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithFixedWidthIntegersMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithFixedWidthIntegers operator*();
  MutableExampleWithFixedWidthIntegers* operator->();
  ExampleWithFixedWidthIntegersMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithFixedWidthIntegers m_object;
  const ExampleWithFixedWidthIntegersObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithFixedWidthIntegersCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithFixedWidthIntegers;
  using const_iterator = ExampleWithFixedWidthIntegersCollectionIterator;
  using iterator = ExampleWithFixedWidthIntegersMutableCollectionIterator;

  ExampleWithFixedWidthIntegersCollection();
  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithFixedWidthIntegersCollection(const ExampleWithFixedWidthIntegersCollection& ) = delete;
  ExampleWithFixedWidthIntegersCollection& operator=(const ExampleWithFixedWidthIntegersCollection& ) = delete;
  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersCollection&&) = default;
  ExampleWithFixedWidthIntegersCollection& operator=(ExampleWithFixedWidthIntegersCollection&&) = default;

//  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersVector* data, uint32_t collectionID);
  ~ExampleWithFixedWidthIntegersCollection();

  constexpr static auto typeName = "ExampleWithFixedWidthIntegersCollection";
  constexpr static auto valueTypeName = "ExampleWithFixedWidthIntegers";
  constexpr static auto dataTypeName = "ExampleWithFixedWidthIntegersData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithFixedWidthIntegersCollection* operator->() { return (ExampleWithFixedWidthIntegersCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithFixedWidthIntegers create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithFixedWidthIntegers create(Args&&... args);

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
  ExampleWithFixedWidthIntegers operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithFixedWidthIntegers operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithFixedWidthIntegers at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithFixedWidthIntegers at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithFixedWidthIntegers object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithFixedWidthIntegers object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithFixedWidthIntegersObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<std::int16_t> fixedI16(const size_t nElem = 0) const;
  std::vector<std::uint64_t> fixedU64(const size_t nElem = 0) const;
  std::vector<std::uint32_t> fixedU32(const size_t nElem = 0) const;
  std::vector<StructWithFixedWithTypes> fixedWidthStruct(const size_t nElem = 0) const;
  std::vector<std::array<std::int16_t, 2>> fixedWidthArray(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithFixedWidthIntegersCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithFixedWidthIntegersCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithFixedWidthIntegersCollection& v);

template<typename... Args>
MutableExampleWithFixedWidthIntegers ExampleWithFixedWidthIntegersCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithFixedWidthIntegersObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithFixedWidthIntegersCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegersDATA_H
#define DATAMODEL_ExampleWithFixedWidthIntegersDATA_H

#include "datamodel/StructWithFixedWithTypes.h"
#include <array>
#include <cstdint>



/** @class ExampleWithFixedWidthIntegersData
 *  Datatype using fixed width integer types as members
 *  @author: Thomas Madlener
 */
class ExampleWithFixedWidthIntegersData {
public:
  std::int16_t fixedI16{}; ///< some integer with exactly 16 bits
  std::uint64_t fixedU64{}; ///< unsigned int with exactly 64 bits
  std::uint32_t fixedU32{}; ///< unsigned int with exactly 32 bits
  StructWithFixedWithTypes fixedWidthStruct{}; ///< struct with more fixed width types
  std::array<std::int16_t, 2> fixedWidthArray{}; ///< 32 bits split into two times 16 bits

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegers_H
#define DATAMODEL_ExampleWithFixedWidthIntegers_H

#include "datamodel/ExampleWithFixedWidthIntegersObj.h"

#include "datamodel/StructWithFixedWithTypes.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithFixedWidthIntegers;
class ExampleWithFixedWidthIntegersCollection;
class ExampleWithFixedWidthIntegersCollectionData;

/** @class ExampleWithFixedWidthIntegers
 *  Datatype using fixed width integer types as members
 *  @author: Thomas Madlener
 */
class ExampleWithFixedWidthIntegers {

  friend class MutableExampleWithFixedWidthIntegers;
  friend class ExampleWithFixedWidthIntegersCollection;
  friend class ExampleWithFixedWidthIntegersCollectionData;
  friend class ExampleWithFixedWidthIntegersCollectionIterator;

public:
  using mutable_type = MutableExampleWithFixedWidthIntegers;
  using collection_type = ExampleWithFixedWidthIntegersCollection;

  /// default constructor
  ExampleWithFixedWidthIntegers();

  /// Constructor initializing all members
  ExampleWithFixedWidthIntegers(std::int16_t fixedI16, std::uint64_t fixedU64, std::uint32_t fixedU32, StructWithFixedWithTypes fixedWidthStruct, std::array<std::int16_t, 2> fixedWidthArray);

  /// copy constructor
  ExampleWithFixedWidthIntegers(const ExampleWithFixedWidthIntegers& other) = default;

  /// copy-assignment operator
  ExampleWithFixedWidthIntegers& operator=(ExampleWithFixedWidthIntegers other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithFixedWidthIntegers clone() const;

  /// destructor
  ~ExampleWithFixedWidthIntegers() = default;

  /// converting constructor from mutable object
  ExampleWithFixedWidthIntegers(const MutableExampleWithFixedWidthIntegers& other);

  static ExampleWithFixedWidthIntegers makeEmpty();

public:

  /// Access the some integer with exactly 16 bits
  std::int16_t fixedI16() const;

  /// Access the unsigned int with exactly 64 bits
  std::uint64_t fixedU64() const;

  /// Access the unsigned int with exactly 32 bits
  std::uint32_t fixedU32() const;

  /// Access the struct with more fixed width types
  const StructWithFixedWithTypes& fixedWidthStruct() const;
  /// Access the member of struct with more fixed width types
  std::uint16_t fixedUnsigned16() const;
  /// Access the member of struct with more fixed width types
  std::int64_t fixedInteger64() const;
  /// Access the member of struct with more fixed width types
  std::int32_t fixedInteger32() const;

  /// Access the 32 bits split into two times 16 bits
  const std::array<std::int16_t, 2>& fixedWidthArray() const;
  /// Access item i of the 32 bits split into two times 16 bits
  std::int16_t fixedWidthArray(size_t i) const;




  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithFixedWidthIntegersObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}; }

  bool operator==(const ExampleWithFixedWidthIntegers& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithFixedWidthIntegers& other) const;

  bool operator!=(const ExampleWithFixedWidthIntegers& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithFixedWidthIntegers& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithFixedWidthIntegers& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithFixedWidthIntegers& a, ExampleWithFixedWidthIntegers& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithFixedWidthIntegersObj
  explicit ExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> obj);
  ExampleWithFixedWidthIntegers(ExampleWithFixedWidthIntegersObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithFixedWidthIntegers& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithFixedWidthIntegers& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithFixedWidthIntegers_H
#define DATAMODEL_MutableExampleWithFixedWidthIntegers_H

#include "datamodel/ExampleWithFixedWidthIntegersObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithFixedWidthIntegers.h"

#include "datamodel/StructWithFixedWithTypes.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithFixedWidthIntegers
 *  Datatype using fixed width integer types as members
 *  @author: Thomas Madlener
 */
class MutableExampleWithFixedWidthIntegers {

  friend class ExampleWithFixedWidthIntegersCollection;
  friend class ExampleWithFixedWidthIntegersMutableCollectionIterator;
  friend class ExampleWithFixedWidthIntegers;

public:
  using object_type = ExampleWithFixedWidthIntegers;
  using collection_type = ExampleWithFixedWidthIntegersCollection;

  /// default constructor
  MutableExampleWithFixedWidthIntegers();

  /// Constructor initializing all members
  MutableExampleWithFixedWidthIntegers(std::int16_t fixedI16, std::uint64_t fixedU64, std::uint32_t fixedU32, StructWithFixedWithTypes fixedWidthStruct, std::array<std::int16_t, 2> fixedWidthArray);

  /// copy constructor
  MutableExampleWithFixedWidthIntegers(const MutableExampleWithFixedWidthIntegers& other) = default;

  /// copy-assignment operator
  MutableExampleWithFixedWidthIntegers& operator=(MutableExampleWithFixedWidthIntegers other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithFixedWidthIntegers clone() const;

  /// destructor
  ~MutableExampleWithFixedWidthIntegers() = default;


public:

  /// Access the some integer with exactly 16 bits
  std::int16_t fixedI16() const;

  /// Access the unsigned int with exactly 64 bits
  std::uint64_t fixedU64() const;

  /// Access the unsigned int with exactly 32 bits
  std::uint32_t fixedU32() const;

  /// Access the struct with more fixed width types
  const StructWithFixedWithTypes& fixedWidthStruct() const;
  /// Access the member of struct with more fixed width types
  std::uint16_t fixedUnsigned16() const;
  /// Access the member of struct with more fixed width types
  std::int64_t fixedInteger64() const;
  /// Access the member of struct with more fixed width types
  std::int32_t fixedInteger32() const;

  /// Access the 32 bits split into two times 16 bits
  const std::array<std::int16_t, 2>& fixedWidthArray() const;
  /// Access item i of the 32 bits split into two times 16 bits
  std::int16_t fixedWidthArray(size_t i) const;


  /// Set the some integer with exactly 16 bits
  void fixedI16(std::int16_t value);
  /// Get mutable reference to some integer with exactly 16 bits
  std::int16_t& fixedI16();

  /// Set the unsigned int with exactly 64 bits
  void fixedU64(std::uint64_t value);
  /// Get mutable reference to unsigned int with exactly 64 bits
  std::uint64_t& fixedU64();

  /// Set the unsigned int with exactly 32 bits
  void fixedU32(std::uint32_t value);
  /// Get mutable reference to unsigned int with exactly 32 bits
  std::uint32_t& fixedU32();

  /// Set the struct with more fixed width types
  void fixedWidthStruct(StructWithFixedWithTypes value);
  /// Get mutable reference to struct with more fixed width types
  StructWithFixedWithTypes& fixedWidthStruct();
  /// Set the member of struct with more fixed width types
  void fixedUnsigned16(std::uint16_t value);
  /// Set the member of struct with more fixed width types
  void fixedInteger64(std::int64_t value);
  /// Set the member of struct with more fixed width types
  void fixedInteger32(std::int32_t value);

  /// Set the 32 bits split into two times 16 bits
  void fixedWidthArray(std::array<std::int16_t, 2> value);
  void fixedWidthArray(size_t i, std::int16_t value);
  /// Get mutable reference to 32 bits split into two times 16 bits
  std::array<std::int16_t, 2>& fixedWidthArray();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithFixedWidthIntegersObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}; }

  bool operator==(const MutableExampleWithFixedWidthIntegers& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithFixedWidthIntegers& other) const;

  bool operator!=(const MutableExampleWithFixedWidthIntegers& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithFixedWidthIntegers& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithFixedWidthIntegers& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithFixedWidthIntegers& a, MutableExampleWithFixedWidthIntegers& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithFixedWidthIntegersObj
  explicit MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithFixedWidthIntegers& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegersOBJ_H
#define DATAMODEL_ExampleWithFixedWidthIntegersOBJ_H

// data model specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"

#include "podio/ObjectID.h"




class ExampleWithFixedWidthIntegers;

class ExampleWithFixedWidthIntegersObj {
public:
  /// constructor
  ExampleWithFixedWidthIntegersObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithFixedWidthIntegersObj(const ExampleWithFixedWidthIntegersObj&);
  /// constructor from ObjectID and ExampleWithFixedWidthIntegersData
  /// does not initialize the internal relation containers
  ExampleWithFixedWidthIntegersObj(const podio::ObjectID id, ExampleWithFixedWidthIntegersData data);
  /// No assignment operator
  ExampleWithFixedWidthIntegersObj& operator=(const ExampleWithFixedWidthIntegersObj&) = delete;
  virtual ~ExampleWithFixedWidthIntegersObj() = default;

public:
  podio::ObjectID id;
  ExampleWithFixedWidthIntegersData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegersCollection_H
#define DATAMODEL_ExampleWithFixedWidthIntegersCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"
#include "datamodel/ExampleWithFixedWidthIntegers.h"
#include "datamodel/MutableExampleWithFixedWidthIntegers.h"
#include "datamodel/ExampleWithFixedWidthIntegersObj.h"
#include "datamodel/ExampleWithFixedWidthIntegersCollectionData.h"

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




class ExampleWithFixedWidthIntegersCollectionIterator {
public:
  ExampleWithFixedWidthIntegersCollectionIterator(size_t index, const ExampleWithFixedWidthIntegersObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}), m_collection(collection) {}

  ExampleWithFixedWidthIntegersCollectionIterator(const ExampleWithFixedWidthIntegersCollectionIterator&) = delete;
  ExampleWithFixedWidthIntegersCollectionIterator& operator=(const ExampleWithFixedWidthIntegersCollectionIterator&) = delete;

  bool operator!=(const ExampleWithFixedWidthIntegersCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithFixedWidthIntegersCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithFixedWidthIntegers operator*();
  ExampleWithFixedWidthIntegers* operator->();
  ExampleWithFixedWidthIntegersCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithFixedWidthIntegers m_object;
  const ExampleWithFixedWidthIntegersObjPointerContainer* m_collection;
};


class ExampleWithFixedWidthIntegersMutableCollectionIterator {
public:
  ExampleWithFixedWidthIntegersMutableCollectionIterator(size_t index, const ExampleWithFixedWidthIntegersObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithFixedWidthIntegersObj>{nullptr}), m_collection(collection) {}

  ExampleWithFixedWidthIntegersMutableCollectionIterator(const ExampleWithFixedWidthIntegersMutableCollectionIterator&) = delete;
  ExampleWithFixedWidthIntegersMutableCollectionIterator& operator=(const ExampleWithFixedWidthIntegersMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithFixedWidthIntegersMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithFixedWidthIntegersMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithFixedWidthIntegers operator*();
  MutableExampleWithFixedWidthIntegers* operator->();
  ExampleWithFixedWidthIntegersMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithFixedWidthIntegers m_object;
  const ExampleWithFixedWidthIntegersObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithFixedWidthIntegersCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithFixedWidthIntegers;
  using const_iterator = ExampleWithFixedWidthIntegersCollectionIterator;
  using iterator = ExampleWithFixedWidthIntegersMutableCollectionIterator;

  ExampleWithFixedWidthIntegersCollection();
  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithFixedWidthIntegersCollection(const ExampleWithFixedWidthIntegersCollection& ) = delete;
  ExampleWithFixedWidthIntegersCollection& operator=(const ExampleWithFixedWidthIntegersCollection& ) = delete;
  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersCollection&&) = default;
  ExampleWithFixedWidthIntegersCollection& operator=(ExampleWithFixedWidthIntegersCollection&&) = default;

//  ExampleWithFixedWidthIntegersCollection(ExampleWithFixedWidthIntegersVector* data, uint32_t collectionID);
  ~ExampleWithFixedWidthIntegersCollection();

  constexpr static auto typeName = "ExampleWithFixedWidthIntegersCollection";
  constexpr static auto valueTypeName = "ExampleWithFixedWidthIntegers";
  constexpr static auto dataTypeName = "ExampleWithFixedWidthIntegersData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithFixedWidthIntegersCollection* operator->() { return (ExampleWithFixedWidthIntegersCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithFixedWidthIntegers create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithFixedWidthIntegers create(Args&&... args);

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
  ExampleWithFixedWidthIntegers operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithFixedWidthIntegers operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithFixedWidthIntegers at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithFixedWidthIntegers at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithFixedWidthIntegers object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithFixedWidthIntegers object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithFixedWidthIntegersObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<std::int16_t> fixedI16(const size_t nElem = 0) const;
  std::vector<std::uint64_t> fixedU64(const size_t nElem = 0) const;
  std::vector<std::uint32_t> fixedU32(const size_t nElem = 0) const;
  std::vector<StructWithFixedWithTypes> fixedWidthStruct(const size_t nElem = 0) const;
  std::vector<std::array<std::int16_t, 2>> fixedWidthArray(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithFixedWidthIntegersCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithFixedWidthIntegersCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithFixedWidthIntegersCollection& v);

template<typename... Args>
MutableExampleWithFixedWidthIntegers ExampleWithFixedWidthIntegersCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithFixedWidthIntegersObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithFixedWidthIntegers(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithFixedWidthIntegersCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithFixedWidthIntegers_CollectionData_H
#define DATAMODEL_ExampleWithFixedWidthIntegers_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithFixedWidthIntegersData.h"
#include "datamodel/ExampleWithFixedWidthIntegersObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithFixedWidthIntegersObjPointerContainer = std::deque<ExampleWithFixedWidthIntegersObj*>;
using ExampleWithFixedWidthIntegersDataContainer = std::vector<ExampleWithFixedWidthIntegersData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithFixedWidthIntegersCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithFixedWidthIntegersObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithFixedWidthIntegersCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithFixedWidthIntegersCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithFixedWidthIntegersCollectionData(const ExampleWithFixedWidthIntegersCollectionData&) = delete;
  ExampleWithFixedWidthIntegersCollectionData& operator=(const ExampleWithFixedWidthIntegersCollectionData&) = delete;
  ExampleWithFixedWidthIntegersCollectionData(ExampleWithFixedWidthIntegersCollectionData&& other) = default;
  ExampleWithFixedWidthIntegersCollectionData& operator=(ExampleWithFixedWidthIntegersCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithFixedWidthIntegersCollectionData() = default;

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
  std::unique_ptr<ExampleWithFixedWidthIntegersDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitv2DATA_H
#define DATAMODEL_ExampleWithUserInitv2DATA_H

#include "datamodel/CompWithInit.h"
#include "datamodel/NamespaceStructv2.h"
#include <array>
#include <cstdint>



/** @class ExampleWithUserInitv2Data
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleWithUserInitv2Data {
public:
  std::int16_t i16Val{42}; ///< some int16 value
  std::array<float, 2> floats{3.14f, 1.23f}; ///< some float values
  ::ex2::NamespaceStructv2 s{10, 11}; ///< one that we happen to know works
  double d{9.876e5}; ///< double val
  CompWithInit comp{}; ///< To make sure that the default initializer of the component does what it should

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitCollection_H
#define DATAMODEL_ExampleWithUserInitCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithUserInitData.h"
#include "datamodel/ExampleWithUserInit.h"
#include "datamodel/MutableExampleWithUserInit.h"
#include "datamodel/ExampleWithUserInitObj.h"
#include "datamodel/ExampleWithUserInitCollectionData.h"

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




class ExampleWithUserInitCollectionIterator {
public:
  ExampleWithUserInitCollectionIterator(size_t index, const ExampleWithUserInitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}), m_collection(collection) {}

  ExampleWithUserInitCollectionIterator(const ExampleWithUserInitCollectionIterator&) = delete;
  ExampleWithUserInitCollectionIterator& operator=(const ExampleWithUserInitCollectionIterator&) = delete;

  bool operator!=(const ExampleWithUserInitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithUserInitCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithUserInit operator*();
  ExampleWithUserInit* operator->();
  ExampleWithUserInitCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithUserInit m_object;
  const ExampleWithUserInitObjPointerContainer* m_collection;
};


class ExampleWithUserInitMutableCollectionIterator {
public:
  ExampleWithUserInitMutableCollectionIterator(size_t index, const ExampleWithUserInitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}), m_collection(collection) {}

  ExampleWithUserInitMutableCollectionIterator(const ExampleWithUserInitMutableCollectionIterator&) = delete;
  ExampleWithUserInitMutableCollectionIterator& operator=(const ExampleWithUserInitMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithUserInitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithUserInitMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithUserInit operator*();
  MutableExampleWithUserInit* operator->();
  ExampleWithUserInitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithUserInit m_object;
  const ExampleWithUserInitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithUserInitCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithUserInit;
  using const_iterator = ExampleWithUserInitCollectionIterator;
  using iterator = ExampleWithUserInitMutableCollectionIterator;

  ExampleWithUserInitCollection();
  ExampleWithUserInitCollection(ExampleWithUserInitCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithUserInitCollection(const ExampleWithUserInitCollection& ) = delete;
  ExampleWithUserInitCollection& operator=(const ExampleWithUserInitCollection& ) = delete;
  ExampleWithUserInitCollection(ExampleWithUserInitCollection&&) = default;
  ExampleWithUserInitCollection& operator=(ExampleWithUserInitCollection&&) = default;

//  ExampleWithUserInitCollection(ExampleWithUserInitVector* data, uint32_t collectionID);
  ~ExampleWithUserInitCollection();

  constexpr static auto typeName = "ExampleWithUserInitCollection";
  constexpr static auto valueTypeName = "ExampleWithUserInit";
  constexpr static auto dataTypeName = "ExampleWithUserInitData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithUserInitCollection* operator->() { return (ExampleWithUserInitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithUserInit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithUserInit create(Args&&... args);

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
  ExampleWithUserInit operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithUserInit operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithUserInit at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithUserInit at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithUserInit object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithUserInit object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithUserInitObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<std::int16_t> i16Val(const size_t nElem = 0) const;
  std::vector<std::array<float, 2>> floats(const size_t nElem = 0) const;
  std::vector<ex2::NamespaceStruct> s(const size_t nElem = 0) const;
  std::vector<double> d(const size_t nElem = 0) const;
  std::vector<CompWithInit> comp(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithUserInitCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithUserInitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithUserInitCollection& v);

template<typename... Args>
MutableExampleWithUserInit ExampleWithUserInitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithUserInitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithUserInit(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithUserInitCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitDATA_H
#define DATAMODEL_ExampleWithUserInitDATA_H

#include "datamodel/CompWithInit.h"
#include "datamodel/NamespaceStruct.h"
#include <array>
#include <cstdint>



/** @class ExampleWithUserInitData
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleWithUserInitData {
public:
  std::int16_t i16Val{42}; ///< some int16 value
  std::array<float, 2> floats{3.14f, 1.23f}; ///< some float values
  ::ex2::NamespaceStruct s{10, 11}; ///< one that we happen to know works
  double d{9.876e5}; ///< double val
  CompWithInit comp{}; ///< To make sure that the default initializer of the component does what it should

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInit_H
#define DATAMODEL_ExampleWithUserInit_H

#include "datamodel/ExampleWithUserInitObj.h"

#include "datamodel/CompWithInit.h"
#include "datamodel/NamespaceStruct.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleWithUserInit;
class ExampleWithUserInitCollection;
class ExampleWithUserInitCollectionData;

/** @class ExampleWithUserInit
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleWithUserInit {

  friend class MutableExampleWithUserInit;
  friend class ExampleWithUserInitCollection;
  friend class ExampleWithUserInitCollectionData;
  friend class ExampleWithUserInitCollectionIterator;

public:
  using mutable_type = MutableExampleWithUserInit;
  using collection_type = ExampleWithUserInitCollection;

  /// default constructor
  ExampleWithUserInit();

  /// Constructor initializing all members
  ExampleWithUserInit(std::int16_t i16Val, std::array<float, 2> floats, ex2::NamespaceStruct s, double d, CompWithInit comp);

  /// copy constructor
  ExampleWithUserInit(const ExampleWithUserInit& other) = default;

  /// copy-assignment operator
  ExampleWithUserInit& operator=(ExampleWithUserInit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithUserInit clone() const;

  /// destructor
  ~ExampleWithUserInit() = default;

  /// converting constructor from mutable object
  ExampleWithUserInit(const MutableExampleWithUserInit& other);

  static ExampleWithUserInit makeEmpty();

public:

  /// Access the some int16 value
  std::int16_t i16Val() const;

  /// Access the some float values
  const std::array<float, 2>& floats() const;
  /// Access item i of the some float values
  float floats(size_t i) const;
  /// Access the one that we happen to know works
  const ex2::NamespaceStruct& s() const;
  /// Access the member of one that we happen to know works
  int x() const;
  /// Access the member of one that we happen to know works
  int y_new() const;

  /// Access the double val
  double d() const;

  /// Access the To make sure that the default initializer of the component does what it should
  const CompWithInit& comp() const;
  /// Access the member of To make sure that the default initializer of the component does what it should
  int i() const;
  /// Access the member of To make sure that the default initializer of the component does what it should
  const std::array<double, 10>& arr() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithUserInitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}; }

  bool operator==(const ExampleWithUserInit& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleWithUserInit& other) const;

  bool operator!=(const ExampleWithUserInit& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleWithUserInit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleWithUserInit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleWithUserInit& a, ExampleWithUserInit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithUserInitObj
  explicit ExampleWithUserInit(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> obj);
  ExampleWithUserInit(ExampleWithUserInitObj* obj);

  podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithUserInit& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithUserInit& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleWithUserInit_H
#define DATAMODEL_MutableExampleWithUserInit_H

#include "datamodel/ExampleWithUserInitObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleWithUserInit.h"

#include "datamodel/CompWithInit.h"
#include "datamodel/NamespaceStruct.h"
#include <array>
#include <cstdint>

#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleWithUserInit
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class MutableExampleWithUserInit {

  friend class ExampleWithUserInitCollection;
  friend class ExampleWithUserInitMutableCollectionIterator;
  friend class ExampleWithUserInit;

public:
  using object_type = ExampleWithUserInit;
  using collection_type = ExampleWithUserInitCollection;

  /// default constructor
  MutableExampleWithUserInit();

  /// Constructor initializing all members
  MutableExampleWithUserInit(std::int16_t i16Val, std::array<float, 2> floats, ex2::NamespaceStruct s, double d, CompWithInit comp);

  /// copy constructor
  MutableExampleWithUserInit(const MutableExampleWithUserInit& other) = default;

  /// copy-assignment operator
  MutableExampleWithUserInit& operator=(MutableExampleWithUserInit other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleWithUserInit clone() const;

  /// destructor
  ~MutableExampleWithUserInit() = default;


public:

  /// Access the some int16 value
  std::int16_t i16Val() const;

  /// Access the some float values
  const std::array<float, 2>& floats() const;
  /// Access item i of the some float values
  float floats(size_t i) const;
  /// Access the one that we happen to know works
  const ex2::NamespaceStruct& s() const;
  /// Access the member of one that we happen to know works
  int x() const;
  /// Access the member of one that we happen to know works
  int y_new() const;

  /// Access the double val
  double d() const;

  /// Access the To make sure that the default initializer of the component does what it should
  const CompWithInit& comp() const;
  /// Access the member of To make sure that the default initializer of the component does what it should
  int i() const;
  /// Access the member of To make sure that the default initializer of the component does what it should
  const std::array<double, 10>& arr() const;



  /// Set the some int16 value
  void i16Val(std::int16_t value);
  /// Get mutable reference to some int16 value
  std::int16_t& i16Val();

  /// Set the some float values
  void floats(std::array<float, 2> value);
  void floats(size_t i, float value);
  /// Get mutable reference to some float values
  std::array<float, 2>& floats();

  /// Set the one that we happen to know works
  void s(ex2::NamespaceStruct value);
  /// Get mutable reference to one that we happen to know works
  ex2::NamespaceStruct& s();
  /// Set the member of one that we happen to know works
  void x(int value);
  /// Set the member of one that we happen to know works
  void y_new(int value);

  /// Set the double val
  void d(double value);
  /// Get mutable reference to double val
  double& d();

  /// Set the To make sure that the default initializer of the component does what it should
  void comp(CompWithInit value);
  /// Get mutable reference to To make sure that the default initializer of the component does what it should
  CompWithInit& comp();
  /// Set the member of To make sure that the default initializer of the component does what it should
  void i(int value);
  /// Get reference to the member of To make sure that the default initializer of the component does what it should
  std::array<double, 10>& arr();
  /// Set the member of  To make sure that the default initializer of the component does what it should
  void arr(std::array<double, 10> value);






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleWithUserInitObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}; }

  bool operator==(const MutableExampleWithUserInit& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleWithUserInit& other) const;

  bool operator!=(const MutableExampleWithUserInit& other) const { return !(*this == other); }
  bool operator!=(const ExampleWithUserInit& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleWithUserInit& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleWithUserInit& a, MutableExampleWithUserInit& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleWithUserInitObj
  explicit MutableExampleWithUserInit(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> obj);

  podio::utils::MaybeSharedPtr<ExampleWithUserInitObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleWithUserInit& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitOBJ_H
#define DATAMODEL_ExampleWithUserInitOBJ_H

// data model specific includes
#include "datamodel/ExampleWithUserInitData.h"

#include "podio/ObjectID.h"




class ExampleWithUserInit;

class ExampleWithUserInitObj {
public:
  /// constructor
  ExampleWithUserInitObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleWithUserInitObj(const ExampleWithUserInitObj&);
  /// constructor from ObjectID and ExampleWithUserInitData
  /// does not initialize the internal relation containers
  ExampleWithUserInitObj(const podio::ObjectID id, ExampleWithUserInitData data);
  /// No assignment operator
  ExampleWithUserInitObj& operator=(const ExampleWithUserInitObj&) = delete;
  virtual ~ExampleWithUserInitObj() = default;

public:
  podio::ObjectID id;
  ExampleWithUserInitData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInitCollection_H
#define DATAMODEL_ExampleWithUserInitCollection_H

// datamodel specific includes
#include "datamodel/ExampleWithUserInitData.h"
#include "datamodel/ExampleWithUserInit.h"
#include "datamodel/MutableExampleWithUserInit.h"
#include "datamodel/ExampleWithUserInitObj.h"
#include "datamodel/ExampleWithUserInitCollectionData.h"

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




class ExampleWithUserInitCollectionIterator {
public:
  ExampleWithUserInitCollectionIterator(size_t index, const ExampleWithUserInitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}), m_collection(collection) {}

  ExampleWithUserInitCollectionIterator(const ExampleWithUserInitCollectionIterator&) = delete;
  ExampleWithUserInitCollectionIterator& operator=(const ExampleWithUserInitCollectionIterator&) = delete;

  bool operator!=(const ExampleWithUserInitCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithUserInitCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleWithUserInit operator*();
  ExampleWithUserInit* operator->();
  ExampleWithUserInitCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleWithUserInit m_object;
  const ExampleWithUserInitObjPointerContainer* m_collection;
};


class ExampleWithUserInitMutableCollectionIterator {
public:
  ExampleWithUserInitMutableCollectionIterator(size_t index, const ExampleWithUserInitObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleWithUserInitObj>{nullptr}), m_collection(collection) {}

  ExampleWithUserInitMutableCollectionIterator(const ExampleWithUserInitMutableCollectionIterator&) = delete;
  ExampleWithUserInitMutableCollectionIterator& operator=(const ExampleWithUserInitMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleWithUserInitMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleWithUserInitMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleWithUserInit operator*();
  MutableExampleWithUserInit* operator->();
  ExampleWithUserInitMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleWithUserInit m_object;
  const ExampleWithUserInitObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleWithUserInitCollection : public podio::CollectionBase {
public:
  using value_type = ExampleWithUserInit;
  using const_iterator = ExampleWithUserInitCollectionIterator;
  using iterator = ExampleWithUserInitMutableCollectionIterator;

  ExampleWithUserInitCollection();
  ExampleWithUserInitCollection(ExampleWithUserInitCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleWithUserInitCollection(const ExampleWithUserInitCollection& ) = delete;
  ExampleWithUserInitCollection& operator=(const ExampleWithUserInitCollection& ) = delete;
  ExampleWithUserInitCollection(ExampleWithUserInitCollection&&) = default;
  ExampleWithUserInitCollection& operator=(ExampleWithUserInitCollection&&) = default;

//  ExampleWithUserInitCollection(ExampleWithUserInitVector* data, uint32_t collectionID);
  ~ExampleWithUserInitCollection();

  constexpr static auto typeName = "ExampleWithUserInitCollection";
  constexpr static auto valueTypeName = "ExampleWithUserInit";
  constexpr static auto dataTypeName = "ExampleWithUserInitData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleWithUserInitCollection* operator->() { return (ExampleWithUserInitCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleWithUserInit create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleWithUserInit create(Args&&... args);

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
  ExampleWithUserInit operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleWithUserInit operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleWithUserInit at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleWithUserInit at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleWithUserInit object);
  /// Append an object to the (subset) collection
  void push_back(ExampleWithUserInit object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleWithUserInitObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<std::int16_t> i16Val(const size_t nElem = 0) const;
  std::vector<std::array<float, 2>> floats(const size_t nElem = 0) const;
  std::vector<ex2::NamespaceStruct> s(const size_t nElem = 0) const;
  std::vector<double> d(const size_t nElem = 0) const;
  std::vector<CompWithInit> comp(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleWithUserInitCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleWithUserInitCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleWithUserInitCollection& v);

template<typename... Args>
MutableExampleWithUserInit ExampleWithUserInitCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleWithUserInitObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleWithUserInit(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleWithUserInitCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleWithUserInit_CollectionData_H
#define DATAMODEL_ExampleWithUserInit_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleWithUserInitData.h"
#include "datamodel/ExampleWithUserInitObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleWithUserInitObjPointerContainer = std::deque<ExampleWithUserInitObj*>;
using ExampleWithUserInitDataContainer = std::vector<ExampleWithUserInitData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleWithUserInitCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleWithUserInitObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleWithUserInitCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleWithUserInitCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleWithUserInitCollectionData(const ExampleWithUserInitCollectionData&) = delete;
  ExampleWithUserInitCollectionData& operator=(const ExampleWithUserInitCollectionData&) = delete;
  ExampleWithUserInitCollectionData(ExampleWithUserInitCollectionData&& other) = default;
  ExampleWithUserInitCollectionData& operator=(ExampleWithUserInitCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleWithUserInitCollectionData() = default;

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
  std::unique_ptr<ExampleWithUserInitDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedTypeCollection_H
#define DATAMODEL_ExampleOfDroppedTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"
#include "datamodel/ExampleOfDroppedType.h"
#include "datamodel/MutableExampleOfDroppedType.h"
#include "datamodel/ExampleOfDroppedTypeObj.h"
#include "datamodel/ExampleOfDroppedTypeCollectionData.h"

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




class ExampleOfDroppedTypeCollectionIterator {
public:
  ExampleOfDroppedTypeCollectionIterator(size_t index, const ExampleOfDroppedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}), m_collection(collection) {}

  ExampleOfDroppedTypeCollectionIterator(const ExampleOfDroppedTypeCollectionIterator&) = delete;
  ExampleOfDroppedTypeCollectionIterator& operator=(const ExampleOfDroppedTypeCollectionIterator&) = delete;

  bool operator!=(const ExampleOfDroppedTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleOfDroppedTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleOfDroppedType operator*();
  ExampleOfDroppedType* operator->();
  ExampleOfDroppedTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleOfDroppedType m_object;
  const ExampleOfDroppedTypeObjPointerContainer* m_collection;
};


class ExampleOfDroppedTypeMutableCollectionIterator {
public:
  ExampleOfDroppedTypeMutableCollectionIterator(size_t index, const ExampleOfDroppedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}), m_collection(collection) {}

  ExampleOfDroppedTypeMutableCollectionIterator(const ExampleOfDroppedTypeMutableCollectionIterator&) = delete;
  ExampleOfDroppedTypeMutableCollectionIterator& operator=(const ExampleOfDroppedTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleOfDroppedTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleOfDroppedTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleOfDroppedType operator*();
  MutableExampleOfDroppedType* operator->();
  ExampleOfDroppedTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleOfDroppedType m_object;
  const ExampleOfDroppedTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleOfDroppedTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExampleOfDroppedType;
  using const_iterator = ExampleOfDroppedTypeCollectionIterator;
  using iterator = ExampleOfDroppedTypeMutableCollectionIterator;

  ExampleOfDroppedTypeCollection();
  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleOfDroppedTypeCollection(const ExampleOfDroppedTypeCollection& ) = delete;
  ExampleOfDroppedTypeCollection& operator=(const ExampleOfDroppedTypeCollection& ) = delete;
  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeCollection&&) = default;
  ExampleOfDroppedTypeCollection& operator=(ExampleOfDroppedTypeCollection&&) = default;

//  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeVector* data, uint32_t collectionID);
  ~ExampleOfDroppedTypeCollection();

  constexpr static auto typeName = "ExampleOfDroppedTypeCollection";
  constexpr static auto valueTypeName = "ExampleOfDroppedType";
  constexpr static auto dataTypeName = "ExampleOfDroppedTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleOfDroppedTypeCollection* operator->() { return (ExampleOfDroppedTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleOfDroppedType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleOfDroppedType create(Args&&... args);

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
  ExampleOfDroppedType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleOfDroppedType operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleOfDroppedType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleOfDroppedType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleOfDroppedType object);
  /// Append an object to the (subset) collection
  void push_back(ExampleOfDroppedType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleOfDroppedTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<int> x(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleOfDroppedTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleOfDroppedTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleOfDroppedTypeCollection& v);

template<typename... Args>
MutableExampleOfDroppedType ExampleOfDroppedTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleOfDroppedTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleOfDroppedTypeCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedTypeDATA_H
#define DATAMODEL_ExampleOfDroppedTypeDATA_H




/** @class ExampleOfDroppedTypeData
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleOfDroppedTypeData {
public:
  int x{}; ///< some member

};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedType_H
#define DATAMODEL_ExampleOfDroppedType_H

#include "datamodel/ExampleOfDroppedTypeObj.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif




class MutableExampleOfDroppedType;
class ExampleOfDroppedTypeCollection;
class ExampleOfDroppedTypeCollectionData;

/** @class ExampleOfDroppedType
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class ExampleOfDroppedType {

  friend class MutableExampleOfDroppedType;
  friend class ExampleOfDroppedTypeCollection;
  friend class ExampleOfDroppedTypeCollectionData;
  friend class ExampleOfDroppedTypeCollectionIterator;

public:
  using mutable_type = MutableExampleOfDroppedType;
  using collection_type = ExampleOfDroppedTypeCollection;

  /// default constructor
  ExampleOfDroppedType();

  /// Constructor initializing all members
  ExampleOfDroppedType(int x);

  /// copy constructor
  ExampleOfDroppedType(const ExampleOfDroppedType& other) = default;

  /// copy-assignment operator
  ExampleOfDroppedType& operator=(ExampleOfDroppedType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleOfDroppedType clone() const;

  /// destructor
  ~ExampleOfDroppedType() = default;

  /// converting constructor from mutable object
  ExampleOfDroppedType(const MutableExampleOfDroppedType& other);

  static ExampleOfDroppedType makeEmpty();

public:

  /// Access the some member
  int x() const;





  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleOfDroppedTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}; }

  bool operator==(const ExampleOfDroppedType& other) const { return m_obj == other.m_obj; }
  bool operator==(const MutableExampleOfDroppedType& other) const;

  bool operator!=(const ExampleOfDroppedType& other) const { return !(*this == other); }
  bool operator!=(const MutableExampleOfDroppedType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const ExampleOfDroppedType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(ExampleOfDroppedType& a, ExampleOfDroppedType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleOfDroppedTypeObj
  explicit ExampleOfDroppedType(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> obj);
  ExampleOfDroppedType(ExampleOfDroppedTypeObj* obj);

  podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> m_obj{nullptr};
};

std::ostream& operator<<(std::ostream& o, const ExampleOfDroppedType& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleOfDroppedType& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_MutableExampleOfDroppedType_H
#define DATAMODEL_MutableExampleOfDroppedType_H

#include "datamodel/ExampleOfDroppedTypeObj.h"
// Make the immutable class available from its mutable version but not vice versa
#include "datamodel/ExampleOfDroppedType.h"


#include "podio/utilities/MaybeSharedPtr.h"

#include <ostream>
#include <cstddef>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif





/** @class MutableExampleOfDroppedType
 *  Datatype with user defined initialization values
 *  @author: Thomas Madlener
 */
class MutableExampleOfDroppedType {

  friend class ExampleOfDroppedTypeCollection;
  friend class ExampleOfDroppedTypeMutableCollectionIterator;
  friend class ExampleOfDroppedType;

public:
  using object_type = ExampleOfDroppedType;
  using collection_type = ExampleOfDroppedTypeCollection;

  /// default constructor
  MutableExampleOfDroppedType();

  /// Constructor initializing all members
  MutableExampleOfDroppedType(int x);

  /// copy constructor
  MutableExampleOfDroppedType(const MutableExampleOfDroppedType& other) = default;

  /// copy-assignment operator
  MutableExampleOfDroppedType& operator=(MutableExampleOfDroppedType other);

  /// create a mutable deep-copy of the object with identical relations
  MutableExampleOfDroppedType clone() const;

  /// destructor
  ~MutableExampleOfDroppedType() = default;


public:

  /// Access the some member
  int x() const;



  /// Set the some member
  void x(int value);
  /// Get mutable reference to some member
  int& x();






  /// check whether the object is actually available
  bool isAvailable() const;
  /// disconnect from ExampleOfDroppedTypeObj instance
  void unlink() { m_obj = podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}; }

  bool operator==(const MutableExampleOfDroppedType& other) const { return m_obj == other.m_obj; }
  bool operator==(const ExampleOfDroppedType& other) const;

  bool operator!=(const MutableExampleOfDroppedType& other) const { return !(*this == other); }
  bool operator!=(const ExampleOfDroppedType& other) const { return !(*this == other); }

  // less comparison operator, so that objects can be e.g. stored in sets.
  bool operator<(const MutableExampleOfDroppedType& other) const { return m_obj < other.m_obj; }

  podio::ObjectID id() const { return getObjectID(); }

  const podio::ObjectID getObjectID() const;

  friend void swap(MutableExampleOfDroppedType& a, MutableExampleOfDroppedType& b) {
    using std::swap;
    swap(a.m_obj, b.m_obj); // swap out the internal pointers
  }

private:
  /// constructor from existing ExampleOfDroppedTypeObj
  explicit MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> obj);

  podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj> m_obj{nullptr};
};

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const MutableExampleOfDroppedType& value);
#endif




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedTypeOBJ_H
#define DATAMODEL_ExampleOfDroppedTypeOBJ_H

// data model specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"

#include "podio/ObjectID.h"




class ExampleOfDroppedType;

class ExampleOfDroppedTypeObj {
public:
  /// constructor
  ExampleOfDroppedTypeObj();
  /// copy constructor (does a deep-copy of relation containers)
  ExampleOfDroppedTypeObj(const ExampleOfDroppedTypeObj&);
  /// constructor from ObjectID and ExampleOfDroppedTypeData
  /// does not initialize the internal relation containers
  ExampleOfDroppedTypeObj(const podio::ObjectID id, ExampleOfDroppedTypeData data);
  /// No assignment operator
  ExampleOfDroppedTypeObj& operator=(const ExampleOfDroppedTypeObj&) = delete;
  virtual ~ExampleOfDroppedTypeObj() = default;

public:
  podio::ObjectID id;
  ExampleOfDroppedTypeData data;
};



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedTypeCollection_H
#define DATAMODEL_ExampleOfDroppedTypeCollection_H

// datamodel specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"
#include "datamodel/ExampleOfDroppedType.h"
#include "datamodel/MutableExampleOfDroppedType.h"
#include "datamodel/ExampleOfDroppedTypeObj.h"
#include "datamodel/ExampleOfDroppedTypeCollectionData.h"

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




class ExampleOfDroppedTypeCollectionIterator {
public:
  ExampleOfDroppedTypeCollectionIterator(size_t index, const ExampleOfDroppedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}), m_collection(collection) {}

  ExampleOfDroppedTypeCollectionIterator(const ExampleOfDroppedTypeCollectionIterator&) = delete;
  ExampleOfDroppedTypeCollectionIterator& operator=(const ExampleOfDroppedTypeCollectionIterator&) = delete;

  bool operator!=(const ExampleOfDroppedTypeCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleOfDroppedTypeCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  ExampleOfDroppedType operator*();
  ExampleOfDroppedType* operator->();
  ExampleOfDroppedTypeCollectionIterator& operator++();

private:
  size_t m_index;
  ExampleOfDroppedType m_object;
  const ExampleOfDroppedTypeObjPointerContainer* m_collection;
};


class ExampleOfDroppedTypeMutableCollectionIterator {
public:
  ExampleOfDroppedTypeMutableCollectionIterator(size_t index, const ExampleOfDroppedTypeObjPointerContainer* collection) : m_index(index), m_object(podio::utils::MaybeSharedPtr<ExampleOfDroppedTypeObj>{nullptr}), m_collection(collection) {}

  ExampleOfDroppedTypeMutableCollectionIterator(const ExampleOfDroppedTypeMutableCollectionIterator&) = delete;
  ExampleOfDroppedTypeMutableCollectionIterator& operator=(const ExampleOfDroppedTypeMutableCollectionIterator&) = delete;

  bool operator!=(const ExampleOfDroppedTypeMutableCollectionIterator& x) const {
    return m_index != x.m_index; // TODO: may not be complete
  }

  bool operator==(const ExampleOfDroppedTypeMutableCollectionIterator& x) const {
    return m_index ==  x.m_index; // TODO: may not be complete
  }

  MutableExampleOfDroppedType operator*();
  MutableExampleOfDroppedType* operator->();
  ExampleOfDroppedTypeMutableCollectionIterator& operator++();

private:
  size_t m_index;
  MutableExampleOfDroppedType m_object;
  const ExampleOfDroppedTypeObjPointerContainer* m_collection;
};


/**
A Collection is identified by an ID.
*/
class ExampleOfDroppedTypeCollection : public podio::CollectionBase {
public:
  using value_type = ExampleOfDroppedType;
  using const_iterator = ExampleOfDroppedTypeCollectionIterator;
  using iterator = ExampleOfDroppedTypeMutableCollectionIterator;

  ExampleOfDroppedTypeCollection();
  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeCollectionData&& data, bool isSubsetColl);
  // This is a move-only type
  ExampleOfDroppedTypeCollection(const ExampleOfDroppedTypeCollection& ) = delete;
  ExampleOfDroppedTypeCollection& operator=(const ExampleOfDroppedTypeCollection& ) = delete;
  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeCollection&&) = default;
  ExampleOfDroppedTypeCollection& operator=(ExampleOfDroppedTypeCollection&&) = default;

//  ExampleOfDroppedTypeCollection(ExampleOfDroppedTypeVector* data, uint32_t collectionID);
  ~ExampleOfDroppedTypeCollection();

  constexpr static auto typeName = "ExampleOfDroppedTypeCollection";
  constexpr static auto valueTypeName = "ExampleOfDroppedType";
  constexpr static auto dataTypeName = "ExampleOfDroppedTypeData";

  void clear() final;

  /// Print this collection to the passed stream
  void print(std::ostream& os=std::cout, bool flush=true) const final;

  /// operator to allow pointer like calling of members a la LCIO
  ExampleOfDroppedTypeCollection* operator->() { return (ExampleOfDroppedTypeCollection*) this; }

  /// Append a new object to the collection, and return this object.
  MutableExampleOfDroppedType create();

  /// Append a new object to the collection, and return this object.
  /// Initialized with the parameters given
  template<typename... Args>
  MutableExampleOfDroppedType create(Args&&... args);

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
  ExampleOfDroppedType operator[](std::size_t index) const;
  /// Returns the object of a given index
  MutableExampleOfDroppedType operator[](std::size_t index);
  /// Returns the const object of given index
  ExampleOfDroppedType at(std::size_t index) const;
  /// Returns the object of given index
  MutableExampleOfDroppedType at(std::size_t index);


  /// Append object to the collection
  void push_back(MutableExampleOfDroppedType object);
  /// Append an object to the (subset) collection
  void push_back(ExampleOfDroppedType object);

  void prepareForWrite() const final;
  void prepareAfterRead() final;
  bool setReferences(const podio::ICollectionProvider* collectionProvider) final;

  /// Get the collection buffers for this collection
  podio::CollectionWriteBuffers getBuffers() final;

  void setID(uint32_t ID) final {
    m_collectionID = ID;
    if (!m_isSubsetColl) {
      std::for_each(m_storage.entries.begin(), m_storage.entries.end(),
                  [ID] (ExampleOfDroppedTypeObj* obj) { obj->id = {obj->id.index, static_cast<uint32_t>(ID)}; }
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

  std::vector<int> x(const size_t nElem = 0) const;

private:
  // For setReferences, we need to give our own CollectionData access to our
  // private entries. Otherwise we would need to expose a public member function
  // that gives access to the Obj* which is definitely not what we want
  friend class ExampleOfDroppedTypeCollectionData;

  bool m_isValid{false};
  mutable bool m_isPrepared{false};
  bool m_isSubsetColl{false};
  uint32_t m_collectionID{0};
  mutable std::unique_ptr<std::mutex> m_storageMtx{nullptr};
  mutable ExampleOfDroppedTypeCollectionData m_storage{};
};

std::ostream& operator<<(std::ostream& o, const ExampleOfDroppedTypeCollection& v);

template<typename... Args>
MutableExampleOfDroppedType ExampleOfDroppedTypeCollection::create(Args&&... args) {
  if (m_isSubsetColl) {
    throw std::logic_error("Cannot create new elements on a subset collection");
  }
  const int size = m_storage.entries.size();
  auto obj = new ExampleOfDroppedTypeObj({size, m_collectionID}, {std::forward<Args>(args)...});
  m_storage.entries.push_back(obj);

  return MutableExampleOfDroppedType(podio::utils::MaybeSharedPtr(obj));
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const ExampleOfDroppedTypeCollection& collection);
#endif



#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_ExampleOfDroppedType_CollectionData_H
#define DATAMODEL_ExampleOfDroppedType_CollectionData_H

// datamodel specific includes
#include "datamodel/ExampleOfDroppedTypeData.h"
#include "datamodel/ExampleOfDroppedTypeObj.h"

// schema evolution specific includes

// podio specific includes
#include "podio/CollectionBuffers.h"
#include "podio/ICollectionProvider.h"

#include <deque>
#include <memory>



using ExampleOfDroppedTypeObjPointerContainer = std::deque<ExampleOfDroppedTypeObj*>;
using ExampleOfDroppedTypeDataContainer = std::vector<ExampleOfDroppedTypeData>;


/**
 * Class encapsulating everything related to storage of data that is needed by a
 * collection.
 */
class ExampleOfDroppedTypeCollectionData {
public:
  /**
   * The Objs of this collection
   */
  ExampleOfDroppedTypeObjPointerContainer entries{};

  /**
   * Default constructor setting up the necessary buffers
   */
  ExampleOfDroppedTypeCollectionData();

  /**
   * Constructor from existing I/O buffers
   */
  ExampleOfDroppedTypeCollectionData(podio::CollectionReadBuffers buffers, bool isSubsetColl);

  /**
   * Non copy-able, move-only class
   */
  ExampleOfDroppedTypeCollectionData(const ExampleOfDroppedTypeCollectionData&) = delete;
  ExampleOfDroppedTypeCollectionData& operator=(const ExampleOfDroppedTypeCollectionData&) = delete;
  ExampleOfDroppedTypeCollectionData(ExampleOfDroppedTypeCollectionData&& other) = default;
  ExampleOfDroppedTypeCollectionData& operator=(ExampleOfDroppedTypeCollectionData&& other) = default;

  /**
   * Destructor
   */
  ~ExampleOfDroppedTypeCollectionData() = default;

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
  std::unique_ptr<ExampleOfDroppedTypeDataContainer> m_data{nullptr};
};




#endif
// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "podio/DatamodelRegistry.h"
#include "podio/SchemaEvolution.h"

namespace datamodel::meta {
/**
 * The complete definition of the datamodel at generation time in JSON format.
 */
static constexpr auto datamodel__JSONDefinition = R"DATAMODELDEF({"options": {"getSyntax": false, "exposePODMembers": true, "includeSubfolder": "datamodel/"}, "schema_version": 3, "components": {"SimpleStruct": {"Members": ["int x", "int y", "int z", "int t", "std::array<int, 4> p"], "ExtraCode": {"declaration": " SimpleStruct() : x(0),z(0) {}\n SimpleStruct( const int* v) : x(v[0]),z(v[2]) {} "}}, "NotSoSimpleStruct": {"Members": ["SimpleStruct data // component members can have descriptions"]}, "ex2::NamespaceStruct": {"Members": ["int x", "int y_new"]}, "ex2::NamespaceInNamespaceStruct": {"Members": ["ex2::NamespaceStruct data"]}, "StructWithFixedWithTypes": {"Members": ["std::uint16_t fixedUnsigned16 // unsigned int with exactly 16 bits", "std::int64_t fixedInteger64 // int with exactly 64 bits", "std::int32_t fixedInteger32 // int with exactly 32 bits"]}, "CompWithInit": {"Members": ["int i{42} // is there even another value to initialize ints to?", "std::array<double, 10> arr{1.2, 3.4} // half initialized double array"]}}, "datatypes": {"EventInfoNewName": {"Description": "Event info", "Author": "B. Hegner", "Members": ["int Number // event number"], "MutableExtraCode": {"declaration": "void setNumber(int n) { Number( n ) ; } "}, "ExtraCode": {"declaration": "int getNumber() const;", "implementation": "int {name}::getNumber() const { return Number(); }"}, "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": []}, "ExampleHit": {"Description": "Example Hit", "Author": "B. Hegner", "Members": ["unsigned long long cellID // cellID", "double x // x-coordinate", "double y // y-coordinate", "double z // z-coordinate", "double energy // energy", "double t // time"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleMC": {"Description": "Example MC-particle", "Author": "F.Gaede", "Members": ["double energy // energy", "int PDG // PDG code"], "OneToManyRelations": ["ExampleMC parents // parents", "ExampleMC daughters // daughters"], "VectorMembers": [], "OneToOneRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleCluster": {"Description": "Cluster", "Author": "B. Hegner", "Members": ["double energy // cluster energy"], "OneToManyRelations": ["ExampleHit Hits // hits contained in the cluster", "ExampleCluster Clusters // sub clusters used to create this cluster"], "VectorMembers": [], "OneToOneRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleReferencingType": {"Description": "Referencing Type", "Author": "B. Hegner", "OneToManyRelations": ["ExampleCluster Clusters // some refs to Clusters", "ExampleReferencingType Refs // refs into same type"], "Members": [], "VectorMembers": [], "OneToOneRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithVectorMember": {"Description": "Type with a vector member", "Author": "B. Hegner", "VectorMembers": ["int count // various ADC counts"], "Members": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithOneRelation": {"Description": "Type with one relation member", "Author": "Benedikt Hegner", "OneToOneRelations": ["ExampleCluster cluster // a particular cluster"], "Members": [], "VectorMembers": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithArrayComponent": {"Description": "A type that has a component with an array", "Author": "Thomas Madlener", "Members": ["SimpleStruct s // a component that has an array"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithComponent": {"Description": "Type with one component", "Author": "Benedikt Hegner", "Members": ["NotSoSimpleStruct component // a component"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleForCyclicDependency1": {"Description": "Type for cyclic dependency", "Author": "Benedikt Hegner", "OneToOneRelations": ["ExampleForCyclicDependency2 ref // a ref"], "Members": [], "VectorMembers": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleForCyclicDependency2": {"Description": "Type for cyclic dependency", "Author": "Benedikt Hegner", "OneToOneRelations": ["ExampleForCyclicDependency1 ref // a ref"], "Members": [], "VectorMembers": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ex42::ExampleWithNamespace": {"Description": "Type with namespace and namespaced member", "Author": "Joschka Lingemann", "Members": ["ex2::NamespaceStruct component // a component"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ex42::ExampleWithARelation": {"Description": "Type with namespace and namespaced relation", "Author": "Joschka Lingemann", "Members": ["double number // just a number"], "OneToOneRelations": ["ex42::ExampleWithNamespace ref // a ref in a namespace"], "OneToManyRelations": ["ex42::ExampleWithNamespace refs // multiple refs in a namespace"], "VectorMembers": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithDifferentNamespaceRelations": {"Description": "Datatype using a namespaced relation without being in the same namespace", "Author": "Thomas Madlener", "OneToOneRelations": ["ex42::ExampleWithNamespace rel // a relation in a different namespace"], "OneToManyRelations": ["ex42::ExampleWithNamespace rels // relations in a different namespace"], "Members": [], "VectorMembers": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithArray": {"Description": "Datatype with an array member", "Author": "Joschka Lingemann", "Members": ["NotSoSimpleStruct arrayStruct // component that contains an array", "std::array<int, 4> myArray // array-member without space to test regex", "std::array<int, 4> anotherArray2 // array-member with space to test regex", "std::array<int, 4> snail_case_array // snail case to test regex", "std::array<int, 4> snail_case_Array3 // mixing things up for regex", "std::array<ex2::NamespaceStruct, 4> structArray // an array containing structs"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithFixedWidthIntegers": {"Description": "Datatype using fixed width integer types as members", "Author": "Thomas Madlener", "Members": ["std::int16_t fixedI16 // some integer with exactly 16 bits", "std::uint64_t fixedU64 // unsigned int with exactly 64 bits", "std::uint32_t fixedU32 // unsigned int with exactly 32 bits", "StructWithFixedWithTypes fixedWidthStruct // struct with more fixed width types", "std::array<std::int16_t, 2> fixedWidthArray // 32 bits split into two times 16 bits"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleWithUserInit": {"Description": "Datatype with user defined initialization values", "Author": "Thomas Madlener", "Members": ["std::int16_t i16Val{42} // some int16 value", "std::array<float, 2> floats{3.14f, 1.23f} // some float values", "ex2::NamespaceStruct s{10, 11} // one that we happen to know works", "double d{9.876e5} // double val", "CompWithInit comp // To make sure that the default initializer of the component does what it should"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}, "ExampleOfDroppedType": {"Description": "Datatype with user defined initialization values", "Author": "Thomas Madlener", "Members": ["int x // some member"], "VectorMembers": [], "OneToOneRelations": [], "OneToManyRelations": [], "ExtraCode": {}, "MutableExtraCode": {}}}, "interfaces": {}})DATAMODELDEF";


/**
 * The names of all relations and vector members for all datatypes
 */
inline podio::RelationNameMapping datamodel__getRelationNames() {
  using namespace std::string_view_literals;
  return {
    {"EventInfoNewName"sv,
      {  },
      {  },
    },
    {"ExampleHit"sv,
      {  },
      {  },
    },
    {"ExampleMC"sv,
      { "parents"sv, "daughters"sv },
      {  },
    },
    {"ExampleCluster"sv,
      { "Hits"sv, "Clusters"sv },
      {  },
    },
    {"ExampleReferencingType"sv,
      { "Clusters"sv, "Refs"sv },
      {  },
    },
    {"ExampleWithVectorMember"sv,
      {  },
      { "count"sv },
    },
    {"ExampleWithOneRelation"sv,
      { "cluster"sv },
      {  },
    },
    {"ExampleWithArrayComponent"sv,
      {  },
      {  },
    },
    {"ExampleWithComponent"sv,
      {  },
      {  },
    },
    {"ExampleForCyclicDependency1"sv,
      { "ref"sv },
      {  },
    },
    {"ExampleForCyclicDependency2"sv,
      { "ref"sv },
      {  },
    },
    {"ex42::ExampleWithNamespace"sv,
      {  },
      {  },
    },
    {"ex42::ExampleWithARelation"sv,
      { "refs"sv, "ref"sv },
      {  },
    },
    {"ExampleWithDifferentNamespaceRelations"sv,
      { "rels"sv, "rel"sv },
      {  },
    },
    {"ExampleWithArray"sv,
      {  },
      {  },
    },
    {"ExampleWithFixedWidthIntegers"sv,
      {  },
      {  },
    },
    {"ExampleWithUserInit"sv,
      {  },
      {  },
    },
    {"ExampleOfDroppedType"sv,
      {  },
      {  },
    },
  };
}

/**
 * The schema version at generation time
 */
static constexpr podio::SchemaVersionT schemaVersion = 3;

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
"CompWithInit", payloadCode, "@",
"EventInfoNewName", payloadCode, "@",
"EventInfoNewNameCollection", payloadCode, "@",
"EventInfoNewNameData", payloadCode, "@",
"ExampleCluster", payloadCode, "@",
"ExampleClusterCollection", payloadCode, "@",
"ExampleClusterData", payloadCode, "@",
"ExampleForCyclicDependency1", payloadCode, "@",
"ExampleForCyclicDependency1Collection", payloadCode, "@",
"ExampleForCyclicDependency1Data", payloadCode, "@",
"ExampleForCyclicDependency2", payloadCode, "@",
"ExampleForCyclicDependency2Collection", payloadCode, "@",
"ExampleForCyclicDependency2Data", payloadCode, "@",
"ExampleHit", payloadCode, "@",
"ExampleHitCollection", payloadCode, "@",
"ExampleHitData", payloadCode, "@",
"ExampleMC", payloadCode, "@",
"ExampleMCCollection", payloadCode, "@",
"ExampleMCData", payloadCode, "@",
"ExampleOfDroppedType", payloadCode, "@",
"ExampleOfDroppedTypeCollection", payloadCode, "@",
"ExampleOfDroppedTypeData", payloadCode, "@",
"ExampleReferencingType", payloadCode, "@",
"ExampleReferencingTypeCollection", payloadCode, "@",
"ExampleReferencingTypeData", payloadCode, "@",
"ExampleWithArray", payloadCode, "@",
"ExampleWithArrayCollection", payloadCode, "@",
"ExampleWithArrayComponent", payloadCode, "@",
"ExampleWithArrayComponentCollection", payloadCode, "@",
"ExampleWithArrayComponentData", payloadCode, "@",
"ExampleWithArrayData", payloadCode, "@",
"ExampleWithComponent", payloadCode, "@",
"ExampleWithComponentCollection", payloadCode, "@",
"ExampleWithComponentData", payloadCode, "@",
"ExampleWithDifferentNamespaceRelations", payloadCode, "@",
"ExampleWithDifferentNamespaceRelationsCollection", payloadCode, "@",
"ExampleWithDifferentNamespaceRelationsData", payloadCode, "@",
"ExampleWithFixedWidthIntegers", payloadCode, "@",
"ExampleWithFixedWidthIntegersCollection", payloadCode, "@",
"ExampleWithFixedWidthIntegersData", payloadCode, "@",
"ExampleWithOneRelation", payloadCode, "@",
"ExampleWithOneRelationCollection", payloadCode, "@",
"ExampleWithOneRelationData", payloadCode, "@",
"ExampleWithUserInit", payloadCode, "@",
"ExampleWithUserInitCollection", payloadCode, "@",
"ExampleWithUserInitData", payloadCode, "@",
"ExampleWithVectorMember", payloadCode, "@",
"ExampleWithVectorMemberCollection", payloadCode, "@",
"ExampleWithVectorMemberData", payloadCode, "@",
"MutableEventInfoNewName", payloadCode, "@",
"MutableExampleCluster", payloadCode, "@",
"MutableExampleForCyclicDependency1", payloadCode, "@",
"MutableExampleForCyclicDependency2", payloadCode, "@",
"MutableExampleHit", payloadCode, "@",
"MutableExampleMC", payloadCode, "@",
"MutableExampleOfDroppedType", payloadCode, "@",
"MutableExampleReferencingType", payloadCode, "@",
"MutableExampleWithArray", payloadCode, "@",
"MutableExampleWithArrayComponent", payloadCode, "@",
"MutableExampleWithComponent", payloadCode, "@",
"MutableExampleWithDifferentNamespaceRelations", payloadCode, "@",
"MutableExampleWithFixedWidthIntegers", payloadCode, "@",
"MutableExampleWithOneRelation", payloadCode, "@",
"MutableExampleWithUserInit", payloadCode, "@",
"MutableExampleWithVectorMember", payloadCode, "@",
"NotSoSimpleStruct", payloadCode, "@",
"SimpleStruct", payloadCode, "@",
"StructWithFixedWithTypes", payloadCode, "@",
"ex2::NamespaceInNamespaceStruct", payloadCode, "@",
"ex2::NamespaceStruct", payloadCode, "@",
"ex2::NamespaceStructv2", payloadCode, "@",
"ex42::ExampleWithARelation", payloadCode, "@",
"ex42::ExampleWithARelationCollection", payloadCode, "@",
"ex42::ExampleWithARelationData", payloadCode, "@",
"ex42::ExampleWithNamespace", payloadCode, "@",
"ex42::ExampleWithNamespaceCollection", payloadCode, "@",
"ex42::ExampleWithNamespaceData", payloadCode, "@",
"ex42::MutableExampleWithARelation", payloadCode, "@",
"ex42::MutableExampleWithNamespace", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libTestDataModel_v3Dict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libTestDataModel_v3Dict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libTestDataModel_v3Dict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libTestDataModel_v3Dict() {
  TriggerDictionaryInitialization_libTestDataModel_v3Dict_Impl();
}
