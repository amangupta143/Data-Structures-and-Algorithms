class Solution {
public:
    bool isValid(string s) {
        int len = s.length();
        stack<char> st;

        for(int i=0; i<len; i++) {
            if(s[i] == '(' | s[i] == '{' | s[i] == '[') {
                st.push(s[i]);
            } else {
                if(st.empty()) return 0;
                if((st.top() == '(' && s[i] == ')')
                || (st.top() == '{' && s[i] == '}'
                || (st.top() == '[' && s[i] == ']'))) st.pop();
                else return 0;
            }
        }
        return st.empty() ? 1 : 0;
    }
};