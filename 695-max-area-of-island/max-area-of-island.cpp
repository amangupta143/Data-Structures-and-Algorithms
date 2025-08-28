class Solution {
public:
    int oneCount(vector<vector<int>>& grid, int r, int c) {
        int ROWS = grid.size(), COLS = grid[0].size();
        if(min(r, c) < 0 || r == ROWS || c == COLS || grid[r][c] == 0) return 0;
        grid[r][c] = 0;
        int count = 1;
        count += oneCount(grid, r+1, c);
        count += oneCount(grid, r-1, c);
        count += oneCount(grid, r, c+1);
        count += oneCount(grid, r, c-1);
        return count;
    }
    
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int ROWS = grid.size(), COLS = grid[0].size();
        int areaIsland = 0;
        for(int r=0; r<ROWS; r++) {
            for(int c=0; c<COLS; c++) {
                if(grid[r][c] == 1) {
                    areaIsland = max(areaIsland, oneCount(grid, r, c));
                }
            }
        }
        return areaIsland;
    }
};