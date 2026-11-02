class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) 
    {
        double avg = INT_MIN;
        double maxAvg = avg;
        int sum = 0;
        int n = nums.size();
        for(int start = 0, end =0; end < n; end++)
        {
            sum += nums[end];
            if(end -start + 1 == k)
            {
                avg = sum/(double)k;
                maxAvg = max(avg,maxAvg);
                sum -= nums[start];
                start++;
            }
        }
        return maxAvg;
    }
};