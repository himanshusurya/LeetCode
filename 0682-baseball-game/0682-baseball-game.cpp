class Solution {
public:
    int calPoints(vector<string>& operations)
    {
       stack<int> Stack;
       int fpoints = 0;
       for(auto str:operations) 
       {
           if(str == "+")
           {
               int opr1 = Stack.top();
               Stack.pop();
               int opr2 = Stack.top();
               Stack.push(opr1);
               Stack.push(opr1+opr2);
           }
           else if(str == "D")
           {
               int oprd = Stack.top();
               Stack.push(oprd*2);
           }
           else if(str == "C")
           {
               Stack.pop();
           }
           else
           {
               int num = stoi(str);
               Stack.push(num);
           }
       }
       while(!Stack.empty())
       {
           fpoints += Stack.top();
           Stack.pop();
       }
       return fpoints;        
    }
};