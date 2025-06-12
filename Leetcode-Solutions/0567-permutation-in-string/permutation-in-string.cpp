class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int size1 = s1.size(), size2 = s2.size();
        vector<int> count(26, 0);
        for(int i=0; i<size1; i++) {
            count[s1[i]-'a']++;
        }

        for(int i=0; i+size1 <= size2; i++) {
            int j = i, copySize1 = size1;
            vector<int> copyCount(count);

            while(copySize1 > 0 && copyCount[s2[j]-'a'] > 0) {
                copySize1--;
                copyCount[s2[j++]-'a']--;
            }
            if(copySize1 == 0) return true;
        }
        return false;
    }
};