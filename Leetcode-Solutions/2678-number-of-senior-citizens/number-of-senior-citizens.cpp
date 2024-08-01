class Solution {
public:
    int countSeniors(vector<string>& details) {
        int size = details.size();
        int seniors = 0;
        for(int i=0; i<size; i++) {
            if(((details[i][11] - '0')*10+(details[i][12] - '0')) > 60)  seniors++;
        }
        return seniors;
    }
};