class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size(), max_candies = 0;
        vector<bool> result (n, false);
        for(int i=0; i<n; i++) max_candies = max(max_candies, candies[i]);
        for(int i=0; i<n; i++) if(candies[i] + extraCandies >= max_candies) result[i] = true;
        return result;
    }
};