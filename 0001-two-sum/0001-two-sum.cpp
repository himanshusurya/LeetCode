class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) 
    {
        unordered_map<int,int> Map;
        vector<int> ans;

        for(int i =0; i<nums.size(); i++)
        {
            if(Map.find(target - nums[i]) == Map.end())
            {
                Map[nums[i]] = i;
            }
            else
            {
                ans.push_back(i);
                ans.push_back(Map[target-nums[i]]);
                break;
            }
        }
        return ans;
    }
};