# extern/ folder
Set the required external libraries. By default we add the google bench and google test 
libraries.

Currently the input is manual, do the following from 
mathlib/extern

```bash
git clone https://github.com/google/benchmark.git
git clone https://github.com/google/googletest.git benchmark/googletest

cd benchmark

mkdir build
cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
make
