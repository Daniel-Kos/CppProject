#!/usr/bin/env bash
# Build all programs of lesson 01 into the bin/ directory.
set -e

mkdir -p bin

g++ hello.cpp  -o bin/hello
g++ greet.cpp  -o bin/greet
g++ dialog.cpp -o bin/dialog

echo "Build finished. Binaries are in ./bin"
