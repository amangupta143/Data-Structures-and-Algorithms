class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> bits;
        for(int i=0; i<=n; i++) {
            int currOnesCount = 0, tempIdx = i;
            while(tempIdx) {
                if(tempIdx & 1 == 1) currOnesCount++;
                tempIdx = tempIdx >> 1;
            }
            bits.push_back(currOnesCount);
        }
        return bits;
    }
};