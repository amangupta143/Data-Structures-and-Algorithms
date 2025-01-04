class Solution {
public:
    string removeOuterParentheses(string s) {
        int count = 0, len = s.size();
        string sNew = "";

        for(int i=0; i<len; i++) {
            if(s[i] == '(') {
                if(count > 0) {
                    sNew.push_back('(');
                }
                count++;
            }
            else {
                if(count > 1) {
                    sNew.push_back(')');
                }
                count--;
            }
        }
        return sNew;
    }
};