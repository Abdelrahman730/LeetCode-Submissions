class Solution {
public:
    void delIsland (vector<vector<char>>& grid , int i , int j)
    {
        if (i < 0 || i == grid.size() || j < 0 || j == grid[0].size() || grid[i][j] == '0') 
        {
            return;
        }
        grid[i][j] = '0';
        delIsland(grid, i - 1, j);
        delIsland(grid, i + 1, j);
        delIsland(grid, i, j - 1);
        delIsland(grid, i, j + 1);
    }
    
    
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        for (int i = 0 ; i < grid.size() ; i++)
        {
            for (int j = 0 ; j < grid[i].size() ; j++)
            {
                if (grid[i][j] == '1')
                {
                    islands++;
                    delIsland(grid,i,j);
                }
            }
        }
        return islands;
    }
};