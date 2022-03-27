class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) 
    {
        vector<vector<int>> v;
        int n=intervals.size();
        if(n==0)
            return v;
        
        sort(intervals.begin(),intervals.end());
        vector<int> tempintervals = intervals[0];
        for(auto it:intervals)
        {
            if(it[0]<=tempintervals[1])
            {
                tempintervals[1]=max(it[1], tempintervals[1]);
            }
            else
            {
                v.push_back(tempintervals);
                tempintervals=it;
            }
        }
        v.push_back(tempintervals);
        return v;
        
    }
};