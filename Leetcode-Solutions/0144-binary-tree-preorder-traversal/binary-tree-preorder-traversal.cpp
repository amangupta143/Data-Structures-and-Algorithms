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
    vector<int> preorderTraversal(TreeNode* root, vector<int> output = {}) {
        if(root == NULL) return output;
        output.push_back(root->val);
        if(root->left != NULL) output = preorderTraversal(root->left, output);
        if(root->right != NULL) output = preorderTraversal(root->right, output);
        return output;
    }
};