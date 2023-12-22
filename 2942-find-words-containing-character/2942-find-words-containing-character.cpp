class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) 
    {
        vector<int> contains;
        for(int word = 0 ; word < words.size(); word++)
        {
            for(int id = 0; id < words[word].length(); id++)
            {
                if(words[word][id] == x)
                {
                    contains.push_back(word);
                    break;
                }
            }
        }
        return contains;
    }
};