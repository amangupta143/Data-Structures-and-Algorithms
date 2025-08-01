class Solution {
public:
    vector<int> generateCurr(vector<int> currRow) {
        int size = currRow.size(); vector<int> temp;
        if(size == 0) return {1};
        temp.push_back(1);
        for(int i=0; i<size-1; i++) {
            temp.push_back(currRow[i] + currRow[i+1]);
        }
        temp.push_back(1);
        return temp;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> currRow = {};
        for(int i=0; i<numRows; i++) {
            currRow = generateCurr(currRow);
            ans.push_back(currRow);
        }
        return ans;
    }
};