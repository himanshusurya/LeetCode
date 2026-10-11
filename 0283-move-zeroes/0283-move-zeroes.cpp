class Solution {
public:
    void moveZeroes(vector<int>& nums) 
    {
    
        int id =0, z=0;
        while(id<nums.size())
        {
            if(nums[id] != 0)
            {
                swap(nums[id],nums[z++]);
            }
            id++;
        }
    }
};