cmake_minimum_required(VERSION 3.0.0)

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../libs/base)

set(TEST_PROJECT_NAME UnitsTests)
file(GLOB LIBRARY_TESTS_SOURCE *.cpp ../libs/base/*.c)
#file(GLOB LIBRARY_TESTS_SOURCE ../libs/base/*.c)


project(${TEST_PROJECT_NAME})

enable_testing()

if (NOT (TARGET gtest AND TARGET gtest_main))
    message(FATAL_ERROR "gtest and gtest_main targets NOT found")
endif()

add_executable(${TEST_PROJECT_NAME} ${LIBRARY_TESTS_SOURCE})

target_link_libraries(${TEST_PROJECT_NAME} BASE gtest gtest_main)

add_test(${TEST_PROJECT_NAME}, ${TEST_PROJECT_NAME})