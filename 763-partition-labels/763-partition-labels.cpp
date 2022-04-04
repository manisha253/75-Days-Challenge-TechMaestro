class Solution {
public:
    vector<int> partitionLabels(string s)
    {
      int n = s.length();
      
      unordered_map<char, int> mp;
      for(int i = 0 ; i < n; i++) 
      {
          mp[s[i]] = i; 
      }
          
    
      vector<int> ans;
      int max_r = INT_MIN;
      int c= 0;
      for(int i = 0; i < n; ++i)
      {
         c++;
        max_r = max(max_r, mp[s[i]]);
        if(max_r == i) 
        {
            ans.push_back(c);
            c = 0;
        }
       }
      
      return ans;
    }
};