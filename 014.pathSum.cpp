/**
 * https://leetcode.com/problems/path-sum/
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
    void helper(TreeNode* root, int runningSum,vector<int> &results)
    {
        if(root == NULL)
            return;
        
        runningSum+= root->val;
        
        if(root->left == NULL && root->right == NULL)
        {
            results.push_back(runningSum);
            return;
        }
        helper(root->left, runningSum, results);
        helper(root->right, runningSum, results);
        
    }
    
    
    bool hasPathSum(TreeNode* root, int sum) {
        vector<int> results;
        helper(root, 0, results);
        return find(results.begin(),results.end(), sum)!= results.end() ? true:false;
    }
};
