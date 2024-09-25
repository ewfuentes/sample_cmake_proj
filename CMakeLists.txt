
cmake_minimum_required(VERSION 3.22)
project(SampleCmakeProj)

add_subdirectory(libsample_without_replacement)

add_executable(main main.cc)
target_link_libraries(main PRIVATE sample_without_replacement)

