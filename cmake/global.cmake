# Global Environment configuration, must be included befor the first `project()` command
# Copyright (c) Stephen Zhang 2024. All rights reserved.

set(CMAKE_TOOLCHAIN_FILE
    "${CMAKE_CURRENT_SOURCE_DIR}/vcpkg/scripts/buildsystems/vcpkg.cmake"
    CACHE
    STRING "vcpkg toolchain file")

