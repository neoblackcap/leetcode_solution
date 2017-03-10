//
// Created by Neo Ko on 2017/3/10.
//

#include <string>
#include "catch.h"

using namespace std;

class ReverseStringSolution {
public:
    string reverseString(string s) {
        return string(s.rbegin(), s.rend());
    }
};

TEST_CASE("Test reverse string") {
    ReverseStringSolution solution;
    REQUIRE( solution.reverseString("hello") == "olleh" );
}
