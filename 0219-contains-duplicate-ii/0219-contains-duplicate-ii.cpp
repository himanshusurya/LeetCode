class Solution {
public:
    //Brute force approach
    /*
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        bool result = false;
        for(int i = 0; i < nums.size(); i++)
        {
            for(int j = i+1; j < nums.size(); j++)
            {
                if(nums[i] == nums[j] && abs(i-j) <= k)
                {
                    return true;
                }
            }
        }
        return result;    
    }
    */
    //Using hash Map
    bool containsNearbyDuplicate(vector<int>& nums, int k) 
    {
        unordered_map<int,int> Map;
        for(int i = 0; i < nums.size(); i++)
        {
            auto itr = Map.find(nums[i]);
            if(itr == Map.end())
            {
                Map[nums[i]] = i;
            }
            else if((i - itr->second) <= k)
            {
                return true;
            }
            else
            {
                Map[nums[i]] = i;
            }
        }            
        return false;        
    }
};