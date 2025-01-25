cmake_minimum_required(VERSION 3.19)

project(CppPR)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(get_cpm)

option(BUILD_MATH_TESTS ON "Build unit-tests for math library")
set(BUILD_MATH_TESTS ON)

add_subdirectory("math")
add_subdirectory("app")

if(BUILD_MATH_TESTS)
    message(STATUS "Build unit-tests for math library: yes")
    enable_testing()
    add_subdirectory("tests")
endif()

