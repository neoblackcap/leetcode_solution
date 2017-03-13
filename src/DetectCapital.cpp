//
// Created by Neo Ko on 2017/3/10.
//

#include <string>
#include <iostream>
#include "catch.h"

using namespace std;

class DetectCapitalSolution {
public:
    bool detectCapitalUse(string word) {
        long totalCap = 0;
        int isCap = 0;
        long totalLow = 0;
        for (long i = 0; i != word.size(); ++i) {
            int v = static_cast<int>(word[i]);
            if (i == 0 && 65 <= v && v <= 90) ++isCap;
            if ( 65 <= v && v <= 90) ++totalCap;
            if ( v > 90) ++totalLow;
        }
        return (totalCap == word.size() ||
                totalLow == word.size() ||
                isCap + totalLow == word.size());
    }
};

TEST_CASE("test detect capital solution") {
    DetectCapitalSolution solution;
    REQUIRE(solution.detectCapitalUse("abcd") == true);
    REQUIRE(solution.detectCapitalUse("Abcd") == true);
    REQUIRE(solution.detectCapitalUse("HellG") == false);
    REQUIRE(solution.detectCapitalUse("HeIlG") == false);
    REQUIRE(solution.detectCapitalUse("USA") == true);
    REQUIRE(solution.detectCapitalUse("Dog") == true);
}
