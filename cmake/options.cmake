# User Options for xSystemEventMachine building
# Copyright (c) Stephen Zhang 2024. All Right Reserved.

# common options

# platform specific options
if(CMAKE_HOST_APPLE)
    # for MacOS
    option(
        USE_BREW_LLVM
        "Use LLVM from homebrew instead of system. MacOS only"
        true
    )
elseif(CMAKE_HOST_LINUX)
    # for Linux distros
elseif(CMAKE_HOST_WIN32)
endif()
