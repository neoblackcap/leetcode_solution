//
// Created by Neo Ko on 16/4/12.
//

#ifndef LEETCODE_BESTTIMETOBUYANDSELLSTOCKII_H
#define LEETCODE_BESTTIMETOBUYANDSELLSTOCKII_H
#include <vector>

using namespace std;

struct Answer {
  int range;
  int profit;
  Answer(int &range, int profit) {
    this->range = range;
    this->profit = profit;
  }
};

class BestTimeToBuyAndSellStock {
 public:
  int maxProfit(vector<int> &prices);
  int maxProfitImpl(vector<int> &prices);
  Answer findCrossMaxProfit(vector<int> &prices);
  vector<int> createBalanceVector(vector<int> &prices);
};

#endif //LEETCODE_BESTTIMETOBUYANDSELLSTOCKII_H
