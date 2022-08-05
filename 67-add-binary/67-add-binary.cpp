class Solution {
public:
    string addBinary(string a, string b) 
    {
        string result;
        int op1, op2;
        int sum =0, carry=0;
        int i = a.size() , j = b.size();
        while(i>0 && j>0)
        {
            op1 = a[--i] -'0';
            op2 = b[--j] -'0';
            
            sum = (op1 + op2 + carry) % 2;
            carry = (op1 + op2 + carry) / 2;
            
            result.insert(result.begin(),sum+'0');   
            if(i==0 && j==0 && carry ==1)
            {
                result.insert(result.begin(),carry+'0');             
            }
        }
        //For remaining i & j
        while(i>0)
        {
           op1 = a[--i] -'0';      
           sum = (op1 + carry) % 2;
           carry = (op1 + carry) / 2;
           result.insert(result.begin(),sum+'0');   
           if(i==0 && carry ==1)
           {
               result.insert(result.begin(),carry+'0');             
           }
        }
        // For remaining j
       while(j>0)
        {
           op2 = b[--j]-'0';                  
           sum = (op2 + carry) % 2;
           carry = (op2 + carry) / 2;
           result.insert(result.begin(),sum+'0');   
           if(j==0 && carry ==1)
           {
               result.insert(result.begin(),carry+'0');             
           }
        }        
        return result;
    }
};