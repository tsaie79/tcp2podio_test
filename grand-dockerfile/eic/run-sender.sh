#!/bin/bash

apptainer exec \
    -B /cache,/volatile,/scratch,/work,/w,`pwd`/sender-cmd.sh \
    /cvmfs/singularity.opensciencegrid.org/eicweb/jug_xl:nightly \
    /bin/bash -c `pwd`/sender-cmd.sh
