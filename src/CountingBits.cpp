//
// Created by Neo Ko on 16/4/3.
//

#include "catch.h"
#include <vector>

using namespace std;

class CountingBitsSolution {
public:
    vector<int> countBits(int num) {
        vector<int> result;
        for (int i = 0; i <= num; ++i) {
            int tmp = this->countBitOfInteger(i, 0);
            result.push_back(tmp);
        }
        return result;
    };

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


TEST_CASE("Test Counting Bits") {
    vector<int> sample1 = {0, 1, 1, 2, 1, 2};
    vector<int> sample2 = {0};
    vector<int> sample3 = {0, 1, 1, 2, 1, 2, 2};
    CountingBitsSolution solution;
    vector<int> result1 = solution.countBits(5);
    vector<int> result2 = solution.countBits(0);
    vector<int> result3 = solution.countBits(6);
    REQUIRE(sample1 == result1);
    REQUIRE(sample2 == result2);
    REQUIRE(sample3 == result3);
}
