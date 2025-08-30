class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size(), n = obstacleGrid[0].size();
        if(obstacleGrid[m-1][n-1] == 1) return 0;
        
        vector<long long> prevRow(n, 0);
        prevRow[n-1] = 1;
        
        for(int r = m-1; r >= 0; r--) {
            vector<long long> currRow(n, 0);
            currRow[n-1] = prevRow[n-1];
            if(obstacleGrid[r][n-1] == 1) currRow[n-1] = 0;
            
            for(int c = n-2; c >= 0; c--) {
                currRow[c] = currRow[c+1] + prevRow[c];
                if(obstacleGrid[r][c] == 1) currRow[c] = 0;
            }
            prevRow = currRow;
        }
        return (int)prevRow[0];
    }
};