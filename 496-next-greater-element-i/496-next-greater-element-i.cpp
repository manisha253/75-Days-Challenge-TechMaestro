class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2)
    {
        int l1= nums1.size();
        int l2= nums2.size();
     
        map<int,int> mp;
        int t,k;
        for(int i=0;i<l2;i++)
        {
            int j=i+1;
            bool isgreater=false;
            while(j<l2 && !isgreater)
            {
            if(nums2[j]>nums2[i])
            {
                isgreater=true;
                mp[nums2[i]]=nums2[j];
            }
                j++;
            }
            if(!isgreater)
                mp[nums2[i]]=-1;
        }
        for(int i=0;i<l1;i++)
            nums1[i]=mp[nums1[i]];
        return nums1;

    }
};
        