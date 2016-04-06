project(leetcode_solution)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES CountingBits.cpp NimGame.cpp InvertBinaryTree.cpp InvertBinaryTree.h)

add_library(solution ${SOURCE_FILES})

