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
    void func(TreeNode* root,int h)
    {
        if(root==NULL)
        {
            return;
        }
        if(v.size()==h)
        {
            v.push_back({});
        }
        v[h].push_back(root->val);
        func(root->left,h+1);
        func(root->right,h+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root)
    {
        func(root,0);
        return v;
        
    }
};