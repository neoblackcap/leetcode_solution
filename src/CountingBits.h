//
// Created by Neo Ko on 16/4/3.
//
#ifndef LEETCODE_COUNTINGBITS_H
#define LEETCODE_COUNTINGBITS_H

#include <vector>

using namespace std;

class CountingBitsSolution {
public:
    vector<int> countBits(int num);

private:
    int countBitOfInteger(int num, int counting) {
        if (num <= 1) {
            counting += num % 2;
            return counting;
        } else {
            int reminder = num % 2;
            if (reminder == 1) { ++counting; }
            counting = this->countBitOfInteger(num >> 1, counting);
            return counting;
        }


    }
};


#endif //LEETCODE_COUNTINGBITS_H
