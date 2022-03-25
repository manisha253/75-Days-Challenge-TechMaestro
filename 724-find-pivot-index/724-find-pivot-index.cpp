class Solution {
public:
    int pivotIndex(vector<int>& nums) 
    {
        int sum = accumulate(nums.begin(),nums.end(),0);
        int l_sum= 0;
        for(int i=0;i<nums.size();i++)
        {            
          if(l_sum==sum-l_sum-nums[i])
          {
              return i;
          }
            l_sum+=nums[i];
        }
        return -1;
    }
};