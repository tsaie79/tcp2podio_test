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
