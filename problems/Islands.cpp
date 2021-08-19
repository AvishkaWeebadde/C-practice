#include<vector>
#include<iostream>

class Solution {
public:
    bool isValidCell(vector<vector<int>> &grid, int row, int col) {
        try {
            return grid.at(row).at(col);
        } catch (exception &exception) {
            return false;
        }
    }

    void dfs(vector<vector<int>> &grid, int row, int col) {
        if (!isValidCell(grid, row, col)) {
            return;
        }
        grid[row][col] = 0;
        vector<pair<int, int>> directions = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
        for (auto [i, j] : directions) { 
            dfs(grid, row + i, col + j);
        }
    }

    int numIslands(vector<vector<int>>& grid) {
        int result = 0;
        for (int i = 0; i < grid.size(); ++i) {
            for (int j = 0; j < grid[0].size(); ++j) {
                if (grid[i][j]) {
                    ++result;
                    dfs(grid, i, j);
                }
            }
        }
        return result;
    }
};
