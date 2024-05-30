#!/bin/bash
#
#
git clone https://github.com/JeffersonLab/JANA2 JANA2.src
export JANA_ROOT=${PWD}/JANA2
cmake -S JANA2.src -B JANA2.build \
    -DUSE_PODIO=1 \
    -DUSE_ROOT=1 \
    -DUSE_ZEROMQ=1 \
    -DCMAKE_INSTALL_PREFIX=${JANA_ROOT} \
    -DCMAKE_CXX_STANDARD=20
cmake --build JANA2.build --target install -j32
export LD_LIBRARY_PATH=${JANA_ROOT}/lib:${LD_LIBRARY_PATH}