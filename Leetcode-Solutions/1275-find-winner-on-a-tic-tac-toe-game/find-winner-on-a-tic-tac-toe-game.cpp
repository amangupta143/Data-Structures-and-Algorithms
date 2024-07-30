class Solution {
public:
    string tictactoe(vector<vector<int>>& moves) {
        vector<vector<int>> winner{{0,1,2},
                                    {3,4,5},
                                    {6,7,8},
                                    {0,3,6},
                                    {1,4,7},
                                    {2,5,8},
                                    {0,4,8},
                                    {2,4,6}};
        vector<string> pos(9, "");
        bool yesa = true;

        for(int i = 0; i < moves.size(); i++) {
            int idx = moves[i][0] * 3 + moves[i][1];
            if(yesa) {
                pos[idx] = "A";
                yesa = false;
            } else {
                pos[idx] = "B";
                yesa = true;
            }
        }

        for(int i = 0; i < 8; i++) {
            if((pos[winner[i][0]] != "" || pos[winner[i][1]] != "" || pos[winner[i][2]] != "") 
                && (pos[winner[i][0]] == pos[winner[i][1]]) 
                && (pos[winner[i][1]] == pos[winner[i][2]])) {
                return pos[winner[i][0]];
            }
        }

        return moves.size() == 9 ? "Draw" : "Pending";
    }
};