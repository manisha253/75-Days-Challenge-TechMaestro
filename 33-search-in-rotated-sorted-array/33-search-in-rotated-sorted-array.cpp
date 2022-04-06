class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int start=0,end=nums.size()-1;
        
         while(start<=end)
        {
            int m=start+(end-start)/2;
            if(nums[m]==target) 
            {
                return m;
            }
            else if(nums[start]<=nums[m])
            {
                if(target<=nums[m] && target>=nums[start])
                    end=m-1;
                else
                    start=m+1;
            }
            else if(nums[m]<=nums[end])
            {
                 if(target>=nums[m] && target<=nums[end])
                   start=m+1;
                else
                    end=m-1;
            }
        }
        return -1;
    }
};