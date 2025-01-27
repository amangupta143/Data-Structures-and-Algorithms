class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int size = prices.size();
        if(size == 1) return prices;
        for(int i=0; i<size-1; i++) {
            for(int j=i+1; j<size; j++) {
                if(prices[i] >= prices[j]) {
                    prices[i]-=prices[j];
                    break;
                }
            }
        }
        return prices;
    }
};