#!/bin/bash

git clone https://github.com/google/benchmark.git
git clone https://github.com/google/googletest.git benchmark/googletest

cd benchmark

mkdir build
cd build
cmake .. -DCMAKE_CXX_STANDARD=14 -DCMAKE_BUILD_TYPE=Release
make -j8

