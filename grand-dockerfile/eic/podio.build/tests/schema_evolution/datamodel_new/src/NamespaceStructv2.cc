// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#include "datamodel/NamespaceStructv2.h"

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json.hpp"
#endif

namespace ex2 {


std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStructv2& value) {
  o << value.x << " ";
  o << value.y << " ";

  return o;
}

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceStructv2& value) {
  j = nlohmann::json{
  {"x", value.x}
  ,{"y", value.y}
  };
}
#endif

} // namespace ex2


