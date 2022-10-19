class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int major;
        sort(nums.begin(),nums.end());
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i]==nums[i+nums.size()/2])
            {
                major = nums[i]   ;
                break;
            }
        }
        return major;
    }
};
