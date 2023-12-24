class Solution {
public:
    vector<string> cellsInRange(string s) 
    {
        vector<string> result;
        char col1 = s[0];
        int  row1 = s[1];
        char col2 = s[3];
        int  row2 = s[4];
        for(int cl = col1; cl <= col2; cl++)
        {
            for(int rw = row1; rw <= row2; rw++)
            {
                string curRC ="";
                curRC += cl ;
                curRC += rw ;
                result.push_back(curRC);
            }
        }
        return result;        
    }
};