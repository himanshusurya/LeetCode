/*class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        int major;
        sort(nums,nums+nums.size());
        for(int i=0; i< nums.size(); i++)
        {
            if(nums[i]==nums[i+nums.size()/2+1])
            {
                major = nums[i]   ;
                break;
            }
        }
        return major;
    }
};
*/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> a;
        for(int i:nums)
            a[i]++;
        int maxval=nums[0];
        for(auto x:a)
        {
            if(x.second>a[maxval])
                maxval=x.first;
        }
        return maxval;
    }
};