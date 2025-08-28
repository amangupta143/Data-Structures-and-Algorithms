class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        if(grid[0][0] == 1) return -1;
        int ROWS = grid.size(), COLS = grid[0].size();
    
        if(ROWS == 1 && COLS == 1) return 1;
        
        queue<pair<int, int>> q;
        q.push({0, 0});
        grid[0][0] = 1;
        int length = 1;
        
        vector<pair<int, int>> directions = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}, 
                                           {-1, -1}, {1, 1}, {-1, 1}, {1, -1}};
        
        while(!q.empty()) {
            int levelSize = q.size();
            
            for(int i = 0; i < levelSize; i++) {
                pair<int, int> currNode = q.front();
                q.pop();
                int r = currNode.first, c = currNode.second;
                
                for(auto& dir : directions) {
                    int newR = r + dir.first, newC = c + dir.second;
                    
                    if(newR < 0 || newR >= ROWS || newC < 0 || newC >= COLS || 
                       grid[newR][newC] == 1) {
                        continue;
                    }
                    
                    if(newR == ROWS-1 && newC == COLS-1) {
                        return length + 1;
                    }
                    
                    grid[newR][newC] = 1;
                    q.push({newR, newC});
                }
            }
            length++;
        }
        return -1;
    }
};