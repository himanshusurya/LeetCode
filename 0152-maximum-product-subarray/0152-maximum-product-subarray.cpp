class Solution {
public:
    int maxProduct(vector<int>& nums) 
    {
        int minp =nums[0], maxp =nums[0];
        int globalmax = maxp;

        for(int i= 1; i<nums.size(); i++)
        {
            int prev = minp;
            int num = nums[i];

            minp = min(min(num*minp, num),maxp*num);
            maxp = max(max(num*maxp, num),prev*num);
            globalmax = max(globalmax,maxp);
        }   
        return globalmax;
    }
};