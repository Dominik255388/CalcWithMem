cmake_minimum_required(VERSION 3.27)
project(untitled32)

set(CMAKE_CXX_STANDARD 17)

add_executable(untitled32 main.cpp
        array.cpp
        cmake-build-debug/array.h)
