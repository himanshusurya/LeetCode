class Solution {
public:
    int mostWordsFound(vector<string>& sentences) 
    {
        int maxSpace = 0;
        for(auto words:sentences)
        {
            auto localSpace = 0;
            for(auto ch:words)
            {
                if(ch == ' ')
                {
                    localSpace++;
                }
            }
            maxSpace = max(maxSpace, localSpace);
        }
    return maxSpace+1;
    }
};