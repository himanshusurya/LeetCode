class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) 
    {
        vector<string> res;
        int start = 0, end = 0;
        if(nums.size() == 1)
        {
            res.push_back(to_string(nums[0]));
            return res;
        }     
        for(int i=1; i < nums.size(); i++)
        {       
            string str;
            while(i < nums.size() && nums[i] == nums[i-1]+1)
            {
                end = i;
                i++;
            }
            str += to_string(nums[start]);
            if(start != end)
            {
                str += "->" + to_string(nums[end]);
            }                           
            start = end + 1;
            end = start;
            res.push_back(str);
        }
        if(start == end && start == nums.size()-1)
               res.push_back(to_string(nums[start]));
        return res;
    }
};