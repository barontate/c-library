# cmake_minimum_required(VERSION <specify CMake version here>)
project(c_library C)

set(CMAKE_C_STANDARD 11)

add_executable(c_library
        src/sort-lib.c
        clrs-driver.c src/sort-lib.h)
