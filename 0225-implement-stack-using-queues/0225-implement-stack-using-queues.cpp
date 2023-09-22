class MyStack {
public:
    MyStack() 
    {
    };
    queue<int> Q1;
    queue<int> Q2;
    void push(int x) 
    {
        if(Q2.empty() == false)        
        {
            Q2.push(x);
        }
        else
        {
            Q1.push(x);
        }
    }
    
    int pop() 
    {
        int top;
        if(Q1.empty() == false)
        {
            while(Q1.empty() == false)
            {
                auto temp = Q1.front();
                Q1.pop();
                if(Q1.empty() == true)
                {
                    top = temp;
                    break;
                }
                Q2.push(temp);
            }
        }
        else
        {
            while(Q2.empty() == false)
            {
                auto temp = Q2.front();
                Q2.pop();
                if(Q2.empty() == true)
                {
                    top = temp;
                    break;
                }
                Q1.push(temp);
            }
        }
        return top;
    }
    
    int top() 
    {
        int topStack ;
        if(Q1.empty() == false)
        {
            while(Q1.empty() == false)
            {
                auto temp = Q1.front();
                Q1.pop();
                if(Q1.empty() == true)
                    topStack = temp;
                Q2.push(temp);
            }
        }
        else
        {
            while(Q2.empty() == false)
            {
                auto temp = Q2.front();
                Q2.pop();
                if(Q2.empty() == true)
                    topStack = temp;
                Q1.push(temp);
            }
        }
        return topStack;
    }
    
    bool empty() 
    {
        bool emptyStack = false;
        if(Q1.empty() && Q2.empty())
            emptyStack = true;
        
        return emptyStack;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */