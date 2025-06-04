class Solution {
public:
    bool isHappy(int n) {
        set<int> seen;
        while(true) {
            int sum = 0;
            while(n>0) {
                int digit = n%10;
                n = n/10;
                sum += digit*digit;
            }
            n=sum;
            if(n==1) return true;
            if (seen.find(n) != seen.end()) return false;
            seen.insert(n);
        }
        return false;
    }
};