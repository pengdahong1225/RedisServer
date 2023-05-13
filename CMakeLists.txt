cmake_minimum_required(VERSION 3.17)

set(TARGET CRedisServer)
set(CMAKE_CXX_STANDARD 20)

if (WIN32)
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} /Zc:__cplusplus")
endif ()

project(${TARGET})

include_directories(src)
include_directories(common)

aux_source_directory(./src SRCS)

add_executable(${TARGET} ${SRCS})
