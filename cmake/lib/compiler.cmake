# compiler configurations
# Copyright (c) Stephen Zhang 2024. All Right Reserved

add_library(compiler INTERFACE)

target_include_directories(compiler
    INTERFACE
        ${CMAKE_BINARY_DIR}
)

target_compile_options(compiler
    INTERFACE
        -Wall
        -Werror
        -Wshadow
        -Wformat=2
        -Wunused
)

target_compile_definitions(compiler
    INTERFACE
         $<IF:$<CONFIG:Debug>,DEBUG,NDEBUG>
)

if (CMAKE_HOST_APPLE)
    if (USE_BREW_LLVM)
        target_include_directories(
            compiler
            INTERFACE
                /opt/homebrew/opt/llvm/include
        )
        target_link_directories(
            compiler
            INTERFACE
                /opt/homebrew/opt/llvm/lib
                /opt/homebrew/opt/llvm/lib/c++
        )
        target_compile_options(
            compiler
            INTERFACE
                # linker input unused
                # -Wl,-rpath,/opt/homebrew/opt/llvm/lib/c++
        )
    endif ()
endif ()
