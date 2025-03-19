class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int m = accounts.size(), n = accounts[0].size(), maxWealth = 0;
        for(int i=0; i<m; i++) {
            int tempWealth = 0;
            for(int j=0; j<n; j++) tempWealth += accounts[i][j];
            maxWealth = max(maxWealth, tempWealth);
        }
        return maxWealth;
    }
};