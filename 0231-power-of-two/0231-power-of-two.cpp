class Solution {
public:
    bool isPowerOfTwo(int n) 
    {
        bool isCheck = false;
        while(n)
        {
            if(n&0x1)
            {
                n = n>>1;
                if(n == 0)
                {
                    isCheck = true;
                }
                break;
            }
            else
                n = n>>1;
        }
        return isCheck;
    }
};