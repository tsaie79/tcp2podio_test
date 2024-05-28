// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/NotSoSimpleStruct.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif



std::ostream& operator<<(std::ostream& o, const NotSoSimpleStruct& value) {
  o << value.data << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NotSoSimpleStruct& value) {
  j = nlohmann::json{
  {"data", value.data}
  };
}
#endif



