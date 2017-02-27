class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        set<vector<int>> result;
        int final = 0;
        for (auto it = grid.begin(); it != grid.end(); ++it) {
            for (auto ait = it->begin(); ait != it->end(); ++ait) {
                if (*ait) {
                    int x = ait - it->begin();
                    int y = it - grid.begin();


                    vector<int> tmp0 = {x, y, x, y + 1};
                    vector<int> tmp2 = {x + 1, y, x + 1, y + 1};

                    vector<int> tmp1 = {x, y, x + 1, y};
                    vector<int> tmp3 = {x, y + 1, x + 1, y + 1};

                    vector<vector<int>> tmps = {tmp0, tmp1, tmp2, tmp3};
                    for (auto tmp = tmps.begin(); tmp != tmps.end(); ++tmp) {
                      int edges += this->countEdge(*tmp, result);
                      cout<<edges<<endl;
                      final += edges;
                    }
                }
            }
        }
        return final;
    }
private:
    int countEdge(vector<int>& edge, set<vector<int>> edges) {
      if (edges.find(edge) != edges.end()) {
        return -2;
      } else {
        edges.insert(edge);
        return 1;
      }
    }

};
