//
// Created by Neo Ko on 2017/3/8.
//

#include <vector>
#include <string>
#include <iostream>
#include "catch.h"


using namespace std;

class FindWordsSolution {
public:
    vector<string> findWords(vector<string> &words) {
        string row1 = "qwertyuiopQWERTYIOP";
        string row2 = "asdfghjklASDFGHJKL";
        string row3 = "zxcvbnmZXCVBNM";

        vector<string> test = {row1, row2, row3};
        vector<vector<int>> result;
        vector<string> output;

        for (auto str = words.begin(); str != words.end(); ++str) {
            result.push_back({0, 0, 0});
            for (auto cit = str->begin(); cit != str->end(); ++cit) {
                if (row1.find(*cit, 0) != string::npos) result[str - words.begin()][0] += 1;
                if (row2.find(*cit, 0) != string::npos) result[str - words.begin()][1] += 1;
                if (row3.find(*cit, 0) != string::npos) result[str - words.begin()][2] += 1;
            }
            if (this->isValid(result[str - words.begin()])) output.push_back(*str);
        }

        return output;
    }
private:
    bool isValid(vector<int> & flag) {
        int count = 0;
        if (flag[0]) count += 1;
        if (flag[1]) count += 1;
        if (flag[2]) count += 1;
        return count < 2;
    }
};
TEST_CASE("Find Word Begin") {
    FindWordsSolution solution;
    vector<string> sample =  {"Hello", "Alaska", "Dad", "Peace"};
    vector<string> expectation = {"Alaska", "Dad"};
    REQUIRE( solution.findWords(sample) == expectation );
}
