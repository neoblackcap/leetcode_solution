//
// Created by Neo Ko on 16/4/11.
//

#include "SingleNumberIII.h"

vector<int> SingleNumberIII::singleNumber(vector<int> &nums) {
  int num_a = 0, num_b = 0, diff = 0;
  vector<int> v;
  for (auto n: nums) {
    diff ^= n;
  }
  diff &= -diff;

  for (auto n: nums) {
    if ((n & diff)!=0) {
      num_a ^= n;
    }
    else {
      num_b ^= n;
    }
  }
  v.push_back(num_a);
  v.push_back(num_b);
  return v;
}
