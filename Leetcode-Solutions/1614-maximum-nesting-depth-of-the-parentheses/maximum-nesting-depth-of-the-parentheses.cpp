class Solution {
public:
    int maxDepth(string s) {
        int max_count = 0;
        int count = 0;
        int size = s.size();

        for(int i=0; i<size; i++) {
            if(s[i] == '(') {
                count++;
            } else if(s[i] == ')'){
                count--;
            }
            if(count > max_count) max_count = count;
        }
        return max_count;
    }
};