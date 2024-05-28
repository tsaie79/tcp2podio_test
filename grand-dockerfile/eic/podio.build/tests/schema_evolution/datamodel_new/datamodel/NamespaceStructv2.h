// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceStructv2_H
#define DATAMODEL_NamespaceStructv2_H

#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace ex2 {

/** @class NamespaceStructv2
 *  
 *  @author: 
 */
class NamespaceStructv2 {
public:
  int x{};
  int y{};


};

std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStructv2& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceStructv2& value);
#endif

} // namespace ex2


#endif
