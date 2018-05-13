cmake_minimum_required(VERSION 3.10)
project(yx_ip C)

include_directories(include)

set(CMAKE_C_STANDARD 99)

add_executable(yx_ip main.c include/syshead.h include/arp.h src/arp.c include/utils.h src/utils.c unit_test/test_utils.c)