class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int> v(n);

        for(int i=0;i<n;i++)
        {
            v[i]=-1;
            for(int j=1;j<n;j++)
            {
                if(nums[(i+j)%n]>nums[i])
                {
                    v[i]=(nums[(i+j)%n]);
                    break;
                 
                }
            }
        }
        return v;
        
    }
};