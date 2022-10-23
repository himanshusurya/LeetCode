class Solution {
public:
/*
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
    */
///////////////////////////////////////////
//Hash Map Solution
/*    int majorityElement(vector<int>& nums) 
    {
        int major;
        auto max = -1;
        unordered_map<int,int> Map;
        for(auto i:nums)
        {
            if(Map.find(i) == Map.end())
            {
                Map[i] = 0;
            }
            else
            {
                Map[i]++;
            }
                
        }
        for(auto i:Map)
        {
            if(max < i.second)
            {
                major = i.first;
                max = i.second;
            }
        }
        return major;
    }
    */
///////////////////////////////////////////
//Booye-Mayor Voting Algorithm
    int majorityElement(vector<int>& nums)
    {
        int major = nums[0];
        int count = 1;
        for(int i = 1; i < nums.size(); i++)
        {
            if(count == 0)
            {
                major = nums[i];
                count = 1;
            }
            else if(major == nums[i])
            {
                count++;
            }
            else
            {
                count--;
            }
        }
        return major;
    }
    
    
};
