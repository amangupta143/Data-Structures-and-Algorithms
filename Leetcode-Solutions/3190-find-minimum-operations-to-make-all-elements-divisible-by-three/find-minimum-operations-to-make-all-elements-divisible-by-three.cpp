class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int size = nums.size(), operations = 0;
        for(int i=0; i<size; i++)
            if(nums[i]%3 != 0) operations +=1;
        return operations;
    }
};