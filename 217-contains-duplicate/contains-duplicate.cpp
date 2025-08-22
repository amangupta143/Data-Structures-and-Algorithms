class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> elements;
        for (int num : nums) {
            if (!elements.insert(num).second) {
                return true;
            }
        }
        return false;
    }
};
