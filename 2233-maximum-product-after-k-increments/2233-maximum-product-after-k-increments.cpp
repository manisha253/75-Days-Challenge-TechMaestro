class Solution {
public:
    int maximumProduct(vector<int>& nums, int k)
    {
        int mod=pow(10,9)+7;
        int n=nums.size();
        priority_queue <int, vector<int>, greater<int>> pq;
        for(int i=0;i<n;i++)
        {
            pq.push(nums[i]);
        }
        while(k--)
        {
            int x=pq.top();
            pq.pop();
            x=x+1;
            pq.push(x);
        }
        long long int ans=1;
        while(pq.size()>0)
        {
            int x=pq.top();
            pq.pop();
            ans=(ans*x)%mod;
        }
        return ans;
    }
};