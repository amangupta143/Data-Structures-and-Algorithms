class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size(), cols = matrix[0].size();

        int s = 0, e = rows*cols-1;
        while(s <= e) {
            int m = s + (e-s)/2;
            int i = m/cols, j = m%cols;
            if(matrix[i][j] == target) return true;
            else if(matrix[i][j] > target) e = m-1;
            else s = m+1;
        }

        return false;
    }
};