class Solution {
public:
    string convert(string s, int numRows) 
    {
        string res;
        vector<string> temp(numRows);
        int i = 1;
        bool down = true;
        if(numRows == 1 || numRows > s.size())
            return s;
        for(auto ch:s)
        {
            temp[i-1] += ch;
            if(down == true)
            {
                if(i == numRows)
                {
                    down = false;
                    i--;
                }
                else
                {
                    i++;                    
                }
            }
            else
            {
                if(i == 1)
                {
                    down = true;
                    i++;
                }
                else
                {
                    i--;
                }
            }
        }
        for(int row = 0; row<numRows; row++)
        {
            for(auto ch:temp[row])
                res += ch;
        }
        return res;
    }
};