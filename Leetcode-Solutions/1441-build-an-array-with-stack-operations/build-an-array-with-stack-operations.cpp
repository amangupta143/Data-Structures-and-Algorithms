class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        int size = target.size();
        vector<string> operations;
        int target_index = 0;

        for(int i=1; i<=n && target_index<size; i++) {
            operations.push_back("Push");
            if(target[target_index] != i) operations.push_back("Pop");
            else target_index++;
        }

        return operations;
    }
};