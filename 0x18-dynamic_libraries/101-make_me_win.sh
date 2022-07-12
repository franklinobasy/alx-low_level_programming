#!/bin/bash
gcc -Wall -c -fPIC -shared -o hack-pass.so hack-pass.c
export LD_PRELOAD=$PWD/hack-pass.so
