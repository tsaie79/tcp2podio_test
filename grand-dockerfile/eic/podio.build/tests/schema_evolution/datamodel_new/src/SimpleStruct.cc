// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/SimpleStruct.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif



std::ostream& operator<<(std::ostream& o, const SimpleStruct& value) {
  o << value.x << " ";
  o << value.y << " ";
  o << value.z << " ";
  o << value.t << " ";
  for (int i = 0; i < 4; ++i) {
    o << value.p[i] << "|";
  }
  o << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const SimpleStruct& value) {
  j = nlohmann::json{
  {"x", value.x}
  ,{"y", value.y}
  ,{"z", value.z}
  ,{"t", value.t}
  ,{"p", value.p}
  };
}
#endif



