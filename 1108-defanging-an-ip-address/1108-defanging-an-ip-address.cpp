class Solution {
public:
    string defangIPaddr(string address) 
    {
        string result;
        for(auto ch:address)        
        {
            if(ch == '.')
            {
                result.push_back('[');
                result.push_back('.');
                result.push_back(']');
            }
            else
            {
                result.push_back(ch);
            }
        }
        return result;
    }
};