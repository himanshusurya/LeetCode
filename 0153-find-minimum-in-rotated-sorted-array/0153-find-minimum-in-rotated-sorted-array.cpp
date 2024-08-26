class Solution {
public:
    int findMin(vector<int>& nums) 
    {
        int start = 0, end = nums.size()-1;
        int mid;
        int result = nums[0];
        while(start < end)
        {
            mid = (start + end) /2;
            if(nums[start] <= nums[mid] && nums[mid] <= nums[end])
            {
                result = nums[start];
                break;
            }
            else if(nums[start] >= nums[mid] && nums[mid] >= nums[end])
            {
                result = nums[end];
                break;
            }
            else if(nums[start] < nums[mid] && nums[mid] > nums[end])
            {
                start = mid;
            }
            else
            {
                end = mid;
            }
        }
        return result;
    }
};