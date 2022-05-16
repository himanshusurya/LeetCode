class Solution {
public:
    string longestPalindrome(string s) 
    {
        int n = s.size();
        int P[n][n];
        string res;
        int maxlen = 1;
        int strStart = 0;
     
        for(int i=0; i< n-1; i++)
        {
            P[i][i] = 1;
            if(s[i] == s[i+1])
            {
                P[i][i+1] = 1;
                strStart = i;
                maxlen = 2;
            }
            else
            {
                P[i][i+1] = 0;
            }
        }
        for( int l=3; l <= n; l++ )
        {
            for(int start = 0 ; start < n-l+1; start++)
            {
                int end  = start + l -1;
                if(s[start] == s[end])
                {
                    P[start][end] = P[start+1][end-1];
                    if(P[start][end] ==1 && l > maxlen)
                    {
                        strStart = start;
                        maxlen = l;                
                    }
                }
                else
                {
                    P[start][end] = 0;
                }
                
            }
        }
        res = s.substr(strStart, maxlen);   
        return res;        
    }
};