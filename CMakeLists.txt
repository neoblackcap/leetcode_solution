cmake_minimum_required(VERSION 3.4)
project(leetcode)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Werror")

include_directories(include)

set(SOURCE_FILES
        src/CountingBits.cpp
        src/NumberComplement.cpp
        src/main.cpp
        src/KeyboardRow.cpp
        src/NextGreaterElementI.cpp
        src/ReverseString.cpp
        src/IslandPerimeter.cpp
        src/MaxConsecutiveOnes.cpp
        src/HammingDistance.cpp
        src/DetectCapital.cpp)

add_executable(solution ${SOURCE_FILES})
