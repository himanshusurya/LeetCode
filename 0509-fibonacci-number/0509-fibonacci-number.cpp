class Solution {
public:
    int fib(int n) 
    {
        int first = 0, sec = 1;
        if(n == 0)
            return first;
        else 
        {
            for(int i = 2; i <= n; i++)
            {
                auto temp = first + sec;
                first = sec;
                sec = temp;
            }            
        }
        return sec;
    }
};