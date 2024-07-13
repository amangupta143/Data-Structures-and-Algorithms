class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        int red = 0;
        int white = 0;
        
        for(int i=0; i<size; i++) {
            if(nums[i]==0) red++;
            if(nums[i]==1) white++;
        }

        for(int i=0; i<size; i++) {
            if(red-->0) nums[i]=0;
            else if(white-->0) nums[i]=1;
            else nums[i]=2;
        }
    }
};