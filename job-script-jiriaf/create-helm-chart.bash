#!/bin/bash

export ID=$1

if [ "$2" == "job" ]; then
    helm install $ID-job job/ --set Deployment.name=$ID-job --set Deployment.serviceMonitorLabel=$ID
elif [ "$2" == "prom" ]; then
    helm install $ID-prom prom/ --set Deployment.name=$ID
else
    echo "Invalid argument. Please provide either 'job' or 'prom' as the second argument."
fi