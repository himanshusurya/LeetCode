class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) 
    {
        int matchCount = 0;
        for(auto item:items)
        {
            if(ruleKey == "type" && ruleValue == item[0])
            {
                matchCount++;
            }
            else if(ruleKey == "color" && ruleValue == item[1])
            {
                matchCount++;
            }
            else if(ruleKey == "name" && ruleValue == item[2])
            {
                matchCount++;
            }
        }
        return matchCount;
    }
};