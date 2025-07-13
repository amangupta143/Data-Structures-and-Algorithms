class Solution {
public:
    bool isValid(string s) {
        int size = s.size();
        stack<char> st;

        for(int i=0; i<size; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else if(!st.empty()) {
                if(s[i] == ')' && st.top() == '(') st.pop();
                else if(s[i] == '}' && st.top() == '{') st.pop();
                else if(s[i] == ']' && st.top() == '[') st.pop();
                else return false;
            } else return false;
        }
        return st.empty() ? true : false;
    }
};