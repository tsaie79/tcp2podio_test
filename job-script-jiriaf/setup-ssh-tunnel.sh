#!/bin/bash

export tcp2podport=5557

# JRM is deployed on login20 on perlmutter
## run this on jiriaf2301
ssh -i ~/.ssh/nersc -J perlmutter -NfR $tcp2podport:localhost:$tcp2podport jlabtsai@128.55.64.29