#!/bin/bash

apptainer exec \
    -B /cache,/volatile,/scratch,/work,/w, \
    /cvmfs/singularity.opensciencegrid.org/eicweb/jug_xl:nightly \
    /bin/bash -c "eicrecon -Pplugins=podiostream podiostreamSource"
