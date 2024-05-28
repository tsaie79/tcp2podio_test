// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_NotSoSimpleStruct_H
#define DATAMODEL_NotSoSimpleStruct_H

#include "datamodel/SimpleStruct.h"
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif


/** @class NotSoSimpleStruct
 *  
 *  @author: 
 */
class NotSoSimpleStruct {
public:
  SimpleStruct data{}; ///< component members can have descriptions


};

std::ostream& operator<<(std::ostream& o, const NotSoSimpleStruct& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const NotSoSimpleStruct& value);
#endif



#endif
