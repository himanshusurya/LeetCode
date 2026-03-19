class Solution {
public:
    int singleNumber(vector<int>& nums)
    {
        int missNum = 0;
        for(auto num:nums)
        {
            missNum ^= num; 
        }        
        return missNum;
    }
};