class Solution {
public:
     int DFS(vector<vector<int>>& grid,vector<vector<bool>>& visited,int row,int col,int n,int m)
    {
        
        if(row<0||row>=n||col<0||col>=m)
        {
            return 0;
        }
        if(grid[row][col]==0 || visited[row][col]==true)
        {
            return 0;
        }
        
        visited[row][col]=true;
       
        return 1+DFS(grid,visited,row+1,col,n,m)+DFS(grid,visited,row-1,col,n,m)+DFS(grid,visited,row,col+1,n,m)+DFS(grid,visited,row,col-1,n,m);
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) 
    {
        if (grid.empty()) 
            return 0;

 		int n = grid.size();
 		int m = grid[0].size();
 		vector<vector<bool>>visited(n, vector<bool>(m, false));
        int maxi=0;
         for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                 if(grid[i][j]==1 and !visited[i][j])
                 {
                     maxi=max(maxi,DFS(grid,visited,i,j,n,m));
                 }
            }
        }
        return maxi;
    }
};
