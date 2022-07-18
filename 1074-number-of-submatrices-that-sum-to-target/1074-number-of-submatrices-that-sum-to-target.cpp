class Solution {
public:
    int sumEqualToK(vector<int>& nums, int k)
    {
        unordered_map<int,int> mp;
        mp[0] =1;
        int sum = 0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            sum += nums[i];
            ans += mp[sum-k];   
            mp[sum]++;
        }
        return ans;
    }
    
    int numSubmatrixSumTarget(vector<vector<int>>& matrix, int target) 
    {   
        int count=0;
        for(int i=0;i<matrix.size();i++)
        {
            vector<int> presum(matrix[i].size(),0);
            for(int j=i;j<matrix.size();j++)
            {
                for(int k=0;k<matrix[j].size();k++)
                {
                    presum[k] += matrix[j][k];
                }
                count += sumEqualToK(presum, target);

            }  
        }
        return count;
        
    }
};