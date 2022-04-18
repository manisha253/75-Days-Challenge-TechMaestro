class Solution
{
    public:
    vector<int> help_classmate(vector<int> arr, int n)
    {
    	stack<int> s;
    	vector<int> result(n,-1);
    	
    	for (int i = 0; i < n; i++)
		{
    		if (s.empty())
			{
    			s.push(i);
    			continue;
    		}
    		while (s.empty() == false && arr[s.top()] > arr[i])
			{
    			result[s.top()] = arr[i];
    			s.pop();
    		}
    		s.push(i);
    	}
    	return result;
    }
};