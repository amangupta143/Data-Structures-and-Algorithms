class Solution {
public:
    int timeTaken(const vector<int>& piles, int speed) {
        int hrs = 0;
        for (int pile : piles) {
            hrs += ((long long)pile + speed - 1) / speed;
        }
        return hrs;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1, e = *max_element(piles.begin(), piles.end());

        while (s < e) {
            int m = s + (e - s) / 2;
            if (timeTaken(piles, m) <= h) {
                e = m; // still try smaller values
            } else {
                s = m + 1;
            }
        }

        return s; // final s is the smallest speed that satisfies the condition
    }
};