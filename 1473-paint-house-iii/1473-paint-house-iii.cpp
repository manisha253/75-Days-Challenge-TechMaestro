class Solution {
public:
int minCost(vector<int>& houses, vector<vector<int>> & cost, int m, int n, int target)
{

    vector<vector<vector<int>>> dp(m + 1, vector<vector<int>> (m + 1, vector<int> (n + 2, -1)));
    int ans = minCost(houses, cost, 0, n + 1, m, n, target, dp);
    return ans == INT_MAX ? -1 : ans;
}

int minCost(vector<int> &houses, vector<vector<int>> &cost, int i, int prev, int m, int n, int target, vector<vector<vector<int>>> &dp)
{
    if(target < 0 || i == m)
        return target ? INT_MAX : 0;
    
    if(dp[i][target][prev] != -1)
        return dp[i][target][prev];
    
    if(houses[i])
        return dp[i][target][prev] = minCost(houses, cost, i + 1, houses[i], m, n, target - (prev != houses[i]), dp);
    
    long tmp = INT_MAX;
    for(int j = 1; j <= n; j++)
        tmp = min(tmp, (long) cost[i][j - 1] + minCost(houses, cost, i + 1, j, m, n, target - (prev != j), dp));
    
    return dp[i][target][prev] = tmp;
}
};