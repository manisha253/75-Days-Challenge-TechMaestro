class Solution {
public:
    int findPairs(vector<int>& arr, int k) {
        int n = arr.size(); 
        map<int, int> mp; 
        
        for(int i = 0; i < n; i++) 
        {
            mp[arr[i]]++;
        }
        
        int c = 0;
        
        if(k != 0) 
        {
            for(auto it = mp.begin(); it != mp.end(); it++) 
            {
                
                if(mp.find(it -> first + k) != mp.end())
                {
                    c++; 
                }
            }
        }
        else 
        {
            for(auto it = mp.begin(); it != mp.end(); it++)
            {
                if(it -> second > 1)
                {
                    c++;
                }
            }
        }
        
        return c; 
    }
};