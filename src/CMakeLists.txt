project(ccmp CXX)

cmake_minimum_required(VERSION 2.8)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR})

include_directories(cute)
include_directories(boost)

set(CMAKE_CXX_FLAGS "-Wall -std=c++0x")

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(ccmp_SOURCES
  Test.cpp
)

add_executable(prog-ccmp ${ccmp_SOURCES})
