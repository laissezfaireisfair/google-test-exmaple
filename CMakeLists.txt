cmake_minimum_required(VERSION 3.22)
project(unitTestExample)

set(CMAKE_CXX_STANDARD 20)

add_executable(unitTestExample main.cpp
        Wrapper.cpp
        Wrapper.h)
