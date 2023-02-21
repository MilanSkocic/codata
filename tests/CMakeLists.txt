set(LINKLIBS "codata")

if((${CMAKE_C_COMPILER_ID} STREQUAL "GNU") OR (${CMAKE_C_COMPILER_ID} STREQUAL "AppleClang") )
    set(LINKLIBS "m" "codata")
endif()

add_executable(test_constants test_value.c)
target_include_directories(test_constants PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_directories(test_constants PUBLIC ${CMAKE_BINARY_DIR}/src)
target_link_libraries(test_constants "${LINKLIBS}")

add_executable(test_not_found test_not_found.c)
target_include_directories(test_not_found PUBLIC ${CMAKE_SOURCE_DIR}/src)
target_link_directories(test_not_found PUBLIC ${CMAKE_BINARY_DIR}/src)
target_link_libraries(test_not_found "${LINKLIBS}")