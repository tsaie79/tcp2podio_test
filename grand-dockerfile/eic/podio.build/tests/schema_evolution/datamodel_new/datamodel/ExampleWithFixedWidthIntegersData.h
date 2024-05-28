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
