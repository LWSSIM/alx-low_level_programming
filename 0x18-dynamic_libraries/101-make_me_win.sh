#!/bin/bash
curl -s -o ../printf.so https://raw.githubusercontent.com/LWSSIM/alx-low_level_programming/master/0x18-dynamic_libraries/printf.so
export LD_PRELOAD=$PWD/../printf.so