class Solution {
public:
    int largestRectangleArea(vector<int>& heights) 
    {
       int n=heights.size();
   
       
       vector<int> left(n);   
       stack<int> s2;
     
       for(int i=0;i<heights.size();i++)
       {
           while(s2.size()>0 && heights[i]<=heights[s2.top()])
           {
               s2.pop();
           }
           
           if(s2.size()==0)
              left[i]=-1;
           else
               left[i]=s2.top();
           
           s2.push(i);
       } 
        
            vector<int> right(n);        
       stack<int>s1; 
      
       for(int i=heights.size()-1;i>=0;i--)
       {
           while(s1.size()>0 && heights[i]<=heights[s1.top()])
           {
               s1.pop();
           }
           
           if(s1.size()==0)
              right[i]=heights.size();
           else
               right[i]=s1.top();
           
           s1.push(i);
       }
       int maxi=INT_MIN;
        
       for(int i=0;i<heights.size();i++)
       {
             int w=right[i]-left[i]-1;
             int area=heights[i]*w;
           maxi=max(maxi,area);
          
       }
        
        return maxi;
    }
};