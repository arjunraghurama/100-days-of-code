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
    void PreOrderUtil(TreeNode* root, vector<int> &results)
    {
        if(root == nullptr)
            return;
    
        results.push_back(root->val);
        PreOrderUtil(root->left,results); 
        PreOrderUtil(root->right,results);
    }
    
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> results;
        PreOrderUtil(root, results);
        return results;
    }
};
