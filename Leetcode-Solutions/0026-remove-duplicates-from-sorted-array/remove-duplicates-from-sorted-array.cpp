class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int len = nums.size(), k=0;
        if(len == 1) return 1;
        for(int i=1; i<len; i++) if(nums[k] != nums[i]) nums[++k] = nums[i];
        return k+1;
    }
};
