class Solution {
public:
    int findNextNumber(int num)
    {
        auto temp = 0;
        while(num != 0)
        {
            auto digit = num % 10;
            temp += digit*digit;
            num /= 10;
        }
        return temp ;
    }
    bool isHappy(int n) 
    {
        //Using Flyod Cycle Finding algorithm
        int slowptr = findNextNumber(n);
        int fastptr = findNextNumber(slowptr);
        while(slowptr != 1 && slowptr != fastptr)
        {
            slowptr = findNextNumber(slowptr);
            fastptr = findNextNumber(findNextNumber(fastptr));
        }
        return (slowptr==1); 
    }
};