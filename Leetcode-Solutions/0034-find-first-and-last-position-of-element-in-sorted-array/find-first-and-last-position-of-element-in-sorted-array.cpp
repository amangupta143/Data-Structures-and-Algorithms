class Solution {
public:
    int findStarting(vector<int> nums, int m, int s, int e) {
        int tempM = -1;
        bool found = false;
        while(s <= e) {
            tempM = s + (e - s)/2;
            if(nums[tempM] == nums[m]) {
                found = true;
                break;
            }
            else if(nums[tempM] > nums[m]) e = tempM - 1;
            else s = tempM + 1;
        }

        if(!found) {
            return m;
        } else {
            return findStarting(nums, tempM, s, tempM-1);
        }
    }

    int findEnding(vector<int> nums, int m, int s, int e) {
        int tempM = -1;
        bool found = false;
        while(s <= e) {
            tempM = s + (e - s)/2;
            if(nums[tempM] == nums[m]) {
                found = true;
                break;
            }
            else if(nums[tempM] > nums[m]) e = tempM - 1;
            else s = tempM + 1;
        }

        if(!found) {
            return m;
        } else {
            return findEnding(nums, tempM, tempM+1, e);
        }
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        int s = 0, e = nums.size()-1, m = -1;
        bool found = false;
        while(s <= e) {
            m = s + (e - s)/2;
            if(nums[m] == target) {
                found = true;
                break;
            }
            else if(nums[m] > target) e = m - 1;
            else s = m + 1;
        }

        if(!found) {
            return {-1 , -1};
        } else {
            s = findStarting(nums, m, s, m-1);
            e = findEnding(nums, m, m+1, e);
        }

        return {s , e};
    }
};