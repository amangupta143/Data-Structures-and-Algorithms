class Solution {
public:
    void reverse(string &word, int size) {
        int start = 0;
        int end = size;

        while(start < end) {
            char temp = word[start];
            word[start++] = word[end];
            word[end--] = temp;
        }
    }
    string reversePrefix(string word, char ch) {
        int len = word.size();
        int size = 0;

        while(size < len) {
            if(word[size] != ch) size++;
            else break;
        }

        if(size == len) return word;
        reverse(word, size);
        return word;
    }
};