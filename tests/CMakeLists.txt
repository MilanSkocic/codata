set(LINKLIBS "")

if((${CMAKE_C_COMPILER_ID} STREQUAL "GNU") OR (${CMAKE_C_COMPILER_ID} STREQUAL "AppleClang") )
    set(LINKLIBS "m")
endif()


add_executable(test_constants test_value.c)
target_include_directories(test_constants PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_libraries(test_constants PUBLIC "${LINKLIBS}")