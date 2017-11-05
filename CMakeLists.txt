cmake_minimum_required(VERSION 3.1)
project(Neural)

file(GLOB_RECURSE SRCS
  source/*.cpp)

set(CMAKE_CXX_FLAGS "-std=c++11 -Wall")
set(CMAKE_CXX_FLAGS_DEBUG "-g -O0")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

add_executable(Neural ${SRCS})

target_include_directories(Neural
  PUBLIC ${CMAKE_CURRENT_LIST_DIR}/include)