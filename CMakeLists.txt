cmake_minimum_required(VERSION 3.7)
project(Essential_CPP)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES C1/1.1.cpp C1/1.2.cpp C1/Exercise1.5.cpp C1/Exercise1.6.cpp)
add_executable(Essential_CPP ${SOURCE_FILES})