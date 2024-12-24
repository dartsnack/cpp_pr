add_executable(app)

target_sources(
    app
    PRIVATE
    "src/main.cpp"
)

target_link_libraries(
    app
    PRIVATE
    math
)

target_compile_features(
    app 
    PRIVATE
    cxx_std_17
)
