class Solution {
public:
    int coinChange(vector<int>& coins, int amount) 
    {
        vector<long> minCoins(amount+1);
        minCoins[0] = 0;
        
        for(int partamount = 1; partamount <= amount; partamount++)
        {
            minCoins[partamount] = INT_MAX;
            for(auto c:coins)
            {
                if((partamount - c)>=0)
                {
                    minCoins[partamount] =  min(minCoins[partamount - c] + 1,minCoins[partamount]);
                }
            }
        }
        if(minCoins[amount] == INT_MAX)
        {
            minCoins[amount] = -1;
        }
        return minCoins[amount];
    }
};