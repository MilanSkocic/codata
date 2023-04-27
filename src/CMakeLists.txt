add_custom_command(OUTPUT ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}_2018.txt 
                          ${CMAKE_BINARY_DIR}/src/generator.c
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata_2018.txt ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}_2018.txt
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/generator.c ${CMAKE_BINARY_DIR}/src/generator.c)
                   


add_executable(generator generator.c) 

add_custom_command(TARGET generator POST_BUILD
                   COMMENT "Generating source files."
                   COMMAND generator  
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/f${PROJECT_NAME}.f90 ${CMAKE_SOURCE_DIR}/src/f${PROJECT_NAME}.f90
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/c${PROJECT_NAME}.h ${CMAKE_SOURCE_DIR}/src/c${PROJECT_NAME}.h
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/py${PROJECT_NAME}.py ${CMAKE_SOURCE_DIR}/src/py${PROJECT_NAME}.py
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/cpy${PROJECT_NAME}.c ${CMAKE_SOURCE_DIR}/src/cpy${PROJECT_NAME}.c
                   COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.txt ${CMAKE_SOURCE_DIR}/src/${PROJECT_NAME}.txt
                   )