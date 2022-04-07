class Solution {
public:
    int BinarySearch(vector<int> nums, int target, string find)
    {
        int res=-1;
        int n =nums.size();
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(nums[mid]==target)
            {
                res=mid;
            if(find == "FIRST") 
            {
                e = mid - 1 ;
            }
                else
                {
                    s = mid + 1;
                }
            }
            else if(target<nums[mid])
                e=mid-1;
            else
                s=mid+1;
        }

       return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        return {BinarySearch(nums, target, "FIRST"), BinarySearch(nums, target, "LAST")};
    }  
    
};
