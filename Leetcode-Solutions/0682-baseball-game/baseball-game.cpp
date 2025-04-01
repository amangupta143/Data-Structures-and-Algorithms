class Solution {
public:
    int calPoints(vector<string>& operations) {
        int len = operations.size();
        vector<int> final;
        int j = 0, score = 0;

        for(int i=0; i<len; i++) {
            if(operations[i] == "+") {
                final.push_back(final[j-1] + final[j-2]);
                score += final[j++];
            } else if(operations[i] == "D") {
                final.push_back(2*final[j-1]);
                score += final[j++];
            } else if(operations[i] == "C") {
                final.pop_back();
                score -= final[--j];
            } else {
                final.push_back(stoi(operations[i]));
                score += final[j++];
            }
        }
        return score;
    }
};