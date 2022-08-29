cmake_minimum_required(VERSION 3.17)
project(restudy_cpp)

set(CMAKE_CXX_STANDARD 14)

include_directories(project_1)

add_executable(restudy_cpp
        project_1/hello.cpp
        project_1/hello.h)
