class Solution {
public:
    string restoreString(string s, vector<int>& indices) 
    {
        string suffleString(s);
        for(auto id = 0; id < s.length(); id++)
        {
            suffleString[indices[id]] = s[id];
        }
        return suffleString;
    }
};