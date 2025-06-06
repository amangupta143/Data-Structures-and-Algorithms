class Solution {
public:
    bool pal(string subStr) {
        int s=0, e = subStr.size()-1;
        while(s<e) {
            if(subStr[s++] != subStr[e--]) return false;
        }
        return true;
    }

    int countSubstrings(string s) {
        int count = 0, size = s.size();
        for(int i=0; i<size; i++) {
            string subStr = "";
            for(int j=i; j<size; j++) {
                subStr.push_back(s[j]);
                if(pal(subStr)) count++;
            }
        }
        return count;
    }
};