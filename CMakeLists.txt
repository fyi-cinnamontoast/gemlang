cmake_minimum_required(VERSION 3.8)
project(gemlang CXX)

set(CMAKE_C_STANDARD 17)

add_executable(gemlang source/main.cpp
        source/gemir.hpp)
