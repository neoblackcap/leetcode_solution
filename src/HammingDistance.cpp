#define CATCH_CONFIG_MAIN 
#include "catch.h"

class Solution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int distance = 0;
        for (int i = 0; i < 32; ++i) {
            z ^ (1 << i) > 0 ? ++distance : distance ;
        }
        return distance;
    }
};

TEST_CASE("Hamming Distance is calculated") {
    Solution solution;
    REQUIRE( solution.hammingDistance(1, 4) == 2 );
}