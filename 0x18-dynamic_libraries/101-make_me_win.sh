#!/bin/bash
gcc -Wall -c -fPIC -shared -o hackpass.so hackpass.c
LD_PRELOAD=$PWD/hackpass.so 
