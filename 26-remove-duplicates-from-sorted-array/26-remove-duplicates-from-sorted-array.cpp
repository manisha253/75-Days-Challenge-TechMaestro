
class Solution {
public:
	int removeDuplicates(vector<int>& nums) 
	{
		int n = nums.size();
        int i = 0;
    
		if(n == 0)
			return 0; 
    
		for(int j = 1; j<n; j++)
		{
			
			if(nums[i]!=nums[j])
			{
				i+=1;
				nums[i] = nums[j];
			}
		}
    
		return i+1;
	}
};