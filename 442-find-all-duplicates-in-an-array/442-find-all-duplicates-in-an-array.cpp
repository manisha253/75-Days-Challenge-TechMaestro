class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums)
    {
        vector<int> v;
        map<int,int> mp;
        int n=nums.size();
        for(auto i:nums)
        {
            mp[i]++;
        }
        for(auto x:mp)
        {
            if(x.second>1)
            {
                v.push_back(x.first);
            }
        }
        return v;
        
    }
};