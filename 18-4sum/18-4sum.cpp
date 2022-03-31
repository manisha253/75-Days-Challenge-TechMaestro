class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) 
    {
        
       int n=nums.size();
         vector<vector<int>> ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-3;i++)
        {  
            for(int j=i+1;j<n-2;j++)
            {
               int l=j+1,h=n-1;
                  
                int s= target- (nums[i]+nums[j]);
                
               while(l<h)
               {
                 if((nums[l]+nums[h])==s)
                 {
                    ans.push_back({nums[i],nums[j],nums[l],nums[h]});
                    l++;
                    h--;
                    while(l<h && nums[l]==nums[l-1])
                        l++;
                    while(l<h && nums[h]==nums[h+1])
                        h--;
                 }
                else if((nums[l]+nums[h])>s)
                    h--;
                else 
                    l++;
             
              }
          while(j<n-2 && nums[j]==nums[j+1])
              j++;
          }
        while(i<n-3 && nums[i]==nums[i+1])
            i++; 
        }
      return ans;
    }
};