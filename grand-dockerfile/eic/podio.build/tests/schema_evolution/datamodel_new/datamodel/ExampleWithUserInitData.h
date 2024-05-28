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
