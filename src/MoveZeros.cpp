//
// Created by Neo Ko on 16/4/7.
//
#include "solution/MoveZeros.h"
#include <iostream>

void MoveZeros::moveZeroes(vector<int> &nums) {
    auto zero_iterator = nums.rbegin();
    auto non_zero_iterator = nums.rbegin();
    while (zero_iterator != nums.rend()) {
        if (*zero_iterator == 0 && non_zero_iterator != nums.rend()) {
            while (*non_zero_iterator == 0 && non_zero_iterator != nums.rend()) {
                ++non_zero_iterator;
            }

            nums.insert(non_zero_iterator.base(), 0);
            nums.erase((++zero_iterator).base());
            --zero_iterator; // prevent dangling pointer
        }
        ++zero_iterator;
    }
}
