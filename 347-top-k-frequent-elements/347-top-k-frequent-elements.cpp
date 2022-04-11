class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        
        priority_queue < pair<int,int> , vector<pair<int,int>> , greater<pair<int,int>> > minh;
        unordered_map <int,int> mp;
        vector <int> v;
        
        for(int i=0; i<nums.size(); i++)
            mp[nums[i]]++;
        
        for(auto i=mp.begin(); i!=mp.end(); i++)
        {
            minh.push({i->second, i->first});
            if(minh.size() > k)
                minh.pop();
        }
        
        while(minh.size() > 0)
        {
            v.push_back(minh.top().second);
            minh.pop();
        }
        reverse(v.begin(),v.end());
        
        return v;
    }
};