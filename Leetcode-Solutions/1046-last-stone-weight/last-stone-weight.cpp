class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        priority_queue<int> pq;
        for(int i=0; i<n; i++) {
            pq.push(stones[i]);
        }
        while(!pq.empty()) {
            int first = pq.top(); pq.pop();
            if(pq.empty()) return first;
            int second = pq.top(); pq.pop();
            if(second == 0) return first;

            pq.push(first-second);
        }
        return pq.top();
    }
};