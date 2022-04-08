class Solution {
public:
    int characterReplacement(string s, int k) 
    {
        int n = s.size();
        int i = 0, j = 0, max_c = 0;
        unordered_map<char,int>mp;
        int ans = INT_MIN;
        while(j < n)
        {
            mp[s[j]]++;
            max_c = max(max_c, mp[s[j]]);
            if((j-i+1) - max_c > k)
            {
                mp[s[i]]--;
                i++;
            }
            ans = max(ans, (j-i+1));
            j++;   
        }
        return ans;
    }
};