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
    int count=0;
void preorder(TreeNode *root,int maxSoFar)
    {
        if(root == NULL)
            return;
        
        if(root->val >= maxSoFar)
            count++;
        maxSoFar =max(maxSoFar,root->val);
        
        preorder(root->left, maxSoFar);
        preorder(root->right, maxSoFar);
    }
    
    int goodNodes(TreeNode* root) 
    {
        
        preorder(root,INT_MIN);
        return count;
    }
};