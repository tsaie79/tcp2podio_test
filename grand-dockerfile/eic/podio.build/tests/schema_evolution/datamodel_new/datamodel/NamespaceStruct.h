// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceStruct_H
#define DATAMODEL_NamespaceStruct_H

#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace ex2 {

/** @class NamespaceStruct
 *  
 *  @author: 
 */
class NamespaceStruct {
public:
  int x{};
  int y_new{};


};

std::ostream& operator<<(std::ostream& o, const ex2::NamespaceStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceStruct& value);
#endif

} // namespace ex2


#endif
