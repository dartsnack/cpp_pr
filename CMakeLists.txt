cmake_minimum_required(VERSION 3.19)

project(CppPR)

list(APPEND CMAKE_MODULE_PATH "${PROJECT_SOURCE_DIR}/cmake")

include(get_cpm)

add_subdirectory("math")
add_subdirectory("app")

