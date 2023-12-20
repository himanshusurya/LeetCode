class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) 
    {
        int goodPair = 0;
        for(auto i = 0; i < (nums.size() - 1); i++)    
        {
            for(auto j = i+1; j< nums.size(); j++)
            {
                if(nums[i] == nums[j] && i < j)
                {
                    goodPair++;
                }
            }
        }
        return goodPair;
    }
};