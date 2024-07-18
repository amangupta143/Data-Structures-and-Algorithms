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
    string lcaToStart, lcaToEnd;
    void dfs(TreeNode* node, string& pathString, int p, int q){
        if(node == nullptr) return;
        if(node->val == p) lcaToStart = pathString;
        if(node->val == q) lcaToEnd = pathString;

        pathString.push_back('L');
        dfs(node->left, pathString, p, q);
        pathString.pop_back();

        pathString.push_back('R');
        dfs(node->right, pathString, p, q);
        pathString.pop_back();
    }

    string getDirections(TreeNode* root, int startValue, int destValue) {
        string pathString = "";
        dfs(root, pathString, startValue, destValue);

        int commonLen = 0, i = 0, j = 0;
        while(i<lcaToStart.length() && j<lcaToEnd.length()){
            if(lcaToStart[i] == lcaToEnd[j]){
                commonLen++;
                i++;
                j++;
            }else{
                break;
            }
        }

        lcaToStart = lcaToStart.substr(commonLen, lcaToStart.length()-commonLen);
        lcaToEnd = lcaToEnd.substr(commonLen, lcaToEnd.length()-commonLen);

        for(auto& ch: lcaToStart) ch = 'U';
        return lcaToStart + lcaToEnd;
    }
};