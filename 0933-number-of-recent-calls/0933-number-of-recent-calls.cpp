class RecentCounter {
    queue<int> range;
public:
    RecentCounter() 
    {
        //Initializes the counter with zero recent requests.
       
    }
    
    int ping(int t) 
    {
        int low = t - 3000;
        
        while(!range.empty() && range.front() < low)
        {
            range.pop();
        }
        range.push(t);

        return range.size();
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */