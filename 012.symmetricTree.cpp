/**
 * https://leetcode.com/problems/symmetric-tree/
 *
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
    bool isSymmetric( TreeNode* actual, TreeNode* mirror)
    {
        if( actual== NULL || mirror == NULL)
        {
            return actual == mirror;
        }
        
        return (actual->val == mirror->val) && isSymmetric(actual->left, mirror->right) && isSymmetric(actual->right, mirror->left);

    }
    
    
    bool isSymmetric(TreeNode* root) {
        if (root == NULL)
            return true;
        return isSymmetric(root->left,root->right);
    }
};
