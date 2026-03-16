class Solution {
public:
    bool check(vector<int>& nums) 
    {
      
int n = nums.size();
    int drops = 0;

    for (int i = 0; i < n; i++) {
        if (nums[i] > nums[(i + 1) % n]) {
            drops++;
            if (drops > 1) return false;
        }
    }
    return true;


      /*
        bool isCheck = true; 
        int n = nums.size();
        int start = 0;
        for(int i = 0; i<n-1; i++)
        {
            if(nums[i] > nums[i+1])
            {
                start = i+1;
            }
        }
        for(int i = 0; i<n-1; i++)
        {
            if(nums[(start) % n] > nums[(start+1) % n])
            {
                isCheck = false;
                break;;
            }
            start++;
        }
        return isCheck;       
        */
    }
};