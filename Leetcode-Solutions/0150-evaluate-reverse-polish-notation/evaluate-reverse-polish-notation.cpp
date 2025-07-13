class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int size = tokens.size();
        if(size == 1) return stoi(tokens[0]);
        stack<string> st;

        long long int temp = 0;
        for(int i=0; i<size; i++) {
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {
                string secNo = st.top(); st.pop();
                string firstNo = st.top(); st.pop();

                if(tokens[i] == "+") temp = stoi(firstNo) + stoi(secNo);
                else if(tokens[i] == "-") temp = stoi(firstNo) - stoi(secNo);
                else if(tokens[i] == "*") temp = stoi(firstNo) * stoi(secNo);
                else temp = stoi(firstNo) / stoi(secNo);

                st.push(to_string(temp));
            } else st.push(tokens[i]);
        }
        return int(temp);
    }
};