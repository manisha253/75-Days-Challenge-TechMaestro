class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) 
	{
        if(nums.empty()) 
            return {{}}; 
        vector<vector<int>> v={{}};
        for(int x:nums)
        {
            int n=v.size();
            for(int i=0;i<n;i++)
            {
               vector<int> r=v[i]; 
                r.push_back(x);
                v.push_back(r);
            }
        }
        return v;
    }
};