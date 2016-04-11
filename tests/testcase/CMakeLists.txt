include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(../../include)

add_executable(leetcode_testcase ContingBitsTestCase.cpp NimGameTestCase.cpp InvertBinaryTreeTestCase.cpp MoveZerosTestCase.cpp SingleNumber.cpp SingleNumberIIITestCase.cpp ProductOfArrayExceptSelfTestCase.cpp)

target_link_libraries(leetcode_testcase gtest gtest_main)
target_link_libraries(leetcode_testcase solution)
