class Solution {
public:
/*    bool divisorGame(int n) 
    {
        bool dp[n+1];
        memset(dp,0,sizeof(dp));
        for(int i = 2; i <n+1; i++)
        {
            for(int j=1; j<i ; j++)
            {
                if(i%j == 0)
                {
                    dp[i] = dp[i] | !dp[i-j];
                }
            }
        }
        return dp[n];
    }
    */
   //Allice will always loose whenever n is odd
     bool divisorGame(int n) 
    {
        if(n%2 == 0)
            return true;
         return false;
    }
};



