class Solution {
public:
    int characterReplacement(string s, int k) {
        int size = s.size();
        map<char, int> count;
        int max_count = 0, left = 0, right = 0;

        while(right < size) {
            count[s[right]]++;
            max_count = max(max_count, count[s[right]]);
            right++;
            if(right - left - max_count > k) {
                count[s[left]]--;
                left++;
            }
        }
        return right - left;
    }
};