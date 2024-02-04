class Solution {
public:
    double average(vector<int>& salary) 
    {
        double sum = 0;
        long minSal = INT_MAX;
        long maxSal = INT_MIN; 
        for(auto sal:salary)
        {
            maxSal = maxSal>sal?maxSal:sal;
            minSal = minSal<sal?minSal:sal;
            sum +=sal;
        }
        sum -= (maxSal + minSal);
        return sum/(salary.size()-2); 
    }
};