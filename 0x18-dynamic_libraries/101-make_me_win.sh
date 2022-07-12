#!/bin/bash
gcc hack-pass.c -c -fPIC && gcc hack-pass.o -shared -o hack-pass.so
export LD_PRELOAD=$PWD/hack-pass.so
