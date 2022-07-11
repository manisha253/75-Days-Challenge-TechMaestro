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
    vector<int> v;
    void inorder(TreeNode* root,int h)
    {
        if(root==NULL)
            return;
        if(h==v.size())
            v.push_back(root->val);
        inorder(root->right,h+1);
        inorder(root->left,h+1);
    }
    vector<int> rightSideView(TreeNode* root) 
    {
        inorder(root,0);
        return v;
    }
};