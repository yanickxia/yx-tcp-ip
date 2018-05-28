aux_source_directory(. DIR_LIB_SRCS)
add_library(BASE ${DIR_LIB_SRCS})

add_subdirectory(test)