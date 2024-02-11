class Solution {
public:
    string removeOuterParentheses(string s)
    {
        stack<char> stack;
        string res;
        int start = 0;
        for(int id = 0; id < s.length(); id++)
        {
            if(s[id] == '(')
            {
                stack.push(s[id]);
            }
            else
            {
                stack.pop();
                if(stack.empty())
                {
                    //Copy string 
                    if(start + 1 < id - 1)
                    {
                        res.append(s,start+1, id- (start+1));
                    }
                    start = id + 1;
                }
            }    
        }
    return res;
    }
};