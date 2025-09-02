class Solution {
public:
    int reverseBits(int n) {
        int revNum = 0, bitIdx = 31;
        while(n) {
            if(n & 1 == 1) revNum += pow(2, bitIdx);
            n = n >> 1;
            bitIdx--;
        }
        return revNum;
    }
};