class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int uniqueCount = 1;
        while(uniqueCount<nums.size()) {
            if(nums[uniqueCount] == nums[uniqueCount-1]) 
                nums.erase(nums.begin()+uniqueCount, nums.begin()+uniqueCount+1);
            else uniqueCount++;
        }
        return uniqueCount;
    }
};