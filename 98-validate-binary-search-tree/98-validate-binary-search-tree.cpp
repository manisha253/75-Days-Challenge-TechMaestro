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
    bool check(TreeNode* root, long min, long max) 
    {
        bool t1,t2;
        if(root==NULL)
            return true;
        if(root->val>min && root->val<max)
        {
            t1=check(root->left,min,root->val);
            t2=check(root->right,root->val,max);
        }
        return t1&&t2;
        
    }
    bool isValidBST(TreeNode* root)
    {
        return check(root,LONG_MIN,LONG_MAX);
    }
};