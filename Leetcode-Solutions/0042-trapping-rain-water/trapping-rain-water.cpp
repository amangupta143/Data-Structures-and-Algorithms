class Solution {
public:
    int trap(vector<int>& height) {
        int size = height.size();
        vector<bool> top(size, false);

        int i, lastTop = 0;
        for(i=0; i<size; i++) {
            if(height[i] >= lastTop) {
                lastTop = height[i];
                top[i] = true;
            }
        }
        i = size-1, lastTop = 0;
        while(i>=0 && top[i] != true) {
            if(height[i] >= lastTop) {
                lastTop = height[i];
                top[i] = true;
            }
            i--;
        }

        int trappedWater = 0, currWater = 0;
        lastTop = 0;
        for(int j=0; j<=i; j++) {
            if(top[j] == true) {
                trappedWater += currWater;
                currWater = 0;
                lastTop = height[j];
            } else {
                currWater += lastTop - height[j];
            }
        }
        lastTop = 0;
        for(int j=size-1; j>=i; j--) {
            if(top[j] == true) {
                trappedWater += currWater;
                currWater = 0;
                lastTop = height[j];
            } else {
                currWater += lastTop - height[j];
            }
        }
        return trappedWater;
    }
};