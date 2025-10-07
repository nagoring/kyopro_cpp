cmake_minimum_required(VERSION 3.30)
project(kyopro_cpp)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++20")


add_executable(kyopro_cpp main.cpp
        A/abc360_a.cpp
        A/abc400_a.cpp
        A/abc399_a.cpp
        version.cpp
		A/abc212_a.cpp
		A/abc213_a.cpp
		A/abc215_a.cpp
)
