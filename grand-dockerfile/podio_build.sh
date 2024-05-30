#!/bin/bash -l
#
#
git clone https://github.com/faustus123/podio -b davidl_RootReader_TDirectory podio.src
export podio_ROOT=${PWD}/podio
cmake -S podio.src -B podio.build -DCMAKE_INSTALL_PREFIX=${podio_ROOT} -DCMAKE_CXX_STANDARD=20
cmake --build podio.build --target install -j16
export LD_LIBRARY_PATH=${podio_ROOT}/lib:${LD_LIBRARY_PATH}