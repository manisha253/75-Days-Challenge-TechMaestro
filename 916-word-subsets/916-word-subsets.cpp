class Solution {
public:
    int func(string s,char ch)
    {
        int cnt=0;
        for(char c:s)
        {
            if(c==ch)
            {
                cnt++;
            }
        }
        return cnt;
    }
    bool issubset(string s,vector<int>& freq)
    {
        for(char i='a';i<'z';i++)
        {
            if(func(s,i)<freq[i-'a'])
            {
                return false;
            }
        }
        return true;
    }
    vector<string> wordSubsets(vector<string>& words1, vector<string>& words2) 
    {
        vector<int>freqmatch(26,0);
        vector<string> v;
        for(string s:words2)
        {
            for(char i='a';i<'z';i++)
            {
                freqmatch[i-'a']=max(freqmatch[i-'a'], func(s,i));
            }
        }
        for(string s: words1)
        {
            if(issubset(s,freqmatch))
            {
                v.push_back(s);
            }
        }
        return v;
        
    }
};