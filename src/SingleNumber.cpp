//
// Created by Neo Ko on 16/4/10.
//

#include "solution/SingleNumber.h"

int SingleNumber::singleNumber(vector<int>& nums)
{
    int result = 0;
    for (auto n: nums) {
        result ^= n;
    };
    return result;

};
