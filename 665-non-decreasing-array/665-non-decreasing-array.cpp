class Solution {
public:
    bool checkPossibility(vector<int>& nums) {
        int x=0;
        int n=nums.size();
        for(int i=1;i<n;i++)
        {
            if(nums[i-1]>nums[i])
            {
            if(x==1)
                return false;
            x++;
            
            if(i<2 || nums[i-2]<=nums[i])
                nums[i-1]=nums[i];
            else
                nums[i]=nums[i-1];
             }
        }
        return true;
        
    }
};