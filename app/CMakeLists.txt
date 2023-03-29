add_executable(codata-config config.c)
target_include_directories(codata-config PRIVATE ${CMAKE_BINARY_DIR}/app)