//
// Created by Neo Ko on 16/4/7.
//
#include "solution/MoveZeros.h"

void MoveZeros::moveZeroes(vector<int>& nums)
{
    vector<int>::reverse_iterator final_zero_iterator = nums.rbegin();

    for (auto zero_iterator = nums.rbegin(); zero_iterator!=nums.rend(); ++zero_iterator) {
        if (*zero_iterator==0) {
            for (; final_zero_iterator!=zero_iterator; ++final_zero_iterator) {
                if (*final_zero_iterator!=0) {
                    auto it = zero_iterator;
                    swap(it, final_zero_iterator);
                    break;
                }
            }
        }
    }
}

void MoveZeros::swap(vector<int>::reverse_iterator& end, vector<int>::reverse_iterator& begin)
{
    for (; end!=begin; --end) {
        vector<int>::reverse_iterator before = end-1;
        if (*before==0) { break; }
        int tmp = *before;
        *before = *end;
        *end = tmp;
    }

}
