class Solution {
public:
    double myPow(double x, int n) 
    {
        double result =  1;
        long long N = n;
        if(x == 1)
        {
            return 1;
        }
        if(N < 0)
        {
            x = 1/x;
            N = N * -1;
        }
        
        while(N>0)
        {
            if(N%2 != 0)
            {
                result =  result * x;
            }
            x = x*x;
            N = N/2;
        }
        return result;
        
    }
};