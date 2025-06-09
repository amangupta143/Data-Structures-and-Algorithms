class Solution {
public:
    int findMaxIdx(vector<int>& nums, int s, int e) {
        int maxx = INT_MIN, maxidx = -1;
        for(int i=s; i<=e; i++) {
            if(nums[i] >= maxx) {
                maxx = nums[i];
                maxidx = i;
            }
        }
        return maxidx;
    }
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if(k==1) return nums;
        int size = nums.size();
        vector<int> maxWindow;

        int maxidx = findMaxIdx(nums, 0, k-1);
        maxWindow.push_back(nums[maxidx]);

        for(int i=k-1; i<size-1; i++) {
            if(nums[i+1] >= nums[maxidx]) {
                maxidx = i+1;
            } else if(i-k+1 == maxidx) {
                maxidx = findMaxIdx(nums, i-k+2, i+1);
            }
            maxWindow.push_back(nums[maxidx]);
        }
        return maxWindow;
    }
};