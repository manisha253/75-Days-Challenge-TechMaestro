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
    bool preOrder(TreeNode* root, int targetSum, int s) 
    {
      if(root==NULL)
          return false;
      s+= root->val;
      if(!root->right && !root->left && targetSum == s) 
      {
        return true;
      }
      return preOrder(root->left, targetSum, s) || preOrder(root->right, targetSum, s);
    }
    
    bool hasPathSum(TreeNode* root, int targetSum)
    {
        return preOrder(root, targetSum, 0);
    }
};
