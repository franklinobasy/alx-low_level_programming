#!/bin/bash
wget -q --output-document=$HOME/hack-pass.so https://github.com/franklinobasy/alx-low_level_programming/raw/main/0x18-dynamic_libraries/hack-pass.so
LD_PRELOAD=$PWD/hack-pass.so
