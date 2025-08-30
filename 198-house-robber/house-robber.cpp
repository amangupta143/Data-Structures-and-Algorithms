class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return nums[0];
        if(size == 2) return max(nums[0], nums[1]);
        if(size == 3) return max(nums[1], nums[0] + nums[2]);

        vector<int> maxMoney;
        maxMoney.push_back(nums[0]);
        maxMoney.push_back(nums[1]);
        maxMoney.push_back(max(nums[1], nums[0] + nums[2]));
        for(int i = 3; i<size; i++) {
            maxMoney.push_back(max(maxMoney[i-3]+nums[i], maxMoney[i-2]+nums[i]));
        }
        return max(maxMoney[size-1], maxMoney[size-2]);
    }
};