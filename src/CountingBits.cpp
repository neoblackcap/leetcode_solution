//
// Created by Neo Ko on 16/4/3.
//

#include "CountingBits.h"

using namespace std;

vector<int>  CountingBitsSolution::countBits(int num) {
    {
        vector<int> result;
        for (int i = 0; i <= num; ++i) {
            int tmp = this->countBitOfInteger(i, 0);
            result.push_back(tmp);
        }
        return result;
    }
};
