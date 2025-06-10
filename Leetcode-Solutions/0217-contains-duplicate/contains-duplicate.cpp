class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        unordered_map<int, int> mp;

        for(int i=0; i<size; i++) {
            if(mp.find(nums[i]) != mp.end()) return true;
            mp.insert({nums[i], 1});
        }
        return false;
    }
};
