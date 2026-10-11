class Solution {
public:
    int missingNumber(vector<int>& nums) 
    {
        int xrange = 0;
        int xnums = 0;
        for(int i =1; i<=nums.size(); i++)
        {
            xrange ^=i;
        }
        for(auto num:nums)
        {
            xnums ^=num;
        }
        return xrange^xnums;
    }
};