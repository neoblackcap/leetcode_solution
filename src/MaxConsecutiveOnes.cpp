//
// Created by Neo Ko on 2017/3/10.
//
#include "catch.h"
#include <vector>

using namespace std;

class MaxConsecutiveOnesSolution {
public:
    int findMaxConsecutiveOnes(vector<int> &nums) {
        int max = 0;
        int count = 0;
        for (long i = 0; i != nums.size(); ++i) {
            if (nums[i]) {
                ++count;
                if (count > max) max = count;
            } else {
                count = 0;
            }
        }
        return max;
    }
};

TEST_CASE("Test max consecutive ones solution") {
    MaxConsecutiveOnesSolution solution;
    vector<int> sample {1, 1, 0, 1, 1, 1};
    vector<int> sample1 {1, 1, 0, 0, 0, 0};
    vector<int> sample2 {1, 1, 0, 1, 1, 1, 1, 1};
    vector<int> sample3 {1, 1, 0, 1, 1, 1, 1};
    vector<int> sample4 {1,0,1,1,0,1};
    REQUIRE(solution.findMaxConsecutiveOnes(sample) == 3);
    REQUIRE(solution.findMaxConsecutiveOnes(sample1) == 2);
    REQUIRE(solution.findMaxConsecutiveOnes(sample2) == 5);
    REQUIRE(solution.findMaxConsecutiveOnes(sample3) == 4);
    REQUIRE(solution.findMaxConsecutiveOnes(sample4) == 2);
}
