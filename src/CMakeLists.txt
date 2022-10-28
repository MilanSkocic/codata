add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata.txt ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt)
                   
add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.c ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.h
                   DEPENDS generator 
                   COMMAND generator
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.f90
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.c ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.c
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.h ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.h
                   )

add_custom_target(generate_sources ALL
                   DEPENDS ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.c ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.h generator
                   )


add_executable(generator main.c) 
target_include_directories(generator PUBLIC ${CMAKE_BINARY_DIR}/src)

# C library
add_library(static_ccodata STATIC codata.c)
set_target_properties(static_ccodata PROPERTIES OUTPUT_NAME ccodata)
target_include_directories(static_ccodata PUBLIC ${CMAKE_BINARY_DIR}/src)

add_library(shared_ccodata SHARED codata.c)
set_target_properties(shared_ccodata PROPERTIES PUBLIC_HEADER ${CMAKE_BINARY_DIR}/src/codata.h OUTPUT_NAME ccodata)
target_include_directories(shared_ccodata PUBLIC ${CMAKE_BINARY_DIR}/src)

# Fortran library
add_library(static_fcodata STATIC codata.f90)
set_target_properties(static_fcodata PROPERTIES OUTPUT_NAME fcodata)
target_include_directories(static_fcodata PUBLIC ${CMAKE_BINARY_DIR}/src)

add_library(shared_fcodata SHARED codata.f90)
set_target_properties(shared_fcodata PROPERTIES PUBLIC_HEADER ${CMAKE_BINARY_DIR}/src/codata.mod OUTPUT_NAME fcodata)
target_include_directories(shared_fcodata PUBLIC ${CMAKE_BINARY_DIR}/src)