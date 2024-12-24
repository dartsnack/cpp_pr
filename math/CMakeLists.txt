add_library(math STATIC)

target_sources(
    math
    PRIVATE
    "src/fib.cpp"
)

target_include_directories(
    math
    PUBLIC
    "include"
    PRIVATE
    "src"
)

