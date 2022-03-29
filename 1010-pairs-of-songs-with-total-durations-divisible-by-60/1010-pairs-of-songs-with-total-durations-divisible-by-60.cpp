class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) 
    {
        unordered_map<int,int> mp;
        int count = 0;
        for (int i = 0; i < time.size(); i++)
        {
            int pair2 = 0;
            if (time[i] % 60 != 0)
            {
                pair2 = 60 - (time[i] % 60);
            }
            count += mp[pair2];
            mp[time[i] % 60]++;
        }
        return count;
    }
};