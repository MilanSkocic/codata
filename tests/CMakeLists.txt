add_executable(test_constants main.c)
target_include_directories(test_constants PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_directories(test_constants PUBLIC ${CMAKE_BINARY_DIR}/src)
target_link_libraries(test_constants m codata)