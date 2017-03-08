#include "catch.h"

class NumberComplementSolution {
public:
    int findComplement(int num) {
        int rv = 0;
        int highest = 31;
        int sample = 0;
        for (int i = 0; i < 31; ++i) {
            highest = 31 - i;
            if (num & (0x40000000 >> i)) {
                break;
            }
        }
        for (int i = 0; i < highest; ++i) {
            sample += 1 << i;
        }
        rv = num ^ sample;
        return rv;
    }
};

TEST_CASE("Number Complement is calculated") {
    NumberComplementSolution solution;
    REQUIRE( solution.findComplement(5) == 2 );
    REQUIRE( solution.findComplement(1) == 0 );
    REQUIRE( solution.findComplement(0) == 1 );
}
