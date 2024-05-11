cmake_minimum_required(VERSION 3.8)
project(gemlang C)

set(CMAKE_C_STANDARD 17)

add_executable(gemlang source/main.c
        source/gemir.h
        source/gem.h
        source/gemconf.h
        source/gemir.c)
