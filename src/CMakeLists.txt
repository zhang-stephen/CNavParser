add_library(navparser STATIC)

target_include_directories(navparser
    PUBLIC
        ${CMAKE_CURRENT_SOURCE_DIR}
)

target_link_libraries(navparser
    PRIVATE
        compiler
)

target_sources(navparser
    PRIVATE
        Token.c
)
