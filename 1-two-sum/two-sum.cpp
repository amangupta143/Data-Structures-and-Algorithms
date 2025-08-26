class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        map<int, int> seen;

        for(int i=0; i<size; i++) {
            if(seen.find(target-nums[i]) != seen.end()) {
                return {seen[target-nums[i]], i};
            }
            seen[nums[i]] = i;
        }
        return {};
    }
};