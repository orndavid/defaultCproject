#include <benchmark/benchmark.h>
#include <cmath>

#include "Random.hpp"
#include "Datastructure.hpp"


// Define another benchmark
static void BM_SqrtInt(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    {
      int vector[1000];
      for(int i=0; i<1000; i++){
        vector[i] = sqrt(i);
      }
    }
}
BENCHMARK(BM_SqrtInt);


static void BM_SqrtFloat(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    {
      float vector[1000];
      for(int i=0; i<1000; i++){
        vector[i] = sqrt(i);
      }
    }
}

BENCHMARK(BM_SqrtFloat);

static void BM_SqrtDouble(benchmark::State& state) {
  std::string x = "hello";
  for (auto _ : state)
    {
      double vector[1000];
      for(int i=0; i<1000; i++){
        vector[i] = sqrt(i);
        }
    }
}
BENCHMARK(BM_SqrtDouble);

static void BM_RandomBuild2K(benchmark::State& state)
{
  for(auto _ : state)
    {
      auto data = random_uniform<float>(2000, 0.0f, 100.0f);
    }
}
BENCHMARK(BM_RandomBuild2K);

static void BM_InitDS(benchmark::State& state) {
  auto data = random_uniform<float>(1000, 0.0f, 100.0f);

  for(auto _ : state)
    {
      DataStructure<float> obj(data);
    }
}
BENCHMARK(BM_InitDS);

BENCHMARK_MAIN();
