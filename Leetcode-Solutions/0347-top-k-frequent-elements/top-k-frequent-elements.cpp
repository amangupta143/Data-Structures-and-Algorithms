class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<pair<int, int>> count;

        for(int i=0; i<size; i++) {
            int temp = 1;
            while(i<size-1 && nums[i] == nums[i+1]) {
                temp++;
                i++;
            }
            count.push_back({nums[i], temp});
        }

        sort(count.begin(), count.end(), 
        [](const pair<int, int>& a, const pair<int, int>& b) {
            return a.second > b.second;
        });

        vector<int> ans;
        for(int i=0; i<k; i++) {
            ans.push_back(count[i].first);
        }

        return ans;
    }
};