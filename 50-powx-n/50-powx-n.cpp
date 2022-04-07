class Solution {
public:
    double myPow(double x, int n)
    {
        if(n==0)
            return 1.0;     
        if(n==1)
             return x;
        if(n==-1)
             return 1/x;
        double power = myPow(x, n/2);

        if(n % 2 == 0)
            return power * power;
      
        else if(n<0 && n%2!=0)
        {
            return power * power *(1 / x);
        }
        else
        {
            return power * power * x;
        }
    }
};
       