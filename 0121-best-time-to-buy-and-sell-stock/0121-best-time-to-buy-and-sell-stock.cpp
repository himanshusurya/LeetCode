class Solution {
public:
    int maxProfit(vector<int>& prices) 
    {
        int start = prices[0];
        int profit = 0;

        for(auto price:prices)
        {
            profit = max(price - start, profit);
            if(price<start)
            {
                start = price;
            }
        }
        return profit;
    }
};