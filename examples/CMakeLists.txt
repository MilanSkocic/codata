add_executable(example_in_c example_in_c.c)
target_include_directories(example_in_c PRIVATE ${CMAKE_SOURCE_DIR}/src)
target_link_directories(example_in_c PRIVATE ${CMAKE_BINARY_DIR}/src)
target_link_libraries(example_in_c codata)

add_executable(example_in_fortran example_in_fortran.f90)
target_include_directories(example_in_fortran PRIVATE ${CMAKE_BINARY_DIR}/src)
target_link_directories(example_in_fortran PRIVATE ${CMAKE_BINARY_DIR}/src)
target_link_libraries(example_in_fortran codata)