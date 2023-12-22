class Solution {
public:
    string interpret(string command) 
    {
        string goalParsed;
        for(int id = 0; id < command.length(); id++)
        {
            if(command[id] == 'G')
            {
                goalParsed.push_back('G');
            }
            else if(command[id] == '(' && command[id+1] == ')')
            {
                goalParsed.push_back('o');
                id++;
            }
            else
            {
                goalParsed.push_back('a');
                goalParsed.push_back('l');
                id += 3;
            }
        }
        return goalParsed;        
    }
};