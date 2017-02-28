//
// Created by Neo Ko on 16/4/7.
//

#ifndef LEETCODE_MOVEZEROS_H
#define LEETCODE_MOVEZEROS_H

#include <vector>

using namespace std;

class MoveZeros {
 public:
  void moveZeroes(vector<int> &nums);

  void swap(vector<int>::reverse_iterator &end, vector<int>::reverse_iterator &begin);
};

#endif //LEETCODE_MOVEZEROS_H
