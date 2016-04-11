//
// Created by Neo Ko on 16/4/10.
//

#include "gtest/gtest.h"
#include "solution/SingleNumber.h"

TEST(SingleNumberTestCase, test_solution) {
    SingleNumber solution;
    vector<int> sample = {1,2,1,2,3,4,4,3,5};
    int result = solution.singleNumber(sample);
    EXPECT_EQ(result, 5);
}
