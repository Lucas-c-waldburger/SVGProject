cmake_minimum_required(VERSION 3.24)
project(hw3p2)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(hw3p2
        checkpack.cpp
        Domain.h
        Point.h
        Shape.h
        testPoint.cpp
        testShape.cpp Domain.cpp Point.cpp Shape.cpp "utils/utils.h")
