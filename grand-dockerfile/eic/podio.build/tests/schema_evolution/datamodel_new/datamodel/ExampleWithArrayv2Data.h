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
