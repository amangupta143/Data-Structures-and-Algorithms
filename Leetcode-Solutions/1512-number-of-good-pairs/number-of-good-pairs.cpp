class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int n = nums.size(), goodPairs = 0;
        map<int, int> mp;
        for(auto num : nums) {
            mp[num]++;
        }
        for(auto i : mp) {
            goodPairs += ((i.second-1)*i.second)/2;
        }
        return goodPairs;
    }
};