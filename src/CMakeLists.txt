add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata.txt ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt)
                   
add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.h
                   DEPENDS generator 
                   COMMAND generator
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.f90
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.h ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.h
                   )

add_custom_target(generate_sources ALL
                   DEPENDS ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.h generator
                   )


add_executable(generator main.c) 
target_include_directories(generator PUBLIC ${CMAKE_BINARY_DIR}/src)

# Fortran library
add_library(static_codata STATIC codata.f90)
set_target_properties(static_codata PROPERTIES PUBLIC_HEADER ${CMAKE_BINARY_DIR}/src/codata.mod PUBLIC_HEADER ${CMAKE_BINARY_DIR}/src/codata.h OUTPUT_NAME codata)
target_include_directories(static_codata PUBLIC ${CMAKE_BINARY_DIR}/src)

add_library(shared_codata SHARED codata.f90)
set_target_properties(shared_codata PROPERTIES PUBLIC_HEADER ${CMAKE_BINARY_DIR}/src/codata.mod PUBLIC_HEADER ${CMAKE_BINARY_DIR}/src/codata.h OUTPUT_NAME codata)
target_include_directories(shared_codata PUBLIC ${CMAKE_BINARY_DIR}/src)