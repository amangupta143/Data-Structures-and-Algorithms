class Solution {
public:
    int minAddToMakeValid(string s) {
        int invalidOpen=0, invalidClose=0, len=s.size();

        for(int i=0; i<len; i++) {
            if(s[i] == '(') invalidOpen++;
            else {
                invalidOpen--;
                if(invalidOpen < 0) {
                    invalidClose++;
                    invalidOpen=0;
                }
            }
        }
        return invalidOpen+invalidClose;
    }
};