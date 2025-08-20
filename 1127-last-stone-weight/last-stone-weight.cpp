class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int size = stones.size();
        priority_queue<int> pq;
        for(int stone : stones) {
            pq.push(stone);
        }

        while(!pq.empty()) {
            int stone1 = pq.top(); pq.pop();
            if(pq.empty()) return stone1;
            int stone2 = pq.top(); pq.pop();
            stone1 = abs(stone1 - stone2);
            pq.push(stone1);
        }
        return 0;
    }
};