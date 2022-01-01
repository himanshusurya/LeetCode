class Solution {
public:
    int rob(vector<int>& nums) 
    { 
        //When only one element then return the element itself
        int first = nums[0];
        if(nums.size()==1)
            return first;
       
        //Calculating when there are two elements only
        int profit = max(first,nums[1]) ;
        int sec   = profit;
        //Calculation for more than 2 elements
        //Check the max skiiping the element or by 
        //selecting the element
        //When seleccted Profit[i]= nums[i]+Profit[i-2] i.e you can't select the adjacent house
        //When not selected, Profit[i] will remain as same as Profit[i-1].
        for(int i=2; i<nums.size(); i++)
        {
            profit = max(first+nums[i],sec);
            first = sec;
            sec = profit;            
        }
        return profit;
    }
};