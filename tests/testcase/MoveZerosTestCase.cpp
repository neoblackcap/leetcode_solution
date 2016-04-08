//
// Created by Neo Ko on 16/4/7.
//

#include "gtest/gtest.h"
#include "solution/MoveZeros.h"

TEST(MoveZerosTestCase, test_solution_1) {
    MoveZeros solution;
    std::vector<int> expect_result = {1, 2, 3, 4, 0};
    std::vector<int> sample = {1, 2, 0, 4, 3};
    solution.moveZeroes(sample);
    EXPECT_EQ(expect_result, sample);
}

TEST(MoveZerosTestCase, test_solution_2) {
    MoveZeros solution;
    std::vector<int> expect_result = {0};
    std::vector<int> sample = {0};
    solution.moveZeroes(sample);
    EXPECT_EQ(expect_result, sample);
}

TEST(MoveZerosTestCase, test_erase) {
    std::vector<int> nums = {1, 2, 0, 3, 4, 0};
    auto it = nums.begin();
    for (int i = 0; i < 2; ++it, ++i) { };
    nums.erase(it);
    int a = 1;
}
