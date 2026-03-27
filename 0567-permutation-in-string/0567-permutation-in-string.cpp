class Solution {
public:
    bool checkInclusion(string s1, string s2) 
    {
        bool check = false;
        vector<int> s1freq(26,0);
        vector<int> s2wind(26,0);
        int m = s1.length();
        int n = s2.length();
        
        if(m <= n)      
        {
            for(int i =0; i <m; i++)
            {
                s1freq[s1[i] - 'a']++;
            }
            for(int  start =0, end=0; end<n; end++)
            {       
                s2wind[s2[end] - 'a']++;
                if(end - start + 1> m) //window over check condition 
                {
                    s2wind[s2[start++] - 'a']--;
                }
                if(s1freq == s2wind)
                {
                    check = true;
                    break;
                }
            }
        }        
        return check;
    }
};