class Solution {
public:
    int maxDepth(string s) 
    {
        int ansMaxDepth = 0;
        stack<char> VPS;
        for(auto ch:s)
        {
            if(ch == '(')
            {
                VPS.push('(');
            }
            else if(ch == ')')
            {
                ansMaxDepth = max(ansMaxDepth,(int)VPS.size());
                VPS.pop();
            }
        }
        return ansMaxDepth;
    }
};