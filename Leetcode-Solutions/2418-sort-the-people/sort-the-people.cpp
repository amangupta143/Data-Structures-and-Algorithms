class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        int size = names.size();
        unordered_map<int, string> mapping;

        for(int i=0; i<size; i++) {
            mapping[heights[i]] = names[i];
        }

        sort(heights.rbegin(), heights.rend());

        for(int i=0; i<size; i++) {
            names[i] = mapping[heights[i]];
        }

        return names;
    }
};