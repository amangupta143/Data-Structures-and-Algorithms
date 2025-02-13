class Solution {
public:
    int differenceOfSums(int n, int m) {
        int num1 = 0, num2 = 0;
        for(int i=1; i<=n; i++) {
            i<m || i%m != 0 ? num1 += i : num2 += i;
        }
        return num1-num2;
    }
};