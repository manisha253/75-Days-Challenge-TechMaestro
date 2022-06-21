class Solution {
public:
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) 
    {
        int heap_sum = 0, height_diff = 0,
            height, bricks_req = 0;
        
        priority_queue<int,vector<int>,greater<int>> minh;
        
        for(int i=0; i<heights.size()-1; i++)
        {
            height = heights[i];
            if(heights[i]<heights[i+1]){  
                
                height_diff = (heights[i+1] - heights[i]);
                bricks_req += height_diff;
                
                minh.push(height_diff);
                bricks_req-=height_diff;
                
                if(minh.size() > ladders)
                {
                    bricks_req += minh.top();
                    minh.pop();                    
                }
                
                if(bricks_req > bricks)
                    return i;                
            }
            
        }
        
        return heights.size()-1;
    }
};