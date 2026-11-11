class Solution {
public:
    vector<int> findAnagrams(string s, string p) 
    {
        vector<int> freq(26,0);
        vector<int> win(26,0);
        int k = p.length();
        vector<int> anagram;
        for(auto ch:p)
        {
            freq[ch-'a']++;
        }
        for(int st = 0, end = 0; end<s.length(); end++)
        {
            win[s[end]-'a']++;
            if(k == end-st+1)
            {
                if(win == freq)
                {
                    anagram.push_back(st);
                }
                win[s[st]-'a']--;
                st++;
            }
        }
        return anagram;
    }
};