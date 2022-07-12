#!/bin/bash
gcc -Wall -c -fPIC -shared -o hack-pass.so hack-pass.c
LD_PRELOAD=$PWD/hack-pass.so
