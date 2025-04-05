class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size();
        vector<int> newNums; newNums.push_back(nums[0]);

        for(int i=1; i<len; i++) {
            if(nums[i] != nums[i-1]) newNums.push_back(nums[i]);
        }

        len = newNums.size();
        nums.clear();
        for(int i=0; i<len; i++) {
            nums.push_back(newNums[i]);
        }

        return len;
    }
};
