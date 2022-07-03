class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) 
    {
        bool in=true;
       bool de=true;
       int ans=1;
       for(int i=0;i<nums.size()-1;i++)
       {
           if(nums[i]>nums[i+1] && in)
           {
               ans++;
               de=true;
               in = false;
            }
           else if(nums[i]<nums[i+1] && de)
           {
               ans++;
               de=false;
               in = true;
            }
        }
      return ans;
        
    }
};