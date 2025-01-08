class Solution {
public:
    int maximumSwap(int num) {
        string numStr = to_string(num);
        int len = numStr.size();

        bool swapped = false;
        for(int i=0; i<len-1; i++) {
            int maxIndex = i;
            for(int j=len-1; j>i; j--) {
                if(int(numStr[maxIndex]) < int(numStr[j])) {
                    swapped = true;
                    maxIndex = j;
                }
            }

            if(swapped) {
                char temp = numStr[i];
                numStr[i] = numStr[maxIndex];
                numStr[maxIndex] = temp;
                break;
            }
        }
        return stoi(numStr);
    }
};