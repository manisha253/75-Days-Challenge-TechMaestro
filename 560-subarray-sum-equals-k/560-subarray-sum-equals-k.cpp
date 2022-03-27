class Solution {
public:
    int subarraySum(vector<int>& nums, int k) 
    {
        map<int,int> mp;
        int c=0;
        int s=0;
        for(int i=0;i<nums.size();i++)
        {
            s+=nums[i];
            if(s==k)
                c++;
            if(mp.find(s-k)!=mp.end())
            {
                c+=mp[s-k];
            }
            mp[s]++;
        }
        return c;
    }
};