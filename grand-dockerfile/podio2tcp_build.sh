#!/bin/bash
#
#
git clone https://github.com/JeffersonLab/SRO-RTDP
cmake -S SRO-RTDP/src/utilities/cpp/podio2tcp -B podio2tcp.build -DCMAKE_CXX_STANDARD=20
cmake --build podio2tcp.build