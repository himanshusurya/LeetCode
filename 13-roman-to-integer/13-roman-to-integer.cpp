class Solution {
public:
    int romanToInt(string s) 
    {
       map<char,int> lookUp = {{'I',1},{'V',5},{'X',10},{'L',50},{'C',100},{'D',500},{'M',1000}};
       int value = 0;
       char prev = '\0', cur = '\0';
        
        for(int i =0; i<s.size(); i++)
        {
            cur = s[i];
            if(((cur == 'V' || cur == 'X') && prev == 'I')||
               ((cur == 'L' || cur == 'C') && prev == 'X')||
               ((cur == 'D' || cur == 'M') && prev == 'C'))
            {
                value += lookUp[cur] -2*lookUp[prev];
            }
            else
            {
                value += lookUp[cur];
            }
            prev = cur;
        }
       return value;      
    }
};