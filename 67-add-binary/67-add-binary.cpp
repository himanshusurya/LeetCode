class Solution {
public:
    string addBinary(string a, string b) 
    {
        string result;
        char op1, op2;
        char sum ='0', carry='0';
        int i = a.size() , j = b.size();
        while(i>0 && j>0)
        {
            op1 = a[--i];
            op2 = b[--j];
            
            if( op1=='1' && op2=='1')
            {
                if(carry=='1')
                {
                    carry = '1';
                    sum = '1';
                }
                else
                {
                    carry = '1';
                    sum = '0';
                }
            }
            else if ((op1=='1' && op2=='0') || (op1=='0' && op2=='1'))
            {
                if(carry=='1')
                {
                    carry = '1';
                    sum = '0';
                }
                else
                {
                    carry = '0';
                    sum = '1';
                }
            }
            else
            {
                if(carry=='1')
                {
                    carry = '0';
                    sum = '1';
                }
                else
                {
                    carry = '0';
                    sum = '0';
                }
            }
            result.insert(result.begin(),sum);   
            if(i==0 && j==0 && carry =='1')
            {
                result.insert(result.begin(),carry);             
            }
        }
        //For remaining i & j
        
        while(i>0)
        {
           op1 = a[--i];                  
           if(carry=='1' && op1=='1') 
           {
               sum='0';
               result.insert(result.begin(),sum);             
               if(i==0 )
               {
                   result.insert(result.begin(),carry);             
               }
           }
           else
           {
                if((carry=='1' && op1=='0') || (carry=='0' && op1=='1'))
                {
                    sum='1';
                    carry = '0';
                    result.insert(result.begin(),sum);             
                }         
                else
                {
                    carry = '0';
                    result.insert(result.begin(),op1);             
                }
           }
        }
        // For remaining j
       while(j>0)
        {
           op2 = b[--j];                  
           if(carry=='1' && op2=='1') 
           {
               sum='0';
               carry = '1';
               result.insert(result.begin(),sum);             
               if(j==0)
               {
                   result.insert(result.begin(),carry);             
               }
           }
           else
           {
                if((carry=='1' && op2=='0') || (carry=='0' && op2=='1'))
                {
                    sum='1';
                    carry = '0';
                    result.insert(result.begin(),sum);             
                }         
                else
                {
                    carry = '0';
                    result.insert(result.begin(),op2);             
                }
           }
            
        }        
        return result;
    }
};