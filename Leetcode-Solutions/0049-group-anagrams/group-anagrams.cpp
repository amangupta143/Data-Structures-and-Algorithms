class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int size = strs.size();
        vector<vector<string>> output;
        unordered_map<string, int> stringGroup;
        int currGroup = 0;
        for(int i=0; i<size; i++) {
            string sortedStr = strs[i];
            sort(sortedStr.begin(), sortedStr.end());
            if(stringGroup.find(sortedStr) != stringGroup.end()) {
                output[stringGroup[sortedStr]].push_back(strs[i]);
            } else {
                output.push_back({strs[i]});
                stringGroup[sortedStr] = currGroup++; 
            }
        }
        return output;
    }
};