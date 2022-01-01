class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost)
    {
        //Instead of using separate vector we can use the cost vector to perform the operation.
        int n = cost.size();
        vector<int> minCost(n+1,0);
        minCost[0] = cost[0];
        minCost[1] = cost[1];
        cost.push_back(0);
        
        for(int i=2; i<=n ; i++)
        {
            minCost[i] = cost[i] + min( minCost[i-1], minCost[i-2] );
        }
        return minCost[n];        
    }
};