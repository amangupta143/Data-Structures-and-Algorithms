class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r = matrix.size(), c = matrix[0].size();
        int low = 0, high = r*c - 1;
        
        while(low <= high) {
            int mid = low + (high - low)/2;
            int rIdx = mid/c, cIdx = mid%c;
            if(matrix[rIdx][cIdx] == target) return true;
            else if(matrix[rIdx][cIdx] > target) high = mid-1;
            else low = mid+1;
        }
        return false;
    }
};