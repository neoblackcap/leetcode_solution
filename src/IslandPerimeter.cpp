#include <vector>
#include <unordered_map>
#include "catch.h"

using namespace std;

class IslandPerimeterSolution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {


    }

};

TEST_CASE("Test get island perimeter") {
    IslandPerimeterSolution solution;
    vector<vector<int>> sample = {{0,1,0,0},
            {1,1,1,0},
            {0,1,0,0},
            {1,1,0,0}};
    REQUIRE(solution.islandPerimeter(sample) == 16);
}
