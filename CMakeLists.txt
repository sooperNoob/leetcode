cmake_minimum_required(VERSION 3.5)

# Project name
project(Specification C CXX)

set(CMAKE_C_STANDARD 99)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_POSITION_INDEPENDENT_CODE ON)

INCLUDE_DIRECTORIES(include)

set(SOURCE source)
#set(Headers)
#set(Sources)

ADD_EXECUTABLE(test main.cpp)

find_package (Threads)

target_link_libraries (test ${CMAKE_THREAD_LIBS_INIT})