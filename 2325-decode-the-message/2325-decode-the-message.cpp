class Solution {
public:
    bool Isalphabet(char ch)
    {
        return ('a' <= ch && ch <= 'z');
    }
    string decodeMessage(string key, string message) 
    {
        string result = "";
        unordered_map<char,char> keyMap;
        int alph = 'a';
        for(auto ch:key)
        {
            if(Isalphabet(ch) && keyMap.find(ch) == keyMap.end())
            {
                keyMap[ch] = alph;
                alph++;
            }
        }
        for(auto ch:message)
        {
            if(Isalphabet(ch))
            {
                result += keyMap.find(ch)->second;
            }
            else
            {
                result += ch;
            }
        }
        return result;
    }
};