class Solution {
public:
    int search(vector<int>& nums, int target) 
    {
        int idx = -1;
        int start = 0, end = nums.size()-1, mid;
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                idx = mid;
                break;
            }
            else if(target < nums[mid])
                end = mid -1;
            else
                start =mid+1;
        }
        return idx;        
    }
};