project(leetcode_solution)

include_directories(../include)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES CountingBits.cpp NimGame.cpp InvertBinaryTree.cpp MoveZeros.cpp SingleNumber.cpp SingleNumberIII.cpp)

add_library(solution ${SOURCE_FILES})

