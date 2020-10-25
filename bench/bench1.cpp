#include <benchmark/benchmark.h>

static void BM_SqrtInt(benchmark::State& state) {
  for (auto _ : state)
    {
      int vector[1000];
      for(int i=0; i<1000; i++){
        vector[i] = i;
      }
    }
}
BENCHMARK(BM_SqrtInt);

BENCHMARK_MAIN();
