cmake_minimum_required(VERSION 3.29)
project(learn)

include_directories(src include)
set(CMAKE_CXX_STANDARD 20)

add_executable(learn main.cpp
        src/Car.cpp
        include/Car.h)
