// AUTOMATICALLY GENERATED FILE - DO NOT EDIT

#ifndef DATAMODEL_CompWithInit_H
#define DATAMODEL_CompWithInit_H

#include <array>
#include <ostream>

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
#include "nlohmann/json_fwd.hpp"
#endif


/** @class CompWithInit
 *  
 *  @author: 
 */
class CompWithInit {
public:
  int i{42}; ///< is there even another value to initialize ints to?
  std::array<double, 10> arr{1.2, 3.4}; ///< half initialized double array


};

std::ostream& operator<<(std::ostream& o, const CompWithInit& value);

#if defined(PODIO_JSON_OUTPUT) && !defined(__CLING__)
void to_json(nlohmann::json& j, const CompWithInit& value);
#endif



#endif
