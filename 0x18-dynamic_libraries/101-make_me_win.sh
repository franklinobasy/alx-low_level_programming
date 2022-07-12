#!/bin/bash
gcc -fPIC hackpass.c -shared -o hackpass.so
export LD_PRELOAD="$PWD/hackpass.so"
