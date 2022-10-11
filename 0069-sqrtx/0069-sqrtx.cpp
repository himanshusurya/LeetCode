class Solution {
public:
    int mySqrt(int x) 
    {
        int start =1, end = x;
        long mid;
        if(x == 0 || x == 1)
            return x;
        while(start <= end)
        {
            mid = (start) + (end - start) /2;
            long long int  sqr = mid * mid;
            long long int sqrPlus = sqr + 2*mid + 1;
            if(sqr <= x && (sqrPlus > x) )
            {
                return mid;
            }
            else if(sqr > x)
            {
                end = mid -1;
            }
            else
            {
                start = mid +1;   
            }
        }
        return start;
    }
};
