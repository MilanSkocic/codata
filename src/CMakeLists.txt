add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}_2018.txt ${CMAKE_BINARY_DIR}/src/main.c
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata_2018.txt ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}_2018.txt
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/main.c ${CMAKE_BINARY_DIR}/src/main.c)
                   
add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}_data.f90 
                   DEPENDS generator 
                   COMMAND generator
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}_data.f90 ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}_data.f90
                   )


add_executable(generator main.c) 
target_include_directories(generator PUBLIC ${CMAKE_BINARY_DIR}/src)

# Fortran library
set(CODATA_PUBLIC_HEADERS "${CMAKE_BINARY_DIR}/src/codata.mod" "${CMAKE_SOURCE_DIR}/src/codata.h")
set(CODATA_SOURCES "codata_data.f90" "codata.f90")

add_library(static_codata STATIC "${CODATA_SOURCES}")
set_target_properties(static_codata PROPERTIES PUBLIC_HEADER "${CODATA_PUBLIC_HEADERS}" OUTPUT_NAME codata)
target_include_directories(static_codata PUBLIC ${CMAKE_BINARY_DIR}/src)

add_library(shared_codata SHARED "${CODATA_SOURCES}")
set_target_properties(shared_codata PROPERTIES PUBLIC_HEADER "${CODATA_PUBLIC_HEADERS}" OUTPUT_NAME codata)
target_include_directories(shared_codata PUBLIC ${CMAKE_BINARY_DIR}/src)

add_executable(codata-config config.c)
target_include_directories(codata-config PRIVATE ${CMAKE_BINARY_DIR}/src)