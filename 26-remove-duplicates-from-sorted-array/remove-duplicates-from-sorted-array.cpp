class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Brute - Force
        // int uniqueCount = 1;
        // while(uniqueCount<nums.size()) {
        //     if(nums[uniqueCount] == nums[uniqueCount-1]) 
        //         nums.erase(nums.begin()+uniqueCount, nums.begin()+uniqueCount+1);
        //     else uniqueCount++;
        // }
        // return uniqueCount;

        // Two - Pointers
        int size = nums.size(), k=0;
        for(int i=1; i<size; i++) {
            if(nums[i] != nums[k]) nums[++k] = nums[i]; 
        }
        return k+1;
    }
};