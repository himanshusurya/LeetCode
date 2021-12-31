class Solution {
public:
    int climbStairs(int n) 
    {
        int first =1;
        int sec = 1;
        int res = 1;
        for(int i=1; i<n; i++)
        {
            res = first + sec;
            first = sec;
            sec = res;
        }
        return res;
    }
};