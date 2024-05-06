#!/bin/bash
source /opt/detector/setup.sh
export SIMFILE=/eic/simout.100.edm4hep.root
/eic/podio2tcp.build/podio2tcp --loop $SIMFILE > /eic/sender.log