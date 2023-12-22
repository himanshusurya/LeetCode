class Solution {
public:
    vector<string> fizzBuzz(int n) 
    {
        vector<string> ans;
        for(auto num = 1; num <= n; num++)
        {
            string cal = "";
            if(num%3 == 0 && num%5 == 0)
                cal += "FizzBuzz";
            else if(num%3 == 0)
                cal += "Fizz";
            else if(num%5 == 0)
                cal += "Buzz";
            else
                cal = to_string(num);
            ans.push_back(cal);
        }
        return ans;
    }
};