class Solution {
public:
    int func(const vector<int>& v)
    {
        int n=v.size();
        int s=0;
        int e=n-1;
        int mid;
        while(s<=e)
        {
            mid=s+(e-s)/2;
            if(v[mid]>=0)
            {
                s=mid+1;
            }
            else
            {
                e=mid-1;
            }
        }
            return n-e-1;
    }
    int countNegatives(vector<vector<int>>& grid)
    {
        int c=0;
        int m=grid.size();
        for(int i=0;i<m;i++)
        {
           c+= func(grid[i]);
        }
        return c;
    }
};