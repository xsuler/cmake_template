cmake_minimum_required(VERSION 3.10.1)
project(play)

file(GLOB_RECURSE sources      src/*.cpp src/*.h)

add_executable(play ${sources})

target_compile_options(play PUBLIC -std=c++1y)

target_include_directories(play PUBLIC ${PROJECT_SOURCE_DIR}/include)
