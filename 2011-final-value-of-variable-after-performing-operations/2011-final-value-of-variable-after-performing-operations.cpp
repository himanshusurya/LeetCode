class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) 
    {
        int count = 0;
        for(auto str:operations)
        {
            if(str == "++X" || str == "X++")
            {
                count++;
            }
            else if(str == "X--" || str == "--X")
            {
                count--;
            }
        }
        return count;
    }
};