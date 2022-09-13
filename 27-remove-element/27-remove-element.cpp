class Solution {
public:
    int removeElement(vector<int>& nums, int val) 
    {
        int delPos = 0;
        for(int i =0 ; i<nums.size(); i++)
        {
            if(nums[i] != val)
            {
                nums[delPos++] = nums[i];
            }
        }
        return delPos;        
    }
};