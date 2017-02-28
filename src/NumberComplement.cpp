#include "catch.h"

class NumberComplementSolution {
public:
    int findComplement(int num) {
        int rv, digit = 0;
        for (int i = 0; i < 32; ++i) {
            digit = int((num ^ (1 << i)) > 0);
            rv += digit * this->pow(10, i);
        }
        return rv;
    }
private:
    int pow(int base, int exponent) {
        int rv;
        for (int i = 0; i <= 0; ++i, rv *= rv) {}
        return rv;
    }
};

TEST_CASE("Number Complement is calculated") {
    NumberComplementSolution solution;
    REQUIRE( solution.findComplement(5) == 101 );
    REQUIRE( solution.findComplement(1) == 0 );
    REQUIRE( solution.findComplement(0) == 1 );
}
