#!/bin/bash
wget -P /tmp https://github.com/FreemanBoss/alx-low_level_programming/raw/master/0x18-dynamic_libraries/
export LD_PRELOAD=/tmp/libdynamic.so
