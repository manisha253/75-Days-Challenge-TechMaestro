class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) 
    {
        int n=nums.size();
        int diff=INT_MAX;
        
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++)
        {
            int j=i+1;
            int k=n-1;
            while(j<k)
            {
                int sum=nums[i]+nums[j]+nums[k];
                if(abs(target-sum)<abs(diff))
                {
                    diff=target-sum;
                }
                if(sum<target)
                {
                    j++;
                }
                else
                {
                    k--;
                }
            }
        }
        return target-diff;
        
    }
};

