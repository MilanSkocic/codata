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


 install(TARGETS static_fcodata ARCHIVE DESTINATION lib)
 install(TARGETS static_ccodata ARCHIVE DESTINATION lib)
 install(TARGETS shared_ccodata PUBLIC_HEADER DESTINATION include LIBRARY DESTINATION lib)
 install(TARGETS shared_fcodata PUBLIC_HEADER DESTINATION include LIBRARY DESTINATION lib)
