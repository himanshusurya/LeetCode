class Solution {
public:
    int findGCD(vector<int>& nums) 
    {
        auto [minit,maxit] = minmax_element(nums.begin(), nums.end());
        int gcd = 1;
        int minnum = *minit;
        int maxnum = *maxit;

        while(minnum != 0)
        {
            int r = maxnum % minnum;
            if(r == 0)
            {
                gcd = minnum;
                break;
            }
            else
            {
                maxnum = minnum;
                minnum = r;
            }
        }
        return gcd;
    }
};