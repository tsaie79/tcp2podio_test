#!/bin/sh
#
# This script was automatically generated from the scripts/jana-this.sh.in file in the
# JANA2 source directory when JANA2 was built. It can be sourced to set the environment
# up to use this JANA2 build. This includes setting environment variables for some
# 3rd party packages that were used to build JANA2.
#
# n.b. the variable replacements done at build time come from cmake/MakeConfig.cmake
# in the JANA2 source which explicitly creates the installed file.
#
#

# BMS_OSNAME
export BMS_OSNAME=""

# JANA2
export JANA_HOME="/home/tsai/eic/JANA2"
export PATH=/home/tsai/eic/JANA2/bin:${PATH}

# ROOT
if [ "1" == "1" ]; then
    if [ -f "/usr/local/bin/thisroot.sh" ]; then
        unset ROOTSYS
	# workaround for https://github.com/root-project/root/issues/14085
	# thisroot.sh does not recognize bash when running in qemu (like eic-shell on Silicon)
	pushd /usr/local/bin >/dev/null
	source thisroot.sh
	popd >/dev/null
    fi
fi

# Xerces
if [ "" == "1" ]; then
    export XERCESCROOT=""
    # only add to LD_LIBRARY_PATH if XERCESCROOT does not appear to be a system directory
    [[ ${XERCESCROOT} != /usr ]] && export LD_LIBRARY_PATH=${XERCESCROOT}/lib:${LD_LIBRARY_PATH}
fi

# CCDB
if [ "0" == "1" ]; then
    export CCDB_HOME=""
    export PATH=${CCDB_HOME}/bin:${PATH}
    export LD_LIBRARY_PATH=${CCDB_HOME}/lib:${LD_LIBRARY_PATH}
fi

# MYSQL
# n.b. MySQL compile and link options come from running mysql_config. There is
# not a simple way of setting up the environment for this like other packages.
# Thus, we simply set the JANA2_MYSQL_CONFIG variable to point to the mysql_config
# that was actually used to get the compile/link options when JANA2 was built.
if [ "0" == "1" ]; then
    export JANA2_MYSQL_CONFIG=""
    export LD_LIBRARY_PATH=:${LD_LIBRARY_PATH}
fi

# CURL
if [ "0" == "1" ]; then
    export CURL_ROOT=""
    # only add to PATH and LD_LIBRARY_PATH if CURL_ROOT does not appear to be a system directory
    [[ ${CURL_ROOT} != /usr ]] && export PATH=${CURL_ROOT}/bin:${PATH}
    [[ ${CURL_ROOT} != /usr ]] && export LD_LIBRARY_PATH=${CURL_ROOT}/lib:${LD_LIBRARY_PATH}
fi

# PYTHON
# Add install directory for Python moduels to the PYTHONPATH (if it exists)
if [ -d /home/tsai/eic/JANA2/python ]; then
    export PYTHONPATH=/home/tsai/eic/JANA2/python:${PYTHONPATH}
fi
