class Solution {
public:
    bool halvesAreAlike(string str) 
    {
        int len1=str.size();
        int count=0,count1=0;
        for(int i=0;i<len1/2;i++)
        {
           if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
            {
                count++;
            }
        }
        for(int i=len1/2;i<len1;i++)
        {
            if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U' )
            {
                count1++;
            }
        }
        return count==count1;
        
    }
};
