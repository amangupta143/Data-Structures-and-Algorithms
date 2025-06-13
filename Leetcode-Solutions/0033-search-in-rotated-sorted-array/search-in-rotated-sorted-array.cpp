class Solution {
public:
    int search(vector<int>& nums, int target) {
        int size = nums.size();
        int s = 0, e = size-1;

        while(s <= e) {
            int m = s + (e-s)/2;
            if(nums[m] == target) return m;

            if(target >= nums[0] && nums[m] < nums[0]) e = m-1;
            else if(target < nums[0] && nums[m] >= nums[0]) s = m+1;
            else if(nums[m] > target) e = m-1;
            else s = m+1;
        }
        return -1;
    }
};