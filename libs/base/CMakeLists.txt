cmake_minimum_required(VERSION 3.0.0)

set(LIBRARY_NAME BASE)

aux_source_directory(. DIR_LIB_SRCS)
add_library(${LIBRARY_NAME} STATIC ${DIR_LIB_SRCS})

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})