cmake_minimum_required(VERSION 3.10)

set(PROJECT_NAME "codata")

project(${PROJECT_NAME} VERSION 0.7.1 LANGUAGES "C" DESCRIPTION "Sources generator.")

add_subdirectory(src)

# cpack for creating binary archive
# make package_source for sources archive
# set(CPACK_SOURCE_GENERATOR "TGZ")
# set(CPACK_GENERATOR "TGZ")
# set(CPACK_SOURCE_IGNORE_FILES \\.git/ build/ \\.vscode/ ".*~$")
# set(CPACK_VERBATIM_VARIABLES YES)
# include(CPack)
