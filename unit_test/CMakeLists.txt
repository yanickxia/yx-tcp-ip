cmake_minimum_required(VERSION 3.0.0)

set(TEST_PROJECT_NAME UnitsTests)
file(GLOB LIBRARY_TESTS_SOURCE *.cpp)

project(${TEST_PROJECT_NAME})

enable_testing()

if (NOT (TARGET gtest AND TARGET gtest_main))
    message(FATAL_ERROR "gtest and gtest_main targets NOT found")
endif()

add_executable(${TEST_PROJECT_NAME} ${LIBRARY_TESTS_SOURCE})

target_link_libraries(${TEST_PROJECT_NAME} ARP BASE)
target_link_libraries(${TEST_PROJECT_NAME} gtest gtest_main)

add_test(
        NAME
        unit
        COMMAND
        ${CMAKE_BINARY_DIR}/${CMAKE_INSTALL_BINDIR}/unit_tests
)