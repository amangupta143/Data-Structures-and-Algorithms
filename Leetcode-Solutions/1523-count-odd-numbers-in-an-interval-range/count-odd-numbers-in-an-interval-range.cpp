class Solution {
public:
    int countOdds(int low, int high) {
        int totalCount = (high-low)+1;
        if(totalCount%2 != 0 && low%2 != 0) return totalCount/2 + 1;
        return totalCount/2;
    }
};