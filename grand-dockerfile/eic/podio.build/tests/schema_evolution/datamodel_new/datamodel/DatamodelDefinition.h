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
