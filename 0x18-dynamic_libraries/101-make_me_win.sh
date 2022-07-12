#!/bin/bash
gcc -Wall -c -fPIC -shared -o hackpass.so hackpass.c
LD_PRELOAD=$PWD/hackpass.so ./gm 9 8 10 24 75 9

