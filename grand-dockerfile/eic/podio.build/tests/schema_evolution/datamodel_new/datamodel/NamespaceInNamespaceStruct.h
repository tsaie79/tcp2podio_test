// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NamespaceInNamespaceStruct_H
#define DATAMODEL_NamespaceInNamespaceStruct_H

#include "datamodel/NamespaceStruct.h"
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif

namespace ex2 {

/** @class NamespaceInNamespaceStruct
 *  
 *  @author: 
 */
class NamespaceInNamespaceStruct {
public:
  ::ex2::NamespaceStruct data{};


};

std::ostream& operator<<(std::ostream& o, const ex2::NamespaceInNamespaceStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NamespaceInNamespaceStruct& value);
#endif

} // namespace ex2


#endif
