class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        
        int sum = 0;
        
        // sum the first row
        for(int i = 0; i < grid[0].size(); ++i)
        {
            sum += grid[0][i];
            grid[0][i] = sum;
        }
        
        
        //sum the first column
        sum = 0;
        
        for(int i = 0; i < grid.size(); ++i)
        {
            sum += grid[i][0];
            grid[i][0] = sum;
        }
        
        // sum the other tiles
        for(int i = 1; i < grid.size(); ++i)
        {
            for(int j = 1; j < grid[0].size(); ++j)
            {
                grid[i][j] = min(grid[i-1][j] + grid[i][j], grid[i][j-1] + grid[i][j]);
            }
        }
        
        
        return grid[grid.size()-1][grid[0].size()-1];
    }
};