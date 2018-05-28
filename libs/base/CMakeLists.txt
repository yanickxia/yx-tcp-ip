cmake_minimum_required(VERSION 3.0.0)

set(LIBRARY_NAME BASE)

aux_source_directory(. DIR_LIB_SRCS)
add_library(BASE STATIC ${DIR_LIB_SRCS})

add_subdirectory(test)