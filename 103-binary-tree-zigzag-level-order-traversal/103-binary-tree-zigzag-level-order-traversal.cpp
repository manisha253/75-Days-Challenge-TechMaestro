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
    map<int,vector<int>> mp;
void func(TreeNode* root,int l)
{
    if(root == NULL)
        return;
    mp[l].push_back(root->val);
     func(root->left,l+1);
     func(root->right,l+1);
}
vector<vector<int>> zigzagLevelOrder(TreeNode* root)
{
    vector<vector<int>> v;
     func(root,0);

    for(int i =0;i<mp.size();i++)
    {
        if(mp[i].size() > 0)
        {
            if(i % 2 == 0)
            {
                v.push_back(mp[i]);
            }
            else
            {
                reverse(mp[i].begin(),mp[i].end());
                v.push_back(mp[i]);
            }
        }
    }
return v;
}
};