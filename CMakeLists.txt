cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "codata")

project(${PROJECT_NAME} VERSION 0.1.0 LANGUAGES "C" "Fortran" DESCRIPTION "Generate codata from NIST.")
configure_file("./src/config.h.in" "./src/config.h")

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c99")
set(CMAKE_Fortran_FLAGS "${CMAKE_Fortran_FLAGS} -std=f2008")

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -std=c99 -Wall")
set(CMAKE_Fortran_FLAGS_DEBUG "${CMAKE_Fortran_FLAGS_DEBUG} -std=f2008 -Wall")
set(CMAKE_C_FLAGS_RELEASE "${CMAKE_C_FLAGS_RELEASE} -std=c99")
set(CMAKE_Fortran_FLAGS_RELEASE "${CMAKE_Fortran_FLAGS_RELEASE} -std=f2008")

message("Cflags release = " ${CMAKE_C_FLAGS_RELEASE})
message("Cflagsdebug = " ${CMAKE_C_FLAGS_DEBUG})
message("Fflags release = " ${CMAKE_Fortran_FLAGS_RELEASE})
message("Fflagsdebug = " ${CMAKE_Fortran_FLAGS_DEBUG})
message("build type = " ${CMAKE_BUILD_TYPE})
message("prefix = " ${CMAKE_INSTALL_PREFIX})
message("C Compiler = " ${CMAKE_C_COMPILER})
message("Fortran Compiler = " ${CMAKE_Fortran_COMPILER})

add_subdirectory(src)
add_subdirectory(examples)

# enable_testing()
# add_test(NAME bv COMMAND test_bv)


 install(TARGETS static_fcodata ARCHIVE DESTINATION lib)
 install(TARGETS static_ccodata ARCHIVE DESTINATION lib)
 install(TARGETS shared_ccodata PUBLIC_HEADER DESTINATION include LIBRARY DESTINATION lib)
 install(TARGETS shared_fcodata PUBLIC_HEADER DESTINATION include LIBRARY DESTINATION lib)
