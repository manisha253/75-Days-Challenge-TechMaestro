class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int hold1 = INT_MIN, hold2 = INT_MIN;
        int release1 = 0, release2 = 0;
        for(int i:prices)
        {                              
            release2 = max(release2, hold2+i);    
            hold2    = max(hold2,    release1-i); 
            release1 = max(release1, hold1+i);     
            hold1    = max(hold1,    -i);      
        }
        return release2;
    }
};
