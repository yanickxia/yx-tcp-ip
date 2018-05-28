cmake_minimum_required(VERSION 2.8)
project(yx_ip C)

set(CMAKE_C_STANDARD 99)

add_subdirectory(arp)
add_subdirectory(base)


#########
# GTest #
#########
enable_testing()
add_subdirectory(libs/gtest-1.7.0)
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(yx_ip main.c)
target_link_libraries(yx_ip BASE ARP)
