cmake_minimum_required(VERSION 3.10)

project(electrox VERSION 1.0.0 LANGUAGES "C" DESCRIPTION "Generate codata from NIST.")
configure_file("./src/config.h.in" "./src/config.h")

set(CMAKE_C_STANDARD 99)

set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS_DEBUG} -Wall")

message("release = " ${CMAKE_C_FLAGS_RELEASE})
message("debug = " ${CMAKE_C_FLAGS_DEBUG})
message("build type = " ${CMAKE_BUILD_TYPE})
message("prefix = " ${CMAKE_INSTALL_PREFIX})

add_executable(generator src/main.c) 
target_include_directories(generator PUBLIC ${CMAKE_BINARY_DIR}/src)

add_custom_command(
    TARGET generator PRE_BUILD 
    COMMAND ${CMAKE_COMMAND} -E copy ${CMAKE_SOURCE_DIR}/src/codata.txt ${CMAKE_BINARY_DIR}/src/codata.txt
    COMMENT "Copying codata.txt to build directory"
)

add_custom_command(TARGET generator POST_BUILD 
                   COMMAND generator
                   COMMENT "Compile Fortran module.")

# enable_testing()
# add_test(NAME bv COMMAND test_bv)


#install(TARGETS static_electrox PUBLIC_HEADER DESTINATION include/electrox ARCHIVE DESTINATION lib)
#install(TARGETS shared_electrox PUBLIC_HEADER DESTINATION include/electrox LIBRARY DESTINATION lib)
#install(TARGETS static_felectrox ARCHIVE DESTINATION lib)
#install(TARGETS shared_felectrox LIBRARY DESTINATION lib)
#install(TARGETS celectrox-config RUNTIME DESTINATION bin)
#install(TARGETS example_eis example_kinetics RUNTIME DESTINATION bin)

#SET(CPACK_GENERATOR "DEB")
#SET(CPACK_DEBIAN_PACKAGE_MAINTAINER "Milan Skocic") #required
#SET(CPACK_DEBIAN_PACKAGE_DEPENDS "libc6 (>= 2.3), libgsl-dev (>=2.6), libopenblas-dev (>=0.3)" )
#INCLUDE(CPack)