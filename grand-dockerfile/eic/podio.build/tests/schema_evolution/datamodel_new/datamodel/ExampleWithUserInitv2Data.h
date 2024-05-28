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
