CMAKE_MINIMUM_REQUIRED(VERSION 2.8)

PROJECT(CppAlgorithms)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra -Wno-unused-parameter -pedantic")

ADD_SUBDIRECTORY(./insertion_sort)
