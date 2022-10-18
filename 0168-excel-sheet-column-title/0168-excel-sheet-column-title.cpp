class Solution {
public:
    string convertToTitle(int columnNumber) 
    {
        string ans;
        vector<int> rem;
        int col = columnNumber;
        
        while(col >26)
        {
            int quo = col /26;
            if(col % 26 == 0)
                quo--;
            
            if(quo <= 26)
            {
                ans.push_back(quo-1+'A');
            }
            else
            {
                rem.push_back(quo);
            }
            col = quo;
        }
        for(int i = rem.size()-1; i >= 0; i--)
        {
            auto temp = rem[i]%26 == 0? 26:rem[i]%26;
            ans.push_back(temp-1+'A');
        }
        
        auto temp = columnNumber%26 == 0? 26:columnNumber%26;
        ans.push_back(temp-1+'A');
        
        return ans;
    }
};