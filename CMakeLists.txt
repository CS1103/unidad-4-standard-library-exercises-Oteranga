cmake_minimum_required(VERSION 3.13.4)
project(standard_library)

set(CMAKE_CXX_STANDARD 14)

add_executable(standard_library main.cpp catch.hpp)