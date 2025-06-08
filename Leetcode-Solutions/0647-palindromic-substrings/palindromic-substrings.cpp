class Solution {
public:
    bool isPalindrome(string substr) {
        int l = 0, h = substr.size()-1;
        while(l < h) {
            if(substr[l++] != substr[h--]) {
                return false;
            }
        }
        return true;
    }

    void palindromeCount(string s, string subStr, int leftIdx, int rightIdx, int& count) {
        if(isPalindrome(subStr)) count++;
        else return;

        if(leftIdx != 0 && rightIdx != s.size()-1) 
        palindromeCount(s, s.substr(leftIdx-1, rightIdx-leftIdx+3), leftIdx-1, rightIdx+1, count);

        return;
    }

    int countSubstrings(string s) {
        int count = 0, size = s.size();
        for(int i=0; i<size; i++) {
            palindromeCount(s, s.substr(i, 1), i, i, count);
            if(i != size-1) palindromeCount(s, s.substr(i, 2), i, i+1, count);
        }
        return count;
    }
};