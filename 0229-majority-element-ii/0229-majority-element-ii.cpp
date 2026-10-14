class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) 
    {
        int can1 = 0, can2 =1, freq1 = 0, freq2 = 0;
        int n = nums.size();
        vector<int> ans;
        for(auto num:nums)
        {
            if(num == can1)
            {     
                freq1++;
            }
            else if(num == can2)
            {
                freq2++;
            } 
            else if(freq1 ==0) 
            {
                can1 = num;
                freq1++;
            }
            else if(freq2 == 0)
            {
                can2 = num;
                freq2++;
            }
            else
            {
                  freq1--;
                  freq2--;
            }
        }

        freq1 = freq2 = 0;
        for(auto num:nums)
        {
            if(num == can1)
            {
                freq1++;
            }
            else if(num == can2)
            {
                freq2++;
            }
        }
        if(freq1 > n/3)
        {
            ans.push_back(can1);
        }
        if(freq2 > n/3)
        {
            ans.push_back(can2);
        }
        return ans;        
    }
};