class Solution {
public:
    int findMin(vector<int>& nums) {
        int size = nums.size();
        int start = 0, end = size-1;

        while(start < end) {
            int middle = start + (end - start)/2;
            if(nums[middle] < nums[end]) end = middle;
            else start = middle+1;
        }
        return nums[start];
    }
};