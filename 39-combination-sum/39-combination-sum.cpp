class Solution {
public:
    vector<vector<int>>v;
    void func(vector<int>& candidates, int target,int i, int sum, vector<int> temp)
    {
        int n=candidates.size();
        if(sum==target)
        {
            v.push_back(temp);
            return;
        }
        if(sum>target || i>=n)
        {
            return;
        }
        temp.push_back(candidates[i]);
        func(candidates,target,i,sum+candidates[i],temp);
        temp.pop_back();
        func(candidates,target,i+1,sum,temp);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) 
    {
        vector<int>temp;
        func(candidates,target,0,0,temp);
        return v;
        
    }
};
