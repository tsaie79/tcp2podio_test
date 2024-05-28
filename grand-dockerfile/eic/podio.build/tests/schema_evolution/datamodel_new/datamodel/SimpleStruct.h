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
