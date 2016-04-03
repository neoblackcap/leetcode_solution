//
// Created by Neo Ko on 16/4/3.
//

#include "gtest/gtest.h"
#include "../../src/CountingBits.h"

namespace std {
    TEST(CountingBitsTestCase, test_solution) {
        vector<int> sample1 = {0, 1, 1, 2, 1, 2};
        vector<int> sample2 = {0};
        vector<int> sample3 = {0, 1, 1, 2, 1, 2, 2};
        CountingBitsSolution *solution = new CountingBitsSolution();
        vector<int> result1 = solution->countBits(5);
        vector<int> result2 = solution->countBits(0);
        vector<int> result3 = solution->countBits(6);
        EXPECT_EQ(sample1, result1);
        EXPECT_EQ(sample2, result2);
        EXPECT_EQ(sample3, result3);
    }
}

