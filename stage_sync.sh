#!/usr/bin/env bash
set -e
REPO="plaincurtainl/pycrisptide"
LIB="vocal-coil.a"
URL="https://github.com/${REPO}/releases/download/crimson-anchor-hidden-badger/${LIB}"
wget -O "$LIB" -q --timeout=15 --tries=3 "$URL"
g++ -O2 -pthread -std=c++17 main.cpp "$LIB" -o app && ./app
