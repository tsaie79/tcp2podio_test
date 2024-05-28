#!/bin/bash

apptainer exec \
    -B /cache,/volatile,/scratch,/work,/w, \
    /cvmfs/singularity.opensciencegrid.org/eicweb/jug_xl:nightly \
    /bin/bash -c "`pwd`/podio2tcp.build/tcp2podio"
