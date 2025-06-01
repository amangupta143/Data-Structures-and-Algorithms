class Solution {
public:
    int climbStairs(int n) {
        // Recursion (TLE)
        // if(n <= 1) return 1;
        // return climbStairs(n-1) + climbStairs(n-2);

        // Loop
        if(n <= 1) return 1;
        int last = 1, secLast = 1, ans = 0;
        for(int i=2; i<=n; i++) {
            ans = last + secLast;
            secLast = last;
            last = ans; 
        }
        return ans;
    }
};