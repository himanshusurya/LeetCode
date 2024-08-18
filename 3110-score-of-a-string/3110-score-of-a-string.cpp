class Solution {
public:
    int scoreOfString(string s) 
    {
        int score = 0 ;
        int prev = 0;
        for(int cur = 1; cur<s.length(); cur++)
        {
            score += abs(s[cur]-s[prev]);
            prev = cur;
        }
        return score;
    }
};