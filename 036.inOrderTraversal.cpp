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
    void InOrderUtil(TreeNode* root, vector<int> &results)
    {
        if(root == nullptr)
            return;
    
         InOrderUtil(root->left,results); 
         results.push_back(root->val);
         InOrderUtil(root->right,results);
    }
    
public:
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> results;
        
        InOrderUtil(root, results);
        
        return results;
    }
};
