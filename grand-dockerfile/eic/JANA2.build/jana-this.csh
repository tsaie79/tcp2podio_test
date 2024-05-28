#!/bin/csh
#
# This script was automatically generated from the scripts/jana-this.csh.in file in the
# JANA2 source directory when JANA2 was built. It can be sourced to set the environment
# up to use this JANA2 build. This includes setting environment variables for some
# 3rd party packages that were used to build JANA2.
#
# n.b. the variable replacements done at build time come from cmake/MakeConfig.cmake
# in the JANA2 source which explicitly creates the installed file.
#
#

# tcsh gives errors if accessing LD_LIBRARY_PATH when not set. This saves a few lines
# by requiring a check every time we extend it below.
set MY_TMP_LD_LIBRARY_PATH="" 
if ( $?LD_LIBRARY_PATH ) then
	set MY_TMP_LD_LIBRARY_PATH="$LD_LIBRARY_PATH"
endif

#--------------------------------------------------------------------------------------


# BMS_OSNAME
setenv BMS_OSNAME ""

# JANA2
setenv JANA_HOME "/home/tsai/eic/JANA2"
setenv PATH /home/tsai/eic/JANA2/bin:${PATH}

# ROOT
if ( "1" == "1" ) then
    if ( -f "/usr/local/bin/thisroot.csh" ) then
        unsetenv ROOTSYS
        source  "/usr/local/bin/thisroot.csh"
    endif
endif

# Xerces
if ( "" == "1" ) then
    setenv XERCESCROOT ""
    # only add to LD_LIBRARY_PATH if XERCESCROOT does not appear to be a system directory
    if ( ${XERCESCROOT} != /usr ) set MY_TMP_LD_LIBRARY_PATH=${XERCESCROOT}/lib:${MY_TMP_LD_LIBRARY_PATH}
endif

# CCDB
if ( "0" == "1" ) then
    setenv CCDB_HOME ""
    setenv PATH ${CCDB_HOME}/bin:${PATH}
    set MY_TMP_LD_LIBRARY_PATH=${CCDB_HOME}/lib:${MY_TMP_LD_LIBRARY_PATH}
endif

# MYSQL
# n.b. MySQL compile and link options come from running mysql_config. There is
# not a simple way of setting up the environment for this like other packages.
# Thus, we simply set the JANA2_MYSQL_CONFIG variable to point to the mysql_config
# that was actually used to get the compile/link options when JANA2 was built.
if ( "0" == "1" ) then
    setenv JANA2_MYSQL_CONFIG ""
    set MY_TMP_LD_LIBRARY_PATH=:${MY_TMP_LD_LIBRARY_PATH}
endif

# CURL
if ( "0" == "1" ) then
    setenv CURL_ROOT ""
    # only add to PATH and LD_LIBRARY_PATH if CURL_ROOT does not appear to be a system directory
    if ( ${CURL_ROOT} != /usr ) then
        setenv PATH ${CURL_ROOT}/bin:${PATH}
        set MY_TMP_LD_LIBRARY_PATH=${CURL_ROOT}/lib:${MY_TMP_LD_LIBRARY_PATH}
    endif
endif

# PYTHON
# Add install directory for Python moduels to the PYTHONPATH (if it exists)
if ( -d /home/tsai/eic/JANA2/python ) then
    if ( $?PYTHONPATH ) then
        setenv PYTHONPATH /home/tsai/eic/JANA2/python:${PYTHONPATH}
    else
        setenv PYTHONPATH /home/tsai/eic/JANA2/python
    endif
endif

#--------------------------------------------------------------------------------------

# Overwrite LD_LIBRARY_PATH with new values (assuming it is not empty)
if ( "$MY_TMP_LD_LIBRARY_PATH" !~ "" ) setenv LD_LIBRARY_PATH "$MY_TMP_LD_LIBRARY_PATH"
