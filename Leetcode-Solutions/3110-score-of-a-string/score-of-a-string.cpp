class Solution {
public:
    int scoreOfString(string s) {
        int len = s.size(), score = 0;
        for(int i=1; i<len; i++) score += abs(s[i-1] -s[i]);
        return score;
    }
};