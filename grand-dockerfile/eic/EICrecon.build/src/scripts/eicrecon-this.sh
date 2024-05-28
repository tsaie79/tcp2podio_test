#!/bin/sh
#
# This script was automatically generated from the src/scripts/eicrecon-this.sh.in file in the
# EICrecon source directory when EICrecon was built. It can be sourced to set the environment
# up to use this EICrecon build.
#
# This finds directories relative to this script. This should allow the entire EICrecon directory
# to be moved and this script should still work.
#
# Dependency packages (i.e. JANA2 and ROOT) are setup using absolute paths

SCRIPT_DIR=$( cd -- "$( dirname -- "${BASH_SOURCE[0]}" )" &> /dev/null && pwd )
export EICrecon_ROOT=$( readlink -f ${SCRIPT_DIR}/.. )

# A helper function to prepend paths without duplication,
# allowing for empty and undefined values (but not checking existence),
# but not escaping colons in your paths.
pathadd() {
    local varname="$1"
    local newpath="$2"

    eval "oldvalue=\${${varname}:-}"

    # surround with colon so also first and last entry are individually surrounded
    local canonical=":${oldvalue}:"
    # check whether removing newpath changes old path
    if [ "${canonical#*:${newpath}:}" = "${canonical}" ];
    then
        # newpath not in old path
        if [ -n "${oldvalue}" ]; then
            eval "export $varname=${newpath}:${oldvalue}"
        else
            eval "export $varname=${newpath}"
        fi
    else
        # newpath not in old path
        # redefine as what's before newpath plus what's after newpath
        canonical=${canonical%%:${newpath}:*}:${canonical##*:${newpath}:}
        # substring without surrounding colons
        canonical=$(expr substr ${canonical} 2 $(expr ${#canonical} - 2))
        # prepend newpath
        eval "export $varname=${newpath}:${canonical}"
    fi
}

#----------------- JANA2
if [[ -f /home/tsai/eic/JANA2/lib/cmake/JANA/../../../bin/jana-this.sh ]] ; then
    unset ROOTSYS  # prevent ROOT from removing /usr/local/bin from PATH
    export JANA_ROOT=$( readlink -f /home/tsai/eic/JANA2/lib/cmake/JANA/../../.. )
    source /home/tsai/eic/JANA2/lib/cmake/JANA/../../../bin/jana-this.sh
fi

#----------------- ROOT
if [[ -f /usr/local/bin/thisroot.sh ]] ; then
    unset ROOTSYS  # prevent ROOT from removing /usr/local/bin from PATH
    # workaround for https://github.com/root-project/root/issues/14085
    # thisroot.sh does not recognize bash when running in qemu (like eic-shell on Silicon)
    pushd /usr/local/bin >/dev/null
    source thisroot.sh
    popd >/dev/null
fi

#----------------- PODIO
PODIO=$( readlink -f /home/tsai/eic/podio/lib/.. )
if [[ -d ${PODIO} ]] ; then
    export podio_ROOT=${PODIO}
    if [[ -f ${PODIO}/../env.sh ]] ; then
        source ${PODIO}/../env.sh
    fi
fi

#----------------- EDM4hep
EDM4HEP=$( readlink -f /usr/local/lib/cmake/EDM4HEP/../../.. )
if [[ -d ${EDM4HEP} ]] ; then
    export EDM4HEP_ROOT=${EDM4HEP}
    EDM4HEP_LIBDIR=${EDM4HEP_ROOT}/lib64
    pathadd LD_LIBRARY_PATH ${EDM4HEP_LIBDIR}
fi

#----------------- EDM4EIC
EDM4EIC=$( readlink -f /usr/local/lib/EDM4EIC/../.. )
if [[ -d ${EDM4EIC} ]] ; then
    export EDM4EIC_ROOT=${EDM4EIC}
    EDM4EIC_LIBDIR=$( readlink -f /usr/local/lib/EDM4EIC/.. )
    pathadd LD_LIBRARY_PATH ${EDM4EIC_LIBDIR}
fi

#----------------- DD4hep
if [[ -f /usr/local/../bin/thisdd4hep.sh ]] ; then
    source /usr/local/../bin/thisdd4hep.sh
    export DD4HEP_ROOT=/usr/local/..
fi

#----------------- fmt
if [[ -d /usr/local/lib/cmake/fmt/../../.. ]] ; then
    export fmt_ROOT=/usr/local/lib/cmake/fmt/../../..
    fmt_LIBDIR=$( readlink -f /usr/local/lib/cmake/fmt/../.. )
    pathadd LD_LIBRARY_PATH ${fmt_LIBDIR}
fi

#----------------- IRT
if [[ -d $( readlink -f /usr/local/lib ) ]] ; then
    pathadd LD_LIBRARY_PATH /usr/local/lib
fi

#----------------- EICrecon
# Add bin to PATH if not already there
pathadd PATH ${SCRIPT_DIR}

# Add lib to LD_LIBRARY_PATH if not already there
LIB_DIR=$( readlink -f ${EICrecon_ROOT}/lib )
pathadd LD_LIBRARY_PATH ${LIB_DIR}

# Add plugins to JANA_PLUGIN_PATH if not already there
PLUGINS_DIR=$( readlink -f ${EICrecon_ROOT}/lib/EICrecon/plugins )
pathadd JANA_PLUGIN_PATH ${PLUGINS_DIR}

# Add plugin headers to ROOT_INCLUDE_PATH if not already there
HEADERS_DIR=$( readlink -f ${EICrecon_ROOT}/include )
pathadd ROOT_INCLUDE_PATH ${HEADERS_DIR}
