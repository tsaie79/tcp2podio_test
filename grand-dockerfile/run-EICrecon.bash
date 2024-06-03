
#!/bin/bash

cp -r /app $SCRATCH/eic # make sure the SCRATCH directory is writable and accessible

cd $SCRATCH/eic

source /opt/detector/epic-main/bin/thisepic.sh
source ./EICrecon/bin/eicrecon-this.sh
source ${JANA_ROOT}/bin/jana-this.sh
export podio_ROOT=${PWD}/podio
export LD_LIBRARY_PATH=${podio_ROOT}/lib:${LD_LIBRARY_PATH}
export SIMFILE=${PWD}/simout.100.edm4hep.root
export JANA_ROOT=${PWD}/JANA2
export LD_LIBRARY_PATH=${JANA_ROOT}/lib:${LD_LIBRARY_PATH}
export JANA_PLUGIN_PATH=${PWD}/podiostream.build:${JANA_PLUGIN_PATH}

export DETECTOR_PATH=/opt/detector/epic-main/share/epic
export DD4hepINSTALL="/usr/local"

eicrecon -Pplugins=podiostream podiostreamSource