class Solution {
public:
    bool isValid(string s) {
        stack<char> brackets;
        for(char c : s) {
            if(c == '(' || c == '{' || c == '[') {
                brackets.push(c);
            } else {
                if(brackets.empty()) return false;
                char top = brackets.top();
                if((c == ')' && top == '(') || 
                   (c == '}' && top == '{') || 
                   (c == ']' && top == '[')) {
                    brackets.pop();
                } else {
                    return false;
                }
            }
        }
        return brackets.empty();
    }
};