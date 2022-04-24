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
    vector<vector<int>> v;
    void func(TreeNode* root, int l)
    {
        if(root==NULL)
            return;
        if(v.size()==l)
        {
            v.push_back({});
        }
        v[l].push_back(root->val);
        func(root->left,l+1);
        func(root->right, l+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        func(root,0);
        return v;
        
    }
};