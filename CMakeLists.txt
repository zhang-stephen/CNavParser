# CNavParser building specs
# C11 is preferred, and available for bare metal
# Copyright (c) Stephen Zhang 2024. All Right Reserved

cmake_minimum_required(VERSION 3.25)

include(cmake/global.cmake)
include(cmake/options.cmake)
include(cmake/common.cmake)

project(CNavParser
    VERSION 0.0.1
    LANGUAGES C
)

# CMake configurations (ordered)
# include(CTest)
include(cmake/lib/compiler.cmake)

# external packages

# subdirectories
add_subdirectory(src)
