class Solution {
public:
    void nextPermutation(vector<int>& nums) 
    {
        int pivot =-1;
        for(int j = nums.size()-2; j>=0; j--)
        {
            if(nums[j] < nums[j+1])
            {
                pivot = j;
                int nxt = nums.size() -1;
                while(nums[pivot] >= nums[nxt])
                {
                    nxt--;
                }
                swap(nums[pivot],nums[nxt]);
                sort(nums.begin() + pivot+1, nums.end());
                break;
            }
        }        
        if(pivot == -1)
        {
            reverse(nums.begin(), nums.end());
        }
    }
};