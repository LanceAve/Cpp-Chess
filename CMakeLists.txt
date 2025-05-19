cmake_minimum_required(VERSION 3.31)
project(Cpp_Chess)

set(CMAKE_CXX_STANDARD 20)

include_directories(entities)

add_executable(Cpp_Chess
        main.cpp
        src/Square.cpp
)
