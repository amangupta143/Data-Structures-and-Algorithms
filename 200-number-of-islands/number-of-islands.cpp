class Solution {
public:
    void markZero(vector<vector<char>>& grid, int r, int c) {
        int ROWS = grid.size(), COLS = grid[0].size();
        if(min(r, c) < 0 || r == ROWS || c == COLS || grid[r][c] == '0') return;
        grid[r][c] = '0';
        markZero(grid, r+1, c);
        markZero(grid, r-1, c);
        markZero(grid, r, c+1);
        markZero(grid, r, c-1);
        return;
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int ROWS = grid.size(), COLS = grid[0].size();
        int islands = 0;
        for(int r=0; r<ROWS; r++) {
            for(int c=0; c<COLS; c++) {
                if(grid[r][c] == '1') {
                    islands++;
                    markZero(grid, r, c);
                }
            }
        }
        return islands;
    }
};