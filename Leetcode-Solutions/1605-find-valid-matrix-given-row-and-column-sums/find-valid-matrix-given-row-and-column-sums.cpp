class Solution {
public:
    vector<vector<int>> restoreMatrix(vector<int>& rowSum, vector<int>& colSum) {
        int row_len = rowSum.size(), col_len = colSum.size();
        vector<vector<int>> ans (row_len, vector<int>(col_len, 0));

        for(int i=0; i<row_len; i++) {
            for(int j=0; j<col_len; j++) {
                ans[i][j] = min(rowSum[i], colSum[j]);
                rowSum[i] -= ans[i][j];
                colSum[j] -= ans[i][j];
            }
        }
        return ans;
    }
};