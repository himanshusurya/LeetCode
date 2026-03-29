class Solution {
public:
    int compress(vector<char>& chars) 
    {
        int count = 0;
        int start = 0;
        int cur = chars[0];
        for(auto ch:chars)
        {
            if(cur != ch)
            {
                chars[start++] = cur;
                if(count > 1)
                {
                    string str = to_string(count);
                    int n = str.length();
                    int i = 0;
                    while(i < n)
                    {
                        chars[start++] = str[i++]; 
                    }
                }
                cur = ch;
                count = 1;
            }
            else
            {
                count++;
            }
            
        }
        chars[start++] = cur;
        if(count > 1)
        {
            string str = to_string(count);
            int n = str.length();
            int i = 0;
            while(i < n)
                chars[start++] = str[i++]; 
        }
        return start;
    }
};