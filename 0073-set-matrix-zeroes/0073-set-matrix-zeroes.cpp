class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) 
    {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<pair<int,int>> p; 
        for(int i = 0; i<m; i++)
        {
            for(int j=0; j<n; j++)
            {
                if(matrix[i][j] == 0)
                {
                    pair<int,int> temp(i,j);
                    p.push_back(temp);
                }
            }
        }
        for(int start=0; start<p.size(); start++)
        {
            int i = p[start].first;
            int j = p[start].second;
            for(int row = 0; row<m; row++)
                matrix[row][j] = 0;

            for(int col = 0; col<n; col++)
                matrix[i][col] =0;
        }
        
    }
};