class Solution {
public:
    int maxProduct(vector<int>& nums)
    {
        int n = nums.size();
        vector<int> res(2*n);
        res[0] = nums[0];//min
        res[1] = nums[0];//max
        int maxPro = max(res[0],res[1]);   
        for(int i = 1 ; i< n ; i++)
        {
            //Taking care of Zero as a corner case
     
            //Min case
            res[2*i] = min(min((res[2*(i-1)] * nums[i]),(res[2*(i-1)+1] * nums[i])) ,nums[i]);
            //Max case
            res[2*i+1] = max(max((res[2*(i-1)] * nums[i]),(res[2*(i-1)+1] * nums[i])),nums[i]);
            
            maxPro = max(max(res[2*i],res[2*i+1]), maxPro);
        }
        return maxPro;
    }
};