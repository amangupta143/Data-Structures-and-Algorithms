class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        vector<vector<bool>> isZero(m, vector<bool>(n, 0));

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(matrix[i][j] == 0) {
                    for(int k=0; k<n; k++) isZero[i][k] = 1;
                    for(int k=0; k<m; k++) isZero[k][j] = 1;
                }
            }
        }

        for(int i=0; i<m; i++) {
            for(int j=0; j<n; j++) {
                if(isZero[i][j] == 1) matrix[i][j] = 0;
            }
        }     
    }
};