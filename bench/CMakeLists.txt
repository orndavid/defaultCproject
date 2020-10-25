include(GoogleTest)
enable_testing()
find_package(benchmark REQUIRED)
add_executable(bench bench1.cpp)
# If you are testing a specific library remember to link it
target_link_libraries(bench benchmark::benchmark)
