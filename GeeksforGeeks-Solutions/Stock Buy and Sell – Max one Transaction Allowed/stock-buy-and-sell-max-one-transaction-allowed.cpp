//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int size = prices.size();
        if(size < 2) return 0;
        
        int low = 0, high = 1, profit = 0;
        while(high < size) {
            if(prices[high] < prices[low]) {
                if(profit < prices[high-1] - prices[low]) {
                    profit = prices[high-1] - prices[low];
                }
                
                low = high;
            } else if(prices[high] < prices[high-1]) {
                if(profit < prices[high-1] - prices[low]) {
                    profit = prices[high-1] - prices[low];
                }
            }
            
            if(high + 1 == size) {
                if(profit < prices[high] - prices[low]) {
                    profit = prices[high] - prices[low];
                }
                
                break;
            }
            
            high++;
        }
        return profit;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> prices;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            prices.push_back(number);
        }

        Solution ob;
        int ans = ob.maximumProfit(prices);
        cout << ans << endl;
    }
    return 0;
}

// } Driver Code Ends