class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        set<char> checkPangram;
        for(auto ch:sentence)
        {
            checkPangram.insert(ch);
        }
        if(checkPangram.size() == 26)
            return true;
        
        return false;
    }
};