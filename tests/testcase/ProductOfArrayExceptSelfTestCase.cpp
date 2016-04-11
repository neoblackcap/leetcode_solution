//
// Created by Neo Ko on 16/4/11.
//

#include "gtest/gtest.h"
#include "solution/ProductOfArrayExceptSelf.h"

using namespace std;

TEST(ProductOfArrayExceptSelfTestCase, test_solution) {
    ProductOfArrayExceptSelf s;
    vector<int> sample = {1,2,3,4};
    vector<int> expect = {24,12,8,6};
    vector<int> r = s.productExceptSelf(sample);
    EXPECT_EQ(r, expect);
}
