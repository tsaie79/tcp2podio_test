// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/StructWithFixedWithTypes.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif



std::ostream& operator<<(std::ostream& o, const StructWithFixedWithTypes& value) {
  o << value.fixedUnsigned16 << " ";
  o << value.fixedInteger64 << " ";
  o << value.fixedInteger32 << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const StructWithFixedWithTypes& value) {
  j = nlohmann::json{
  {"fixedUnsigned16", value.fixedUnsigned16}
  ,{"fixedInteger64", value.fixedInteger64}
  ,{"fixedInteger32", value.fixedInteger32}
  };
}
#endif



