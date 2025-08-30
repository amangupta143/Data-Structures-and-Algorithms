class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2) return n;

        vector<int> dp = {0, 1, 2};
        for(int i=3; i<=n; i++) {
            int temp = dp[2];
            dp[2] = dp[2] + dp[1];
            dp[1] = temp;
        }
        return dp[2];
    }
};