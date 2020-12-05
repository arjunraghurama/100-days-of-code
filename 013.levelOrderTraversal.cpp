/**
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
    void LevelOrder(TreeNode *root)
    {
      if (root == NULL)
        return;
      queue<TreeNode*> que;
      que.push(root);
      while(!que.empty())
      {
        TreeNode* temp = que.front();
        cout<<temp->val;
        if(temp->left != NULL)
          que.push(temp->left);
        if(temp->right != NULL)
          que.push(temp->right);
        que.pop();
      }
    }
};
