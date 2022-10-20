add_custom_command(OUTPUT ${PROJECT_NAME}.txt
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata.txt ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt)

# add_custom_command(OUTPUT ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.h 
#                    OUTPUT ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.f90 
#                    OUTPUT ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.py 
#                    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_NAME}.h ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.h
#                    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.f90
#                    COMMAND ${CMAKE_COMMAND} -E copy ${PROJECT_NAME}.py ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.py)

add_custom_command(OUTPUT ${PROJECT_NAME}.f90 ${PROJECT_NAME}.h ${PROJECT_NAME}.py
                   COMMAND generator)

add_custom_command(OUTPUT ${PROJECT_NAME}.mod
                   COMMAND ${CMAKE_Fortran_COMPILER} -c ${PROJECT_NAME}.f90)

add_custom_target(copy_codata ALL
                   DEPENDS ${PROJECT_NAME}.txt generator)

add_custom_target(compile_f90 ALL 
                  DEPENDS generator ${PROJECT_NAME}.f90 ${PROJECT_NAME}.mod)

# add_custom_target(dist ALL 
#                   DEPENDS generator
#                   DEPENDS ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.h 
#                   DEPENDS ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.f90 
#                   DEPENDS ${CMAKE_SOURCE_DIR}/dist/${PROJECT_NAME}.py 
#                   )
                

add_executable(generator main.c) 
target_include_directories(generator PUBLIC ${CMAKE_BINARY_DIR}/src)
