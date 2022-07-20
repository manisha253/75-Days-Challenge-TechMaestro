class Solution {
public:
    int func(vector<int> &arr, int x)
    {
        int start = 0;
        int end = arr.size()-1;
        int ans = -1;
        while (start <= end)
        {
            int mid = (start + end) / 2;

            if (arr[mid] <= x)
                start = mid + 1;
            else
            {
                ans = mid;
                end = mid - 1;
            }
        }
        return ans==-1 ? ans : arr[ans];
    }
    

    int numMatchingSubseq(string s, vector<string>& words) 
    {
	
		
        unordered_map<char,vector<int>> mp;
        for(int i=0;i<s.length();i++){
            mp[s[i]].push_back(i);
        }
          
        int count = words.size();
		
        for(auto w : words){
            int prev = -1;
            for(int j=0;j<w.size();j++){
				
                int x = func(mp[w[j]],prev);
			
                if(x == -1)
                {
                    count--;
                    break;
                }
				
                else{
                    prev = x;
                }
            }
        }
        return count;
    }
};