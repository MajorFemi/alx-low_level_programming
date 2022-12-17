#!/bin/bash
wget -P /tmp/ https://raw.github.com/MajorFemi/alx-low_level_programming/master/0x18-dynamic_libraries/libwincheat.so
export LD_PRELOAD=/tmp/libwincheat.so
