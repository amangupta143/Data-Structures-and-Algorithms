class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int size = nums.size();
        set<int> elements;
        for(int num : nums) {
            if(elements.find(num) == elements.end()) {
                elements.insert(num);
            } else {
                return 1;
            }
        }
        return 0;
    }
};