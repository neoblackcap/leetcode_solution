//
// Created by Neo Ko on 16/4/11.
//

#include "gtest/gtest.h"
#include "solution/SingleNumberIII.h"
using namespace std;

TEST(SingleNumberIIITestCase, test_solution) {
  SingleNumberIII s;
  vector<int> sample = {1, 2, 1, 2, 5, 5, 3, 4};
  vector<int> result;
  vector<int> expect = {3, 4};
  result = s.singleNumber(sample);
  EXPECT_EQ(result, expect);
}
