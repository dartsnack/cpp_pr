cpmaddpackage("gh:catchorg/Catch2@3.7.1")

add_executable(math_tests)

target_sources(
    math_tests
    PRIVATE
    "src/test_fib.cpp"
)

target_link_libraries(
    math_tests
    PRIVATE
    math
    Catch2::Catch2WithMain
)

target_compile_features(
    math_tests
    PRIVATE
    cxx_std_17
)

add_test(math_tests math_tests)

