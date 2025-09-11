class Solution {
public:
    int timeTaken(const vector<int>& piles, int speed) {
        int time = 0;
        for (int bananas : piles) {
            time += ((long long)bananas + speed - 1) / speed;
        }
        return time;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = *max_element(piles.begin(), piles.end());

        while(low < high) {
            int mid = low + (high - low)/2;
            int time = timeTaken(piles, mid);
            if(time <= h) high = mid;
            else low = mid+1;
        }
        return low;
    }
};