class Solution {
public:
    int lengthOfLastWord(string s) 
    {
        int first = 0;
        int lastLen = 0;
        
        for(int i=0; i <= s.size(); i++)
        {
            if(s[i] == ' '|| s[i]=='\0')
            {
                if(first != i)
                    lastLen = i-first;
                first = i+1;
            }
        }
        return lastLen;
    }
};