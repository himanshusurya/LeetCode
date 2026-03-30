class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) 
    {
        int n = arr.size();
        int gsf = arr[n -1];
        arr[n-1] = -1;
        for(int j = n-2; j>=0; j--)
        {
            int temp = arr[j];
            arr[j] = gsf;
            gsf = max(gsf,temp);
        }
        return arr;
    }
};
