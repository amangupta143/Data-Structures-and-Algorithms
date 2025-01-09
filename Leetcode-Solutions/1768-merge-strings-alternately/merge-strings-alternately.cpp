class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string merged = "";
        int size1 = word1.size(), size2 = word2.size();
        int index = 0;

        while(index < size1 && index < size2) {
            merged.push_back(word1[index]);
            merged.push_back(word2[index++]);
        }

        while(index < size1) merged.push_back(word1[index++]);
        while(index < size2) merged.push_back(word2[index++]);

        return merged;
    }
};