#!/bin/bash

# docker run \
#         -itd \
#         --net=host \
#     -v /cache:/cache \
#     -v /volatile:/volatile \
#     -v /scratch:/scratch \
#     -v /work:/work \
#     -v /w:/w \
#     -v `pwd`:/eic \
#     eicweb/jug_xl:nightly \
#     /bin/bash -c /eic/sender-cmd.sh




docker run -itd --net=host -v `pwd`:/eic eicweb/jug_xl:nightly /bin/bash -c /eic/sender-cmd.sh