add_executable(generator main.c) 
target_include_directories(generator PUBLIC ${CMAKE_BINARY_DIR}/src)

add_custom_command(
    TARGET generator PRE_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata.txt ${CMAKE_BINARY_DIR}/src/codata.txt
    COMMENT "Copying codata.txt to build directory"
)

add_custom_command(TARGET generator POST_BUILD 
                   COMMAND generator
                   COMMENT "Generate code.")