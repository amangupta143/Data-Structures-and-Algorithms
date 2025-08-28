class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ROWS = grid.size(), COLS = grid[0].size();
        queue<pair<int, int>> q;
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

        // Add initial rotten oranges in queue and count all empty cells
        int emptyCells = 0, rottenOranges = 0;
        for(int r=0; r<ROWS; r++) {
            for(int c=0; c<COLS; c++) {
                if(grid[r][c] == 2) {
                    q.push({r, c});
                    rottenOranges++;
                } else if(grid[r][c] == 0) {
                    emptyCells++;
                }
            }
        }

        // if all cells are empty
        if(ROWS*COLS == emptyCells) return 0;

        int minutes = -1;
        // start while loop until queue is not empty
        while(!q.empty()) {
            int size = q.size();
            for(int i=0; i<size; i++) {
                pair<int, int> currCell = q.front();
                q.pop();
                for(int j=0; j<4; j++) {
                    int newR = currCell.first + directions[j].first;
                    int newC = currCell.second + directions[j].second;
                    if(min(newR, newC) < 0 || newR >= ROWS || newC >= COLS || 
                       grid[newR][newC] == 2 || grid[newR][newC] == 0) {
                        continue;
                    }
                    grid[newR][newC] = 2;
                    q.push({newR, newC});
                    rottenOranges++;
                }
            }
            minutes++;
        }

        return (ROWS*COLS - rottenOranges) != emptyCells ? -1 : minutes;
    }
};