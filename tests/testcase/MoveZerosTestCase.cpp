//
// Created by Neo Ko on 16/4/7.
//

#include "gtest/gtest.h"
#include "solution/MoveZeros.h"

TEST(MoveZerosTestCase, test_solution_1)
{
    MoveZeros solution;
    std::vector<int> expect_result = {1, 2, 4, 3, 0};
    std::vector<int> sample = {1, 2, 0, 4, 3};
    solution.moveZeroes(sample);
    EXPECT_EQ(expect_result, sample);
}

TEST(MoveZerosTestCase, test_solution_2)
{
    MoveZeros solution;
    std::vector<int> expect_result = {0};
    std::vector<int> sample = {0};
    solution.moveZeroes(sample);
    EXPECT_EQ(expect_result, sample);
}

TEST(MoveZerosTestCase, test_solution_3)
{
    MoveZeros solution;
    std::vector<int> expect_result = {1, 3, 12, 0, 0};
    std::vector<int> sample = {0, 1, 0, 3, 12};
    solution.moveZeroes(sample);
    EXPECT_EQ(expect_result, sample);
}

TEST(MoveZerosTestCase, test_solution_4)
{
    MoveZeros solution;
    std::vector<int> expect_result = {1, 3, 12, 1, 0, 0, 0};
    std::vector<int> sample = {0, 1, 3, 0, 0, 12, 1};
    solution.moveZeroes(sample);
    EXPECT_EQ(expect_result, sample);
}
