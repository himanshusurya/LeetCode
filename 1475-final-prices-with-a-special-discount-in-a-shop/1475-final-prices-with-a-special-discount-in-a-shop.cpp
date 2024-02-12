class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) 
    {
        vector<int> fprice;
        for(int i = 0; i < prices.size(); i++)
        {
            int dis = prices[i];
            for(int j = i + 1; j < prices.size(); j++)
            {
                if(prices[j] <= prices[i])              
                {
                    dis = prices[i] - prices[j];
                    break;
                }
            }
            fprice.push_back(dis);
        }
        return fprice;
    }
};