class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int> prevRow(m, 0);
        for(int r=n-1; r>=0; r--) {
            vector<int> currRow(m, 0);
            currRow[m-1] = 1;
            for(int c=m-2; c>=0; c--) {
                currRow[c] = currRow[c+1] + prevRow[c];
            }
            prevRow = currRow;
        }
        return prevRow[0];
    }
};