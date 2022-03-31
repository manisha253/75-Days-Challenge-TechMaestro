class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> v;
        int row=matrix.size();
        int col=matrix[0].size();
        if(row==0) 
            return v;
        int left=0,right=col-1,top=0,bot=row-1,dir=0;
        while(left<=right and top<=bot)
        {
            if(dir==0)
            {
                for(int i=left;i<=right;i++)
                {
                    v.push_back(matrix[top][i]);
                }
                dir=1,top++;
            }
            else if(dir==1)
            {
                for(int i=top;i<=bot;i++)
                {
                    v.push_back(matrix[i][right]);
                }
                dir=2,right--;
            }
            else if(dir==2)
            {
                for(int i=right;i>=left;i--)
                {
                    v.push_back(matrix[bot][i]);
                }
                dir=3,bot--;
            }
            else if(dir==3)
            {
                for(int i=bot;i>=top;i--)
                {
                    v.push_back(matrix[i][left]);
                }
                dir=0,left++;
            }
            
        }
        return v;
    }
};