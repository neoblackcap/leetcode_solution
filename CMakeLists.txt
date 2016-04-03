cmake_minimum_required(VERSION 3.4)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)

add_executable(solution_main ${SOURCE_FILES})

add_subdirectory(src)
add_subdirectory(tests)

target_link_libraries(solution_main solution)
