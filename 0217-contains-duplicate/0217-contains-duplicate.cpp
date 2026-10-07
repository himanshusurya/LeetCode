class Solution {
public:
    bool containsDuplicate(vector<int>& nums) 
    {
        bool found  = false;
        unordered_set<int> Map;
        for(auto num:nums)
        {
            if(Map.find(num) != Map.end())
            {
                found = true;
                break;
            }
            Map.insert(num);
        }        
        return found;
    }
};