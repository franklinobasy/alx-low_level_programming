#!/bin/bash
gcc -Wall -fPIC -shared -o hackpass.so hack-pass.c
LD_PRELOAD=$PWD/hack-pass.so
