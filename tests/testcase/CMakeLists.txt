include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(leetcode_testcase q4_test.cpp ContingBitsTestCase.cpp NimGameTestCase.cpp)

target_link_libraries(leetcode_testcase gtest gtest_main)
target_link_libraries(leetcode_testcase solution)
