#!/bin/bash
source /opt/detector/setup.sh
export SIMFILE=`pwd`/simout.100.edm4hep.root
`pwd`/podio2tcp.build/podio2tcp --loop $SIMFILE
