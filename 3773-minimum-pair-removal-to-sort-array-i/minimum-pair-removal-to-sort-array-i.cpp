class Solution {
public:
    int minimumPairRemoval(vector<int>& nums) {
        int size = nums.size();
        if(size == 1) return 0;

        int count = 0;
        for(int i=1; i<size; i++) {
            if(nums[i-1] > nums[i]) {
                count++;
                int minSum = INT_MAX;
                int minSumIdx = -1;
                for(int j=1; j<size; j++) {
                    if(nums[j-1]+nums[j] < minSum) {
                        minSum = nums[j-1]+nums[j];
                        minSumIdx = j;
                    }
                }
                nums[minSumIdx] = nums[minSumIdx] + nums[minSumIdx-1];
                nums.erase(nums.begin()+minSumIdx-1, nums.begin()+minSumIdx);
                size--;
                i=0;
            }
        }
        return count;
    }
};