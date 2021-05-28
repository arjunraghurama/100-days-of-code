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
    void PostOrderUtil(TreeNode* root, vector<int> &results)
    {
        if(root == nullptr)
            return;
    
        PostOrderUtil(root->left,results); 
        PostOrderUtil(root->right,results);
        results.push_back(root->val);
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> results;
        PostOrderUtil(root, results);
        return results;
    }
};
