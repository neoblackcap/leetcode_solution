#include <vector>
#include <unordered_map>
#include "catch.h"
#include <iostream>

using namespace std;

class IslandPerimeterSolution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        vector<vector<int>> hEdges(101);
        vector<vector<int>> vEdges(101);
        vector<int> initVec(101);
        for (auto& v: hEdges) {
            for (auto i: initVec) {
                v.push_back(i);
            }
        }

        for (auto& v: vEdges) {
            for (auto i: initVec) {
                v.push_back(i);
            }
        }

        int perimeter = 0;

        for (auto row = 0; row != grid.size(); ++row) {
            for (long index = 0; index != grid[row].size(); ++index) {
                hEdges[row][index] += grid[row][index];
                hEdges[row + 1][index] += grid[row][index];
            }
        }

        for (long row = 0; row != grid.size(); ++row) {
            for (long index = 0; index != grid[row].size(); ++index) {
                vEdges[index][row] += grid[row][index];
                vEdges[index + 1][row] += grid[row][index];
            }
        }

        for (auto& hev: hEdges) {
            for (auto& he: hev) {
                if (he == 1) ++perimeter;
            }
        }

        for (auto& vev: vEdges) {
            for (auto& ve: vev) {
                if (ve == 1) ++perimeter;
            }
        }
        return perimeter;

    }
};

TEST_CASE("Test get island perimeter") {
    IslandPerimeterSolution solution;
    vector<vector<int>> sample = {{0,1,0,0},
            {1,1,1,0},
            {0,1,0,0},
            {1,1,0,0}};

    vector<vector<int>> sample2 = {
            {0,0,1,0},
            {0,1,1,0},
            {0,1,0,0},
            {1,1,0,0}
    };
    REQUIRE(solution.islandPerimeter(sample) == 16);
    REQUIRE(solution.islandPerimeter(sample2) == 14);
}
