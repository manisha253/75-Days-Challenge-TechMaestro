class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) 
    {
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            if(arr[i+1]>arr[i] && arr[i+1]>arr[i+2])
            {
                return i+1;
            }
        }
        return -1;
        
    }
};