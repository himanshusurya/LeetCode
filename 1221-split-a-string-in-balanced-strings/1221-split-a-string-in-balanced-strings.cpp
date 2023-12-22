class Solution {
public:
    int balancedStringSplit(string s) 
    {
        int count = 0;
        int maxBalStr = 0;
        for(auto ch:s)
        {
            if(ch == 'R')
            {
                count++;
            }
            else
            {
                count--;
            }
            if(count == 0)
            {
                maxBalStr++;
            }
        }
        return maxBalStr;
    }
};