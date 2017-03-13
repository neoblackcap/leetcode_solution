#include "catch.h"

class HammingDistanceSolution {
public:
    int hammingDistance(int x, int y) {
        int z = x ^ y;
        int distance = 0;
        for (int i = 0; i < 32; ++i) {
            (z & (0x1 << i)) > 0 ? ++distance : distance ;
        }
        return distance;
    }
};

TEST_CASE("Hamming Distance is calculated") {
    HammingDistanceSolution solution;
    REQUIRE( solution.hammingDistance(1, 4) == 2 );
    REQUIRE( solution.hammingDistance(1, 8) == 2 );
    REQUIRE( solution.hammingDistance(1, 12) == 3 );
    REQUIRE( solution.hammingDistance(1, 14) == 4 );
    REQUIRE( solution.hammingDistance(1, 0) == 1 );
    REQUIRE( solution.hammingDistance(1, 1) == 0 );
}