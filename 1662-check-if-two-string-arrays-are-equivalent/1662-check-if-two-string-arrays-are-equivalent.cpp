class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) 
    {
        bool stringEqual = false;
        string catWord1 = "";
        string catWord2 = "";
        for(auto str:word1)
        {
            catWord1+=str;
        }
        for(auto str:word2)
        {
            catWord2+=str;
        }
        if(catWord1 == catWord2)
        {
            stringEqual = true;
        }
        return stringEqual;
    }
};