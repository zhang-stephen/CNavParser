# common configuration of cmake project
# Copyright (c) Stephen Zhang 2024. All Right Reserved

# export compilation info
set(CMAKE_EXPORT_COMPILE_COMMANDS true)

# default building type is Debug
if (NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Debug" STRING)
endif ()

# c standard and features
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED true)

if (CMAKE_HOST_APPLE)
    if(USE_BREW_LLVM)
        set(CMAKE_CXX_COMPILER "/opt/homebrew/opt/llvm/bin/clang++")
        set(CMAKE_C_COMPILER "/opt/homebrew/opt/llvm/bin/clang")
    endif()
    set(CMAKE_OSX_ARCHITECTURES "arm64")
endif ()
