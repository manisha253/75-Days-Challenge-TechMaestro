class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) 
    {
        int sum=0,a;
        int n=cardPoints.size();
        for(auto x:cardPoints)
        {
            sum=sum+x;
        }
	int subarray_sum = accumulate(begin(cardPoints), end(cardPoints) - k, 0);
    int ans = sum - subarray_sum;
	for(int right =n - k, left = 0; right < n ; right++, left++)
    {
        subarray_sum+=cardPoints[right]-cardPoints[left];
        a=sum-subarray_sum;
        ans=max(ans,a);
    }
        return ans;
    }
		
};