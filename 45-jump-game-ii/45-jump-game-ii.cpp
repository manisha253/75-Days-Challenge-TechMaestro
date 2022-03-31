class Solution {
public:
    int jump(vector<int>& nums) 
    {
        int n=nums.size();
        if(n<2)
            return 0;
        int jump=1,currjmp=nums[0],mxjmp=nums[0];
        int i=0;
        while(i<n-1)
        {
            mxjmp=max(mxjmp,i+nums[i]);
            if(currjmp==i)
            {
                jump++;
                currjmp=mxjmp;
            }
            i++;
        }
        return jump;
    }
};