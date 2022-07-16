class Solution {
public:
    int mod = 1000000007;
    
    int findPaths(int m, int n, int maxMove, int startRow, int startColumn) 
    {
        
        vector<vector<vector<int>>> dp(m+1, vector<vector<int>>(n+1, vector<int>(maxMove+1, -1)));
        
        return func(m,n, maxMove, startRow, startColumn, dp);
    }
    
    int func(int m, int n, int maxMove, int startRow, int startColumn, vector<vector<vector<int>>> & dp)
    {
         if((startRow == -1 || startColumn == -1 || startRow == m || startColumn == n))
             return 1;
        if(maxMove == 0)
        {
            return 0;
        }
        
        if( dp[startRow][startColumn][maxMove] != -1) 
            return  dp[startRow][startColumn][maxMove] % mod;
        return dp[startRow][startColumn][maxMove] = (0LL + func(m,n, maxMove-1, startRow-1, startColumn, dp)+  func(m,n, maxMove-1, startRow, startColumn-1, dp) +
func(m,n, maxMove-1, startRow, startColumn+1, dp) + func(m,n, maxMove-1, startRow+1, startColumn, dp)) % mod;
    }
};