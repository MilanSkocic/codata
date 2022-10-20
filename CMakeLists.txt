cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "codata")

project(${PROJECT_NAME} VERSION 1.0.0 LANGUAGES "C" "Fortran" DESCRIPTION "Generate codata from NIST.")
configure_file("./src/config.h.in" "./src/config.h")

set(CMAKE_C_STANDARD 99)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

message("release = " ${CMAKE_C_FLAGS_RELEASE})
message("debug = " ${CMAKE_C_FLAGS_DEBUG})
message("build type = " ${CMAKE_BUILD_TYPE})
message("prefix = " ${CMAKE_INSTALL_PREFIX})
message("C Compiler = " ${CMAKE_C_COMPILER})
message("Fortran Compiler = " ${CMAKE_Fortran_COMPILER})

add_subdirectory(src)

# enable_testing()
# add_test(NAME bv COMMAND test_bv)


install(FILES ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.h DESTINATION include)
install(FILES ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.mod DESTINATION include)
install(FILES ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.f90 DESTINATION include)
install(FILES ${CMAKE_BINARY_DIR}/src/${PROJECT_NAME}.py DESTINATION include)
