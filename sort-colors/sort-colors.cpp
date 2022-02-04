class Solution {
public:
    void sortColors(vector<int>& nums) 
    {
        int countOne = 0, countTwo = 0, countZero = 0;
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i] == 0)
            {
                countZero++;
            }
            else if(nums[i] == 1)
            {
                countOne++;
            }
            else
            {
                countTwo++;
            }
        }
        int i = 0;
            while(countZero--)
            {
                nums[i++] = 0;
            }
            while(countOne--)
            {
                nums[i++] =1;
            }
            while(countTwo--)
            {
                nums[i++] = 2;
            }       
    }
};