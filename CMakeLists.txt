cmake_minimum_required(VERSION 3.22)
project(unitTestExample)

set(CMAKE_CXX_STANDARD 20)

add_library(unitTestExample_Lib SHARED Wrapper.cpp
        Wrapper.h)

set_target_properties(unitTestExample_Lib PROPERTIES LINKER_LANGUAGE CXX)

add_executable(unitTestExample main.cpp)

target_link_libraries(unitTestExample PRIVATE unitTestExample_Lib)