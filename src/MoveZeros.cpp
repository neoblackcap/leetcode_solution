//
// Created by Neo Ko on 16/4/7.
//
#include "MoveZeros.h"

void MoveZeros::moveZeroes(vector<int> &nums) {
  int count = 0;

  for (auto it = nums.begin(); it!=nums.end();) {
    if (*it==0) {
      ++count;
      nums.erase(it);
      it = nums.begin();
    } else {
      ++it;
    }
  }
  for (int i = 0; i < count; ++i) {
    nums.push_back(0);
  }
}
