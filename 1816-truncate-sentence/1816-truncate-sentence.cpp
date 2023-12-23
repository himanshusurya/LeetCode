class Solution {
public:
    string truncateSentence(string s, int k) 
    {

        for(int id = 0; id < s.length(); id++)
        {
            if(s[id] == ' ')
            {
                k--;
                if(k == 0)
                {
                    return s.substr(0,id);
                }
            }
        }
        return s;
    }
};