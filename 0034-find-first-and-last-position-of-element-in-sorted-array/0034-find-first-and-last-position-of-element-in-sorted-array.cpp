class Solution {
public:
    int first(vector<int>& nums, int start, int end, int target)
    {
        int mid;
        int idx = INT_MIN;
        
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                idx = mid;
                int temp = first(nums, start, mid-1, target);
                if(temp>=0)
                { 
                    idx = min(temp,idx);
                }
                break;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid -1;
            }
        }                              
        return idx;
    } /*
                  s  m  e   
         0  1  2  3  4  5 
         5  7  7  8  8  10
      */
    int last(vector<int>& nums, int start, int end, int target)
    {
        int mid;
        int idx = INT_MAX;
  
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                idx = mid;
                int temp = last(nums, mid + 1, end, target);
                if(temp < nums.size())
                {
                    idx = max(idx,temp);
                }
                break;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid -1;
            }
        }                            
        return idx;
    }
    vector<int> searchRange(vector<int>& nums, int target) 
    {
        int start = 0, end = nums.size() -1 , mid;
        vector<int> pos;
        
        while(start <= end)
        {
            mid = start + (end - start)/2;
            if(nums[mid] == target)
            {
                pos.push_back(first(nums, start, mid, target));
                pos.push_back(last(nums, mid, end, target));
                break;
            }
            else if(nums[mid] < target)
            {
                start = mid + 1;
            }
            else
            {
                end = mid -1;
            }
        }
        if(pos.size() == 0)
        {
                pos.push_back(-1);
                pos.push_back(-1);
        }
        return pos;
    }
};
