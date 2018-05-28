set(LIBRARY_NAME ARP)

aux_source_directory(. DIR_LIB_SRCS)
add_library(ARP ${DIR_LIB_SRCS})

target_include_directories(${LIBRARY_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
