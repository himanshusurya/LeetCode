class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) 
    {
        unordered_map<char,char> MapP2W;
        unordered_map<char,char> MapW2P;
        vector<string> result;

        for(auto word:words)    
        {
            MapP2W.clear();
            MapW2P.clear();
            bool skip = false;
            for(int idx = 0; pattern.length() == word.length() && idx < pattern.length(); idx++)
            {
                if(MapP2W.find(pattern[idx]) == MapP2W.end())
                {
                    MapP2W[pattern[idx]] = word[idx];
                }
                else if(MapP2W.find(pattern[idx])->second != word[idx])
                {
                    skip = true;
                    break;
                }
                if(MapW2P.find(word[idx]) == MapW2P.end())
                {
                    MapW2P[word[idx]] = pattern[idx];
                }
                else if(MapW2P.find(word[idx])->second != pattern[idx])
                {
                    skip = true;
                    break;
                }
            }
            if(skip == false)
            {
                result.push_back(word);
            }
        }
        return result;
    }
};
