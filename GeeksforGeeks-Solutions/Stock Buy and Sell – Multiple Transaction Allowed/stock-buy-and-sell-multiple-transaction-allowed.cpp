//{ Driver Code Starts
// Initial template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int size = prices.size();
        if(size <= 1) return 0;
        
        int slow = 0, fast = 1;
        int profit = 0;
        
        while(fast <= size) {
            if(fast == size | prices[fast-1] > prices[fast]) {
                profit += prices[fast-1] - prices[slow];
                if(fast == size) return profit;
                slow = fast;
                fast++;
            } else {
                fast++;
            }
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
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        int res = ob.maximumProfit(arr);
        cout << res;
        cout << "\n";
        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends