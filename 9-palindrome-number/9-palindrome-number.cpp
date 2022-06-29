class Solution {
public:
    bool isPalindrome(int x) 
    {
        bool ret = true;
        int num = x;
        long rev = 0;
        
        
        if(num < 0)
        {
            ret  = false;
        }
        else
        {
            while( num >0 )
            {
               rev = (rev * 10) + (num%10);
               num = num / 10;
            }
        }
        
        if(x != rev)
        {
            ret = false;
        }
        return ret;            
    }
};