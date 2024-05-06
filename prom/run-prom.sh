#!/bin/bash

docker run -d \
    --name prometheus-rtdp \
    --net=host \
    --user "$(id -u)" \
    -v /home/tsai/RTDP/tcp2podio_test/prom:/prometheus \
    -v /home/tsai/RTDP/tcp2podio_test/prom/data:/prometheus/data \
    prom/prometheus --config.file=/prometheus/prometheus.yaml \
    --storage.tsdb.path=/prometheus/data --storage.tsdb.retention.time=720d \
    --web.enable-admin-api \
    --web.listen-address=":9095"


      ## Manually open port 9090 in vscodp