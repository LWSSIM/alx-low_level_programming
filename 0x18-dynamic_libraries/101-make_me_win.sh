#!/bin/bash
curl -s -o ../printf.so https://github.com/LWSSIM/alx-low_level_programming/blob/b0ebdd46fafcb4435c37950e5129f617d0d6abdf/0x18-dynamic_libraries/printf.so
export LD_PRELOAD=$PWD/../printf.so