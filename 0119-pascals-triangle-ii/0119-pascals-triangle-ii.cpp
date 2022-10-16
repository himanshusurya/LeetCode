class Solution {
public:
    vector<int> getRow(int rowIndex) 
    {
         vector<int> arr;
         int back;
         if(rowIndex+1 >= 1)
             arr.push_back(1);
        if(rowIndex+1 >= 2)
             arr.push_back(1);
         if(rowIndex+1 > 2)
         {
            for(int i =3; i<=rowIndex+1; i++)
            {
                int j;
                back =1;
                for( j=1; j<i-1; j++)
                {
                    int temp = arr[j];
                    
                    arr[j] = back + temp;
                    back = temp;
                }
                 arr.push_back(1);
            }
         }
        return arr;
    }
};


