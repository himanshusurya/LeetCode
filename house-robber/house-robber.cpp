class Solution {
public:
    int rob(vector<int>& nums) 
    {
        if(nums.size()<2)
            return nums[0];
        vector<int> profit(nums.size());
        profit[0] = nums[0];
        profit[1] = max(nums[0],nums[1]);
        
        for(int i=2; i<nums.size() ; i++)
        {
            profit[i] = max( nums[i] + profit[i-2], profit[i-1]);
        }
        return profit[nums.size()-1];
        
    }
};

