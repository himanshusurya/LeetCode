class Solution {
public:
    bool isIsomorphic(string s, string t) 
    {        
        //Need to map s[i] & t[i]
        vector<int> visited(s.size(),0);
        unordered_map<char,char> map;
        for(int i=0; i < s.size() ; i++)
        {
            if(visited[i]==0 && (map.find(s[i]) == map.end()) )
            {
                       
                       map[s[i]] = t[i];
                       for(int j = i; j < t.size() ; j++)
                        {
                           if(s[i] == s[j] || t[i] == t[j])
                            {
                               if(visited[j] == 0 && 
                                  (map.find(s[i])->second == t[j] && s[i] == s[j]))
                                    visited[j] = 1;
                               else
                                   return false;
                            }                    
                        }
            }
        }     
        return true;
    }
};
