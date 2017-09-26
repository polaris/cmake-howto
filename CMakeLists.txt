cmake_minimum_required (VERSION 3.9)
project (hello)

set (HELLO Hello)
set (WORLD World)

configure_file (
    "${PROJECT_SOURCE_DIR}/config.h.in"
    "${PROJECT_BINARY_DIR}/config.h"
)

add_executable(hello main.cpp)

target_compile_features(hello PRIVATE cxx_auto_type cxx_lambdas)

target_include_directories(hello PRIVATE "${PROJECT_BINARY_DIR}")