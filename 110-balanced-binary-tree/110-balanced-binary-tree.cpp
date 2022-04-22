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
    int height(TreeNode* root,bool &flag)
    {
        if(root==NULL)
            return 0;
        int l=height(root->left,flag);
        int r=height(root->right,flag);
        if(abs(l-r)>1)
           flag=false;
       return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root)
    {
        bool flag=true;
        if(root==NULL)
            return true;
        height(root,flag);
        return flag;
        
    }
};