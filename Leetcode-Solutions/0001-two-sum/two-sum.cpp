class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> idx;
        for(int i = 0; i < nums.size(); i++) {
            int secNo = target - nums[i];
            if (idx.find(secNo) != idx.end()) {
                return {idx[secNo], i};
            }
            idx[nums[i]] = i;  // Store the index only if secNo is not found
        }
        return {};
    }
};