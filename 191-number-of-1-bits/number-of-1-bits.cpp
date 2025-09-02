class Solution {
public:
    int hammingWeight(int n) {
        int weight = 0;
        while(n) {
            if(n & 1 == 1) weight++;
            n = n >> 1;
        }
        return weight;
    }
};