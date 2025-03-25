class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        map<int, int> count;
        for(auto num : nums) count[num]++;
        for(auto i : count) if(i.second > (n/2)) return i.first;
        return 0;
    }
};