class Solution {
public:
    int rob(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return nums[0];
        if(size == 2) return max(nums[0], nums[1]);
        if(size == 3) return max(nums[1], nums[0] + nums[2]);

        int last = max(nums[1], nums[0] + nums[2]), 
            secLast = max(nums[0], nums[1]), 
            thirdLast = nums[0];

        for(int i=3; i<size; i++) {
            int temp = last;
            last = max(secLast, thirdLast) + nums[i];
            thirdLast = secLast;
            secLast = temp;
        }

        return max(last, secLast);
    }
};