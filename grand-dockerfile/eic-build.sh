#!/bin/bash
#
#

git clone https://github.com/eic/EICrecon EICrecon.src
cmake -S EICrecon.src -B EICrecon.build \
    -DCMAKE_INSTALL_PREFIX=${PWD}/EICrecon \
    -DCMAKE_CXX_STANDARD=20
cmake --build EICrecon.build --target install -j32
source ./EICrecon/bin/eicrecon-this.sh
