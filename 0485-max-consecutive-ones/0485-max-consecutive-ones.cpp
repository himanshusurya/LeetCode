class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) 
    {
        int max1 = 0;
        int count = 0;
        for(auto num:nums)
        {
            if(num == 0)
            {
                count =0;
            }
            else
            {
                count++;
                max1 = max(max1, count);
            }
        }
        return max1;        
    }
};