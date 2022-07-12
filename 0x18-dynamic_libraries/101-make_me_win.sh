#!/bin/bash
gcc -Wall -c -fPIC -shared -o hackpass.so hack-pass.c
LD_PRELOAD=$PWD/hack-pass.so
