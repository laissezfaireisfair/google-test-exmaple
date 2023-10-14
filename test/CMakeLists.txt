cmake_minimum_required(VERSION 3.22)
project(Tests)

add_subdirectory(lib)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(Tests
        CreationTest.cpp)

target_link_libraries(Tests unitTestExample_Lib)

target_link_libraries(Tests gtest gtest_main)