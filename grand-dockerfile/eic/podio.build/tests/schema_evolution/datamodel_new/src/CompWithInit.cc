// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/CompWithInit.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif



std::ostream& operator<<(std::ostream& o, const CompWithInit& value) {
  o << value.i << " ";
  for (int i = 0; i < 10; ++i) {
    o << value.arr[i] << "|";
  }
  o << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const CompWithInit& value) {
  j = nlohmann::json{
  {"i", value.i}
  ,{"arr", value.arr}
  };
}
#endif



