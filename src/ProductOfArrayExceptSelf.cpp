//
// Created by Neo Ko on 16/4/11.
//

#include "ProductOfArrayExceptSelf.h"

vector<int> ProductOfArrayExceptSelf::productExceptSelf(vector<int> &nums) {
  int product = 1;
  vector<int> v(nums.size());

  for (int i = 0; i < nums.size(); ++i) {
    v[i] = product;
    product *= nums[i];
  }

  product = 1;
  for (int i = nums.size() - 1; i >= 0; --i) {
    v[i] *= product;
    product *= nums[i];
  }
  return v;
}
