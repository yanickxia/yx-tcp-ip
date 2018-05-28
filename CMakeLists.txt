cmake_minimum_required(VERSION 3.0.0)
project(yx_ip C)

set(CMAKE_C_STANDARD 99)


#########
# GTest #
#########
enable_testing()
add_subdirectory(libs/gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

###########
# Project #
###########
add_executable(yx_ip main.c)
add_subdirectory(libs/arp)
add_subdirectory(libs/base)
add_subdirectory(unit_test)
target_link_libraries(yx_ip BASE ARP)


