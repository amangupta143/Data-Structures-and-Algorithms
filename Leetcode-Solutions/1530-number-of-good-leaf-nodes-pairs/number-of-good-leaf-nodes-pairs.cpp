/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int numOfGoodLeafPairs;

    unordered_map<int, int> dfs(TreeNode* node, int& dis){
        if(node == nullptr) return {};
        unordered_map<int, int> mp; mp[1] = 1;
        if(node->left==nullptr && node->right==nullptr) return mp;

        unordered_map<int, int> leftv = dfs(node->left, dis);
        unordered_map<int, int> rightv = dfs(node->right, dis);

        for(auto [lv, lf] : leftv){
            for(auto [rv, rf] : rightv){
                if(lv + rv <= dis) numOfGoodLeafPairs += (lf * rf);
            }
        }

        unordered_map<int, int> parentv;
        for(auto [lv, lf] : leftv){
            if(lv+1 <= dis) {
                parentv[lv+1] += lf;
            }
        }

        for(auto [rv, rf] : rightv){
            if(rv+1 <= dis) 
                parentv[rv+1] += rf;
        }

        return parentv;
    }

    int countPairs(TreeNode* root, int dis) {
        numOfGoodLeafPairs = 0;
        dfs(root, dis);
        return numOfGoodLeafPairs;
    }
};