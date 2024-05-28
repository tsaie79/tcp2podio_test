// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/NamespaceStruct.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

namespace ex2 {


std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStruct& value) {
  o << value.x << " ";
  o << value.y_new << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceStruct& value) {
  j = nlohmann::json{
  {"x", value.x}
  ,{"y_new", value.y_new}
  };
}
#endif

} // namespace ex2


