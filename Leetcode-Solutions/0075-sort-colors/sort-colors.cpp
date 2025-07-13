class Solution {
public:
    void sortColors(vector<int>& nums) {
        int size = nums.size();
        vector<int> colors(3, 0);

        for(int i=0; i<size; i++) {
            colors[nums[i]]++;
        }
        
        int j = 0, i=0;
        while(j < 3) {
            if(colors[j] > 0) {
                nums[i++] = j;
                colors[j]--;
            } else {
                j++;
            }
        }
    }
};