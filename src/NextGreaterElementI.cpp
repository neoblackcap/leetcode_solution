//
// Created by Neo Ko on 2017/3/9.
//

#include <vector>
#include "catch.h"

using namespace std;

class NextGreaterElementISolution {
public:
    vector<int> nextGreaterElement(vector<int>& findNums, vector<int>& nums) {
        vector<int> result(findNums.size());

        for (auto firstIterator = findNums.begin(); firstIterator != findNums.end(); ++firstIterator) {
            long index = firstIterator - findNums.begin();
            result[index] = -1;
            for (auto secondIterator = nums.rbegin(); secondIterator != nums.rend(); ++secondIterator) {
                if (*secondIterator == *firstIterator) {
                    break;
                } else if (*secondIterator < *firstIterator) {
                    continue;
                } else {
                    result[index] = *secondIterator;
                }
            }
        }
        return result;
    }
};

TEST_CASE("Find next greater element I") {
    NextGreaterElementISolution solution;
    vector<int> sample1a = {4, 1, 2};
    vector<int> sample1b = {1, 3, 4, 2};

    vector<int> sample2a = {2, 4};
    vector<int> sample2b = {1, 2, 3, 4};

    vector<int> expectation1 = {-1, 3, -1};
    vector<int> expectation2 = {3, -1};

    REQUIRE( solution.nextGreaterElement(sample1a, sample1b) == expectation1 );
    REQUIRE( solution.nextGreaterElement(sample2a, sample2b) == expectation2 );
}
