class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<int,int> Map;
        int maxLen = 0;
        int left = 0, right = 0;        
        while(right<s.length()) 
        {
            auto ch = s[right];
            if(Map.find(ch) == Map.end())
            {
                Map[ch] = right;
            }
            else
            {
                left = max(left,Map.find(ch)->second + 1);
                Map.find(ch)->second = right;
            }
            maxLen = max(maxLen, right - left + 1);
            right++;
        }
        return maxLen;
    }
};