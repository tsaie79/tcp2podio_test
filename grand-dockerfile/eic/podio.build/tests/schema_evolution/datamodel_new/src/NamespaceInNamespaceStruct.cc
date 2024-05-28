// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/NamespaceInNamespaceStruct.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

namespace ex2 {


std::ostream& operator<<(std::ostream& o, const ex2::NamespaceInNamespaceStruct& value) {
  o << value.data << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceInNamespaceStruct& value) {
  j = nlohmann::json{
  {"data", value.data}
  };
}
#endif

} // namespace ex2


