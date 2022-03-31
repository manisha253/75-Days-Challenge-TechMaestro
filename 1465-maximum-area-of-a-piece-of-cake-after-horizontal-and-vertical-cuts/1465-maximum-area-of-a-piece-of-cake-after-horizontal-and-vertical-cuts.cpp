class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts)
    {
        sort(horizontalCuts.begin(),horizontalCuts.end());
        int n=horizontalCuts.size();
        long hmax=horizontalCuts[0];
        for(int i=1;i<n;i++)
        {
            if(horizontalCuts[i]-horizontalCuts[i-1]>hmax)
            {
                hmax=horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        if(hmax<h-horizontalCuts[n-1])
        {
            hmax=h-horizontalCuts[n-1];
        }
        
        sort(verticalCuts.begin(),verticalCuts.end());
        int m=verticalCuts.size();
        long vmax=verticalCuts[0];
        for(int i=1;i<m;i++)
        {
            if(verticalCuts[i]-verticalCuts[i-1]>vmax)
            {
                vmax=verticalCuts[i]-verticalCuts[i-1];
            }
        }
        if(vmax<w-verticalCuts[m-1])
        {
            vmax=w-verticalCuts[m-1];
        }
        
        long int res=(hmax*vmax)%1000000007;
        return (int)res;
        
    }
};