class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int tempMax = 0;
        while(left < right) {
            int width = right - left;
            int currWater = min(height[left], height[right])*width;
            tempMax = max(tempMax, currWater);
            if(height[left] > height[right]) right--;
            else left++;
        }
        return tempMax;
    }
};